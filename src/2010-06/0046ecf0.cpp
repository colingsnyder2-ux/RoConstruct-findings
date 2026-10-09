// roc 2010-06 0046ecf0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ecf0
//
// 0046ecf0  83c158               add ecx, 0x58
// 0046ecf3  e84a903300           call 0x7a7d42
// 0046ecf8  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX00002a@@QAEXH@Z)

namespace ns_ROCX00002a {
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
