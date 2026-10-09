// roc 2008-06 0048f2a0  unit: RBX::VSpawnerService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f2a0
//
// 0048f2a0  6aff                 push -1
// 0048f2a2  68a9677c00           push 0x7c67a9
// 0048f2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0048f2ad  50                   push eax
// 0048f2ae  64892500000000       mov dword ptr fs:[0], esp
// 0048f2b5  83ec0c               sub esp, 0xc
// 0048f2b8  8d442404             lea eax, [esp + 4]
// 0048f2bc  50                   push eax
// 0048f2bd  c744240400000000     mov dword ptr [esp + 4], 0
// 0048f2c5  e856ffffff           call 0x48f220
// 0048f2ca  8b08                 mov ecx, dword ptr [eax]
// 0048f2cc  83c404               add esp, 4
// 0048f2cf  85c9                 test ecx, ecx
// 0048f2d1  7405                 je 0x48f2d8
// 0048f2d3  83c110               add ecx, 0x10
// 0048f2d6  eb02                 jmp 0x48f2da
// 0048f2d8  33c9                 xor ecx, ecx
// 0048f2da  56                   push esi
// 0048f2db  57                   push edi
// 0048f2dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048f2e0  890f                 mov dword ptr [edi], ecx
// 0048f2e2  8b4004               mov eax, dword ptr [eax + 4]
// 0048f2e5  894704               mov dword ptr [edi + 4], eax
// 0048f2e8  85c0                 test eax, eax
// 0048f2ea  740c                 je 0x48f2f8
// 0048f2ec  83c004               add eax, 4
// 0048f2ef  b901000000           mov ecx, 1
// 0048f2f4  f00fc108             lock xadd dword ptr [eax], ecx
// 0048f2f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048f2fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048f304  c744240801000000     mov dword ptr [esp + 8], 1
// 0048f30c  85f6                 test esi, esi
// 0048f30e  742a                 je 0x48f33a
// 0048f310  8d5604               lea edx, [esi + 4]
// 0048f313  83c8ff               or eax, 0xffffffff
// 0048f316  f00fc102             lock xadd dword ptr [edx], eax
// 0048f31a  751e                 jne 0x48f33a
// 0048f31c  8b16                 mov edx, dword ptr [esi]
// 0048f31e  8b4204               mov eax, dword ptr [edx + 4]
// 0048f321  8bce                 mov ecx, esi
// 0048f323  ffd0                 call eax
// 0048f325  8d4e08               lea ecx, [esi + 8]
// 0048f328  83caff               or edx, 0xffffffff
// 0048f32b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f32f  7509                 jne 0x48f33a
// 0048f331  8b06                 mov eax, dword ptr [esi]
// 0048f333  8b5008               mov edx, dword ptr [eax + 8]
// 0048f336  8bce                 mov ecx, esi
// 0048f338  ffd2                 call edx
// 0048f33a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f33e  8bc7                 mov eax, edi
// 0048f340  5f                   pop edi
// 0048f341  5e                   pop esi
// 0048f342  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f349  83c418               add esp, 0x18
// 0048f34c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
