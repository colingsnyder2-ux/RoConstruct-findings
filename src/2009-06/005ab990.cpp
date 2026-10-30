// roc 2009-06 005ab990  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ab990
//
// 005ab990  55                   push ebp
// 005ab991  8bec                 mov ebp, esp
// 005ab993  51                   push ecx
// 005ab994  894dfc               mov dword ptr [ebp - 4], ecx
// 005ab997  6a00                 push 0
// 005ab999  6a00                 push 0
// 005ab99b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ab99e  e83d060000           call 0x5abfe0
// 005ab9a3  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ab9a6  8be5                 mov esp, ebp
// 005ab9a8  5d                   pop ebp
// 005ab9a9  c3                   ret 
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