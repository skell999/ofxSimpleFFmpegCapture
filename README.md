ofxSimpleFFmpegCapture
=====================================

Introduction
------------
ofxSimpleFFmpegCapture is a very bare bones frame capture solution for Openframeworks.

Real time video capture solutions for openframeworks will insert old frames in the video stream to ensure smooth real time capture. Making them very suitable for recording video from web cams.

ofxSimpleFFmpegCapture can save every frame of an animation. For use cases where every frame matters.

Usage
-----
You will need to edit the options passed to FFmpeg in ```openFFmpegPipe()```.
[FFmpeg Docs](https://ffmpeg.org/ffmpeg.html)

Alternatives
------------
[ofxFFmpegVideoRecorder](https://github.com/Furkanzmc/ofxFFmpegRecorder)

License
-------
State which license you offer your addon under. openFrameworks is distributed under the [MIT License](https://en.wikipedia.org/wiki/MIT_License), and you might consider using this for your repository. By default, `license.md` contains a copy of the MIT license to which you can add your name and the year.

Installation
------------
Clone or copy to your addons folder

Dependencies
------------
FFmpeg must be installed and available on your path

Compatibility
------------
Made with Openframworks 0.11.0

Version history
------------

### Version 0.1 (06/april/2022):


