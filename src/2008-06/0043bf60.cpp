// from server: 17% by colin
// roc 2008-06 0043bf60  size: 180 bytes
// Reconstructed: std::string array copy with SEH frame

struct S {
    void* __cdecl f(void* dst, const void* first, const void* last);
};

extern "C" {
    void __stdcall sub_80245c(void* dst, const void* src);
    void __stdcall sub_802468(void* p);
}

void* S::f(void* dst, const void* first, const void* last) {
    char* d = (char*)dst;
    const char* p = (const char*)first;
    const char* e = (const char*)last;
    while (p != e) {
        sub_80245c(d, p);
        p += 8;
        d += 8;
    }
    return dst;
}
