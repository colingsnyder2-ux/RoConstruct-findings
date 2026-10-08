// roc 2007-03 005626f0  unit: seg_00560000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005626f0
//
// 005626f0  64a100000000         mov eax, dword ptr fs:[0]
// 005626f6  6aff                 push -1
// 005626f8  68e8397500           push 0x7539e8
// 005626fd  50                   push eax
// 005626fe  64892500000000       mov dword ptr fs:[0], esp
// 00562705  83ec08               sub esp, 8
// 00562708  56                   push esi
// 00562709  8bf1                 mov esi, ecx
// 0056270b  837e0400             cmp dword ptr [esi + 4], 0
// 0056270f  0f8580000000         jne 0x562795
// 00562715  8b06                 mov eax, dword ptr [esi]
// 00562717  57                   push edi
// 00562718  50                   push eax
// 00562719  e842fdffff           call 0x562460
// 0056271e  50                   push eax
// 0056271f  8d4c2410             lea ecx, [esp + 0x10]
// 00562723  51                   push ecx
// 00562724  e87777edff           call 0x439ea0
// 00562729  83c40c               add esp, 0xc
// 0056272c  8b10                 mov edx, dword ptr [eax]
// 0056272e  83c004               add eax, 4
// 00562731  50                   push eax
// 00562732  8d4e08               lea ecx, [esi + 8]
// 00562735  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056273d  895604               mov dword ptr [esi + 4], edx
// 00562740  e82bb8eaff           call 0x40df70
// 00562745  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00562749  85ff                 test edi, edi
// 0056274b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00562753  742a                 je 0x56277f
// 00562755  8d4704               lea eax, [edi + 4]
// 00562758  83c9ff               or ecx, 0xffffffff
// 0056275b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056275f  751e                 jne 0x56277f
// 00562761  8b17                 mov edx, dword ptr [edi]
// 00562763  8b4204               mov eax, dword ptr [edx + 4]
// 00562766  8bcf                 mov ecx, edi
// 00562768  ffd0                 call eax
// 0056276a  8d4f08               lea ecx, [edi + 8]
// 0056276d  83caff               or edx, 0xffffffff
// 00562770  f00fc111             lock xadd dword ptr [ecx], edx
// 00562774  7509                 jne 0x56277f
// 00562776  8b07                 mov eax, dword ptr [edi]
// 00562778  8b5008               mov edx, dword ptr [eax + 8]
// 0056277b  8bcf                 mov ecx, edi
// 0056277d  ffd2                 call edx
// 0056277f  8b4604               mov eax, dword ptr [esi + 4]
// 00562782  5f                   pop edi
// 00562783  5e                   pop esi
// 00562784  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00562788  64890d00000000       mov dword ptr fs:[0], ecx
// 0056278f  83c414               add esp, 0x14
// 00562792  c20400               ret 4
// 00562795  8b4604               mov eax, dword ptr [esi + 4]
// 00562798  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056279c  5e                   pop esi
// 0056279d  64890d00000000       mov dword ptr fs:[0], ecx
// 005627a4  83c414               add esp, 0x14
// 005627a7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
