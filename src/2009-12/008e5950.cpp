// roc 2009-12 008e5950  unit: CXTColorSelectorCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5950
//
// 008e5950  6aff                 push -1
// 008e5952  6863609600           push 0x966063
// 008e5957  64a100000000         mov eax, dword ptr fs:[0]
// 008e595d  50                   push eax
// 008e595e  51                   push ecx
// 008e595f  56                   push esi
// 008e5960  57                   push edi
// 008e5961  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5966  33c4                 xor eax, esp
// 008e5968  50                   push eax
// 008e5969  8d442410             lea eax, [esp + 0x10]
// 008e596d  64a300000000         mov dword ptr fs:[0], eax
// 008e5973  8bf1                 mov esi, ecx
// 008e5975  8974240c             mov dword ptr [esp + 0xc], esi
// 008e5979  8d7e54               lea edi, [esi + 0x54]
// 008e597c  c7061cc6a000         mov dword ptr [esi], 0xa0c61c
// 008e5982  c70708c6a000         mov dword ptr [edi], 0xa0c608
// 008e5988  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008e5990  e8cbfbffff           call 0x8e5560
// 008e5995  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008e599b  85c9                 test ecx, ecx
// 008e599d  740f                 je 0x8e59ae
// 008e599f  e838e4f0ff           call 0x7f3ddc
// 008e59a4  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 008e59ae  8bcf                 mov ecx, edi
// 008e59b0  c644241800           mov byte ptr [esp + 0x18], 0
// 008e59b5  e83648f7ff           call 0x85a1f0
// 008e59ba  8bce                 mov ecx, esi
// 008e59bc  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008e59c4  e86b0c0400           call 0x926634
// 008e59c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e59cd  64890d00000000       mov dword ptr fs:[0], ecx
// 008e59d4  59                   pop ecx
// 008e59d5  5f                   pop edi
// 008e59d6  5e                   pop esi
// 008e59d7  83c410               add esp, 0x10
// 008e59da  c3                   ret 
// copied from an identical function in another client (function ??1CXTButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp