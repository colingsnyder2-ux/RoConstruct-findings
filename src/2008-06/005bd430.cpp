// from server: 73% by king_originala
extern "C" int __stdcall applyVolume(void*, float);
extern "C" void __cdecl checkResult(int);

extern char volumeProperty;

struct Sound {
    char padding0[0x13c];
    void* handle;
    char padding1[0x20];
    float volume;

    void setVolume(float value);
    void notify(void* property);
};

void Sound::setVolume(float value)
{
    double clamped = value <= 0.0 ? 0.0 :
                     value >= 1.0 ? 1.0 : (double)value;

    if (clamped != volume) {
        volume = (float)clamped;
        if (handle)
            checkResult(applyVolume(handle, (float)clamped));
        notify(&volumeProperty);
    }
}
