// from server: 42% by colin
// roc 2007-08 00713d80  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713d80

extern "C" {
    unsigned long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

struct CXTCaptionTheme {
    void RefreshMetrics();
};

struct CXTCaptionTheme_impl {
    char pad[0xd0];
    int m_bValid;
};

extern "C" int __stdcall sub_77dcd0(void*);
extern "C" int __stdcall sub_77dcc8(void*, unsigned int, void*);
extern "C" int __stdcall sub_77dd98(void*, void*);
extern "C" int __stdcall sub_77ecd8(unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" int __cdecl sub_63062e(int);
extern "C" int __cdecl sub_680550(void*, int, int);
extern "C" int __cdecl sub_6805d0(void*);

void CXTCaptionTheme::RefreshMetrics()
{
    CXTCaptionTheme_impl* self = (CXTCaptionTheme_impl*)this;
    int* pFlag = (int*)((char*)this + 0xd0);
    if (sub_77dcd0(pFlag))
        return;

    int vtable = *(int*)this;
    int (*getText)(void*, void*) = *(int (**)(void*, void*))(vtable + 0x160);
    char buf[16];
    getText(this, buf);

    unsigned int hwnd = *(unsigned int*)((char*)this + 0x20);
    unsigned int h = SendMessageA((void*)hwnd, 0x31, 0, 0);
    int str = sub_63062e(h);

    void* pStr = (void*)((char*)this + 0x40);
    sub_680550(pStr, str, 0);

    int* pObj = (int*)((char*)this + 0x40);
    int objVtable = *pObj;
    int font = *(int*)((char*)this + 0x78);
    int (*setFont)(void*, int) = *(int (**)(void*, int))(objVtable + 0x38);
    setFont(pObj, font);

    int objVtable2 = *pObj;
    void* tmp;
    sub_77dcc8(pFlag, 0x8825, &tmp);
    int res = sub_77dd98(pFlag, &tmp);
    int (*setText)(void*, int) = *(int (**)(void*, int))(objVtable2 + 0x70);
    setText(pObj, res);

    sub_6805d0(pStr);
}
