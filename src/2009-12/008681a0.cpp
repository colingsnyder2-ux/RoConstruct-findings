// roc 2009-12 008681a0  unit: CXTPPropertyGridView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008681a0
//
// 008681a0  6aff                 push -1
// 008681a2  68a0f39500           push 0x95f3a0
// 008681a7  64a100000000         mov eax, dword ptr fs:[0]
// 008681ad  50                   push eax
// 008681ae  51                   push ecx
// 008681af  53                   push ebx
// 008681b0  56                   push esi
// 008681b1  57                   push edi
// 008681b2  a10052b600           mov eax, dword ptr [0xb65200]
// 008681b7  33c4                 xor eax, esp
// 008681b9  50                   push eax
// 008681ba  8d442414             lea eax, [esp + 0x14]
// 008681be  64a300000000         mov dword ptr fs:[0], eax
// 008681c4  8bf1                 mov esi, ecx
// 008681c6  89742410             mov dword ptr [esp + 0x10], esi
// 008681ca  8d5e54               lea ebx, [esi + 0x54]
// 008681cd  c7060cf19f00         mov dword ptr [esi], 0x9ff10c
// 008681d3  c703acf09f00         mov dword ptr [ebx], 0x9ff0ac
// 008681d9  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 008681df  8b5068               mov edx, dword ptr [eax + 0x68]
// 008681e2  8dbee8000000         lea edi, [esi + 0xe8]
// 008681e8  8bcf                 mov ecx, edi
// 008681ea  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 008681f2  ffd2                 call edx
// 008681f4  8bce                 mov ecx, esi
// 008681f6  e8e3b6f8ff           call 0x7f38de
// 008681fb  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00868201  e8cae1ffff           call 0x8663d0
// 00868206  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086820c  e8cbbbf8ff           call 0x7f3ddc
// 00868211  8bcf                 mov ecx, edi
// 00868213  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00868218  e8f3f9ffff           call 0x867c10
// 0086821d  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00868223  ff15c0de9800         call dword ptr [0x98dec0]
// 00868229  8bcb                 mov ecx, ebx
// 0086822b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00868230  e80b42fdff           call 0x83c440
// 00868235  8bce                 mov ecx, esi
// 00868237  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0086823f  e8c0e60b00           call 0x926904
// 00868244  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00868248  64890d00000000       mov dword ptr fs:[0], ecx
// 0086824f  59                   pop ecx
// 00868250  5f                   pop edi
// 00868251  5e                   pop esi
// 00868252  5b                   pop ebx
// 00868253  83c410               add esp, 0x10
// 00868256  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridView@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp