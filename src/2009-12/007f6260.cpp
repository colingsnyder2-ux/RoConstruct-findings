// roc 2009-12 007f6260  unit: CPatchedControlComboBox  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6260
//
// 007f6260  6aff                 push -1
// 007f6262  6899869500           push 0x958699
// 007f6267  64a100000000         mov eax, dword ptr fs:[0]
// 007f626d  50                   push eax
// 007f626e  51                   push ecx
// 007f626f  56                   push esi
// 007f6270  a10052b600           mov eax, dword ptr [0xb65200]
// 007f6275  33c4                 xor eax, esp
// 007f6277  50                   push eax
// 007f6278  8d44240c             lea eax, [esp + 0xc]
// 007f627c  64a300000000         mov dword ptr fs:[0], eax
// 007f6282  8bf1                 mov esi, ecx
// 007f6284  8d44241c             lea eax, [esp + 0x1c]
// 007f6288  50                   push eax
// 007f6289  e812570400           call 0x83b9a0
// 007f628e  85c0                 test eax, eax
// 007f6290  7418                 je 0x7f62aa
// 007f6292  b857000780           mov eax, 0x80070057
// 007f6297  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f629b  64890d00000000       mov dword ptr fs:[0], ecx
// 007f62a2  59                   pop ecx
// 007f62a3  5e                   pop esi
// 007f62a4  83c410               add esp, 0x10
// 007f62a7  c21400               ret 0x14
// 007f62aa  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007f62ad  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007f62b0  8d4ee0               lea ecx, [esi - 0x20]
// 007f62b3  8d442408             lea eax, [esp + 8]
// 007f62b7  50                   push eax
// 007f62b8  ffd2                 call edx
// 007f62ba  8bc8                 mov ecx, eax
// 007f62bc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f62c4  ff156cd69800         call dword ptr [0x98d66c]
// 007f62ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f62ce  8901                 mov dword ptr [ecx], eax
// 007f62d0  8d4c2408             lea ecx, [esp + 8]
// 007f62d4  ff15c0de9800         call dword ptr [0x98dec0]
// 007f62da  33c0                 xor eax, eax
// 007f62dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f62e0  64890d00000000       mov dword ptr fs:[0], ecx
// 007f62e7  59                   pop ecx
// 007f62e8  5e                   pop esi
// 007f62e9  83c410               add esp, 0x10
// 007f62ec  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleDescription@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp