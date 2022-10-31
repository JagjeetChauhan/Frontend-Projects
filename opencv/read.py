import cv2 as cv

# Reading a photo
#img = cv.imread('photo/cat.jpg')

#cv.imshow('cat', img)

# Reading a Video
capture = cv.VideoCapture('videos/dogs.mp4')

while True:
    isTrue, Frame = capture.read()
    cv.imshow('video', Frame)

    if cv.waitKey(20) & 0xFF==ord('d'):
        break

capture.release()
cv.distroyAllWindows()
