// roc 2009-06 00462640  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462640
//
// 00462640  83c158               add ecx, 0x58
// 00462643  e892672b00           call 0x718dda
// 00462648  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
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
