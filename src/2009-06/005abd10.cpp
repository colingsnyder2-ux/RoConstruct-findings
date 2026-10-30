// roc 2009-06 005abd10  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abd10
//
// 005abd10  55                   push ebp
// 005abd11  8bec                 mov ebp, esp
// 005abd13  51                   push ecx
// 005abd14  894dfc               mov dword ptr [ebp - 4], ecx
// 005abd17  6a00                 push 0
// 005abd19  6a00                 push 0
// 005abd1b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005abd1e  e89d090000           call 0x5ac6c0
// 005abd23  8b45fc               mov eax, dword ptr [ebp - 4]
// 005abd26  8be5                 mov esp, ebp
// 005abd28  5d                   pop ebp
// 005abd29  c3                   ret 
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