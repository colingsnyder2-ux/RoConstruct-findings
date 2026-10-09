// roc 2012-06 0049e310  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e310
//
// 0049e310  83c158               add ecx, 0x58
// 0049e313  e88c414e00           call 0x9824a4
// 0049e318  c20400               ret 4
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
