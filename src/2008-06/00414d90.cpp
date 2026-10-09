// roc 2008-06 00414d90  unit: RBX::VScript::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414d90
//
// 00414d90  6aff                 push -1
// 00414d92  68abfd7b00           push 0x7bfdab
// 00414d97  64a100000000         mov eax, dword ptr fs:[0]
// 00414d9d  50                   push eax
// 00414d9e  64892500000000       mov dword ptr fs:[0], esp
// 00414da5  51                   push ecx
// 00414da6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00414daa  53                   push ebx
// 00414dab  55                   push ebp
// 00414dac  8be9                 mov ebp, ecx
// 00414dae  56                   push esi
// 00414daf  8b742420             mov esi, dword ptr [esp + 0x20]
// 00414db3  50                   push eax
// 00414db4  8d5d04               lea ebx, [ebp + 4]
// 00414db7  56                   push esi
// 00414db8  8bcb                 mov ecx, ebx
// 00414dba  896c2414             mov dword ptr [esp + 0x14], ebp
// 00414dbe  897500               mov dword ptr [ebp], esi
// 00414dc1  e83affffff           call 0x414d00
// 00414dc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00414dce  85f6                 test esi, esi
// 00414dd0  7453                 je 0x414e25
// 00414dd2  57                   push edi
// 00414dd3  8dbee4000000         lea edi, [esi + 0xe4]
// 00414dd9  85ff                 test edi, edi
// 00414ddb  7431                 je 0x414e0e
// 00414ddd  8937                 mov dword ptr [edi], esi
// 00414ddf  8b33                 mov esi, dword ptr [ebx]
// 00414de1  85f6                 test esi, esi
// 00414de3  740c                 je 0x414df1
// 00414de5  8d4e08               lea ecx, [esi + 8]
// 00414de8  ba01000000           mov edx, 1
// 00414ded  f00fc111             lock xadd dword ptr [ecx], edx
// 00414df1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00414df4  85c9                 test ecx, ecx
// 00414df6  7413                 je 0x414e0b
// 00414df8  8d4108               lea eax, [ecx + 8]
// 00414dfb  83caff               or edx, 0xffffffff
// 00414dfe  f00fc110             lock xadd dword ptr [eax], edx
// 00414e02  7507                 jne 0x414e0b
// 00414e04  8b01                 mov eax, dword ptr [ecx]
// 00414e06  8b5008               mov edx, dword ptr [eax + 8]
// 00414e09  ffd2                 call edx
// 00414e0b  897704               mov dword ptr [edi + 4], esi
// 00414e0e  5f                   pop edi
// 00414e0f  5e                   pop esi
// 00414e10  8bc5                 mov eax, ebp
// 00414e12  5d                   pop ebp
// 00414e13  5b                   pop ebx
// 00414e14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00414e18  64890d00000000       mov dword ptr fs:[0], ecx
// 00414e1f  83c410               add esp, 0x10
// 00414e22  c20800               ret 8
// 00414e25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414e29  5e                   pop esi
// 00414e2a  8bc5                 mov eax, ebp
// 00414e2c  5d                   pop ebp
// 00414e2d  5b                   pop ebx
// 00414e2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00414e35  83c410               add esp, 0x10
// 00414e38  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
