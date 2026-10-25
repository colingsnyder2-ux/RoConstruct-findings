// from server: 100% by tester
// roc 2008-06 00545b20  unit: seg_00540000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00545b20
//
// 00545b20  55                   push ebp
// 00545b21  8bec                 mov ebp, esp
// 00545b23  83ec0c               sub esp, 0xc
// 00545b26  894df8               mov dword ptr [ebp - 8], ecx
// 00545b29  c745fcffffff0f       mov dword ptr [ebp - 4], 0xfffffff
// 00545b30  837dfc00             cmp dword ptr [ebp - 4], 0
// 00545b34  7608                 jbe 0x545b3e
// 00545b36  8b45fc               mov eax, dword ptr [ebp - 4]
// 00545b39  8945f4               mov dword ptr [ebp - 0xc], eax
// 00545b3c  eb07                 jmp 0x545b45
// 00545b3e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 00545b45  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00545b48  8be5                 mov esp, ebp
// 00545b4a  5d                   pop ebp
// 00545b4b  c3                   ret 

struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0xfffffff;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)
