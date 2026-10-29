// roc 2009-06 005c7620  unit: seg_005c0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7620
//
// 005c7620  55                   push ebp
// 005c7621  8bec                 mov ebp, esp
// 005c7623  83ec0c               sub esp, 0xc
// 005c7626  894df8               mov dword ptr [ebp - 8], ecx
// 005c7629  c745fcffffff3f       mov dword ptr [ebp - 4], 0x3fffffff
// 005c7630  837dfc00             cmp dword ptr [ebp - 4], 0
// 005c7634  7608                 jbe 0x5c763e
// 005c7636  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c7639  8945f4               mov dword ptr [ebp - 0xc], eax
// 005c763c  eb07                 jmp 0x5c7645
// 005c763e  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 005c7645  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005c7648  8be5                 mov esp, ebp
// 005c764a  5d                   pop ebp
// 005c764b  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEIXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    unsigned int f();
};

#pragma optimize("", off)
unsigned int S::f()
{
    unsigned int count = 0x3fffffff;
    return count > 0 ? count : 1;
}
#pragma optimize("", on)