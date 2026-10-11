// from server: 38% by atomic.potato
struct Win32Window {
    char pad0[0xa4];
    unsigned int hdc;

    int setGammaRamp(void* ramp);
};

extern "C" int __stdcall SetDeviceGammaRamp(unsigned int hdc, void* ramp);
extern "C" void __stdcall exit(int code);

extern void* g_98b6f4;
extern void* g_98b6e4;
extern void* g_98b860;
extern void* g_98b174;
extern void* g_b27170;
extern unsigned char g_b7d8a1;

void __stdcall sub_5f9750();
void __stdcall sub_5f97c0();
void* __stdcall sub_5ebeb0();
void __stdcall sub_5ebff0(void* self, void* str);

struct String {
    char pad[0x1c];
    String(const char*);
    ~String();
};

int Win32Window::setGammaRamp(void* ramp) {
    unsigned short* p = (unsigned short*)ramp;
    unsigned short buf[256];
    unsigned short buf2[256];
    unsigned short buf3[256];
    int i;
    void* shader;

    if (!g_b7d8a1 && *(int*)((char*)ramp + 4) < 0x100) {
        sub_5f9750();
        if (g_b27170) {
            String tmp("Gamma ramp must have at least 256 entries");
            if (!((int (__stdcall*)(void*, void*, int, const char*, void*, const char*))g_b27170)(
                    &tmp, &g_b7d8a1, 0x304, ".\\glg3dcpp\\Win32Window.cpp", 0, "gammaRamp.size() >= 256")) {
                exit(-1);
            }
        }
        sub_5f97c0();
    }

    shader = sub_5ebeb0();
    for (i = 0; i < 0x100; i++) {
        unsigned short v = p[i];
        buf[i] = v;
        buf2[i] = v;
        buf3[i] = v;
    }

    if (SetDeviceGammaRamp(hdc, buf3) == 0 && shader != 0) {
        String msg("Error setting gamma ramp! (Possibly LCD monitor)");
        sub_5ebff0(shader, &msg);
    }
    return 0;
}
