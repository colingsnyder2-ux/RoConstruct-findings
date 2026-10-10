// from server: 22% by colin
struct CXTPPropertyGridInplaceEdit {
    char pad0[0x20];
    void* field20;
    char pad24[0x30];
    int field54;
    int field58;
    void* field5c;
    char pad60[0x10];
    char field70[0x10];
    char pad80[0x100];
    int method();
};

extern "C" int __stdcall GetKeyState(int);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

int CXTPPropertyGridInplaceEdit::method()
{
    if (field5c != 0 && field20 != 0)
    {
        int r = ((int (__stdcall*)())0x738412)();
        if ((r & 0x800) == 0)
        {
            if (((int (__stdcall*)(void*))0x77dcd0)(field70) == 0)
            {
                if (field20 != 0)
                {
                    int* p54 = &field54;
                    int* p58 = &field58;
                    ((void (__stdcall*)(void*, unsigned int, int*, int*))0x77ecd8)(field20, 0xb0, p54, p58);
                    ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*, void*))0x630250)(this, field70 + 0x10);
                    ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*))0x6f6400)(this);
                    ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*, int*, int))0x6f7540)(this, p54, 1);
                    ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*, int*, int))0x6f7540)(this, p58, 1);
                    if (*p58 < *p54)
                        *p58 = *p54;
                }
                ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*))0x6f7b60)(this);
                ((void (__thiscall*)(CXTPPropertyGridInplaceEdit*, int))0x6f6f50)(this, 1);
                return 1;
            }
        }
    }
    void** vt = *(void***)this;
    void (__thiscall* fn)(CXTPPropertyGridInplaceEdit*, int, int, int) = (void (__thiscall*)(CXTPPropertyGridInplaceEdit*, int, int, int))vt[0x118/4];
    fn(this, 0x303, 0, 0);
    return 0;
}
