// roc 2008-06 004619d0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004619d0
//
// 004619d0  83c158               add ecx, 0x58
// 004619d3  e850f02300           call 0x6a0a28
// 004619d8  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX000038@@QAEXH@Z)

namespace ns_ROCX000038 {
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
