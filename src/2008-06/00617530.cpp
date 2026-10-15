// roc 2008-06 00617530  unit: RBX::VInstance::?$FilteredSelection  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617530
//
// 00617530  64a100000000         mov eax, dword ptr fs:[0]
// 00617536  6aff                 push -1
// 00617538  6868917d00           push 0x7d9168
// 0061753d  50                   push eax
// 0061753e  64892500000000       mov dword ptr fs:[0], esp
// 00617545  83ec08               sub esp, 8
// 00617548  56                   push esi
// 00617549  8bf1                 mov esi, ecx
// 0061754b  837e0400             cmp dword ptr [esi + 4], 0
// 0061754f  0f8580000000         jne 0x6175d5
// 00617555  8b06                 mov eax, dword ptr [esi]
// 00617557  57                   push edi
// 00617558  50                   push eax
// 00617559  e882ffffff           call 0x6174e0
// 0061755e  50                   push eax
// 0061755f  8d4c2410             lea ecx, [esp + 0x10]
// 00617563  51                   push ecx
// 00617564  e8d7140000           call 0x618a40
// 00617569  83c40c               add esp, 0xc
// 0061756c  8b10                 mov edx, dword ptr [eax]
// 0061756e  83c004               add eax, 4
// 00617571  50                   push eax
// 00617572  8d4e08               lea ecx, [esi + 8]
// 00617575  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061757d  895604               mov dword ptr [esi + 4], edx
// 00617580  e82bb0deff           call 0x4025b0
// 00617585  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00617589  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00617591  85ff                 test edi, edi
// 00617593  742a                 je 0x6175bf
// 00617595  8d4704               lea eax, [edi + 4]
// 00617598  83c9ff               or ecx, 0xffffffff
// 0061759b  f00fc108             lock xadd dword ptr [eax], ecx
// 0061759f  751e                 jne 0x6175bf
// 006175a1  8b17                 mov edx, dword ptr [edi]
// 006175a3  8b4204               mov eax, dword ptr [edx + 4]
// 006175a6  8bcf                 mov ecx, edi
// 006175a8  ffd0                 call eax
// 006175aa  8d4f08               lea ecx, [edi + 8]
// 006175ad  83caff               or edx, 0xffffffff
// 006175b0  f00fc111             lock xadd dword ptr [ecx], edx
// 006175b4  7509                 jne 0x6175bf
// 006175b6  8b07                 mov eax, dword ptr [edi]
// 006175b8  8b5008               mov edx, dword ptr [eax + 8]
// 006175bb  8bcf                 mov ecx, edi
// 006175bd  ffd2                 call edx
// 006175bf  8b4604               mov eax, dword ptr [esi + 4]
// 006175c2  5f                   pop edi
// 006175c3  5e                   pop esi
// 006175c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006175c8  64890d00000000       mov dword ptr fs:[0], ecx
// 006175cf  83c414               add esp, 0x14
// 006175d2  c20400               ret 4
// 006175d5  8b4604               mov eax, dword ptr [esi + 4]
// 006175d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006175dc  5e                   pop esi
// 006175dd  64890d00000000       mov dword ptr fs:[0], ecx
// 006175e4  83c414               add esp, 0x14
// 006175e7  c20400               ret 4
// library rbxgs/roc_unit_0de8ae1234efd814.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0de8ae1234efd814.cpp
