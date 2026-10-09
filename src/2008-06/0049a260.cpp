// roc 2008-06 0049a260  unit: RBX::Network::VClient::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a260
//
// 0049a260  6aff                 push -1
// 0049a262  68a9677c00           push 0x7c67a9
// 0049a267  64a100000000         mov eax, dword ptr fs:[0]
// 0049a26d  50                   push eax
// 0049a26e  64892500000000       mov dword ptr fs:[0], esp
// 0049a275  83ec0c               sub esp, 0xc
// 0049a278  8d442404             lea eax, [esp + 4]
// 0049a27c  50                   push eax
// 0049a27d  c744240400000000     mov dword ptr [esp + 4], 0
// 0049a285  e856ffffff           call 0x49a1e0
// 0049a28a  8b08                 mov ecx, dword ptr [eax]
// 0049a28c  83c404               add esp, 4
// 0049a28f  85c9                 test ecx, ecx
// 0049a291  7405                 je 0x49a298
// 0049a293  83c110               add ecx, 0x10
// 0049a296  eb02                 jmp 0x49a29a
// 0049a298  33c9                 xor ecx, ecx
// 0049a29a  56                   push esi
// 0049a29b  57                   push edi
// 0049a29c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0049a2a0  890f                 mov dword ptr [edi], ecx
// 0049a2a2  8b4004               mov eax, dword ptr [eax + 4]
// 0049a2a5  894704               mov dword ptr [edi + 4], eax
// 0049a2a8  85c0                 test eax, eax
// 0049a2aa  740c                 je 0x49a2b8
// 0049a2ac  83c004               add eax, 4
// 0049a2af  b901000000           mov ecx, 1
// 0049a2b4  f00fc108             lock xadd dword ptr [eax], ecx
// 0049a2b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049a2bc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0049a2c4  c744240801000000     mov dword ptr [esp + 8], 1
// 0049a2cc  85f6                 test esi, esi
// 0049a2ce  742a                 je 0x49a2fa
// 0049a2d0  8d5604               lea edx, [esi + 4]
// 0049a2d3  83c8ff               or eax, 0xffffffff
// 0049a2d6  f00fc102             lock xadd dword ptr [edx], eax
// 0049a2da  751e                 jne 0x49a2fa
// 0049a2dc  8b16                 mov edx, dword ptr [esi]
// 0049a2de  8b4204               mov eax, dword ptr [edx + 4]
// 0049a2e1  8bce                 mov ecx, esi
// 0049a2e3  ffd0                 call eax
// 0049a2e5  8d4e08               lea ecx, [esi + 8]
// 0049a2e8  83caff               or edx, 0xffffffff
// 0049a2eb  f00fc111             lock xadd dword ptr [ecx], edx
// 0049a2ef  7509                 jne 0x49a2fa
// 0049a2f1  8b06                 mov eax, dword ptr [esi]
// 0049a2f3  8b5008               mov edx, dword ptr [eax + 8]
// 0049a2f6  8bce                 mov ecx, esi
// 0049a2f8  ffd2                 call edx
// 0049a2fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049a2fe  8bc7                 mov eax, edi
// 0049a300  5f                   pop edi
// 0049a301  5e                   pop esi
// 0049a302  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a309  83c418               add esp, 0x18
// 0049a30c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
