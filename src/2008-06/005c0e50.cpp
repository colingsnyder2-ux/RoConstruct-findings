// roc 2008-06 005c0e50  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0e50
//
// 005c0e50  6aff                 push -1
// 005c0e52  68a9677c00           push 0x7c67a9
// 005c0e57  64a100000000         mov eax, dword ptr fs:[0]
// 005c0e5d  50                   push eax
// 005c0e5e  64892500000000       mov dword ptr fs:[0], esp
// 005c0e65  83ec0c               sub esp, 0xc
// 005c0e68  8d442404             lea eax, [esp + 4]
// 005c0e6c  50                   push eax
// 005c0e6d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c0e75  e856ffffff           call 0x5c0dd0
// 005c0e7a  8b08                 mov ecx, dword ptr [eax]
// 005c0e7c  83c404               add esp, 4
// 005c0e7f  85c9                 test ecx, ecx
// 005c0e81  7405                 je 0x5c0e88
// 005c0e83  83c110               add ecx, 0x10
// 005c0e86  eb02                 jmp 0x5c0e8a
// 005c0e88  33c9                 xor ecx, ecx
// 005c0e8a  56                   push esi
// 005c0e8b  57                   push edi
// 005c0e8c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c0e90  890f                 mov dword ptr [edi], ecx
// 005c0e92  8b4004               mov eax, dword ptr [eax + 4]
// 005c0e95  894704               mov dword ptr [edi + 4], eax
// 005c0e98  85c0                 test eax, eax
// 005c0e9a  740c                 je 0x5c0ea8
// 005c0e9c  83c004               add eax, 4
// 005c0e9f  b901000000           mov ecx, 1
// 005c0ea4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c0ea8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c0eac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c0eb4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c0ebc  85f6                 test esi, esi
// 005c0ebe  742a                 je 0x5c0eea
// 005c0ec0  8d5604               lea edx, [esi + 4]
// 005c0ec3  83c8ff               or eax, 0xffffffff
// 005c0ec6  f00fc102             lock xadd dword ptr [edx], eax
// 005c0eca  751e                 jne 0x5c0eea
// 005c0ecc  8b16                 mov edx, dword ptr [esi]
// 005c0ece  8b4204               mov eax, dword ptr [edx + 4]
// 005c0ed1  8bce                 mov ecx, esi
// 005c0ed3  ffd0                 call eax
// 005c0ed5  8d4e08               lea ecx, [esi + 8]
// 005c0ed8  83caff               or edx, 0xffffffff
// 005c0edb  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0edf  7509                 jne 0x5c0eea
// 005c0ee1  8b06                 mov eax, dword ptr [esi]
// 005c0ee3  8b5008               mov edx, dword ptr [eax + 8]
// 005c0ee6  8bce                 mov ecx, esi
// 005c0ee8  ffd2                 call edx
// 005c0eea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c0eee  8bc7                 mov eax, edi
// 005c0ef0  5f                   pop edi
// 005c0ef1  5e                   pop esi
// 005c0ef2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0ef9  83c418               add esp, 0x18
// 005c0efc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
