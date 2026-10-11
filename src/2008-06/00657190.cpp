// from server: 23% by tester
struct ImageKeyButton {
    void* construct(void* a, void* b, void* c, void* d);
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall free_string(void*);

void* ImageKeyButton::construct(void* a, void* b, void* c, void* d)
{
    void* p = malloc(0x190);
    if (p) {
        void* r = ((void* (__thiscall*)(void*, void*, void*, void*, void*))0x6570a0)(p, a, b, c, d);
        p = r;
    } else {
        p = 0;
    }
    ((void (__thiscall*)(void*, void*, void*))0x656eb0)(this, p, 0);
    free_string((char*)this + 40);
    return this;
}
