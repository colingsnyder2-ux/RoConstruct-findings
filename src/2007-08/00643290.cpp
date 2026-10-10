// from server: 40% by colin
struct CXTPPaintManagerFont {
    void dtor();
};

extern "C" void __stdcall sub_69F160(void*);
extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __stdcall sub_41F680(void*);
extern "C" void __stdcall sub_63069A(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTPPaintManagerFont::dtor()
{
    *(void**)this = (void*)0x7c658c;
    void* p = *(void**)((char*)this + 0xd0);
    if (p) {
        sub_69F160((char*)p + 0x20);
        sub_62FC62(p);
    }
    sub_69F160((char*)this + 0x11c);
    sub_69F160((char*)this + 0x114);
    sub_77DDBC((char*)this + 0x104);
    *(void**)((char*)this + 0xf0) = (void*)0x794a08;
    sub_41F680((char*)this + 0xf0);
    *(void**)((char*)this + 0xe8) = (void*)0x794a08;
    sub_41F680((char*)this + 0xe8);
    *(void**)((char*)this + 0xe0) = (void*)0x794a08;
    sub_41F680((char*)this + 0xe0);
    *(void**)((char*)this + 0xd8) = (void*)0x794a08;
    sub_41F680((char*)this + 0xd8);
    *(void**)((char*)this + 0xb8) = (void*)0x794a08;
    sub_41F680((char*)this + 0xb8);
    *(void**)((char*)this + 0xac) = (void*)0x794a08;
    sub_41F680((char*)this + 0xac);
    *(void**)((char*)this + 0xa0) = (void*)0x794a08;
    sub_41F680((char*)this + 0xa0);
    *(void**)((char*)this + 0x94) = (void*)0x794a08;
    sub_41F680((char*)this + 0x94);
    sub_63069A(this);
}
