// roc 2008-06 006362a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006362a0
//
// 006362a0  6aff                 push -1
// 006362a2  68abfd7b00           push 0x7bfdab
// 006362a7  64a100000000         mov eax, dword ptr fs:[0]
// 006362ad  50                   push eax
// 006362ae  64892500000000       mov dword ptr fs:[0], esp
// 006362b5  51                   push ecx
// 006362b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006362ba  53                   push ebx
// 006362bb  55                   push ebp
// 006362bc  8be9                 mov ebp, ecx
// 006362be  56                   push esi
// 006362bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 006362c3  50                   push eax
// 006362c4  8d5d04               lea ebx, [ebp + 4]
// 006362c7  56                   push esi
// 006362c8  8bcb                 mov ecx, ebx
// 006362ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 006362ce  897500               mov dword ptr [ebp], esi
// 006362d1  e83affffff           call 0x636210
// 006362d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006362de  85f6                 test esi, esi
// 006362e0  7453                 je 0x636335
// 006362e2  57                   push edi
// 006362e3  8dbee4000000         lea edi, [esi + 0xe4]
// 006362e9  85ff                 test edi, edi
// 006362eb  7431                 je 0x63631e
// 006362ed  8937                 mov dword ptr [edi], esi
// 006362ef  8b33                 mov esi, dword ptr [ebx]
// 006362f1  85f6                 test esi, esi
// 006362f3  740c                 je 0x636301
// 006362f5  8d4e08               lea ecx, [esi + 8]
// 006362f8  ba01000000           mov edx, 1
// 006362fd  f00fc111             lock xadd dword ptr [ecx], edx
// 00636301  8b4f04               mov ecx, dword ptr [edi + 4]
// 00636304  85c9                 test ecx, ecx
// 00636306  7413                 je 0x63631b
// 00636308  8d4108               lea eax, [ecx + 8]
// 0063630b  83caff               or edx, 0xffffffff
// 0063630e  f00fc110             lock xadd dword ptr [eax], edx
// 00636312  7507                 jne 0x63631b
// 00636314  8b01                 mov eax, dword ptr [ecx]
// 00636316  8b5008               mov edx, dword ptr [eax + 8]
// 00636319  ffd2                 call edx
// 0063631b  897704               mov dword ptr [edi + 4], esi
// 0063631e  5f                   pop edi
// 0063631f  5e                   pop esi
// 00636320  8bc5                 mov eax, ebp
// 00636322  5d                   pop ebp
// 00636323  5b                   pop ebx
// 00636324  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00636328  64890d00000000       mov dword ptr fs:[0], ecx
// 0063632f  83c410               add esp, 0x10
// 00636332  c20800               ret 8
// 00636335  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00636339  5e                   pop esi
// 0063633a  8bc5                 mov eax, ebp
// 0063633c  5d                   pop ebp
// 0063633d  5b                   pop ebx
// 0063633e  64890d00000000       mov dword ptr fs:[0], ecx
// 00636345  83c410               add esp, 0x10
// 00636348  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
