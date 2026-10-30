// roc 2009-12 00864a80  unit: CPropertyGridItemBrickColor  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864a80
//
// 00864a80  6aff                 push -1
// 00864a82  6899869500           push 0x958699
// 00864a87  64a100000000         mov eax, dword ptr fs:[0]
// 00864a8d  50                   push eax
// 00864a8e  51                   push ecx
// 00864a8f  56                   push esi
// 00864a90  a10052b600           mov eax, dword ptr [0xb65200]
// 00864a95  33c4                 xor eax, esp
// 00864a97  50                   push eax
// 00864a98  8d44240c             lea eax, [esp + 0xc]
// 00864a9c  64a300000000         mov dword ptr fs:[0], eax
// 00864aa2  8bf1                 mov esi, ecx
// 00864aa4  8d44241c             lea eax, [esp + 0x1c]
// 00864aa8  50                   push eax
// 00864aa9  e8f26efdff           call 0x83b9a0
// 00864aae  85c0                 test eax, eax
// 00864ab0  7418                 je 0x864aca
// 00864ab2  b857000780           mov eax, 0x80070057
// 00864ab7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864abb  64890d00000000       mov dword ptr fs:[0], ecx
// 00864ac2  59                   pop ecx
// 00864ac3  5e                   pop esi
// 00864ac4  83c410               add esp, 0x10
// 00864ac7  c21400               ret 0x14
// 00864aca  8d4c2408             lea ecx, [esp + 8]
// 00864ace  51                   push ecx
// 00864acf  8d4ee0               lea ecx, [esi - 0x20]
// 00864ad2  e819dbbcff           call 0x4325f0
// 00864ad7  8d4c2408             lea ecx, [esp + 8]
// 00864adb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00864ae3  ff156cd69800         call dword ptr [0x98d66c]
// 00864ae9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00864aed  8d4c2408             lea ecx, [esp + 8]
// 00864af1  8902                 mov dword ptr [edx], eax
// 00864af3  ff15c0de9800         call dword ptr [0x98dec0]
// 00864af9  33c0                 xor eax, eax
// 00864afb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864aff  64890d00000000       mov dword ptr fs:[0], ecx
// 00864b06  59                   pop ecx
// 00864b07  5e                   pop esi
// 00864b08  83c410               add esp, 0x10
// 00864b0b  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp