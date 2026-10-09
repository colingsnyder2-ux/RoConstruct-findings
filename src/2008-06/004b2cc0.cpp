// roc 2008-06 004b2cc0  unit: RBX::VRotate::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2cc0
//
// 004b2cc0  6aff                 push -1
// 004b2cc2  68abfd7b00           push 0x7bfdab
// 004b2cc7  64a100000000         mov eax, dword ptr fs:[0]
// 004b2ccd  50                   push eax
// 004b2cce  64892500000000       mov dword ptr fs:[0], esp
// 004b2cd5  51                   push ecx
// 004b2cd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b2cda  53                   push ebx
// 004b2cdb  55                   push ebp
// 004b2cdc  8be9                 mov ebp, ecx
// 004b2cde  56                   push esi
// 004b2cdf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2ce3  50                   push eax
// 004b2ce4  8d5d04               lea ebx, [ebp + 4]
// 004b2ce7  56                   push esi
// 004b2ce8  8bcb                 mov ecx, ebx
// 004b2cea  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b2cee  897500               mov dword ptr [ebp], esi
// 004b2cf1  e83affffff           call 0x4b2c30
// 004b2cf6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b2cfe  85f6                 test esi, esi
// 004b2d00  7453                 je 0x4b2d55
// 004b2d02  57                   push edi
// 004b2d03  8dbee4000000         lea edi, [esi + 0xe4]
// 004b2d09  85ff                 test edi, edi
// 004b2d0b  7431                 je 0x4b2d3e
// 004b2d0d  8937                 mov dword ptr [edi], esi
// 004b2d0f  8b33                 mov esi, dword ptr [ebx]
// 004b2d11  85f6                 test esi, esi
// 004b2d13  740c                 je 0x4b2d21
// 004b2d15  8d4e08               lea ecx, [esi + 8]
// 004b2d18  ba01000000           mov edx, 1
// 004b2d1d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2d21  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b2d24  85c9                 test ecx, ecx
// 004b2d26  7413                 je 0x4b2d3b
// 004b2d28  8d4108               lea eax, [ecx + 8]
// 004b2d2b  83caff               or edx, 0xffffffff
// 004b2d2e  f00fc110             lock xadd dword ptr [eax], edx
// 004b2d32  7507                 jne 0x4b2d3b
// 004b2d34  8b01                 mov eax, dword ptr [ecx]
// 004b2d36  8b5008               mov edx, dword ptr [eax + 8]
// 004b2d39  ffd2                 call edx
// 004b2d3b  897704               mov dword ptr [edi + 4], esi
// 004b2d3e  5f                   pop edi
// 004b2d3f  5e                   pop esi
// 004b2d40  8bc5                 mov eax, ebp
// 004b2d42  5d                   pop ebp
// 004b2d43  5b                   pop ebx
// 004b2d44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2d48  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2d4f  83c410               add esp, 0x10
// 004b2d52  c20800               ret 8
// 004b2d55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2d59  5e                   pop esi
// 004b2d5a  8bc5                 mov eax, ebp
// 004b2d5c  5d                   pop ebp
// 004b2d5d  5b                   pop ebx
// 004b2d5e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2d65  83c410               add esp, 0x10
// 004b2d68  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
