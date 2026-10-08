// from server: 69% by colin
// roc 2007-08 00458940  unit: CRobloxWnd  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458940
//
// 00458940  83ec08               sub esp, 8
// 00458943  56                   push esi
// 00458944  8bf1                 mov esi, ecx
// 00458946  8d4c2404             lea ecx, [esp + 4]
// 0045894a  c744240478c08b00     mov dword ptr [esp + 4], 0x8bc078
// 00458952  c644240800           mov byte ptr [esp + 8], 0
// 00458957  e8144ffcff           call 0x41d870
// 0045895c  dd442410             fld qword ptr [esp + 0x10]
// 00458960  807c240800           cmp byte ptr [esp + 8], 0
// 00458965  dd5e2c               fstp qword ptr [esi + 0x2c]
// 00458968  5e                   pop esi
// 00458969  740a                 je 0x458975
// 0045896b  8b0424               mov eax, dword ptr [esp]
// 0045896e  50                   push eax
// 0045896f  ff15f8d27700         call dword ptr [0x77d2f8]
// 00458975  83c408               add esp, 8
// 00458978  c20800               ret 8

struct CRobloxWnd
{
    char pad[0x2c];
    double field_2c;
    void func_00458940(double);
};

extern "C" void __stdcall LeaveCriticalSection(void*);

extern void* G_008bc078;

extern void sub_0041d870(void*);

void CRobloxWnd::func_00458940(double value)
{
    struct Local
    {
        void* p;
        char flag;
    };

    Local local;
    local.p = &G_008bc078;
    local.flag = 0;
    sub_0041d870(&local);
    field_2c = value;
    if (local.flag != 0)
    {
        LeaveCriticalSection(local.p);
    }
}
