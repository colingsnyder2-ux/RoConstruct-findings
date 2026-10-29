// roc 2009-06 005aba20  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005aba20
//
// 005aba20  55                   push ebp
// 005aba21  8bec                 mov ebp, esp
// 005aba23  51                   push ecx
// 005aba24  894dfc               mov dword ptr [ebp - 4], ecx
// 005aba27  6a00                 push 0
// 005aba29  6a00                 push 0
// 005aba2b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005aba2e  e8fd050000           call 0x5ac030
// 005aba33  8b45fc               mov eax, dword ptr [ebp - 4]
// 005aba36  8be5                 mov esp, ebp
// 005aba38  5d                   pop ebp
// 005aba39  c3                   ret 
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