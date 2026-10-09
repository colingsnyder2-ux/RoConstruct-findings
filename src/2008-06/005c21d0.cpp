// roc 2008-06 005c21d0  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c21d0
//
// 005c21d0  6aff                 push -1
// 005c21d2  68a9677c00           push 0x7c67a9
// 005c21d7  64a100000000         mov eax, dword ptr fs:[0]
// 005c21dd  50                   push eax
// 005c21de  64892500000000       mov dword ptr fs:[0], esp
// 005c21e5  83ec0c               sub esp, 0xc
// 005c21e8  8d442404             lea eax, [esp + 4]
// 005c21ec  50                   push eax
// 005c21ed  c744240400000000     mov dword ptr [esp + 4], 0
// 005c21f5  e856ffffff           call 0x5c2150
// 005c21fa  8b08                 mov ecx, dword ptr [eax]
// 005c21fc  83c404               add esp, 4
// 005c21ff  85c9                 test ecx, ecx
// 005c2201  7405                 je 0x5c2208
// 005c2203  83c110               add ecx, 0x10
// 005c2206  eb02                 jmp 0x5c220a
// 005c2208  33c9                 xor ecx, ecx
// 005c220a  56                   push esi
// 005c220b  57                   push edi
// 005c220c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c2210  890f                 mov dword ptr [edi], ecx
// 005c2212  8b4004               mov eax, dword ptr [eax + 4]
// 005c2215  894704               mov dword ptr [edi + 4], eax
// 005c2218  85c0                 test eax, eax
// 005c221a  740c                 je 0x5c2228
// 005c221c  83c004               add eax, 4
// 005c221f  b901000000           mov ecx, 1
// 005c2224  f00fc108             lock xadd dword ptr [eax], ecx
// 005c2228  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c222c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c2234  c744240801000000     mov dword ptr [esp + 8], 1
// 005c223c  85f6                 test esi, esi
// 005c223e  742a                 je 0x5c226a
// 005c2240  8d5604               lea edx, [esi + 4]
// 005c2243  83c8ff               or eax, 0xffffffff
// 005c2246  f00fc102             lock xadd dword ptr [edx], eax
// 005c224a  751e                 jne 0x5c226a
// 005c224c  8b16                 mov edx, dword ptr [esi]
// 005c224e  8b4204               mov eax, dword ptr [edx + 4]
// 005c2251  8bce                 mov ecx, esi
// 005c2253  ffd0                 call eax
// 005c2255  8d4e08               lea ecx, [esi + 8]
// 005c2258  83caff               or edx, 0xffffffff
// 005c225b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c225f  7509                 jne 0x5c226a
// 005c2261  8b06                 mov eax, dword ptr [esi]
// 005c2263  8b5008               mov edx, dword ptr [eax + 8]
// 005c2266  8bce                 mov ecx, esi
// 005c2268  ffd2                 call edx
// 005c226a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c226e  8bc7                 mov eax, edi
// 005c2270  5f                   pop edi
// 005c2271  5e                   pop esi
// 005c2272  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2279  83c418               add esp, 0x18
// 005c227c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
