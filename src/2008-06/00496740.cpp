// roc 2008-06 00496740  unit: RBX::Network::Players::Plugin  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496740
//
// 00496740  6aff                 push -1
// 00496742  68496b7c00           push 0x7c6b49
// 00496747  64a100000000         mov eax, dword ptr fs:[0]
// 0049674d  50                   push eax
// 0049674e  64892500000000       mov dword ptr fs:[0], esp
// 00496755  51                   push ecx
// 00496756  56                   push esi
// 00496757  57                   push edi
// 00496758  8bf9                 mov edi, ecx
// 0049675a  897c2408             mov dword ptr [esp + 8], edi
// 0049675e  8b7720               mov esi, dword ptr [edi + 0x20]
// 00496761  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00496769  85f6                 test esi, esi
// 0049676b  742a                 je 0x496797
// 0049676d  8d4604               lea eax, [esi + 4]
// 00496770  83c9ff               or ecx, 0xffffffff
// 00496773  f00fc108             lock xadd dword ptr [eax], ecx
// 00496777  751e                 jne 0x496797
// 00496779  8b16                 mov edx, dword ptr [esi]
// 0049677b  8b4204               mov eax, dword ptr [edx + 4]
// 0049677e  8bce                 mov ecx, esi
// 00496780  ffd0                 call eax
// 00496782  8d4e08               lea ecx, [esi + 8]
// 00496785  83caff               or edx, 0xffffffff
// 00496788  f00fc111             lock xadd dword ptr [ecx], edx
// 0049678c  7509                 jne 0x496797
// 0049678e  8b06                 mov eax, dword ptr [esi]
// 00496790  8b5008               mov edx, dword ptr [eax + 8]
// 00496793  8bce                 mov ecx, esi
// 00496795  ffd2                 call edx
// 00496797  8bcf                 mov ecx, edi
// 00496799  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004967a1  ff1568248000         call dword ptr [0x802468]
// 004967a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004967ab  5f                   pop edi
// 004967ac  5e                   pop esi
// 004967ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004967b4  83c410               add esp, 0x10
// 004967b7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
