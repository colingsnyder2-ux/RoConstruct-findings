// roc 2009-06 005aba90  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005aba90
//
// 005aba90  55                   push ebp
// 005aba91  8bec                 mov ebp, esp
// 005aba93  51                   push ecx
// 005aba94  894dfc               mov dword ptr [ebp - 4], ecx
// 005aba97  6a00                 push 0
// 005aba99  6a00                 push 0
// 005aba9b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005aba9e  e82d080000           call 0x5ac2d0
// 005abaa3  8b45fc               mov eax, dword ptr [ebp - 4]
// 005abaa6  8be5                 mov esp, ebp
// 005abaa8  5d                   pop ebp
// 005abaa9  c3                   ret 
// copied from an identical function in another client (function ??0S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    S();
    void init(int, int);
};

#pragma optimize("", off)
S::S()
{
    init(0, 0);
}
#pragma optimize("", on)