// from server: 26% by colin
// roc 2007-08 00404330  unit: ATL::CRegObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404330
//
// 00404330  55                   push ebp
// 00404331  8bec                 mov ebp, esp
// 00404333  6aff                 push -1
// 00404335  6830927300           push 0x739230
// 0040433a  64a100000000         mov eax, dword ptr fs:[0]
// 00404340  50                   push eax
// 00404341  83ec08               sub esp, 8
// 00404344  53                   push ebx
// 00404345  56                   push esi
// 00404346  57                   push edi
// 00404347  a188518b00           mov eax, dword ptr [0x8b5188]
// 0040434c  33c5                 xor eax, ebp
// 0040434e  50                   push eax
// 0040434f  8d45f4               lea eax, [ebp - 0xc]
// 00404352  64a300000000         mov dword ptr fs:[0], eax
// 00404358  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040435b  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040435e  85db                 test ebx, ebx
// 00404360  7519                 jne 0x40437b
// 00404362  b857000780           mov eax, 0x80070057
// 00404367  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040436a  64890d00000000       mov dword ptr fs:[0], ecx
// 00404371  59                   pop ecx
// 00404372  5f                   pop edi
// 00404373  5e                   pop esi
// 00404374  5b                   pop ebx
// 00404375  8be5                 mov esp, ebp
// 00404377  5d                   pop ebp
// 00404378  c20c00               ret 0xc
// 0040437b  6a0c                 push 0xc
// 0040437d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00404384  e86dbb2200           call 0x62fef6
// 00404389  8bf0                 mov esi, eax
// 0040438b  83c404               add esp, 4
// 0040438e  85f6                 test esi, esi
// 00404390  7527                 jne 0x4043b9

struct CRegObject {
    int AddReplacement(int a, int b, int c);
};

extern "C" void* __cdecl operator_new(unsigned int size);

int CRegObject::AddReplacement(int a, int b, int c)
{
    if (a == 0)
        return (int)0x80070057;
    void* p = operator_new(0xc);
    if (p != 0)
        return 0;
    return 0;
}
