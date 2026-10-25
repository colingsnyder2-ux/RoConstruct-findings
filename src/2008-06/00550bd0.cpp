// from server: 100% by tester
// roc 2008-06 00550bd0  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00550bd0
//
// 00550bd0  55                   push ebp
// 00550bd1  8bec                 mov ebp, esp
// 00550bd3  83ec0c               sub esp, 0xc
// 00550bd6  894df8               mov dword ptr [ebp - 8], ecx
// 00550bd9  c745fcffffff07       mov dword ptr [ebp - 4], 0x7ffffff
// 00550be0  837dfc00             cmp dword ptr [ebp - 4], 0
// 00550be4  7608                 jbe 0x550bee
// 00550be6  8b45fc               mov eax, dword ptr [ebp - 4]
// 00550be9  8945f4               mov dword ptr [ebp - 0xc], eax
// 00550bec  eb07                 jmp 0x550bf5
// 00550bee  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 00550bf5  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00550bf8  8be5                 mov esp, ebp
// 00550bfa  5d                   pop ebp
// 00550bfb  c3                   ret 

struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0x7ffffff;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)
