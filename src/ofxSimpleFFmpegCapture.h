#pragma once

#include "ofMain.h"
#include <stdio.h>
#include <string>
namespace sfc
{
	/**
	 * @brief Open a pipe to ffmpeg
	 * @param width fbo width
	 * @param height fbo height
	 * @param fps Desired fps
	 * @return Handle to the pipe
	*/
	FILE* openFFmpegPipe(float width, float height, float fps);
	void closeFFmpegPipe(FILE*& file);
	/**
	 * @brief Write one frame to ffmpeg
	 * @param fbo Source fbo
	 * @param file Handle to pipe
	 * @param numOfColorChannels Color channels needs to match number channels set in openFFmpegPipe()
	 * @param isRecording Turn recording on and off
	*/
	void writeFFmpegFrame(ofFbo fbo, FILE* file, int numOfColorChannels, bool isRecording);
}