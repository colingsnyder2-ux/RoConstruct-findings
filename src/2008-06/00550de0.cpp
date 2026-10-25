// from server: 100% by tester
// roc 2008-06 00550de0  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00550de0
//
// 00550de0  55                   push ebp
// 00550de1  8bec                 mov ebp, esp
// 00550de3  83ec0c               sub esp, 0xc
// 00550de6  894df8               mov dword ptr [ebp - 8], ecx
// 00550de9  c745fcffffff1f       mov dword ptr [ebp - 4], 0x1fffffff
// 00550df0  837dfc00             cmp dword ptr [ebp - 4], 0
// 00550df4  7608                 jbe 0x550dfe
// 00550df6  8b45fc               mov eax, dword ptr [ebp - 4]
// 00550df9  8945f4               mov dword ptr [ebp - 0xc], eax
// 00550dfc  eb07                 jmp 0x550e05
// 00550dfe  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 00550e05  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00550e08  8be5                 mov esp, ebp
// 00550e0a  5d                   pop ebp
// 00550e0b  c3                   ret 

struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0x1fffffff;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)
