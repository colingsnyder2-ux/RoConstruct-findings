// roc 2008-06 005a3230  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3230
//
// 005a3230  6aff                 push -1
// 005a3232  68a9677c00           push 0x7c67a9
// 005a3237  64a100000000         mov eax, dword ptr fs:[0]
// 005a323d  50                   push eax
// 005a323e  64892500000000       mov dword ptr fs:[0], esp
// 005a3245  83ec0c               sub esp, 0xc
// 005a3248  8d442404             lea eax, [esp + 4]
// 005a324c  50                   push eax
// 005a324d  c744240400000000     mov dword ptr [esp + 4], 0
// 005a3255  e856ffffff           call 0x5a31b0
// 005a325a  8b08                 mov ecx, dword ptr [eax]
// 005a325c  83c404               add esp, 4
// 005a325f  85c9                 test ecx, ecx
// 005a3261  7405                 je 0x5a3268
// 005a3263  83c110               add ecx, 0x10
// 005a3266  eb02                 jmp 0x5a326a
// 005a3268  33c9                 xor ecx, ecx
// 005a326a  56                   push esi
// 005a326b  57                   push edi
// 005a326c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a3270  890f                 mov dword ptr [edi], ecx
// 005a3272  8b4004               mov eax, dword ptr [eax + 4]
// 005a3275  894704               mov dword ptr [edi + 4], eax
// 005a3278  85c0                 test eax, eax
// 005a327a  740c                 je 0x5a3288
// 005a327c  83c004               add eax, 4
// 005a327f  b901000000           mov ecx, 1
// 005a3284  f00fc108             lock xadd dword ptr [eax], ecx
// 005a3288  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a328c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a3294  c744240801000000     mov dword ptr [esp + 8], 1
// 005a329c  85f6                 test esi, esi
// 005a329e  742a                 je 0x5a32ca
// 005a32a0  8d5604               lea edx, [esi + 4]
// 005a32a3  83c8ff               or eax, 0xffffffff
// 005a32a6  f00fc102             lock xadd dword ptr [edx], eax
// 005a32aa  751e                 jne 0x5a32ca
// 005a32ac  8b16                 mov edx, dword ptr [esi]
// 005a32ae  8b4204               mov eax, dword ptr [edx + 4]
// 005a32b1  8bce                 mov ecx, esi
// 005a32b3  ffd0                 call eax
// 005a32b5  8d4e08               lea ecx, [esi + 8]
// 005a32b8  83caff               or edx, 0xffffffff
// 005a32bb  f00fc111             lock xadd dword ptr [ecx], edx
// 005a32bf  7509                 jne 0x5a32ca
// 005a32c1  8b06                 mov eax, dword ptr [esi]
// 005a32c3  8b5008               mov edx, dword ptr [eax + 8]
// 005a32c6  8bce                 mov ecx, esi
// 005a32c8  ffd2                 call edx
// 005a32ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a32ce  8bc7                 mov eax, edi
// 005a32d0  5f                   pop edi
// 005a32d1  5e                   pop esi
// 005a32d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005a32d9  83c418               add esp, 0x18
// 005a32dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
