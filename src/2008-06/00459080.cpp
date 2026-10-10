// from server: 72% by atomic.potato
extern "C" void* __cdecl GetToggleContext();

struct ToggleIDEModeVerb
{
    unsigned char f();
};

unsigned char ToggleIDEModeVerb::f()
{
    void* p = GetToggleContext();
    p = *(void**)((char*)p + 4);
    p = *(void**)((char*)p + 0x20);
    return *(unsigned char*)((char*)p + 0x104) == 0;
}
