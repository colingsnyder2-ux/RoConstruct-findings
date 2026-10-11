// roc 2010-06 004b1850  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b1850
//
// 004b1850  6aff                 push -1
// 004b1852  68d8099a00           push 0x9a09d8
// 004b1857  64a100000000         mov eax, dword ptr fs:[0]
// 004b185d  50                   push eax
// 004b185e  64892500000000       mov dword ptr fs:[0], esp
// 004b1865  51                   push ecx
// 004b1866  56                   push esi
// 004b1867  57                   push edi
// 004b1868  8bf9                 mov edi, ecx
// 004b186a  897c2408             mov dword ptr [esp + 8], edi
// 004b186e  8b7720               mov esi, dword ptr [edi + 0x20]
// 004b1871  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b1879  85f6                 test esi, esi
// 004b187b  742a                 je 0x4b18a7
// 004b187d  8d4604               lea eax, [esi + 4]
// 004b1880  83c9ff               or ecx, 0xffffffff
// 004b1883  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1887  751e                 jne 0x4b18a7
// 004b1889  8b16                 mov edx, dword ptr [esi]
// 004b188b  8b4204               mov eax, dword ptr [edx + 4]
// 004b188e  8bce                 mov ecx, esi
// 004b1890  ffd0                 call eax
// 004b1892  8d4e08               lea ecx, [esi + 8]
// 004b1895  83caff               or edx, 0xffffffff
// 004b1898  f00fc111             lock xadd dword ptr [ecx], edx
// 004b189c  7509                 jne 0x4b18a7
// 004b189e  8b06                 mov eax, dword ptr [esi]
// 004b18a0  8b5008               mov edx, dword ptr [eax + 8]
// 004b18a3  8bce                 mov ecx, esi
// 004b18a5  ffd2                 call edx
// 004b18a7  8bcf                 mov ecx, edi
// 004b18a9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b18b1  ff1500a49e00         call dword ptr [0x9ea400]
// 004b18b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b18bb  5f                   pop edi
// 004b18bc  5e                   pop esi
// 004b18bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b18c4  83c410               add esp, 0x10
// 004b18c7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
