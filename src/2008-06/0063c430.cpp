// from server: 68% by colin
struct DebrisService {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[0x8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;
    char padC8[0x68];
    void* vt130;
    void* vt134;
    char pad138[0x68];
    void* vt1a0;
    char pad1a4[0x1c];
    void* vt1c0;
    char pad1c4[0x8];
    void* vt1cc;
    void init();
};

extern "C" void __stdcall sub_59b970();

void DebrisService::init()
{
    void* p = vt134;
    *(void**)this = (void*)0x849c8c;
    vt10 = (void*)0x849c7c;
    vt14 = (void*)0x849c74;
    vt20 = (void*)0x849c6c;
    vt24 = (void*)0x849c5c;
    vt44 = (void*)0x849c4c;
    vt64 = (void*)0x849c3c;
    vt84 = (void*)0x849c2c;
    vta4 = (void*)0x849c1c;
    vtc4 = (void*)0x849c0c;
    vt130 = (void*)0x849c00;
    vt1a0 = (void*)0x849bf0;
    vt1c0 = (void*)0x849be4;
    vt1cc = (void*)0x849bcc;

    *(void**)((char*)p + 4) = (void*)0x849bc0;
    *(void**)((char*)p + 8) = (void*)0x849bb8;
    *(void**)((char*)p + 12) = (void*)0x849b9c;

    *(void**)((char*)p + 4 + 0x130) = (char*)p + 4 - 0x2b8;
    *(void**)((char*)p + 8 + 0x130) = (char*)p + 8 - 0x2c0;
    *(void**)((char*)p + 12 + 0x130) = (char*)p + 12 - 0x2c8;

    sub_59b970();
}
