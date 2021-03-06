#ifndef VDMAKE_VDCAMERARENDER_H
#define VDMAKE_VDCAMERARENDER_H

#include "VideoRender.h"

class VdCameraRender {
public:
    //face opencv
    void onFace(char *s1, char *s2, char *s3, char *s4, char *s5, int faceI);

    //normal
    void onBuffer(int format, int w, int h, uint8_t *data);

    uint8_t *onBuffer();

    int onBufferSize();

    void onRotate(float rot, bool modelRot);

    void onSurfaceCreated();

    void onSurfaceChanged(int w, int h);

    void onDrawFrame();

    void onRelease();

    static VdCameraRender *instance();

    static VideoRender *render();

private:
    static VdCameraRender *m_Sample;
    static VideoRender *m_Render;
};


#endif //VDMAKE_VDCAMERARENDER_H
