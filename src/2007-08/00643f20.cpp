// from server: 58% by colin
struct CXTPCommandBar {
    char pad[0x180];
    void ctor();
};

void CXTPCommandBar::ctor()
{
    char* p = (char*)this;
    *(void**)(p + 0x00) = (void*)0x7c678c;
    *(void**)(p + 0x54) = (void*)0x7c677c;
    *(void**)(p + 0x5c) = (void*)0x7c671c;
    *(int*)(p + 0x100) = 0;
    *(int*)(p + 0xe4) = 0;
    *(int*)(p + 0xf4) = 1;
    *(int*)(p + 0x170) = 0;
    *(int*)(p + 0x17c) = -1;
    *(int*)(p + 0xc8) = -1;
    *(int*)(p + 0xcc) = -1;
    *(int*)(p + 0x108) = 0;
    *(int*)(p + 0x110) = 0;
    *(int*)(p + 0xfc) = 7;
    *(int*)(p + 0xdc) = 0;
    *(int*)(p + 0xd0) = 0;
    *(int*)(p + 0xe8) = 0;
    *(int*)(p + 0xd8) = 1;
    *(int*)(p + 0x104) = 0;
    *(int*)(p + 0xc0) = 1;
    *(int*)(p + 0xd4) = 0;
    *(int*)(p + 0xe0) = 0;
    *(int*)(p + 0x10c) = 0;
    *(int*)(p + 0x114) = 0;
    *(int*)(p + 0xc4) = 0x7fff;
    *(int*)(p + 0xec) = 0x400000;
    *(int*)(p + 0x134) = 1;
    *(int*)(p + 0xb8) = 0;
    *(int*)(p + 0x14c) = 0;
    *(int*)(p + 0x150) = 0;
    *(int*)(p + 0x160) = 1;
    *(int*)(p + 0x154) = 1;
    *(int*)(p + 0x118) = 2;
    *(int*)(p + 0x11c) = 0;
    *(int*)(p + 0x120) = 0;
    *(int*)(p + 0x124) = 0;
    *(int*)(p + 0x128) = 0;
    *(int*)(p + 0x164) = 0;
    *(int*)(p + 0x168) = 0;
    *(int*)(p + 0x12c) = 0;
    *(int*)(p + 0x15c) = 0;
    *(int*)(p + 0x174) = 0;
    *(int*)(p + 0xbc) = 0;
    *(int*)(p + 0x16c) = 0;
    *(int*)(p + 0x158) = 0;
    *(int*)(p + 0x148) = 0;
    *(int*)(p + 0x178) = 0;
}
