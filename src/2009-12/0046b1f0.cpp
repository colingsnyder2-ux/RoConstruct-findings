// roc 2009-12 0046b1f0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b1f0
//
// 0046b1f0  83c158               add ecx, 0x58
// 0046b1f3  e80a8a3800           call 0x7f3c02
// 0046b1f8  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX00002e@@QAEXH@Z)

namespace ns_ROCX00002e {
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
