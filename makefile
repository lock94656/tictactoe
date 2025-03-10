all: main display game
	g++ lib/main.o lib/display.o lib/game.o -o bin/main.exe -L/usr/lib/x86_64-linux-gnu -lopencv_stitching -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_dnn_objdetect -lopencv_dnn_superres -lopencv_dpm -lopencv_highgui -lopencv_face -lopencv_freetype -lopencv_fuzzy -lopencv_hdf -lopencv_hfs -lopencv_img_hash -lopencv_line_descriptor -lopencv_quality -lopencv_reg -lopencv_rgbd -lopencv_saliency -lopencv_shape -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_superres -lopencv_optflow -lopencv_surface_matching -lopencv_tracking -lopencv_datasets -lopencv_text -lopencv_dnn -lopencv_plot -lopencv_ml -lopencv_videostab -lopencv_videoio -lopencv_viz -lopencv_ximgproc -lopencv_video -lopencv_xobjdetect -lopencv_objdetect -lopencv_calib3d -lopencv_imgcodecs -lopencv_features2d -lopencv_flann -lopencv_xphoto -lopencv_photo -lopencv_imgproc -lopencv_core
	
main: src/main.cpp 
	g++ -c src/main.cpp -Iinclude -o lib/main.o -I/usr/include/opencv4/opencv -I/usr/include/opencv4

	
display: src/display.cpp
	g++ -c  src/display.cpp -Iinclude -o lib/display.o -I/usr/include/opencv4/opencv -I/usr/include/opencv4

	
game: src/game.cpp
	g++ -c  src/game.cpp -Iinclude -o lib/game.o -I/usr/include/opencv4/opencv -I/usr/include/opencv4


clean:
	rm lib/*.o
	rm bin/*.exe