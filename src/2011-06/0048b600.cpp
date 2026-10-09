// roc 2011-06 0048b600  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b600
//
// 0048b600  83c158               add ecx, 0x58
// 0048b603  e8f8ed3700           call 0x80a400
// 0048b608  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0045d840@ns_ROCX000069@@QAEXH@Z)

namespace ns_ROCX000069 {
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
