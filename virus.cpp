#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture cam(0); // ouvre la webcam

    if (!cam.isOpened()) {
        return -1; // webcam non trouvée
    }

    cv::Mat frame;
    cam >> frame; // capture une image

    cv::imwrite("capture.jpg", frame); // enregistre l’image

    cam.release(); // ferme la webcam
    return 0;
}
