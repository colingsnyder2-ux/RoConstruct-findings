// roc 2008-06 00411d90  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411d90
//
// 00411d90  6aff                 push -1
// 00411d92  68abfd7b00           push 0x7bfdab
// 00411d97  64a100000000         mov eax, dword ptr fs:[0]
// 00411d9d  50                   push eax
// 00411d9e  64892500000000       mov dword ptr fs:[0], esp
// 00411da5  51                   push ecx
// 00411da6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00411daa  53                   push ebx
// 00411dab  55                   push ebp
// 00411dac  8be9                 mov ebp, ecx
// 00411dae  56                   push esi
// 00411daf  8b742420             mov esi, dword ptr [esp + 0x20]
// 00411db3  50                   push eax
// 00411db4  8d5d04               lea ebx, [ebp + 4]
// 00411db7  56                   push esi
// 00411db8  8bcb                 mov ecx, ebx
// 00411dba  896c2414             mov dword ptr [esp + 0x14], ebp
// 00411dbe  897500               mov dword ptr [ebp], esi
// 00411dc1  e8dafaffff           call 0x4118a0
// 00411dc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00411dce  85f6                 test esi, esi
// 00411dd0  7453                 je 0x411e25
// 00411dd2  57                   push edi
// 00411dd3  8dbee4000000         lea edi, [esi + 0xe4]
// 00411dd9  85ff                 test edi, edi
// 00411ddb  7431                 je 0x411e0e
// 00411ddd  8937                 mov dword ptr [edi], esi
// 00411ddf  8b33                 mov esi, dword ptr [ebx]
// 00411de1  85f6                 test esi, esi
// 00411de3  740c                 je 0x411df1
// 00411de5  8d4e08               lea ecx, [esi + 8]
// 00411de8  ba01000000           mov edx, 1
// 00411ded  f00fc111             lock xadd dword ptr [ecx], edx
// 00411df1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00411df4  85c9                 test ecx, ecx
// 00411df6  7413                 je 0x411e0b
// 00411df8  8d4108               lea eax, [ecx + 8]
// 00411dfb  83caff               or edx, 0xffffffff
// 00411dfe  f00fc110             lock xadd dword ptr [eax], edx
// 00411e02  7507                 jne 0x411e0b
// 00411e04  8b01                 mov eax, dword ptr [ecx]
// 00411e06  8b5008               mov edx, dword ptr [eax + 8]
// 00411e09  ffd2                 call edx
// 00411e0b  897704               mov dword ptr [edi + 4], esi
// 00411e0e  5f                   pop edi
// 00411e0f  5e                   pop esi
// 00411e10  8bc5                 mov eax, ebp
// 00411e12  5d                   pop ebp
// 00411e13  5b                   pop ebx
// 00411e14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00411e18  64890d00000000       mov dword ptr fs:[0], ecx
// 00411e1f  83c410               add esp, 0x10
// 00411e22  c20800               ret 8
// 00411e25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00411e29  5e                   pop esi
// 00411e2a  8bc5                 mov eax, ebp
// 00411e2c  5d                   pop ebp
// 00411e2d  5b                   pop ebx
// 00411e2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00411e35  83c410               add esp, 0x10
// 00411e38  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
