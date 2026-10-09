// roc 2008-06 004b2a50  unit: RBX::VGlue::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2a50
//
// 004b2a50  6aff                 push -1
// 004b2a52  68abfd7b00           push 0x7bfdab
// 004b2a57  64a100000000         mov eax, dword ptr fs:[0]
// 004b2a5d  50                   push eax
// 004b2a5e  64892500000000       mov dword ptr fs:[0], esp
// 004b2a65  51                   push ecx
// 004b2a66  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b2a6a  53                   push ebx
// 004b2a6b  55                   push ebp
// 004b2a6c  8be9                 mov ebp, ecx
// 004b2a6e  56                   push esi
// 004b2a6f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2a73  50                   push eax
// 004b2a74  8d5d04               lea ebx, [ebp + 4]
// 004b2a77  56                   push esi
// 004b2a78  8bcb                 mov ecx, ebx
// 004b2a7a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b2a7e  897500               mov dword ptr [ebp], esi
// 004b2a81  e83affffff           call 0x4b29c0
// 004b2a86  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b2a8e  85f6                 test esi, esi
// 004b2a90  7453                 je 0x4b2ae5
// 004b2a92  57                   push edi
// 004b2a93  8dbee4000000         lea edi, [esi + 0xe4]
// 004b2a99  85ff                 test edi, edi
// 004b2a9b  7431                 je 0x4b2ace
// 004b2a9d  8937                 mov dword ptr [edi], esi
// 004b2a9f  8b33                 mov esi, dword ptr [ebx]
// 004b2aa1  85f6                 test esi, esi
// 004b2aa3  740c                 je 0x4b2ab1
// 004b2aa5  8d4e08               lea ecx, [esi + 8]
// 004b2aa8  ba01000000           mov edx, 1
// 004b2aad  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2ab1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b2ab4  85c9                 test ecx, ecx
// 004b2ab6  7413                 je 0x4b2acb
// 004b2ab8  8d4108               lea eax, [ecx + 8]
// 004b2abb  83caff               or edx, 0xffffffff
// 004b2abe  f00fc110             lock xadd dword ptr [eax], edx
// 004b2ac2  7507                 jne 0x4b2acb
// 004b2ac4  8b01                 mov eax, dword ptr [ecx]
// 004b2ac6  8b5008               mov edx, dword ptr [eax + 8]
// 004b2ac9  ffd2                 call edx
// 004b2acb  897704               mov dword ptr [edi + 4], esi
// 004b2ace  5f                   pop edi
// 004b2acf  5e                   pop esi
// 004b2ad0  8bc5                 mov eax, ebp
// 004b2ad2  5d                   pop ebp
// 004b2ad3  5b                   pop ebx
// 004b2ad4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2ad8  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2adf  83c410               add esp, 0x10
// 004b2ae2  c20800               ret 8
// 004b2ae5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2ae9  5e                   pop esi
// 004b2aea  8bc5                 mov eax, ebp
// 004b2aec  5d                   pop ebp
// 004b2aed  5b                   pop ebx
// 004b2aee  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2af5  83c410               add esp, 0x10
// 004b2af8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
