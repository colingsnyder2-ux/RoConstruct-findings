// roc 2009-12 00864c50  unit: CPropertyGridItemBrickColor  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864c50
//
// 00864c50  6aff                 push -1
// 00864c52  6899869500           push 0x958699
// 00864c57  64a100000000         mov eax, dword ptr fs:[0]
// 00864c5d  50                   push eax
// 00864c5e  51                   push ecx
// 00864c5f  56                   push esi
// 00864c60  a10052b600           mov eax, dword ptr [0xb65200]
// 00864c65  33c4                 xor eax, esp
// 00864c67  50                   push eax
// 00864c68  8d44240c             lea eax, [esp + 0xc]
// 00864c6c  64a300000000         mov dword ptr fs:[0], eax
// 00864c72  8bf1                 mov esi, ecx
// 00864c74  8d44241c             lea eax, [esp + 0x1c]
// 00864c78  50                   push eax
// 00864c79  e8226dfdff           call 0x83b9a0
// 00864c7e  85c0                 test eax, eax
// 00864c80  7418                 je 0x864c9a
// 00864c82  b857000780           mov eax, 0x80070057
// 00864c87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864c8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00864c92  59                   pop ecx
// 00864c93  5e                   pop esi
// 00864c94  83c410               add esp, 0x10
// 00864c97  c21400               ret 0x14
// 00864c9a  8d4c2408             lea ecx, [esp + 8]
// 00864c9e  51                   push ecx
// 00864c9f  8d4ee0               lea ecx, [esi - 0x20]
// 00864ca2  e879d9bcff           call 0x432620
// 00864ca7  8bc8                 mov ecx, eax
// 00864ca9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00864cb1  ff156cd69800         call dword ptr [0x98d66c]
// 00864cb7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00864cbb  8d4c2408             lea ecx, [esp + 8]
// 00864cbf  8902                 mov dword ptr [edx], eax
// 00864cc1  ff15c0de9800         call dword ptr [0x98dec0]
// 00864cc7  33c0                 xor eax, eax
// 00864cc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00864ccd  64890d00000000       mov dword ptr fs:[0], ecx
// 00864cd4  59                   pop ecx
// 00864cd5  5e                   pop esi
// 00864cd6  83c410               add esp, 0x10
// 00864cd9  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleDescription@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp