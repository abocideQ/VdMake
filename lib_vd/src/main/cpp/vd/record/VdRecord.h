#ifndef VDMAKE_VDRECORD_H
#define VDMAKE_VDRECORD_H

#include "MediaRecord.h"
#include "VdCameraRender.h"

class VdRecord {
public:

    void onConfig(char *urlOut, int width, int height, long vBitRate, int fps);

    void onBufferVideo(int format, int width, int height, uint8_t *data);

    void onBufferAudio(int size, uint8_t *data);

    void onStart();

    void onStop();

    static VdRecord *instance();

protected:
    MediaRecord *m_MediaRecord;

    VideoRender *m_Render;

    static void onFrameBufferCall(void *ctx, int format, int width, int height, uint8_t *data);

private:
    static VdRecord *m_Sample;
};


#endif //VDMAKE_VDRECORD_H
