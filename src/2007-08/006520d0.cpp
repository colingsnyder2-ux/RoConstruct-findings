// from server: 39% by colin
struct CXTPPrintingDialog {
    void dtor();
};

extern "C" void __cdecl sub_6301e4(void*);
extern "C" void __cdecl sub_65be20(void*);
extern "C" void __cdecl sub_7384ea(void*);
extern "C" void __cdecl sub_41f680(void*);
extern "C" void __cdecl sub_630502(void*);

void CXTPPrintingDialog::dtor()
{
    *(int*)this = 0x7c7a8c;

    if (*(void**)((char*)this + 0x2b4)) {
        sub_6301e4(*(void**)((char*)this + 0x2b4));
        *(void**)((char*)this + 0x2b4) = 0;
    }

    if (*(void**)((char*)this + 0x2ac)) {
        void** p = *(void***)((char*)this + 0x2ac);
        void (*fn)(void*, int) = (void (*)(void*, int))p[1];
        fn(p, 1);
        *(void**)((char*)this + 0x2ac) = 0;
    }

    sub_65be20((char*)this + 0x74);
    sub_7384ea((char*)this + 0x60);

    *(int*)((char*)this + 0x58) = 0x788300;
    sub_41f680((char*)this + 0x58);

    sub_630502(this);
}
