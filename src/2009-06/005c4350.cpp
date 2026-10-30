// roc 2009-06 005c4350  unit: seg_005c0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c4350
//
// 005c4350  55                   push ebp
// 005c4351  8bec                 mov ebp, esp
// 005c4353  83ec0c               sub esp, 0xc
// 005c4356  894df8               mov dword ptr [ebp - 8], ecx
// 005c4359  c745fcffffff1f       mov dword ptr [ebp - 4], 0x1fffffff
// 005c4360  837dfc00             cmp dword ptr [ebp - 4], 0
// 005c4364  7608                 jbe 0x5c436e
// 005c4366  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c4369  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c436c  eb07                 jmp 0x5c4375
// 005c436e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 005c4375  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c4378  8be5                 mov esp, ebp
// 005c437a  5d                   pop ebp
// 005c437b  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEIXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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