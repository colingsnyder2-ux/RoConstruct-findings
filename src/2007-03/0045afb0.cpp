// roc 2007-03 0045afb0  unit: seg_00450000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045afb0
//
// 0045afb0  83c158               add ecx, 0x58
// 0045afb3  e8da341c00           call 0x61e492
// 0045afb8  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
struct S_func_0045d840 {
    char pad0[88];
    void f(int);
};

extern "C" void __fastcall sub_00630004(void*);

void S_func_0045d840::f(int)
{
    sub_00630004((char*)this + 88);
}
}
