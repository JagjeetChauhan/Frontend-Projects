from turtle import width
import cv2 as cv

# img = cv.imread('photo/cat.jpg')
# cv.imshow('cat',img)

def rescaleFrame(frame, scale=0.75):
    width = int(frame.shape[1] * scale)
    height = int(frame.shape[0] * scale)
    dimensions =(width,height)

    return cv.resize(frame, dimensions, interpolation=cv.INTER_AREA)

capture = cv.VideoCapture('videos/dogs.mp4')

while True:
    isTrue, frame = capture.read()
    frame_resized= rescaleFrame(frame, scale=.2)

    cv.imshow('video', frame)
    cv.imshow('video resized', frame_resized)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.distroyAllWindows()