// from server: 50% by colin
struct CXTPPropertyGridInplaceEdit {
    void* vtable;
    char pad[0x1c];
    void* hwnd;
    char pad2[0x34];
    int field_54;
    int field_58;
    int field_5c;
    char pad3[0x4];
    int field_64;
    int field_68;
    char pad4[0x8];
    int field_74;
    int field_78;
    int field_7c;
    int method();
};

extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" int __stdcall GetKeyState(int);
extern "C" int __stdcall GetFocus();
extern "C" int __stdcall GetActiveWindow();

int sub_630250(CXTPPropertyGridInplaceEdit*, int*);
int sub_630016(CXTPPropertyGridInplaceEdit*, int);

int CXTPPropertyGridInplaceEdit::method()
{
    if (this->field_5c != 0 && this->hwnd != 0)
    {
        int state = GetKeyState(0);
        if ((state & 0x800) == 0)
        {
            if (GetFocus() == (int)this->hwnd)
            {
                goto do_default;
            }
        }
    }
    else
    {
        goto do_default;
    }

    {
        int hwnd = (int)this->hwnd;
        if (hwnd != 0)
        {
            SendMessageA((void*)hwnd, 0xb0, (unsigned int)&this->field_54, (int)&this->field_58);
        }
    }

    if (this->field_64 != 0)
    {
        GetActiveWindow();
    }
    else
    {
        sub_630250(this, &this->field_7c);
        GetActiveWindow();
    }

    sub_630016(this, GetActiveWindow());

    this->field_68 = 1;
    this->field_58 = this->field_54;
    this->field_64 = (this->field_64 == 0) ? 1 : 0;

    SendMessageA(this->hwnd, 0xb1, (unsigned int)this->field_54, (int)this->field_54);
    SendMessageA(this->hwnd, 0xb7, 0, 0);

    return 1;

do_default:
    {
        void** vt = (void**)this->vtable;
        int (*fn)(void*, int, int, int) = (int (*)(void*, int, int, int))vt[0x118 / 4];
        fn(this, 0, 0, 0xc7);
    }
    return 0;
}
