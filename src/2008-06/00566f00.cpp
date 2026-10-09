// roc 2008-06 00566f00  unit: RBX::VSelection::?$FactoryProduct  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566f00
//
// 00566f00  6aff                 push -1
// 00566f02  68e6f47c00           push 0x7cf4e6
// 00566f07  64a100000000         mov eax, dword ptr fs:[0]
// 00566f0d  50                   push eax
// 00566f0e  64892500000000       mov dword ptr fs:[0], esp
// 00566f15  51                   push ecx
// 00566f16  53                   push ebx
// 00566f17  56                   push esi
// 00566f18  8bf1                 mov esi, ecx
// 00566f1a  89742408             mov dword ptr [esp + 8], esi
// 00566f1e  c706c4ed8200         mov dword ptr [esi], 0x82edc4
// 00566f24  c74610b4ed8200       mov dword ptr [esi + 0x10], 0x82edb4
// 00566f2b  c74614aced8200       mov dword ptr [esi + 0x14], 0x82edac
// 00566f32  c74620a4ed8200       mov dword ptr [esi + 0x20], 0x82eda4
// 00566f39  c7462494ed8200       mov dword ptr [esi + 0x24], 0x82ed94
// 00566f40  c7464484ed8200       mov dword ptr [esi + 0x44], 0x82ed84
// 00566f47  c7466474ed8200       mov dword ptr [esi + 0x64], 0x82ed74
// 00566f4e  c7868400000064ed8200 mov dword ptr [esi + 0x84], 0x82ed64
// 00566f58  c786a400000054ed8200 mov dword ptr [esi + 0xa4], 0x82ed54
// 00566f62  c786c400000044ed8200 mov dword ptr [esi + 0xc4], 0x82ed44
// 00566f6c  c7863001000034ed8200 mov dword ptr [esi + 0x130], 0x82ed34
// 00566f76  c7865001000028ed8200 mov dword ptr [esi + 0x150], 0x82ed28
// 00566f80  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00566f86  33db                 xor ebx, ebx
// 00566f88  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00566f90  3bc3                 cmp eax, ebx
// 00566f92  7409                 je 0x566f9d
// 00566f94  50                   push eax
// 00566f95  e8e0961300           call 0x6a067a
// 00566f9a  83c404               add esp, 4
// 00566f9d  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00566fa3  57                   push edi
// 00566fa4  50                   push eax
// 00566fa5  899e68010000         mov dword ptr [esi + 0x168], ebx
// 00566fab  899e6c010000         mov dword ptr [esi + 0x16c], ebx
// 00566fb1  899e70010000         mov dword ptr [esi + 0x170], ebx
// 00566fb7  e8be961300           call 0x6a067a
// 00566fbc  8bbe58010000         mov edi, dword ptr [esi + 0x158]
// 00566fc2  83c404               add esp, 4
// 00566fc5  3bfb                 cmp edi, ebx
// 00566fc7  742a                 je 0x566ff3
// 00566fc9  8d4704               lea eax, [edi + 4]
// 00566fcc  83c9ff               or ecx, 0xffffffff
// 00566fcf  f00fc108             lock xadd dword ptr [eax], ecx
// 00566fd3  751e                 jne 0x566ff3
// 00566fd5  8b17                 mov edx, dword ptr [edi]
// 00566fd7  8b4204               mov eax, dword ptr [edx + 4]
// 00566fda  8bcf                 mov ecx, edi
// 00566fdc  ffd0                 call eax
// 00566fde  8d4f08               lea ecx, [edi + 8]
// 00566fe1  83caff               or edx, 0xffffffff
// 00566fe4  f00fc111             lock xadd dword ptr [ecx], edx
// 00566fe8  7509                 jne 0x566ff3
// 00566fea  8b07                 mov eax, dword ptr [edi]
// 00566fec  8b5008               mov edx, dword ptr [eax + 8]
// 00566fef  8bcf                 mov ecx, edi
// 00566ff1  ffd2                 call edx
// 00566ff3  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 00566ff9  5f                   pop edi
// 00566ffa  3bc3                 cmp eax, ebx
// 00566ffc  7409                 je 0x567007
// 00566ffe  50                   push eax
// 00566fff  e876961300           call 0x6a067a
// 00567004  83c404               add esp, 4
// 00567007  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0056700d  50                   push eax
// 0056700e  899e40010000         mov dword ptr [esi + 0x140], ebx
// 00567014  899e44010000         mov dword ptr [esi + 0x144], ebx
// 0056701a  899e48010000         mov dword ptr [esi + 0x148], ebx
// 00567020  e855961300           call 0x6a067a
// 00567025  83c404               add esp, 4
// 00567028  8bce                 mov ecx, esi
// 0056702a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00567032  e819f7ffff           call 0x566750
// 00567037  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056703b  5e                   pop esi
// 0056703c  5b                   pop ebx
// 0056703d  64890d00000000       mov dword ptr fs:[0], ecx
// 00567044  83c410               add esp, 0x10
// 00567047  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??1Selection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
