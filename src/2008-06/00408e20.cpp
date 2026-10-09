// roc 2008-06 00408e20  unit: RBX::VDebugSettings::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408e20
//
// 00408e20  6aff                 push -1
// 00408e22  68abfd7b00           push 0x7bfdab
// 00408e27  64a100000000         mov eax, dword ptr fs:[0]
// 00408e2d  50                   push eax
// 00408e2e  64892500000000       mov dword ptr fs:[0], esp
// 00408e35  51                   push ecx
// 00408e36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00408e3a  53                   push ebx
// 00408e3b  55                   push ebp
// 00408e3c  8be9                 mov ebp, ecx
// 00408e3e  56                   push esi
// 00408e3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00408e43  50                   push eax
// 00408e44  8d5d04               lea ebx, [ebp + 4]
// 00408e47  56                   push esi
// 00408e48  8bcb                 mov ecx, ebx
// 00408e4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00408e4e  897500               mov dword ptr [ebp], esi
// 00408e51  e83affffff           call 0x408d90
// 00408e56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00408e5e  85f6                 test esi, esi
// 00408e60  7453                 je 0x408eb5
// 00408e62  57                   push edi
// 00408e63  8dbee4000000         lea edi, [esi + 0xe4]
// 00408e69  85ff                 test edi, edi
// 00408e6b  7431                 je 0x408e9e
// 00408e6d  8937                 mov dword ptr [edi], esi
// 00408e6f  8b33                 mov esi, dword ptr [ebx]
// 00408e71  85f6                 test esi, esi
// 00408e73  740c                 je 0x408e81
// 00408e75  8d4e08               lea ecx, [esi + 8]
// 00408e78  ba01000000           mov edx, 1
// 00408e7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00408e81  8b4f04               mov ecx, dword ptr [edi + 4]
// 00408e84  85c9                 test ecx, ecx
// 00408e86  7413                 je 0x408e9b
// 00408e88  8d4108               lea eax, [ecx + 8]
// 00408e8b  83caff               or edx, 0xffffffff
// 00408e8e  f00fc110             lock xadd dword ptr [eax], edx
// 00408e92  7507                 jne 0x408e9b
// 00408e94  8b01                 mov eax, dword ptr [ecx]
// 00408e96  8b5008               mov edx, dword ptr [eax + 8]
// 00408e99  ffd2                 call edx
// 00408e9b  897704               mov dword ptr [edi + 4], esi
// 00408e9e  5f                   pop edi
// 00408e9f  5e                   pop esi
// 00408ea0  8bc5                 mov eax, ebp
// 00408ea2  5d                   pop ebp
// 00408ea3  5b                   pop ebx
// 00408ea4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00408ea8  64890d00000000       mov dword ptr fs:[0], ecx
// 00408eaf  83c410               add esp, 0x10
// 00408eb2  c20800               ret 8
// 00408eb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00408eb9  5e                   pop esi
// 00408eba  8bc5                 mov eax, ebp
// 00408ebc  5d                   pop ebp
// 00408ebd  5b                   pop ebx
// 00408ebe  64890d00000000       mov dword ptr fs:[0], ecx
// 00408ec5  83c410               add esp, 0x10
// 00408ec8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
