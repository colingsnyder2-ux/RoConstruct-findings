// roc 2008-06 00409430  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409430
//
// 00409430  6aff                 push -1
// 00409432  68a9677c00           push 0x7c67a9
// 00409437  64a100000000         mov eax, dword ptr fs:[0]
// 0040943d  50                   push eax
// 0040943e  64892500000000       mov dword ptr fs:[0], esp
// 00409445  83ec0c               sub esp, 0xc
// 00409448  8d442404             lea eax, [esp + 4]
// 0040944c  50                   push eax
// 0040944d  c744240400000000     mov dword ptr [esp + 4], 0
// 00409455  e856ffffff           call 0x4093b0
// 0040945a  8b08                 mov ecx, dword ptr [eax]
// 0040945c  83c404               add esp, 4
// 0040945f  85c9                 test ecx, ecx
// 00409461  7405                 je 0x409468
// 00409463  83c110               add ecx, 0x10
// 00409466  eb02                 jmp 0x40946a
// 00409468  33c9                 xor ecx, ecx
// 0040946a  56                   push esi
// 0040946b  57                   push edi
// 0040946c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00409470  890f                 mov dword ptr [edi], ecx
// 00409472  8b4004               mov eax, dword ptr [eax + 4]
// 00409475  894704               mov dword ptr [edi + 4], eax
// 00409478  85c0                 test eax, eax
// 0040947a  740c                 je 0x409488
// 0040947c  83c004               add eax, 4
// 0040947f  b901000000           mov ecx, 1
// 00409484  f00fc108             lock xadd dword ptr [eax], ecx
// 00409488  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040948c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00409494  c744240801000000     mov dword ptr [esp + 8], 1
// 0040949c  85f6                 test esi, esi
// 0040949e  742a                 je 0x4094ca
// 004094a0  8d5604               lea edx, [esi + 4]
// 004094a3  83c8ff               or eax, 0xffffffff
// 004094a6  f00fc102             lock xadd dword ptr [edx], eax
// 004094aa  751e                 jne 0x4094ca
// 004094ac  8b16                 mov edx, dword ptr [esi]
// 004094ae  8b4204               mov eax, dword ptr [edx + 4]
// 004094b1  8bce                 mov ecx, esi
// 004094b3  ffd0                 call eax
// 004094b5  8d4e08               lea ecx, [esi + 8]
// 004094b8  83caff               or edx, 0xffffffff
// 004094bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004094bf  7509                 jne 0x4094ca
// 004094c1  8b06                 mov eax, dword ptr [esi]
// 004094c3  8b5008               mov edx, dword ptr [eax + 8]
// 004094c6  8bce                 mov ecx, esi
// 004094c8  ffd2                 call edx
// 004094ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004094ce  8bc7                 mov eax, edi
// 004094d0  5f                   pop edi
// 004094d1  5e                   pop esi
// 004094d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004094d9  83c418               add esp, 0x18
// 004094dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
