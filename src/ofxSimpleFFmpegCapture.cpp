#include "ofxSimpleFFmpegCapture.h"


FILE* sfc::openFFmpegPipe(float width, float height, float fps)
{

		std::stringstream ss;
		ss << "ffmpeg";
		ss << " -r " << std::to_string((int)fps) << " ";						// fps
		ss << " -f rawvideo";											// input format
		ss << " -pix_fmt rgba";											// input color 
		ss << " -s " << std::to_string((int)width) << "x" << std::to_string((int)height);	// dimensions
		ss << " -i -";													// input path
		ss << " -y";													// overwrite files
		ss << " -pix_fmt yuv420p";										// output format
		ss << " -crf 21";												// output quality
		ss << " movie.mp4";												// output path

		return _popen(ss.str().c_str(), "wb");
}

void sfc::closeFFmpegPipe(FILE*& file)
{
	if (file != nullptr)
	{
		_pclose(file);
		file = nullptr;
	}
}

void sfc::writeFFmpegFrame(ofFbo fbo, FILE* file, int numOfColorChannels, bool isRecording)
{
	if (file != nullptr && isRecording == true)
	{
		ofPixels pixels;
		fbo.getTexture().readToPixels(pixels);
		auto data = pixels.getData();
		fwrite(data, sizeof(unsigned char), pixels.getWidth() * pixels.getHeight() * numOfColorChannels, file);
	}
}
