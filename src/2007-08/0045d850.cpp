// from server: 75% by colin
// roc 2007-08 0045d850  unit: Scintilla::CScintillaView  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d850
//
// 0045d850  a174a58800           mov eax, dword ptr [0x88a574]
// 0045d855  85c0                 test eax, eax
// 0045d857  8b542408             mov edx, dword ptr [esp + 8]
// 0045d85b  740c                 je 0x45d869
// 0045d85d  3bd1                 cmp edx, ecx
// 0045d85f  7508                 jne 0x45d869
// 0045d861  56                   push esi
// 0045d862  8b7120               mov esi, dword ptr [ecx + 0x20]
// 0045d865  897078               mov dword ptr [eax + 0x78], esi
// 0045d868  5e                   pop esi
// 0045d869  89542408             mov dword ptr [esp + 8], edx
// 0045d86d  e92c2a1d00           jmp 0x63029e

struct Scintilla_CScintillaView {
    char pad_0x00[0x20];
    int field_0x20;
    void func_0045d850(int);
};

extern int g_var_0088a574;
extern void __stdcall func_0063029e(int);

void Scintilla_CScintillaView::func_0045d850(int arg)
{
    int v = g_var_0088a574;
    if (v != 0 && arg == (int)this)
    {
        *(int*)(v + 0x78) = field_0x20;
    }
    func_0063029e(arg);
}
