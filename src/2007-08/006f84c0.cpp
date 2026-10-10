// from server: 21% by colin
struct CXTPPropertyGridInplaceEdit
{
    void func_006f84c0();
};

extern "C" int __stdcall GetKeyState(int);
extern "C" int __stdcall OpenClipboard(void*);
extern "C" int __stdcall CloseClipboard();
extern "C" void* __stdcall GetClipboardData(unsigned int);
extern "C" void* __stdcall GlobalLock(void*);
extern "C" int __stdcall GlobalUnlock(void*);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

void sub_00630250(void*);
void sub_006f6400();
void sub_006f6f50(int);
void sub_006f7540(void*, int);
void sub_006f8150(void*);
int sub_00738412();

void CXTPPropertyGridInplaceEdit::func_006f84c0()
{
    if (*(int*)((char*)this + 0x5c) != 0 &&
        *(int*)((char*)this + 0x20) != 0 &&
        (sub_00738412() & 0x800) == 0 &&
        GetKeyState(0x70) != 0)
    {
        goto do_default;
    }

    {
        int* vt = *(int**)this;
        void (__stdcall *fn)(void*, int, int, int) = (void (__stdcall *)(void*, int, int, int))vt[0x118 / 4];
        fn(this, 0x302, 0, 0);
        return;
    }

do_default:
    if (*(int*)((char*)this + 0x20) != 0)
    {
        int* p54 = (int*)((char*)this + 0x54);
        int* p58 = (int*)((char*)this + 0x58);
        SendMessageA(*(void**)((char*)this + 0x20), 0xb0, (unsigned int)p54, (long)p58);
        sub_00630250((char*)this + 0x80);
        sub_006f6400();
        sub_006f7540(p54, 1);
        sub_006f7540(p58, 1);
        if (*p58 < *p54)
            *p58 = *p54;
    }

    if (OpenClipboard(*(void**)((char*)this + 0x20)) == 0)
        return;

    {
        void* h = GetClipboardData(1);
        if (h != 0)
        {
            void* p = GlobalLock(h);
            sub_006f8150(p);
            GlobalUnlock(h);
            sub_006f6f50(1);
        }
    }
    CloseClipboard();
}
