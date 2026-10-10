// from server: 58% by colin
// roc 2007-08 00636a70  unit: CXTPEdit  size: 363 bytes

struct CXTPEdit {
    char pad[0x1d4];
    int f();
};

extern "C" {
    void __stdcall sub_670500();
    void __stdcall sub_738334();
    void __stdcall sub_62fef6();
    void __stdcall sub_6361f0();
    void __stdcall sub_77ddac();
    void __stdcall sub_77dd6c();
}

int CXTPEdit::f()
{
    sub_670500();
    *(int*)((char*)this + 0x00) = 0x7c558c;
    *(int*)((char*)this + 0x20) = 0x7c552c;
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_738334();
    *(int*)((char*)this + 0xf8) = 5;
    *(int*)((char*)this + 0x17c) = 0;
    *(int*)((char*)this + 0x180) = 0;
    *(int*)((char*)this + 0x15c) = 0x64;
    *(int*)((char*)this + 0x194) = 0;
    *(int*)((char*)this + 0x198) = 0;
    *(int*)((char*)this + 0x178) = 0;
    sub_77dd6c();
    *(int*)((char*)this + 0x184) = -1;
    *(int*)((char*)this + 0x1cc) = -1;
    *(int*)((char*)this + 0x190) = 0;
    *(int*)((char*)this + 0x18c) = 0;
    *(int*)((char*)this + 0x1a0) = 0;
    *(int*)((char*)this + 0x1a4) = 0;
    *(int*)((char*)this + 0x1ac) = 0;
    *(int*)((char*)this + 0x1b8) = 0xc;
    *(int*)((char*)this + 0x1d0) = 0;
    sub_62fef6();
    void* p = 0;
    sub_6361f0();
    *(int*)((char*)this + 0x16c) = (int)p;
    *(int*)((char*)this + 0x1a8) = 0;
    *(int*)((char*)this + 0x1c4) = 0;
    *(int*)((char*)this + 0x1b0) = 0;
    *(int*)((char*)this + 0x1b4) = 0;
    *(int*)((char*)this + 0x1c0) = 1;
    *(int*)((char*)this + 0x1c8) = 0;
    return (int)this;
}
