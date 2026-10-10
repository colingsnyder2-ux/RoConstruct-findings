// from server: 66% by atomic.potato
struct WatchCameraCommand
{
    unsigned char IsActive();
};

unsigned char WatchCameraCommand::IsActive()
{
    struct Camera
    {
        int value[162];
    };

    Camera* camera = *(Camera**)((char*)this + 0x0c);
    typedef Camera* (__thiscall *Fn)(Camera*);
    return *(int*)((char*)(((Fn)(*(void**)((char*)camera + 0x288 + 4)))(camera)) + 0x1d4) == 2;
}
