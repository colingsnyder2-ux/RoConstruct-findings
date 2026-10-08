// from server: 47% by colin
// roc 2007-08 004c3830  unit: RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c3830
//
// 004c3830  83ec20               sub esp, 0x20
// 004c3833  56                   push esi
// 004c3834  8d442414             lea eax, [esp + 0x14]
// 004c3838  50                   push eax
// 004c3839  8bf1                 mov esi, ecx
// 004c383b  e820e5ffff           call 0x4c1d60
// 004c3840  8d4c2408             lea ecx, [esp + 8]
// 004c3844  51                   push ecx
// 004c3845  e816e5ffff           call 0x4c1d60
// 004c384a  83c408               add esp, 8
// 004c384d  8d542404             lea edx, [esp + 4]
// 004c3851  52                   push edx
// 004c3852  8d442418             lea eax, [esp + 0x18]
// 004c3856  50                   push eax
// 004c3857  8bce                 mov ecx, esi
// 004c3859  e852e3ffff           call 0x4c1bb0
// 004c385e  5e                   pop esi
// 004c385f  83c420               add esp, 0x20
// 004c3862  c3                   ret 

struct RakPeer
{
    void sub_4c1d60(void*);
    void sub_4c1bb0(void*, void*);
    void func_4c3830();
};

void RakPeer::func_4c3830()
{
    char buf1[0x10];
    char buf2[0x10];
    char buf3[0x10];

    sub_4c1d60(buf1);
    sub_4c1d60(buf2);
    sub_4c1bb0(buf3, buf1);
}
