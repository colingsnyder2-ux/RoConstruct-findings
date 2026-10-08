// from server: 100% by colin
// roc 2007-08 0045d440  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d440
//
// 0045d440  6a01                 push 1
// 0045d442  83c158               add ecx, 0x58
// 0045d445  e816f8ffff           call 0x45cc60
// 0045d44a  c3                   ret 

struct Scintilla_CScintillaView_0045d440
{
    char pad[0x58];
    void method_0045cc60(int);
    void func_0045d440();
};

void Scintilla_CScintillaView_0045d440::func_0045d440()
{
    ((Scintilla_CScintillaView_0045d440*)((char*)this + 0x58))->method_0045cc60(1);
}
