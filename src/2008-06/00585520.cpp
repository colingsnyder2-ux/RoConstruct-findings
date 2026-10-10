// from server: 47% by tester




struct VPlayer {
    void* construct(void* arg1, void* arg2);
};

extern "C" void __cdecl sub_583730();
extern "C" void* __cdecl sub_585100();

void* VPlayer::construct(void* arg1, void* arg2)
{
    if (arg1 != 0) {
        *(int*)((char*)this + 0x134) = 0x830fac;
    }
    sub_583730();
    sub_585100();
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this) = 0x830f44;
    *(int*)((char*)this + 0x10) = 0x830f38;
    *(int*)((char*)this + 0x14) = 0x830f30;
    *(int*)((char*)this + 0x20) = 0x830f28;
    *(int*)((char*)this + 0x24) = 0x830f18;
    *(int*)((char*)this + 0x44) = 0x830f08;
    *(int*)((char*)this + 0x64) = 0x830ef8;
    *(int*)((char*)this + 0x84) = 0x830ee8;
    *(int*)((char*)this + 0xa4) = 0x830ed8;
    *(int*)((char*)this + 0xc4) = 0x830ec8;
    *(int*)((char*)this + 0x130) = 0x830ebc;
    int* p = *(int**)((char*)this + 0x134);
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 0x134) = 0x830eb0;
    int* r = *(int**)((char*)this + 0x134);
    int* s = *(int**)((char*)r + 8);
    *(int*)((char*)s + (int)this + 0x134) = 0x830ea8;

    return this;
}
