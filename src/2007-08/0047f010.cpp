// from server: 37% by colin
// roc 2007-08 0047f010  unit: G3D::Win32Window  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047f010

extern "C" void __cdecl free(void*);
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall sub_4FF810(void*);
extern "C" void* __stdcall sub_500060(unsigned int, unsigned int);
extern "C" void __stdcall sub_47EF90(void*, void*);

struct Win32Window {
    void* field0;
    int field4;
    int field8;
    void method(int);
};

void Win32Window::method(int arg) {
    void* old = field0;
    int count = field8;
    unsigned int sz = (unsigned int)count * 56;
    void* mem = sub_500060(sz, 16);
    int n = arg;
    if (n >= count) n = count;
    field0 = mem;
    unsigned char* dst = (unsigned char*)mem;
    unsigned char* src = (unsigned char*)old;
    unsigned char* dstEnd = dst + (unsigned int)n * 56;
    while (dst < dstEnd) {
        if (dst) {
            sub_47EF90(dst, src);
        }
        dst += 56;
        src += 56;
    }
    unsigned char* oldEnd = (unsigned char*)old + (unsigned int)arg * 56;
    unsigned char* p = (unsigned char*)old;
    while (p < oldEnd) {
        sub_4FF810(*(void**)(p + 44));
        *(void**)(p + 44) = 0;
        *(void**)(p + 48) = 0;
        *(void**)(p + 52) = 0;
        sub_4FF810(*(void**)(p + 4));
        p += 56;
    }
    sub_4FF810(old);
}
