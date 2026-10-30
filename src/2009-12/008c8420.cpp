// roc 2009-12 008c8420  unit: VCEdit::?$CXTMaskEditT  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8420
//
// 008c8420  6aff                 push -1
// 008c8422  6899869500           push 0x958699
// 008c8427  64a100000000         mov eax, dword ptr fs:[0]
// 008c842d  50                   push eax
// 008c842e  51                   push ecx
// 008c842f  56                   push esi
// 008c8430  a10052b600           mov eax, dword ptr [0xb65200]
// 008c8435  33c4                 xor eax, esp
// 008c8437  50                   push eax
// 008c8438  8d44240c             lea eax, [esp + 0xc]
// 008c843c  64a300000000         mov dword ptr fs:[0], eax
// 008c8442  8bf1                 mov esi, ecx
// 008c8444  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c8447  394654               cmp dword ptr [esi + 0x54], eax
// 008c844a  743d                 je 0x8c8489
// 008c844c  6aff                 push -1
// 008c844e  50                   push eax
// 008c844f  8d442410             lea eax, [esp + 0x10]
// 008c8453  50                   push eax
// 008c8454  e8c7f8ffff           call 0x8c7d20
// 008c8459  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c845c  6a00                 push 0
// 008c845e  51                   push ecx
// 008c845f  8d4c2410             lea ecx, [esp + 0x10]
// 008c8463  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008c846b  ff1580de9800         call dword ptr [0x98de80]
// 008c8471  50                   push eax
// 008c8472  8bce                 mov ecx, esi
// 008c8474  e847f7ffff           call 0x8c7bc0
// 008c8479  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c847c  8d4c2408             lea ecx, [esp + 8]
// 008c8480  895658               mov dword ptr [esi + 0x58], edx
// 008c8483  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8489  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c848d  64890d00000000       mov dword ptr fs:[0], ecx
// 008c8494  59                   pop ecx
// 008c8495  5e                   pop esi
// 008c8496  83c410               add esp, 0x10
// 008c8499  c3                   ret 
// copied from an identical function in another client (function ?MaskDeleteSel@?$CXTMaskEditT@VCEdit@@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp