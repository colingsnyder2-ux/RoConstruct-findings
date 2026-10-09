// roc 2008-06 0048f510  unit: RBX::VShirtGraphic::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f510
//
// 0048f510  6aff                 push -1
// 0048f512  68a9677c00           push 0x7c67a9
// 0048f517  64a100000000         mov eax, dword ptr fs:[0]
// 0048f51d  50                   push eax
// 0048f51e  64892500000000       mov dword ptr fs:[0], esp
// 0048f525  83ec0c               sub esp, 0xc
// 0048f528  8d442404             lea eax, [esp + 4]
// 0048f52c  50                   push eax
// 0048f52d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048f535  e856ffffff           call 0x48f490
// 0048f53a  8b08                 mov ecx, dword ptr [eax]
// 0048f53c  83c404               add esp, 4
// 0048f53f  85c9                 test ecx, ecx
// 0048f541  7405                 je 0x48f548
// 0048f543  83c110               add ecx, 0x10
// 0048f546  eb02                 jmp 0x48f54a
// 0048f548  33c9                 xor ecx, ecx
// 0048f54a  56                   push esi
// 0048f54b  57                   push edi
// 0048f54c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048f550  890f                 mov dword ptr [edi], ecx
// 0048f552  8b4004               mov eax, dword ptr [eax + 4]
// 0048f555  894704               mov dword ptr [edi + 4], eax
// 0048f558  85c0                 test eax, eax
// 0048f55a  740c                 je 0x48f568
// 0048f55c  83c004               add eax, 4
// 0048f55f  b901000000           mov ecx, 1
// 0048f564  f00fc108             lock xadd dword ptr [eax], ecx
// 0048f568  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048f56c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048f574  c744240801000000     mov dword ptr [esp + 8], 1
// 0048f57c  85f6                 test esi, esi
// 0048f57e  742a                 je 0x48f5aa
// 0048f580  8d5604               lea edx, [esi + 4]
// 0048f583  83c8ff               or eax, 0xffffffff
// 0048f586  f00fc102             lock xadd dword ptr [edx], eax
// 0048f58a  751e                 jne 0x48f5aa
// 0048f58c  8b16                 mov edx, dword ptr [esi]
// 0048f58e  8b4204               mov eax, dword ptr [edx + 4]
// 0048f591  8bce                 mov ecx, esi
// 0048f593  ffd0                 call eax
// 0048f595  8d4e08               lea ecx, [esi + 8]
// 0048f598  83caff               or edx, 0xffffffff
// 0048f59b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f59f  7509                 jne 0x48f5aa
// 0048f5a1  8b06                 mov eax, dword ptr [esi]
// 0048f5a3  8b5008               mov edx, dword ptr [eax + 8]
// 0048f5a6  8bce                 mov ecx, esi
// 0048f5a8  ffd2                 call edx
// 0048f5aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f5ae  8bc7                 mov eax, edi
// 0048f5b0  5f                   pop edi
// 0048f5b1  5e                   pop esi
// 0048f5b2  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f5b9  83c418               add esp, 0x18
// 0048f5bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
