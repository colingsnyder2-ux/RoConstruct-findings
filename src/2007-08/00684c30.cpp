// from server: 95% by colin
// roc 2007-08 00684c30  unit: CXTPPropertyGrid  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684c30

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPPropertyGrid {
    void* sub_682a20();
    void* sub_682aa0();
    void sub_684b60(void*);
    void sub_684970();
    void f(void*);
};

void CXTPPropertyGrid::f(void* p) {
    void* r = sub_682a20();
    *(int*)((char*)r + 0x148) = 1;
    r = sub_682a20();
    SendMessageA(*(void**)((char*)r + 0x20), 0xb, 0, 0);
    *(int*)((char*)p + 0x3c) = 0;
    *(int*)((char*)p + 0x40) = 0;
    r = sub_682aa0();
    sub_684b60(r);
    r = sub_682a20();
    *(int*)((char*)p + 0x44) = *(int*)((char*)r + 0xdc);
    sub_684970();
}
