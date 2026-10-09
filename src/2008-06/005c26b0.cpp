// roc 2008-06 005c26b0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c26b0
//
// 005c26b0  6aff                 push -1
// 005c26b2  68a9677c00           push 0x7c67a9
// 005c26b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c26bd  50                   push eax
// 005c26be  64892500000000       mov dword ptr fs:[0], esp
// 005c26c5  83ec0c               sub esp, 0xc
// 005c26c8  8d442404             lea eax, [esp + 4]
// 005c26cc  50                   push eax
// 005c26cd  c744240400000000     mov dword ptr [esp + 4], 0
// 005c26d5  e856ffffff           call 0x5c2630
// 005c26da  8b08                 mov ecx, dword ptr [eax]
// 005c26dc  83c404               add esp, 4
// 005c26df  85c9                 test ecx, ecx
// 005c26e1  7405                 je 0x5c26e8
// 005c26e3  83c110               add ecx, 0x10
// 005c26e6  eb02                 jmp 0x5c26ea
// 005c26e8  33c9                 xor ecx, ecx
// 005c26ea  56                   push esi
// 005c26eb  57                   push edi
// 005c26ec  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c26f0  890f                 mov dword ptr [edi], ecx
// 005c26f2  8b4004               mov eax, dword ptr [eax + 4]
// 005c26f5  894704               mov dword ptr [edi + 4], eax
// 005c26f8  85c0                 test eax, eax
// 005c26fa  740c                 je 0x5c2708
// 005c26fc  83c004               add eax, 4
// 005c26ff  b901000000           mov ecx, 1
// 005c2704  f00fc108             lock xadd dword ptr [eax], ecx
// 005c2708  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c270c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c2714  c744240801000000     mov dword ptr [esp + 8], 1
// 005c271c  85f6                 test esi, esi
// 005c271e  742a                 je 0x5c274a
// 005c2720  8d5604               lea edx, [esi + 4]
// 005c2723  83c8ff               or eax, 0xffffffff
// 005c2726  f00fc102             lock xadd dword ptr [edx], eax
// 005c272a  751e                 jne 0x5c274a
// 005c272c  8b16                 mov edx, dword ptr [esi]
// 005c272e  8b4204               mov eax, dword ptr [edx + 4]
// 005c2731  8bce                 mov ecx, esi
// 005c2733  ffd0                 call eax
// 005c2735  8d4e08               lea ecx, [esi + 8]
// 005c2738  83caff               or edx, 0xffffffff
// 005c273b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c273f  7509                 jne 0x5c274a
// 005c2741  8b06                 mov eax, dword ptr [esi]
// 005c2743  8b5008               mov edx, dword ptr [eax + 8]
// 005c2746  8bce                 mov ecx, esi
// 005c2748  ffd2                 call edx
// 005c274a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c274e  8bc7                 mov eax, edi
// 005c2750  5f                   pop edi
// 005c2751  5e                   pop esi
// 005c2752  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2759  83c418               add esp, 0x18
// 005c275c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
