// from server: 56% by colin
struct SoundChannel {
    SoundChannel* construct(int);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);

extern char G_007ae9ec;

SoundChannel* SoundChannel::construct(int a)
{
    SoundChannel* result;
    *(void**)this = 0;
    void* p = func_0062fef6(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = &G_007ae9ec;
        *(int*)((char*)p + 0xc) = a;
        result = (SoundChannel*)p;
    } else {
        result = 0;
    }
    *(void**)this = result;
    return (SoundChannel*)this;
}
