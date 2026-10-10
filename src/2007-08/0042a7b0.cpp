// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CLuaHtmlView {
    void sub_42A7B0();
};

void CLuaHtmlView::sub_42A7B0()
{
    char *p = (char *)this;
    void *unk = *(void **)(p + 4);
    *(int *)(p + 0x14) = 0;
    // call 0x7285a0 with ecx = this + 0xc
    // (declared as a helper taking the address)
    extern void __stdcall helper_7285a0(void *);
    helper_7285a0(p + 0xc);

    if (unk != 0) {
        if (_InterlockedExchangeAdd((volatile long *)((char *)unk + 4), -1) == 1) {
            (*(void (__stdcall **)(void *))(*(void ***)unk)[1])(unk);
            if (_InterlockedExchangeAdd((volatile long *)((char *)unk + 8), -1) == 1) {
                (*(void (__stdcall **)(void *))(*(void ***)unk)[2])(unk);
            }
        }
    }
}
