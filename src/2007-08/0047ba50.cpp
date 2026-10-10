// from server: 50% by colin
// roc 2007-08 0047ba50  unit: G3D::Win32Window  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ba50

extern "C" void* __cdecl memset(void* dst, int val, unsigned int size);
extern "C" void __cdecl __security_check_cookie(unsigned int cookie);

struct Settings {
    char pad[0x9c];
};

struct Win32Window {
    bool getSettings(Settings& s) const;
};

bool Win32Window::getSettings(Settings& s) const {
    char buf[0x9c];
    unsigned int cookie = *(unsigned int*)0x8b5188;
    unsigned int mode;
    if (this != 0)
        mode = (unsigned int)(size_t)this;
    else
        mode = 0x55;
    memset(buf, 0, 0x9c);
    unsigned int* p = (unsigned int*)buf;
    p[0] = mode;
    p[1] = 0x20;
    p[2] = 0x10;
    *(unsigned short*)(buf + 0x30) = 0x9c;
    *(unsigned int*)(buf + 0x34) = 0x5c0000;
    int (__stdcall *fn)(unsigned int, void*, unsigned int) = *(int (__stdcall **)(unsigned int, void*, unsigned int))0x77ed44;
    int r = -1;
    int i;
    for (i = 0; i < 3; i++) {
        r = fn(4, buf + 0x10, 0);
        if (r == 0) break;
    }
    if (r != 0) {
        *(unsigned int*)(buf + 0x34) = 0x1c0000;
        for (i = 0; i < 3; i++) {
            r = fn(4, buf + 0x10, 0);
            if (r == 0) break;
        }
    }
    __security_check_cookie(cookie);
    return r == 0;
}
