// roc 2011-06 008e7e70  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7e70
//
// 008e7e70  6aff                 push -1
// 008e7e72  68a8dfa000           push 0xa0dfa8
// 008e7e77  64a100000000         mov eax, dword ptr fs:[0]
// 008e7e7d  50                   push eax
// 008e7e7e  51                   push ecx
// 008e7e7f  56                   push esi
// 008e7e80  a12058c900           mov eax, dword ptr [0xc95820]
// 008e7e85  33c4                 xor eax, esp
// 008e7e87  50                   push eax
// 008e7e88  8d44240c             lea eax, [esp + 0xc]
// 008e7e8c  64a300000000         mov dword ptr fs:[0], eax
// 008e7e92  8bf1                 mov esi, ecx
// 008e7e94  89742408             mov dword ptr [esp + 8], esi
// 008e7e98  c706b48ead00         mov dword ptr [esi], 0xad8eb4
// 008e7e9e  8d8e88000000         lea ecx, [esi + 0x88]
// 008e7ea4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e7eac  e8bff9ffff           call 0x8e7870
// 008e7eb1  8bce                 mov ecx, esi
// 008e7eb3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008e7ebb  e8ea4e0e00           call 0x9ccdaa
// 008e7ec0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e7ec4  64890d00000000       mov dword ptr fs:[0], ecx
// 008e7ecb  59                   pop ecx
// 008e7ecc  5e                   pop esi
// 008e7ecd  83c410               add esp, 0x10
// 008e7ed0  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageStandard@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp