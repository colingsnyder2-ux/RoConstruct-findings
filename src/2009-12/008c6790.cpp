// roc 2009-12 008c6790  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6790
//
// 008c6790  6aff                 push -1
// 008c6792  68ca459600           push 0x9645ca
// 008c6797  64a100000000         mov eax, dword ptr fs:[0]
// 008c679d  50                   push eax
// 008c679e  51                   push ecx
// 008c679f  56                   push esi
// 008c67a0  a10052b600           mov eax, dword ptr [0xb65200]
// 008c67a5  33c4                 xor eax, esp
// 008c67a7  50                   push eax
// 008c67a8  8d44240c             lea eax, [esp + 0xc]
// 008c67ac  64a300000000         mov dword ptr fs:[0], eax
// 008c67b2  8bf1                 mov esi, ecx
// 008c67b4  6a65                 push 0x65
// 008c67b6  e865fdffff           call 0x8c6520
// 008c67bb  85c0                 test eax, eax
// 008c67bd  7537                 jne 0x8c67f6
// 008c67bf  6a58                 push 0x58
// 008c67c1  e89ad0f2ff           call 0x7f3860
// 008c67c6  83c404               add esp, 4
// 008c67c9  89442408             mov dword ptr [esp + 8], eax
// 008c67cd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008c67d5  85c0                 test eax, eax
// 008c67d7  740b                 je 0x8c67e4
// 008c67d9  6a65                 push 0x65
// 008c67db  8bc8                 mov ecx, eax
// 008c67dd  e88efbffff           call 0x8c6370
// 008c67e2  eb02                 jmp 0x8c67e6
// 008c67e4  33c0                 xor eax, eax
// 008c67e6  50                   push eax
// 008c67e7  8bce                 mov ecx, esi
// 008c67e9  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008c67f1  e85affffff           call 0x8c6750
// 008c67f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c67fa  64890d00000000       mov dword ptr fs:[0], ecx
// 008c6801  59                   pop ecx
// 008c6802  5e                   pop esi
// 008c6803  83c410               add esp, 0x10
// 008c6806  c3                   ret 
// copied from an identical function in another client (function ?AddComboButton@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp