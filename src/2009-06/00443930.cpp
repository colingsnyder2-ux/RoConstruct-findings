// from server: 57% by atomic.potato
// roc 2009-06 00443930  size: 189 bytes

extern "C" {
    int __stdcall sub_442F90();
    int __stdcall sub_5D1C30();
    int __stdcall sub_705510();
    int __stdcall sub_719A4A();
}

struct String {
    char pad[0x1c];
    String(const char*);
    ~String();
};

struct RenderSettings {
    char pad0[0x14];
    void* vt14;
    void* vt18;
    char pad1[4];
    void* vt20;
    char pad2[0x2c];
    String name;
    int init();
};

extern void* g_89e4b4;
extern void* g_89e4c4;
extern int g_a3a0a8;

int RenderSettings::init()
{
    sub_442F90();
    *(void**)this = (void*)0x8b64c4;
    *(void**)((char*)this + 0x14) = (void*)0x8b64b4;
    *(void**)((char*)this + 0x18) = (void*)0x8b64ac;
    *(void**)((char*)this + 0x20) = (void*)0x8b64a4;
    String s("RenderSettings");
    sub_5D1C30();
    s.~String();
    if (g_a3a0a8 != 0) {
        String s2("Rendering");
        String s3("singleton %s already exists");
        sub_705510();
        sub_719A4A();
    }
    g_a3a0a8 = (int)this;
    return (int)this;
}
