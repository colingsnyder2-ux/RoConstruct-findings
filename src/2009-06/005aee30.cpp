// roc 2009-06 005aee30  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005aee30
//
// 005aee30  55                   push ebp
// 005aee31  8bec                 mov ebp, esp
// 005aee33  51                   push ecx
// 005aee34  894dfc               mov dword ptr [ebp - 4], ecx
// 005aee37  6a00                 push 0
// 005aee39  6a00                 push 0
// 005aee3b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005aee3e  e80d000000           call 0x5aee50
// 005aee43  8b45fc               mov eax, dword ptr [ebp - 4]
// 005aee46  8be5                 mov esp, ebp
// 005aee48  5d                   pop ebp
// 005aee49  c3                   ret 
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