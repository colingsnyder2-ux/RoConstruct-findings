// roc 2008-06 0063a290  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a290
//
// 0063a290  6aff                 push -1
// 0063a292  68a9677c00           push 0x7c67a9
// 0063a297  64a100000000         mov eax, dword ptr fs:[0]
// 0063a29d  50                   push eax
// 0063a29e  64892500000000       mov dword ptr fs:[0], esp
// 0063a2a5  83ec0c               sub esp, 0xc
// 0063a2a8  8d442404             lea eax, [esp + 4]
// 0063a2ac  50                   push eax
// 0063a2ad  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a2b5  e8c6f6ffff           call 0x639980
// 0063a2ba  8b08                 mov ecx, dword ptr [eax]
// 0063a2bc  83c404               add esp, 4
// 0063a2bf  85c9                 test ecx, ecx
// 0063a2c1  7405                 je 0x63a2c8
// 0063a2c3  83c110               add ecx, 0x10
// 0063a2c6  eb02                 jmp 0x63a2ca
// 0063a2c8  33c9                 xor ecx, ecx
// 0063a2ca  56                   push esi
// 0063a2cb  57                   push edi
// 0063a2cc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a2d0  890f                 mov dword ptr [edi], ecx
// 0063a2d2  8b4004               mov eax, dword ptr [eax + 4]
// 0063a2d5  894704               mov dword ptr [edi + 4], eax
// 0063a2d8  85c0                 test eax, eax
// 0063a2da  740c                 je 0x63a2e8
// 0063a2dc  83c004               add eax, 4
// 0063a2df  b901000000           mov ecx, 1
// 0063a2e4  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a2e8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a2ec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a2f4  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a2fc  85f6                 test esi, esi
// 0063a2fe  742a                 je 0x63a32a
// 0063a300  8d5604               lea edx, [esi + 4]
// 0063a303  83c8ff               or eax, 0xffffffff
// 0063a306  f00fc102             lock xadd dword ptr [edx], eax
// 0063a30a  751e                 jne 0x63a32a
// 0063a30c  8b16                 mov edx, dword ptr [esi]
// 0063a30e  8b4204               mov eax, dword ptr [edx + 4]
// 0063a311  8bce                 mov ecx, esi
// 0063a313  ffd0                 call eax
// 0063a315  8d4e08               lea ecx, [esi + 8]
// 0063a318  83caff               or edx, 0xffffffff
// 0063a31b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a31f  7509                 jne 0x63a32a
// 0063a321  8b06                 mov eax, dword ptr [esi]
// 0063a323  8b5008               mov edx, dword ptr [eax + 8]
// 0063a326  8bce                 mov ecx, esi
// 0063a328  ffd2                 call edx
// 0063a32a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a32e  8bc7                 mov eax, edi
// 0063a330  5f                   pop edi
// 0063a331  5e                   pop esi
// 0063a332  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a339  83c418               add esp, 0x18
// 0063a33c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
