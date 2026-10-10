// from server: 79% by colin
// roc 2007-08 007000c0  unit: CXTPTabPaintManager  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007000c0

extern "C" int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);
extern "C" void __cdecl __security_check_cookie(unsigned int);

struct CXTPTabPaintManager {
    void sub_6FFF80(int, void*);
    void Refresh();
};

void CXTPTabPaintManager::Refresh()
{
    if (*(int*)((char*)this + 0x12c) != 0) {
        char buf[0x3c];
        SystemParametersInfoA(0x1f, 0x3c, buf, 0);
        sub_6FFF80(1, buf);
    }
    {
        int* p = *(int**)((char*)this + 0xe4);
        (*(void(**)(void*))(*(int*)p + 4))((void*)p);
    }
    {
        int* p = *(int**)((char*)this + 0xe0);
        (*(void(**)(void*))(*(int*)p + 4))((void*)p);
    }
}
