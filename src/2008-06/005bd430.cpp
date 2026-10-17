// from server: 77% by colin
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
    float clamped;
    if (value <= 0.0f)
        clamped = 0.0f;
    else if (value >= 1.0f)
        clamped = 1.0f;
    else
        clamped = value;

    if (clamped != volume) {
        volume = clamped;
        if (handle)
            checkResult(applyVolume(handle, clamped));
        notify(&volumeProperty);
    }
}
