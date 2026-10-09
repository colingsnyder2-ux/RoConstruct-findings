// roc 2008-06 005c3100  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3100
//
// 005c3100  6aff                 push -1
// 005c3102  68a9677c00           push 0x7c67a9
// 005c3107  64a100000000         mov eax, dword ptr fs:[0]
// 005c310d  50                   push eax
// 005c310e  64892500000000       mov dword ptr fs:[0], esp
// 005c3115  83ec0c               sub esp, 0xc
// 005c3118  8d442404             lea eax, [esp + 4]
// 005c311c  50                   push eax
// 005c311d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c3125  e856ffffff           call 0x5c3080
// 005c312a  8b08                 mov ecx, dword ptr [eax]
// 005c312c  83c404               add esp, 4
// 005c312f  85c9                 test ecx, ecx
// 005c3131  7405                 je 0x5c3138
// 005c3133  83c110               add ecx, 0x10
// 005c3136  eb02                 jmp 0x5c313a
// 005c3138  33c9                 xor ecx, ecx
// 005c313a  56                   push esi
// 005c313b  57                   push edi
// 005c313c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c3140  890f                 mov dword ptr [edi], ecx
// 005c3142  8b4004               mov eax, dword ptr [eax + 4]
// 005c3145  894704               mov dword ptr [edi + 4], eax
// 005c3148  85c0                 test eax, eax
// 005c314a  740c                 je 0x5c3158
// 005c314c  83c004               add eax, 4
// 005c314f  b901000000           mov ecx, 1
// 005c3154  f00fc108             lock xadd dword ptr [eax], ecx
// 005c3158  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c315c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c3164  c744240801000000     mov dword ptr [esp + 8], 1
// 005c316c  85f6                 test esi, esi
// 005c316e  742a                 je 0x5c319a
// 005c3170  8d5604               lea edx, [esi + 4]
// 005c3173  83c8ff               or eax, 0xffffffff
// 005c3176  f00fc102             lock xadd dword ptr [edx], eax
// 005c317a  751e                 jne 0x5c319a
// 005c317c  8b16                 mov edx, dword ptr [esi]
// 005c317e  8b4204               mov eax, dword ptr [edx + 4]
// 005c3181  8bce                 mov ecx, esi
// 005c3183  ffd0                 call eax
// 005c3185  8d4e08               lea ecx, [esi + 8]
// 005c3188  83caff               or edx, 0xffffffff
// 005c318b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c318f  7509                 jne 0x5c319a
// 005c3191  8b06                 mov eax, dword ptr [esi]
// 005c3193  8b5008               mov edx, dword ptr [eax + 8]
// 005c3196  8bce                 mov ecx, esi
// 005c3198  ffd2                 call edx
// 005c319a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c319e  8bc7                 mov eax, edi
// 005c31a0  5f                   pop edi
// 005c31a1  5e                   pop esi
// 005c31a2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c31a9  83c418               add esp, 0x18
// 005c31ac  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
