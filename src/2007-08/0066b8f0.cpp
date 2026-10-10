// from server: 85% by colin
struct CXTPToolBar {
    void LoadState(int);
};

extern "C" int __stdcall sub_685780(int, const char*, int*, int);
extern "C" int __stdcall sub_66b710(int);

void CXTPToolBar::LoadState(int a) {
    sub_66b710(a);
    sub_685780(a, (const char*)0x7cae70, (int*)((char*)this + 0x188), 1);
    sub_685780(a, (const char*)0x7cae68, (int*)((char*)this + 0x18c), 0);
    if (*(unsigned int*)(a + 0x28) > 6) {
        sub_685780(a, (const char*)0x7cae5c, (int*)((char*)this + 0x130), 1);
    }
    if (*(unsigned int*)(a + 0x28) > 7) {
        sub_685780(a, (const char*)0x7cae48, (int*)((char*)this + 0x1a0), 1);
    }
    if (*(unsigned int*)(a + 0x28) > 0x10) {
        sub_685780(a, (const char*)0x7cae30, (int*)((char*)this + 0x154), 1);
        if (*(unsigned int*)(a + 0x28) > 0x10) {
            return;
        }
    }
    if (*(int*)(a + 0x24) != 0 && *(int*)((char*)this + 0xf4) == 0) {
        *(int*)((char*)this + 0x130) = 0;
    }
}
