// roc 2008-06 00414b20  unit: RBX::VModelInstance::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414b20
//
// 00414b20  6aff                 push -1
// 00414b22  68abfd7b00           push 0x7bfdab
// 00414b27  64a100000000         mov eax, dword ptr fs:[0]
// 00414b2d  50                   push eax
// 00414b2e  64892500000000       mov dword ptr fs:[0], esp
// 00414b35  51                   push ecx
// 00414b36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00414b3a  53                   push ebx
// 00414b3b  55                   push ebp
// 00414b3c  8be9                 mov ebp, ecx
// 00414b3e  56                   push esi
// 00414b3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00414b43  50                   push eax
// 00414b44  8d5d04               lea ebx, [ebp + 4]
// 00414b47  56                   push esi
// 00414b48  8bcb                 mov ecx, ebx
// 00414b4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00414b4e  897500               mov dword ptr [ebp], esi
// 00414b51  e83affffff           call 0x414a90
// 00414b56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00414b5e  85f6                 test esi, esi
// 00414b60  7453                 je 0x414bb5
// 00414b62  57                   push edi
// 00414b63  8dbee4000000         lea edi, [esi + 0xe4]
// 00414b69  85ff                 test edi, edi
// 00414b6b  7431                 je 0x414b9e
// 00414b6d  8937                 mov dword ptr [edi], esi
// 00414b6f  8b33                 mov esi, dword ptr [ebx]
// 00414b71  85f6                 test esi, esi
// 00414b73  740c                 je 0x414b81
// 00414b75  8d4e08               lea ecx, [esi + 8]
// 00414b78  ba01000000           mov edx, 1
// 00414b7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00414b81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00414b84  85c9                 test ecx, ecx
// 00414b86  7413                 je 0x414b9b
// 00414b88  8d4108               lea eax, [ecx + 8]
// 00414b8b  83caff               or edx, 0xffffffff
// 00414b8e  f00fc110             lock xadd dword ptr [eax], edx
// 00414b92  7507                 jne 0x414b9b
// 00414b94  8b01                 mov eax, dword ptr [ecx]
// 00414b96  8b5008               mov edx, dword ptr [eax + 8]
// 00414b99  ffd2                 call edx
// 00414b9b  897704               mov dword ptr [edi + 4], esi
// 00414b9e  5f                   pop edi
// 00414b9f  5e                   pop esi
// 00414ba0  8bc5                 mov eax, ebp
// 00414ba2  5d                   pop ebp
// 00414ba3  5b                   pop ebx
// 00414ba4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00414ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 00414baf  83c410               add esp, 0x10
// 00414bb2  c20800               ret 8
// 00414bb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414bb9  5e                   pop esi
// 00414bba  8bc5                 mov eax, ebp
// 00414bbc  5d                   pop ebp
// 00414bbd  5b                   pop ebx
// 00414bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00414bc5  83c410               add esp, 0x10
// 00414bc8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
