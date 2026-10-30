// roc 2009-12 007fa630  unit: CPatchedControlComboBox  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa630
//
// 007fa630  6aff                 push -1
// 007fa632  6899869500           push 0x958699
// 007fa637  64a100000000         mov eax, dword ptr fs:[0]
// 007fa63d  50                   push eax
// 007fa63e  51                   push ecx
// 007fa63f  56                   push esi
// 007fa640  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa645  33c4                 xor eax, esp
// 007fa647  50                   push eax
// 007fa648  8d44240c             lea eax, [esp + 0xc]
// 007fa64c  64a300000000         mov dword ptr fs:[0], eax
// 007fa652  8bf1                 mov esi, ecx
// 007fa654  8b06                 mov eax, dword ptr [esi]
// 007fa656  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007fa65c  8d4c2408             lea ecx, [esp + 8]
// 007fa660  51                   push ecx
// 007fa661  8bce                 mov ecx, esi
// 007fa663  c786dc01000001000000 mov dword ptr [esi + 0x1dc], 1
// 007fa66d  ffd2                 call edx
// 007fa66f  50                   push eax
// 007fa670  8bce                 mov ecx, esi
// 007fa672  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fa67a  e8e1fcffff           call 0x7fa360
// 007fa67f  8d4c2408             lea ecx, [esp + 8]
// 007fa683  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007fa68b  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa691  6a01                 push 1
// 007fa693  8bce                 mov ecx, esi
// 007fa695  c786dc01000000000000 mov dword ptr [esi + 0x1dc], 0
// 007fa69f  e81cc0ffff           call 0x7f66c0
// 007fa6a4  6a01                 push 1
// 007fa6a6  8bce                 mov ecx, esi
// 007fa6a8  e8e3deffff           call 0x7f8590
// 007fa6ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fa6b1  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa6b8  59                   pop ecx
// 007fa6b9  5e                   pop esi
// 007fa6ba  83c410               add esp, 0x10
// 007fa6bd  c3                   ret 
// copied from an identical function in another client (function ?OnSelChanged@CXTPControlComboBox@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp