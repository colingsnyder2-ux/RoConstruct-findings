// from server: 48% by colin
// roc 2007-08 00714da0  unit: CXTCaptionButton  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714da0

struct CXTCaptionButton {
    void construct(int* p);
};

extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_692160();
extern "C" void __stdcall sub_714930();

void CXTCaptionButton::construct(int* p)
{
    sub_6305DA();
    *(int*)this = 0x7c7944;
    if (p == 0)
        sub_714930();
    sub_692160();
    *(int*)this = 0x7deccc;
    *(int*)((char*)this + 0x54) = 0x7decb8;
    *(int*)((char*)this + 0x6c) = 4;
    *(int*)((char*)this + 0x70) = 8;
    *(char*)((char*)this + 0x74) = 1;
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0x11;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x8c) = 0;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;
    *(int*)((char*)this + 0xa8) = 0;
    *(int*)((char*)this + 0xa4) = 0;
    *(int*)((char*)this + 0xa0) = 0;
}
