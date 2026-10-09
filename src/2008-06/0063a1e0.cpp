// roc 2008-06 0063a1e0  unit: G3D::VVector3::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a1e0
//
// 0063a1e0  6aff                 push -1
// 0063a1e2  68a9677c00           push 0x7c67a9
// 0063a1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a1ed  50                   push eax
// 0063a1ee  64892500000000       mov dword ptr fs:[0], esp
// 0063a1f5  83ec0c               sub esp, 0xc
// 0063a1f8  8d442404             lea eax, [esp + 4]
// 0063a1fc  50                   push eax
// 0063a1fd  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a205  e8f6f6ffff           call 0x639900
// 0063a20a  8b08                 mov ecx, dword ptr [eax]
// 0063a20c  83c404               add esp, 4
// 0063a20f  85c9                 test ecx, ecx
// 0063a211  7405                 je 0x63a218
// 0063a213  83c110               add ecx, 0x10
// 0063a216  eb02                 jmp 0x63a21a
// 0063a218  33c9                 xor ecx, ecx
// 0063a21a  56                   push esi
// 0063a21b  57                   push edi
// 0063a21c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a220  890f                 mov dword ptr [edi], ecx
// 0063a222  8b4004               mov eax, dword ptr [eax + 4]
// 0063a225  894704               mov dword ptr [edi + 4], eax
// 0063a228  85c0                 test eax, eax
// 0063a22a  740c                 je 0x63a238
// 0063a22c  83c004               add eax, 4
// 0063a22f  b901000000           mov ecx, 1
// 0063a234  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a238  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a23c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a244  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a24c  85f6                 test esi, esi
// 0063a24e  742a                 je 0x63a27a
// 0063a250  8d5604               lea edx, [esi + 4]
// 0063a253  83c8ff               or eax, 0xffffffff
// 0063a256  f00fc102             lock xadd dword ptr [edx], eax
// 0063a25a  751e                 jne 0x63a27a
// 0063a25c  8b16                 mov edx, dword ptr [esi]
// 0063a25e  8b4204               mov eax, dword ptr [edx + 4]
// 0063a261  8bce                 mov ecx, esi
// 0063a263  ffd0                 call eax
// 0063a265  8d4e08               lea ecx, [esi + 8]
// 0063a268  83caff               or edx, 0xffffffff
// 0063a26b  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a26f  7509                 jne 0x63a27a
// 0063a271  8b06                 mov eax, dword ptr [esi]
// 0063a273  8b5008               mov edx, dword ptr [eax + 8]
// 0063a276  8bce                 mov ecx, esi
// 0063a278  ffd2                 call edx
// 0063a27a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a27e  8bc7                 mov eax, edi
// 0063a280  5f                   pop edi
// 0063a281  5e                   pop esi
// 0063a282  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a289  83c418               add esp, 0x18
// 0063a28c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
