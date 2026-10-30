// roc 2009-12 00864eb0  unit: CXTPPropertyGridItem  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864eb0
//
// 00864eb0  6aff                 push -1
// 00864eb2  680aee9500           push 0x95ee0a
// 00864eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00864ebd  50                   push eax
// 00864ebe  51                   push ecx
// 00864ebf  56                   push esi
// 00864ec0  57                   push edi
// 00864ec1  a10052b600           mov eax, dword ptr [0xb65200]
// 00864ec6  33c4                 xor eax, esp
// 00864ec8  50                   push eax
// 00864ec9  8d442410             lea eax, [esp + 0x10]
// 00864ecd  64a300000000         mov dword ptr fs:[0], eax
// 00864ed3  8bf1                 mov esi, ecx
// 00864ed5  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00864edc  753c                 jne 0x864f1a
// 00864ede  68a0000000           push 0xa0
// 00864ee3  e878e9f8ff           call 0x7f3860
// 00864ee8  8bf8                 mov edi, eax
// 00864eea  83c404               add esp, 4
// 00864eed  897c240c             mov dword ptr [esp + 0xc], edi
// 00864ef1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00864ef9  85ff                 test edi, edi
// 00864efb  7415                 je 0x864f12
// 00864efd  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00864f03  e8482a0000           call 0x867950
// 00864f08  50                   push eax
// 00864f09  8bcf                 mov ecx, edi
// 00864f0b  e8104a0600           call 0x8c9920
// 00864f10  eb02                 jmp 0x864f14
// 00864f12  33c0                 xor eax, eax
// 00864f14  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00864f1a  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00864f20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00864f24  64890d00000000       mov dword ptr fs:[0], ecx
// 00864f2b  59                   pop ecx
// 00864f2c  5f                   pop edi
// 00864f2d  5e                   pop esi
// 00864f2e  83c410               add esp, 0x10
// 00864f31  c3                   ret 
// copied from an identical function in another client (function ?GetCaptionMetrics@CXTPPropertyGridItem@@QBEPAVCXTPPropertyGridItemMetrics@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp