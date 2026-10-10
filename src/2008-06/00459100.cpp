// from server: 88% by atomic.potato
extern "C" void* __cdecl sub_6A0926();

struct ToggleFullscreenVerb
{
    unsigned char f();
};

unsigned char ToggleFullscreenVerb::f()
{
    void* p = sub_6A0926();
    p = *(void**)((char*)p + 4);
    p = *(void**)((char*)p + 0x20);
    return *(unsigned char*)((char*)p + 0xF8);
}
