// roc 2007-03 00563930  unit: seg_00560000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00563930
//
// 00563930  64a100000000         mov eax, dword ptr fs:[0]
// 00563936  6aff                 push -1
// 00563938  68e8397500           push 0x7539e8
// 0056393d  50                   push eax
// 0056393e  64892500000000       mov dword ptr fs:[0], esp
// 00563945  83ec08               sub esp, 8
// 00563948  56                   push esi
// 00563949  8bf1                 mov esi, ecx
// 0056394b  837e0400             cmp dword ptr [esi + 4], 0
// 0056394f  0f8580000000         jne 0x5639d5
// 00563955  8b06                 mov eax, dword ptr [esi]
// 00563957  57                   push edi
// 00563958  50                   push eax
// 00563959  e882cdebff           call 0x4206e0
// 0056395e  50                   push eax
// 0056395f  8d4c2410             lea ecx, [esp + 0x10]
// 00563963  51                   push ecx
// 00563964  e83765edff           call 0x439ea0
// 00563969  83c40c               add esp, 0xc
// 0056396c  8b10                 mov edx, dword ptr [eax]
// 0056396e  83c004               add eax, 4
// 00563971  50                   push eax
// 00563972  8d4e08               lea ecx, [esi + 8]
// 00563975  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056397d  895604               mov dword ptr [esi + 4], edx
// 00563980  e8eba5eaff           call 0x40df70
// 00563985  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00563989  85ff                 test edi, edi
// 0056398b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00563993  742a                 je 0x5639bf
// 00563995  8d4704               lea eax, [edi + 4]
// 00563998  83c9ff               or ecx, 0xffffffff
// 0056399b  f00fc108             lock xadd dword ptr [eax], ecx
// 0056399f  751e                 jne 0x5639bf
// 005639a1  8b17                 mov edx, dword ptr [edi]
// 005639a3  8b4204               mov eax, dword ptr [edx + 4]
// 005639a6  8bcf                 mov ecx, edi
// 005639a8  ffd0                 call eax
// 005639aa  8d4f08               lea ecx, [edi + 8]
// 005639ad  83caff               or edx, 0xffffffff
// 005639b0  f00fc111             lock xadd dword ptr [ecx], edx
// 005639b4  7509                 jne 0x5639bf
// 005639b6  8b07                 mov eax, dword ptr [edi]
// 005639b8  8b5008               mov edx, dword ptr [eax + 8]
// 005639bb  8bcf                 mov ecx, edi
// 005639bd  ffd2                 call edx
// 005639bf  8b4604               mov eax, dword ptr [esi + 4]
// 005639c2  5f                   pop edi
// 005639c3  5e                   pop esi
// 005639c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005639c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005639cf  83c414               add esp, 0x14
// 005639d2  c20400               ret 4
// 005639d5  8b4604               mov eax, dword ptr [esi + 4]
// 005639d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005639dc  5e                   pop esi
// 005639dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005639e4  83c414               add esp, 0x14
// 005639e7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?createService@?$ServiceClient@VSelection@RBX@@@RBX@@ABEPAVSelection@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
