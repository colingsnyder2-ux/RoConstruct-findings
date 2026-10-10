// from server: 49% by colin
struct CXTPCommandBarsOptions
{
    void Construct();
};

extern "C" void __cdecl sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_77DDAC();
extern "C" void __cdecl sub_632330();
extern "C" void __cdecl sub_632D40();
extern "C" void __cdecl sub_738334();

void CXTPCommandBarsOptions::Construct()
{
    *(void**)this = (void*)0x7C51C4;
    *(int*)((char*)this + 0x64) = 0;
    sub_632330();
    sub_77DDAC();
    sub_632D40();
    *(int*)((char*)this + 0xA0) = 0;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9C) = 0;
    *(int*)((char*)this + 0x58) = 0;
    *(int*)((char*)this + 0x5C) = 0;
    *(int*)((char*)this + 0x6C) = 0;
    *(int*)((char*)this + 0x60) = 0;
    sub_62FEF6(0x44);
    *(int*)((char*)this + 0x4C) = 0;
    *(int*)((char*)this + 0x50) = 0;
    *(int*)((char*)this + 0x54) = 0;
    *(int*)((char*)this + 0xA8) = 0;
    *(int*)((char*)this + 0xAC) = 0;
    sub_62FEF6(0xD0);
    *(int*)((char*)this + 0x74) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    sub_738334();
    *(int*)((char*)this + 0xC0) = 0;
    *(int*)((char*)this + 0xC8) = 0;
    sub_62FEF6(0xA4);
    *(int*)((char*)this + 0xA4) = 0;
    *(int*)((char*)this + 0xC4) = 0;
    *(int*)((char*)this + 0xB0) = 1;
    sub_62FEF6(0x3C);
    *(int*)((char*)this + 0xB4) = 0;
    *(int*)((char*)this + 0xB8) = 0;
    *(int*)((char*)this + 0x28) = 0;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 0x44) = 0;
    *(int*)((char*)this + 0x48) = 0;
    sub_62FEF6(0x38);
    *(int*)((char*)this + 0xBC) = 0;
    *(int*)((char*)this + 0x68) = 0;
    sub_62FEF6(0x38);
    *(int*)((char*)this + 0x78) = 0;
}
