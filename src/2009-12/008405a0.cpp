// roc 2009-12 008405a0  unit: CXTPCustomizeOptionsPage  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008405a0
//
// 008405a0  6aff                 push -1
// 008405a2  6899869500           push 0x958699
// 008405a7  64a100000000         mov eax, dword ptr fs:[0]
// 008405ad  50                   push eax
// 008405ae  51                   push ecx
// 008405af  56                   push esi
// 008405b0  a10052b600           mov eax, dword ptr [0xb65200]
// 008405b5  33c4                 xor eax, esp
// 008405b7  50                   push eax
// 008405b8  8d44240c             lea eax, [esp + 0xc]
// 008405bc  64a300000000         mov dword ptr fs:[0], eax
// 008405c2  8bf1                 mov esi, ecx
// 008405c4  8d4c2408             lea ecx, [esp + 8]
// 008405c8  ff1574de9800         call dword ptr [0x98de74]
// 008405ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008405d6  e8c5e20200           call 0x86e8a0
// 008405db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008405df  8b10                 mov edx, dword ptr [eax]
// 008405e1  8b5208               mov edx, dword ptr [edx + 8]
// 008405e4  51                   push ecx
// 008405e5  8d4c240c             lea ecx, [esp + 0xc]
// 008405e9  51                   push ecx
// 008405ea  8bc8                 mov ecx, eax
// 008405ec  ffd2                 call edx
// 008405ee  8d4c2408             lea ecx, [esp + 8]
// 008405f2  ff1580de9800         call dword ptr [0x98de80]
// 008405f8  50                   push eax
// 008405f9  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 008405ff  6a00                 push 0
// 00840601  6843010000           push 0x143
// 00840606  50                   push eax
// 00840607  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084060d  8d4c2408             lea ecx, [esp + 8]
// 00840611  ff15c0de9800         call dword ptr [0x98dec0]
// 00840617  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084061b  64890d00000000       mov dword ptr fs:[0], ecx
// 00840622  59                   pop ecx
// 00840623  5e                   pop esi
// 00840624  83c410               add esp, 0x10
// 00840627  c20400               ret 4
// copied from an identical function in another client (function ?AddComboString@CXTPCustomizeOptionsPage@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeOptionsPage.cpp