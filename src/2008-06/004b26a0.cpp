// roc 2008-06 004b26a0  unit: RBX::VWeld::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b26a0
//
// 004b26a0  6aff                 push -1
// 004b26a2  68a9677c00           push 0x7c67a9
// 004b26a7  64a100000000         mov eax, dword ptr fs:[0]
// 004b26ad  50                   push eax
// 004b26ae  64892500000000       mov dword ptr fs:[0], esp
// 004b26b5  83ec0c               sub esp, 0xc
// 004b26b8  8d442404             lea eax, [esp + 4]
// 004b26bc  50                   push eax
// 004b26bd  c744240400000000     mov dword ptr [esp + 4], 0
// 004b26c5  e856ffffff           call 0x4b2620
// 004b26ca  8b08                 mov ecx, dword ptr [eax]
// 004b26cc  83c404               add esp, 4
// 004b26cf  85c9                 test ecx, ecx
// 004b26d1  7405                 je 0x4b26d8
// 004b26d3  83c110               add ecx, 0x10
// 004b26d6  eb02                 jmp 0x4b26da
// 004b26d8  33c9                 xor ecx, ecx
// 004b26da  56                   push esi
// 004b26db  57                   push edi
// 004b26dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b26e0  890f                 mov dword ptr [edi], ecx
// 004b26e2  8b4004               mov eax, dword ptr [eax + 4]
// 004b26e5  894704               mov dword ptr [edi + 4], eax
// 004b26e8  85c0                 test eax, eax
// 004b26ea  740c                 je 0x4b26f8
// 004b26ec  83c004               add eax, 4
// 004b26ef  b901000000           mov ecx, 1
// 004b26f4  f00fc108             lock xadd dword ptr [eax], ecx
// 004b26f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b26fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2704  c744240801000000     mov dword ptr [esp + 8], 1
// 004b270c  85f6                 test esi, esi
// 004b270e  742a                 je 0x4b273a
// 004b2710  8d5604               lea edx, [esi + 4]
// 004b2713  83c8ff               or eax, 0xffffffff
// 004b2716  f00fc102             lock xadd dword ptr [edx], eax
// 004b271a  751e                 jne 0x4b273a
// 004b271c  8b16                 mov edx, dword ptr [esi]
// 004b271e  8b4204               mov eax, dword ptr [edx + 4]
// 004b2721  8bce                 mov ecx, esi
// 004b2723  ffd0                 call eax
// 004b2725  8d4e08               lea ecx, [esi + 8]
// 004b2728  83caff               or edx, 0xffffffff
// 004b272b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b272f  7509                 jne 0x4b273a
// 004b2731  8b06                 mov eax, dword ptr [esi]
// 004b2733  8b5008               mov edx, dword ptr [eax + 8]
// 004b2736  8bce                 mov ecx, esi
// 004b2738  ffd2                 call edx
// 004b273a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b273e  8bc7                 mov eax, edi
// 004b2740  5f                   pop edi
// 004b2741  5e                   pop esi
// 004b2742  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2749  83c418               add esp, 0x18
// 004b274c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
