// from server: 100% by colin
// roc 2007-08 0045d840  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d840
//
// 0045d840  83c158               add ecx, 0x58
// 0045d843  e8bc271d00           call 0x630004
// 0045d848  c20400               ret 4

struct S_func_0045d840 {
    char pad0[88];
    void f(int);
};

extern "C" void __fastcall sub_00630004(void*);

void S_func_0045d840::f(int)
{
    sub_00630004((char*)this + 88);
}
