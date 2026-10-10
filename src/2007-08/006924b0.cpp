// from server: 70% by colin
struct CXTPStatusBar {
    char pad[0x68];
    int field_68;
    int init();
};

extern "C" int __stdcall sub_73833A();
extern "C" void __stdcall sub_77DDAC();
extern "C" void __stdcall sub_77ED78(int, void*, int, int, int);

int CXTPStatusBar::init() {
    sub_73833A();
    *(int*)this = 0x7d092c;
    sub_77DDAC();
    sub_77DDAC();
    *(int*)((char*)this + 0x5c) = 0x794a08;
    *(int*)((char*)this + 0x60) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x28) = 0;
    *(int*)((char*)this + 0x2c) = 0;
    *(int*)((char*)this + 0x50) = 0;
    *(int*)((char*)this + 0x44) = 0;
    *(int*)((char*)this + 0x48) = 0;
    *(int*)((char*)this + 0x4c) = 0;
    *(int*)((char*)this + 0x54) = -1;
    *(int*)((char*)this + 0x58) = -1;
    *(int*)((char*)this + 0x34) = 1;
    *(int*)((char*)this + 0x38) = -1;
    *(int*)((char*)this + 0x3c) = -1;
    *(int*)((char*)this + 0x64) = -1;
    sub_77ED78(2, (char*)this + 0x68, 1, 2, 0);
    return (int)this;
}
