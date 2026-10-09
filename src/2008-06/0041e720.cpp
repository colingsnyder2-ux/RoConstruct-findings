// roc 2008-06 0041e720  unit: RBX::VDecal::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e720
//
// 0041e720  6aff                 push -1
// 0041e722  68a9677c00           push 0x7c67a9
// 0041e727  64a100000000         mov eax, dword ptr fs:[0]
// 0041e72d  50                   push eax
// 0041e72e  64892500000000       mov dword ptr fs:[0], esp
// 0041e735  83ec0c               sub esp, 0xc
// 0041e738  8d442404             lea eax, [esp + 4]
// 0041e73c  50                   push eax
// 0041e73d  c744240400000000     mov dword ptr [esp + 4], 0
// 0041e745  e886fdffff           call 0x41e4d0
// 0041e74a  8b08                 mov ecx, dword ptr [eax]
// 0041e74c  83c404               add esp, 4
// 0041e74f  85c9                 test ecx, ecx
// 0041e751  7405                 je 0x41e758
// 0041e753  83c110               add ecx, 0x10
// 0041e756  eb02                 jmp 0x41e75a
// 0041e758  33c9                 xor ecx, ecx
// 0041e75a  56                   push esi
// 0041e75b  57                   push edi
// 0041e75c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041e760  890f                 mov dword ptr [edi], ecx
// 0041e762  8b4004               mov eax, dword ptr [eax + 4]
// 0041e765  894704               mov dword ptr [edi + 4], eax
// 0041e768  85c0                 test eax, eax
// 0041e76a  740c                 je 0x41e778
// 0041e76c  83c004               add eax, 4
// 0041e76f  b901000000           mov ecx, 1
// 0041e774  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e778  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041e77c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041e784  c744240801000000     mov dword ptr [esp + 8], 1
// 0041e78c  85f6                 test esi, esi
// 0041e78e  742a                 je 0x41e7ba
// 0041e790  8d5604               lea edx, [esi + 4]
// 0041e793  83c8ff               or eax, 0xffffffff
// 0041e796  f00fc102             lock xadd dword ptr [edx], eax
// 0041e79a  751e                 jne 0x41e7ba
// 0041e79c  8b16                 mov edx, dword ptr [esi]
// 0041e79e  8b4204               mov eax, dword ptr [edx + 4]
// 0041e7a1  8bce                 mov ecx, esi
// 0041e7a3  ffd0                 call eax
// 0041e7a5  8d4e08               lea ecx, [esi + 8]
// 0041e7a8  83caff               or edx, 0xffffffff
// 0041e7ab  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e7af  7509                 jne 0x41e7ba
// 0041e7b1  8b06                 mov eax, dword ptr [esi]
// 0041e7b3  8b5008               mov edx, dword ptr [eax + 8]
// 0041e7b6  8bce                 mov ecx, esi
// 0041e7b8  ffd2                 call edx
// 0041e7ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041e7be  8bc7                 mov eax, edi
// 0041e7c0  5f                   pop edi
// 0041e7c1  5e                   pop esi
// 0041e7c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e7c9  83c418               add esp, 0x18
// 0041e7cc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
