// roc 2009-12 00864e20  unit: CXTPPropertyGridItem  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864e20
//
// 00864e20  6aff                 push -1
// 00864e22  680aee9500           push 0x95ee0a
// 00864e27  64a100000000         mov eax, dword ptr fs:[0]
// 00864e2d  50                   push eax
// 00864e2e  51                   push ecx
// 00864e2f  56                   push esi
// 00864e30  57                   push edi
// 00864e31  a10052b600           mov eax, dword ptr [0xb65200]
// 00864e36  33c4                 xor eax, esp
// 00864e38  50                   push eax
// 00864e39  8d442410             lea eax, [esp + 0x10]
// 00864e3d  64a300000000         mov dword ptr fs:[0], eax
// 00864e43  8bf1                 mov esi, ecx
// 00864e45  83becc00000000       cmp dword ptr [esi + 0xcc], 0
// 00864e4c  753c                 jne 0x864e8a
// 00864e4e  68a0000000           push 0xa0
// 00864e53  e808eaf8ff           call 0x7f3860
// 00864e58  8bf8                 mov edi, eax
// 00864e5a  83c404               add esp, 4
// 00864e5d  897c240c             mov dword ptr [esp + 0xc], edi
// 00864e61  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00864e69  85ff                 test edi, edi
// 00864e6b  7415                 je 0x864e82
// 00864e6d  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864e73  e8d82a0000           call 0x867950
// 00864e78  50                   push eax
// 00864e79  8bcf                 mov ecx, edi
// 00864e7b  e8a04a0600           call 0x8c9920
// 00864e80  eb02                 jmp 0x864e84
// 00864e82  33c0                 xor eax, eax
// 00864e84  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00864e8a  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00864e90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00864e94  64890d00000000       mov dword ptr fs:[0], ecx
// 00864e9b  59                   pop ecx
// 00864e9c  5f                   pop edi
// 00864e9d  5e                   pop esi
// 00864e9e  83c410               add esp, 0x10
// 00864ea1  c3                   ret 
// copied from an identical function in another client (function ?GetValueMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp