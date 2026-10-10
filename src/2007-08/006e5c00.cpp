// from server: 32% by colin
struct CColorSetVisualStudio2005 {
    void dtor();
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_69f160(void*);
extern "C" void __stdcall sub_41f680(void*);
extern "C" void __stdcall sub_63069a(void*);
extern "C" void __stdcall sub_77ddbc(void*);

void CColorSetVisualStudio2005::dtor() {
    *(int*)this = 0x7da3c4;
    sub_6301e4(*(void**)((char*)this + 0x9c));
    sub_6301e4(*(void**)((char*)this + 0xa0));
    sub_69f160((char*)this + 0x1d4);
    sub_69f160((char*)this + 0x1cc);
    sub_69f160((char*)this + 0x1c4);
    sub_69f160((char*)this + 0x1bc);
    sub_77ddbc((char*)this + 0x1a4);
    *(int*)((char*)this + 0x8c) = 0x794a08;
    sub_41f680((char*)this + 0x8c);
    *(int*)((char*)this + 0x84) = 0x794a08;
    sub_41f680((char*)this + 0x84);
    sub_63069a(this);
}
