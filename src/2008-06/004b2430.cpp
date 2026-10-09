// roc 2008-06 004b2430  unit: RBX::VSnap::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2430
//
// 004b2430  6aff                 push -1
// 004b2432  68a9677c00           push 0x7c67a9
// 004b2437  64a100000000         mov eax, dword ptr fs:[0]
// 004b243d  50                   push eax
// 004b243e  64892500000000       mov dword ptr fs:[0], esp
// 004b2445  83ec0c               sub esp, 0xc
// 004b2448  8d442404             lea eax, [esp + 4]
// 004b244c  50                   push eax
// 004b244d  c744240400000000     mov dword ptr [esp + 4], 0
// 004b2455  e856ffffff           call 0x4b23b0
// 004b245a  8b08                 mov ecx, dword ptr [eax]
// 004b245c  83c404               add esp, 4
// 004b245f  85c9                 test ecx, ecx
// 004b2461  7405                 je 0x4b2468
// 004b2463  83c110               add ecx, 0x10
// 004b2466  eb02                 jmp 0x4b246a
// 004b2468  33c9                 xor ecx, ecx
// 004b246a  56                   push esi
// 004b246b  57                   push edi
// 004b246c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b2470  890f                 mov dword ptr [edi], ecx
// 004b2472  8b4004               mov eax, dword ptr [eax + 4]
// 004b2475  894704               mov dword ptr [edi + 4], eax
// 004b2478  85c0                 test eax, eax
// 004b247a  740c                 je 0x4b2488
// 004b247c  83c004               add eax, 4
// 004b247f  b901000000           mov ecx, 1
// 004b2484  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2488  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b248c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2494  c744240801000000     mov dword ptr [esp + 8], 1
// 004b249c  85f6                 test esi, esi
// 004b249e  742a                 je 0x4b24ca
// 004b24a0  8d5604               lea edx, [esi + 4]
// 004b24a3  83c8ff               or eax, 0xffffffff
// 004b24a6  f00fc102             lock xadd dword ptr [edx], eax
// 004b24aa  751e                 jne 0x4b24ca
// 004b24ac  8b16                 mov edx, dword ptr [esi]
// 004b24ae  8b4204               mov eax, dword ptr [edx + 4]
// 004b24b1  8bce                 mov ecx, esi
// 004b24b3  ffd0                 call eax
// 004b24b5  8d4e08               lea ecx, [esi + 8]
// 004b24b8  83caff               or edx, 0xffffffff
// 004b24bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004b24bf  7509                 jne 0x4b24ca
// 004b24c1  8b06                 mov eax, dword ptr [esi]
// 004b24c3  8b5008               mov edx, dword ptr [eax + 8]
// 004b24c6  8bce                 mov ecx, esi
// 004b24c8  ffd2                 call edx
// 004b24ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b24ce  8bc7                 mov eax, edi
// 004b24d0  5f                   pop edi
// 004b24d1  5e                   pop esi
// 004b24d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b24d9  83c418               add esp, 0x18
// 004b24dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
