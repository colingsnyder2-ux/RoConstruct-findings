// roc 2008-06 005c3240  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3240
//
// 005c3240  6aff                 push -1
// 005c3242  68abfd7b00           push 0x7bfdab
// 005c3247  64a100000000         mov eax, dword ptr fs:[0]
// 005c324d  50                   push eax
// 005c324e  64892500000000       mov dword ptr fs:[0], esp
// 005c3255  51                   push ecx
// 005c3256  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c325a  53                   push ebx
// 005c325b  55                   push ebp
// 005c325c  8be9                 mov ebp, ecx
// 005c325e  56                   push esi
// 005c325f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c3263  50                   push eax
// 005c3264  8d5d04               lea ebx, [ebp + 4]
// 005c3267  56                   push esi
// 005c3268  8bcb                 mov ecx, ebx
// 005c326a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c326e  897500               mov dword ptr [ebp], esi
// 005c3271  e83affffff           call 0x5c31b0
// 005c3276  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c327e  85f6                 test esi, esi
// 005c3280  7453                 je 0x5c32d5
// 005c3282  57                   push edi
// 005c3283  8dbee4000000         lea edi, [esi + 0xe4]
// 005c3289  85ff                 test edi, edi
// 005c328b  7431                 je 0x5c32be
// 005c328d  8937                 mov dword ptr [edi], esi
// 005c328f  8b33                 mov esi, dword ptr [ebx]
// 005c3291  85f6                 test esi, esi
// 005c3293  740c                 je 0x5c32a1
// 005c3295  8d4e08               lea ecx, [esi + 8]
// 005c3298  ba01000000           mov edx, 1
// 005c329d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c32a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c32a4  85c9                 test ecx, ecx
// 005c32a6  7413                 je 0x5c32bb
// 005c32a8  8d4108               lea eax, [ecx + 8]
// 005c32ab  83caff               or edx, 0xffffffff
// 005c32ae  f00fc110             lock xadd dword ptr [eax], edx
// 005c32b2  7507                 jne 0x5c32bb
// 005c32b4  8b01                 mov eax, dword ptr [ecx]
// 005c32b6  8b5008               mov edx, dword ptr [eax + 8]
// 005c32b9  ffd2                 call edx
// 005c32bb  897704               mov dword ptr [edi + 4], esi
// 005c32be  5f                   pop edi
// 005c32bf  5e                   pop esi
// 005c32c0  8bc5                 mov eax, ebp
// 005c32c2  5d                   pop ebp
// 005c32c3  5b                   pop ebx
// 005c32c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c32c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c32cf  83c410               add esp, 0x10
// 005c32d2  c20800               ret 8
// 005c32d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c32d9  5e                   pop esi
// 005c32da  8bc5                 mov eax, ebp
// 005c32dc  5d                   pop ebp
// 005c32dd  5b                   pop ebx
// 005c32de  64890d00000000       mov dword ptr fs:[0], ecx
// 005c32e5  83c410               add esp, 0x10
// 005c32e8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
