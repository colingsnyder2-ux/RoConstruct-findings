// roc 2008-06 005c2440  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2440
//
// 005c2440  6aff                 push -1
// 005c2442  68a9677c00           push 0x7c67a9
// 005c2447  64a100000000         mov eax, dword ptr fs:[0]
// 005c244d  50                   push eax
// 005c244e  64892500000000       mov dword ptr fs:[0], esp
// 005c2455  83ec0c               sub esp, 0xc
// 005c2458  8d442404             lea eax, [esp + 4]
// 005c245c  50                   push eax
// 005c245d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c2465  e856ffffff           call 0x5c23c0
// 005c246a  8b08                 mov ecx, dword ptr [eax]
// 005c246c  83c404               add esp, 4
// 005c246f  85c9                 test ecx, ecx
// 005c2471  7405                 je 0x5c2478
// 005c2473  83c110               add ecx, 0x10
// 005c2476  eb02                 jmp 0x5c247a
// 005c2478  33c9                 xor ecx, ecx
// 005c247a  56                   push esi
// 005c247b  57                   push edi
// 005c247c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c2480  890f                 mov dword ptr [edi], ecx
// 005c2482  8b4004               mov eax, dword ptr [eax + 4]
// 005c2485  894704               mov dword ptr [edi + 4], eax
// 005c2488  85c0                 test eax, eax
// 005c248a  740c                 je 0x5c2498
// 005c248c  83c004               add eax, 4
// 005c248f  b901000000           mov ecx, 1
// 005c2494  f00fc108             lock xadd dword ptr [eax], ecx
// 005c2498  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c249c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c24a4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c24ac  85f6                 test esi, esi
// 005c24ae  742a                 je 0x5c24da
// 005c24b0  8d5604               lea edx, [esi + 4]
// 005c24b3  83c8ff               or eax, 0xffffffff
// 005c24b6  f00fc102             lock xadd dword ptr [edx], eax
// 005c24ba  751e                 jne 0x5c24da
// 005c24bc  8b16                 mov edx, dword ptr [esi]
// 005c24be  8b4204               mov eax, dword ptr [edx + 4]
// 005c24c1  8bce                 mov ecx, esi
// 005c24c3  ffd0                 call eax
// 005c24c5  8d4e08               lea ecx, [esi + 8]
// 005c24c8  83caff               or edx, 0xffffffff
// 005c24cb  f00fc111             lock xadd dword ptr [ecx], edx
// 005c24cf  7509                 jne 0x5c24da
// 005c24d1  8b06                 mov eax, dword ptr [esi]
// 005c24d3  8b5008               mov edx, dword ptr [eax + 8]
// 005c24d6  8bce                 mov ecx, esi
// 005c24d8  ffd2                 call edx
// 005c24da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c24de  8bc7                 mov eax, edi
// 005c24e0  5f                   pop edi
// 005c24e1  5e                   pop esi
// 005c24e2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c24e9  83c418               add esp, 0x18
// 005c24ec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
