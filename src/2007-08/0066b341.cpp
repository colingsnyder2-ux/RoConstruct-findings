// from server: 37% by colin
// roc 2007-08 0066b341  unit: MyXTPCommandBars  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066b341
//
// 0066b341  33c0                 xor eax, eax
// 0066b343  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0066b346  64890d00000000       mov dword ptr fs:[0], ecx
// 0066b34d  59                   pop ecx
// 0066b34e  5f                   pop edi
// 0066b34f  5e                   pop esi
// 0066b350  5b                   pop ebx
// 0066b351  8be5                 mov esp, ebp
// 0066b353  5d                   pop ebp
// 0066b354  c20800               ret 8

struct MyXTPCommandBars
{
    int f(int, int);
};

int MyXTPCommandBars::f(int, int)
{
    return 0;
}
