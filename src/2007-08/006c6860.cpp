// from server: 54% by colin
struct CXTPCustomizeSheet_CCustomizeEdit
{
    void Construct();
};

extern "C" void __stdcall sub_0063C810();
extern "C" void __stdcall sub_00738334();
extern "C" void __stdcall sub_0077DDAC();
extern "C" void __stdcall sub_0077DD6C();

void CXTPCustomizeSheet_CCustomizeEdit::Construct()
{
    sub_0063C810();
    *(int*)((char*)this + 0x180) = 0;
    *(int*)((char*)this + 0x188) = 0;
    *(int*)((char*)this + 0x18c) = 0;
    sub_0077DDAC();
    sub_0077DDAC();
    sub_0077DDAC();
    sub_00738334();
    *(int*)((char*)this + 0xf8) = 6;
    *(int*)((char*)this + 0x15c) = 0x64;
    *(int*)((char*)this + 0x174) = 0;
    *(int*)((char*)this + 0x16c) = 0;
    sub_0077DD6C();
    *(int*)((char*)this + 0x168) = 0;
    *(int*)((char*)this + 0x170) = 0;
    *(int*)((char*)this + 0x178) = 0;
    *(int*)((char*)this + 0x17c) = 0;
    *(int*)((char*)this + 0x184) = 0;
    *(int*)((char*)this + 0x194) = 0;
    *(int*)((char*)this + 0x198) = 0;
    *(int*)((char*)this + 0x190) = 1;
    *(int*)((char*)this + 0x19c) = 0;
    *(int*)((char*)this + 0x1a0) = 0;
}
