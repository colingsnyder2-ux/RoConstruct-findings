// roc 2009-12 008673a0  unit: CXTPPropertyGridItemColor  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008673a0
//
// 008673a0  6aff                 push -1
// 008673a2  6888f59500           push 0x95f588
// 008673a7  64a100000000         mov eax, dword ptr fs:[0]
// 008673ad  50                   push eax
// 008673ae  51                   push ecx
// 008673af  56                   push esi
// 008673b0  a10052b600           mov eax, dword ptr [0xb65200]
// 008673b5  33c4                 xor eax, esp
// 008673b7  50                   push eax
// 008673b8  8d44240c             lea eax, [esp + 0xc]
// 008673bc  64a300000000         mov dword ptr fs:[0], eax
// 008673c2  8bf1                 mov esi, ecx
// 008673c4  89742408             mov dword ptr [esp + 8], esi
// 008673c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008673cc  6a00                 push 0
// 008673ce  6a00                 push 0
// 008673d0  50                   push eax
// 008673d1  e81af9ffff           call 0x866cf0
// 008673d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008673da  8b542420             mov edx, dword ptr [esp + 0x20]
// 008673de  898e10010000         mov dword ptr [esi + 0x110], ecx
// 008673e4  52                   push edx
// 008673e5  8bce                 mov ecx, esi
// 008673e7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008673ef  c706a4ec9f00         mov dword ptr [esi], 0x9feca4
// 008673f5  c7462044ec9f00       mov dword ptr [esi + 0x20], 0x9fec44
// 008673fc  e8effdffff           call 0x8671f0
// 00867401  8d86a4000000         lea eax, [esi + 0xa4]
// 00867407  50                   push eax
// 00867408  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0086740e  c7868c00000003000000 mov dword ptr [esi + 0x8c], 3
// 00867418  ff1538d59800         call dword ptr [0x98d538]
// 0086741e  c7861401000002000000 mov dword ptr [esi + 0x114], 2
// 00867428  8bc6                 mov eax, esi
// 0086742a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086742e  64890d00000000       mov dword ptr fs:[0], ecx
// 00867435  59                   pop ecx
// 00867436  5e                   pop esi
// 00867437  83c410               add esp, 0x10
// 0086743a  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPPropertyGridItemColor@@QAE@PBDKPAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp