// roc 2008-06 0063a3f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a3f0
//
// 0063a3f0  6aff                 push -1
// 0063a3f2  68a9677c00           push 0x7c67a9
// 0063a3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a3fd  50                   push eax
// 0063a3fe  64892500000000       mov dword ptr fs:[0], esp
// 0063a405  83ec0c               sub esp, 0xc
// 0063a408  8d442404             lea eax, [esp + 4]
// 0063a40c  50                   push eax
// 0063a40d  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a415  e866f6ffff           call 0x639a80
// 0063a41a  8b08                 mov ecx, dword ptr [eax]
// 0063a41c  83c404               add esp, 4
// 0063a41f  85c9                 test ecx, ecx
// 0063a421  7405                 je 0x63a428
// 0063a423  83c110               add ecx, 0x10
// 0063a426  eb02                 jmp 0x63a42a
// 0063a428  33c9                 xor ecx, ecx
// 0063a42a  56                   push esi
// 0063a42b  57                   push edi
// 0063a42c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a430  890f                 mov dword ptr [edi], ecx
// 0063a432  8b4004               mov eax, dword ptr [eax + 4]
// 0063a435  894704               mov dword ptr [edi + 4], eax
// 0063a438  85c0                 test eax, eax
// 0063a43a  740c                 je 0x63a448
// 0063a43c  83c004               add eax, 4
// 0063a43f  b901000000           mov ecx, 1
// 0063a444  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a448  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a44c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a454  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a45c  85f6                 test esi, esi
// 0063a45e  742a                 je 0x63a48a
// 0063a460  8d5604               lea edx, [esi + 4]
// 0063a463  83c8ff               or eax, 0xffffffff
// 0063a466  f00fc102             lock xadd dword ptr [edx], eax
// 0063a46a  751e                 jne 0x63a48a
// 0063a46c  8b16                 mov edx, dword ptr [esi]
// 0063a46e  8b4204               mov eax, dword ptr [edx + 4]
// 0063a471  8bce                 mov ecx, esi
// 0063a473  ffd0                 call eax
// 0063a475  8d4e08               lea ecx, [esi + 8]
// 0063a478  83caff               or edx, 0xffffffff
// 0063a47b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a47f  7509                 jne 0x63a48a
// 0063a481  8b06                 mov eax, dword ptr [esi]
// 0063a483  8b5008               mov edx, dword ptr [eax + 8]
// 0063a486  8bce                 mov ecx, esi
// 0063a488  ffd2                 call edx
// 0063a48a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a48e  8bc7                 mov eax, edi
// 0063a490  5f                   pop edi
// 0063a491  5e                   pop esi
// 0063a492  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a499  83c418               add esp, 0x18
// 0063a49c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
