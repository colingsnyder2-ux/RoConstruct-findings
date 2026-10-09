// roc 2007-03 005ac570  unit: seg_005a0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac570
//
// 005ac570  83ec0c               sub esp, 0xc
// 005ac573  8d442410             lea eax, [esp + 0x10]
// 005ac577  50                   push eax
// 005ac578  8d542404             lea edx, [esp + 4]
// 005ac57c  52                   push edx
// 005ac57d  83c118               add ecx, 0x18
// 005ac580  e8eb6e0600           call 0x613470
// 005ac585  83c40c               add esp, 0xc
// 005ac588  c20400               ret 4
// copied from an identical function in another client (function ?func@Assembly@ns_ROCX000008@@QAEXH@Z)

namespace ns_ROCX000008 {
struct AssemblyHelper
{
    void method(int* a, int* b);
};

struct Assembly
{
    char pad[0x18];
    AssemblyHelper helper;
    void func(int arg);
};

void Assembly::func(int arg)
{
    int local[3];
    helper.method(&local[0], &arg);
}
}
