// roc 2009-06 005abc80  unit: RBX::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abc80
//
// 005abc80  55                   push ebp
// 005abc81  8bec                 mov ebp, esp
// 005abc83  51                   push ecx
// 005abc84  894dfc               mov dword ptr [ebp - 4], ecx
// 005abc87  6a00                 push 0
// 005abc89  6a00                 push 0
// 005abc8b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005abc8e  e8dd090000           call 0x5ac670
// 005abc93  8b45fc               mov eax, dword ptr [ebp - 4]
// 005abc96  8be5                 mov esp, ebp
// 005abc98  5d                   pop ebp
// 005abc99  c3                   ret 
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