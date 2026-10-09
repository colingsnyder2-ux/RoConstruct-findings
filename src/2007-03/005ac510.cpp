// roc 2007-03 005ac510  unit: seg_005a0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac510
//
// 005ac510  83ec0c               sub esp, 0xc
// 005ac513  8d442410             lea eax, [esp + 0x10]
// 005ac517  50                   push eax
// 005ac518  8d542404             lea edx, [esp + 4]
// 005ac51c  52                   push edx
// 005ac51d  83c124               add ecx, 0x24
// 005ac520  e84b6f0600           call 0x613470
// 005ac525  83c40c               add esp, 0xc
// 005ac528  c20400               ret 4
// copied from an identical function in another client (function ?func@Assembly@ns_ROCX000006@@QAEXH@Z)

namespace ns_ROCX000006 {
struct AssemblyHelper
{
    void method(int* a, int* b);
};

struct Assembly
{
    char pad[0x24];
    AssemblyHelper helper;
    void func(int arg);
};

void Assembly::func(int arg)
{
    int local[3];
    helper.method(local, &arg);
}
}
