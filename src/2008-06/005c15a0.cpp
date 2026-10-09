// roc 2008-06 005c15a0  unit: RBX::VForceField::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c15a0
//
// 005c15a0  6aff                 push -1
// 005c15a2  68a9677c00           push 0x7c67a9
// 005c15a7  64a100000000         mov eax, dword ptr fs:[0]
// 005c15ad  50                   push eax
// 005c15ae  64892500000000       mov dword ptr fs:[0], esp
// 005c15b5  83ec0c               sub esp, 0xc
// 005c15b8  8d442404             lea eax, [esp + 4]
// 005c15bc  50                   push eax
// 005c15bd  c744240400000000     mov dword ptr [esp + 4], 0
// 005c15c5  e856ffffff           call 0x5c1520
// 005c15ca  8b08                 mov ecx, dword ptr [eax]
// 005c15cc  83c404               add esp, 4
// 005c15cf  85c9                 test ecx, ecx
// 005c15d1  7405                 je 0x5c15d8
// 005c15d3  83c110               add ecx, 0x10
// 005c15d6  eb02                 jmp 0x5c15da
// 005c15d8  33c9                 xor ecx, ecx
// 005c15da  56                   push esi
// 005c15db  57                   push edi
// 005c15dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c15e0  890f                 mov dword ptr [edi], ecx
// 005c15e2  8b4004               mov eax, dword ptr [eax + 4]
// 005c15e5  894704               mov dword ptr [edi + 4], eax
// 005c15e8  85c0                 test eax, eax
// 005c15ea  740c                 je 0x5c15f8
// 005c15ec  83c004               add eax, 4
// 005c15ef  b901000000           mov ecx, 1
// 005c15f4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c15f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c15fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1604  c744240801000000     mov dword ptr [esp + 8], 1
// 005c160c  85f6                 test esi, esi
// 005c160e  742a                 je 0x5c163a
// 005c1610  8d5604               lea edx, [esi + 4]
// 005c1613  83c8ff               or eax, 0xffffffff
// 005c1616  f00fc102             lock xadd dword ptr [edx], eax
// 005c161a  751e                 jne 0x5c163a
// 005c161c  8b16                 mov edx, dword ptr [esi]
// 005c161e  8b4204               mov eax, dword ptr [edx + 4]
// 005c1621  8bce                 mov ecx, esi
// 005c1623  ffd0                 call eax
// 005c1625  8d4e08               lea ecx, [esi + 8]
// 005c1628  83caff               or edx, 0xffffffff
// 005c162b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c162f  7509                 jne 0x5c163a
// 005c1631  8b06                 mov eax, dword ptr [esi]
// 005c1633  8b5008               mov edx, dword ptr [eax + 8]
// 005c1636  8bce                 mov ecx, esi
// 005c1638  ffd2                 call edx
// 005c163a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c163e  8bc7                 mov eax, edi
// 005c1640  5f                   pop edi
// 005c1641  5e                   pop esi
// 005c1642  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1649  83c418               add esp, 0x18
// 005c164c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
