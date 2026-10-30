// roc 2009-12 00864b10  unit: CPropertyGridItemBrickColor  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864b10
//
// 00864b10  6aff                 push -1
// 00864b12  6899869500           push 0x958699
// 00864b17  64a100000000         mov eax, dword ptr fs:[0]
// 00864b1d  50                   push eax
// 00864b1e  51                   push ecx
// 00864b1f  56                   push esi
// 00864b20  a10052b600           mov eax, dword ptr [0xb65200]
// 00864b25  33c4                 xor eax, esp
// 00864b27  50                   push eax
// 00864b28  8d44240c             lea eax, [esp + 0xc]
// 00864b2c  64a300000000         mov dword ptr fs:[0], eax
// 00864b32  8bf1                 mov esi, ecx
// 00864b34  8d44241c             lea eax, [esp + 0x1c]
// 00864b38  50                   push eax
// 00864b39  e8626efdff           call 0x83b9a0
// 00864b3e  85c0                 test eax, eax
// 00864b40  7418                 je 0x864b5a
// 00864b42  b857000780           mov eax, 0x80070057
// 00864b47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864b4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00864b52  59                   pop ecx
// 00864b53  5e                   pop esi
// 00864b54  83c410               add esp, 0x10
// 00864b57  c21400               ret 0x14
// 00864b5a  8d4c2408             lea ecx, [esp + 8]
// 00864b5e  51                   push ecx
// 00864b5f  8d4ee0               lea ecx, [esi - 0x20]
// 00864b62  e8e9f9ffff           call 0x864550
// 00864b67  8bc8                 mov ecx, eax
// 00864b69  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00864b71  ff156cd69800         call dword ptr [0x98d66c]
// 00864b77  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00864b7b  8d4c2408             lea ecx, [esp + 8]
// 00864b7f  8902                 mov dword ptr [edx], eax
// 00864b81  ff15c0de9800         call dword ptr [0x98dec0]
// 00864b87  33c0                 xor eax, eax
// 00864b89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864b8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00864b94  59                   pop ecx
// 00864b95  5e                   pop esi
// 00864b96  83c410               add esp, 0x10
// 00864b99  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleDescription@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp