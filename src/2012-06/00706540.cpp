// roc 2012-06 00706540  unit: RBX::RootInstance  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00706540
//
// 00706540  6aff                 push -1
// 00706542  68e9f3a900           push 0xa9f3e9
// 00706547  64a100000000         mov eax, dword ptr fs:[0]
// 0070654d  50                   push eax
// 0070654e  64892500000000       mov dword ptr fs:[0], esp
// 00706555  51                   push ecx
// 00706556  56                   push esi
// 00706557  57                   push edi
// 00706558  8bf9                 mov edi, ecx
// 0070655a  897c2408             mov dword ptr [esp + 8], edi
// 0070655e  8b7720               mov esi, dword ptr [edi + 0x20]
// 00706561  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00706569  85f6                 test esi, esi
// 0070656b  742a                 je 0x706597
// 0070656d  8d4604               lea eax, [esi + 4]
// 00706570  83c9ff               or ecx, 0xffffffff
// 00706573  f00fc108             lock xadd dword ptr [eax], ecx
// 00706577  751e                 jne 0x706597
// 00706579  8b16                 mov edx, dword ptr [esi]
// 0070657b  8b4204               mov eax, dword ptr [edx + 4]
// 0070657e  8bce                 mov ecx, esi
// 00706580  ffd0                 call eax
// 00706582  8d4e08               lea ecx, [esi + 8]
// 00706585  83caff               or edx, 0xffffffff
// 00706588  f00fc111             lock xadd dword ptr [ecx], edx
// 0070658c  7509                 jne 0x706597
// 0070658e  8b06                 mov eax, dword ptr [esi]
// 00706590  8b5008               mov edx, dword ptr [eax + 8]
// 00706593  8bce                 mov ecx, esi
// 00706595  ffd2                 call edx
// 00706597  8bcf                 mov ecx, edi
// 00706599  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007065a1  ff153c26b200         call dword ptr [0xb2263c]
// 007065a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007065ab  5f                   pop edi
// 007065ac  5e                   pop esi
// 007065ad  64890d00000000       mov dword ptr fs:[0], ecx
// 007065b4  83c410               add esp, 0x10
// 007065b7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
