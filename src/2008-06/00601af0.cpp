// roc 2008-06 00601af0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601af0
//
// 00601af0  6aff                 push -1
// 00601af2  68abfd7b00           push 0x7bfdab
// 00601af7  64a100000000         mov eax, dword ptr fs:[0]
// 00601afd  50                   push eax
// 00601afe  64892500000000       mov dword ptr fs:[0], esp
// 00601b05  51                   push ecx
// 00601b06  8b442418             mov eax, dword ptr [esp + 0x18]
// 00601b0a  53                   push ebx
// 00601b0b  55                   push ebp
// 00601b0c  8be9                 mov ebp, ecx
// 00601b0e  56                   push esi
// 00601b0f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601b13  50                   push eax
// 00601b14  8d5d04               lea ebx, [ebp + 4]
// 00601b17  56                   push esi
// 00601b18  8bcb                 mov ecx, ebx
// 00601b1a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00601b1e  897500               mov dword ptr [ebp], esi
// 00601b21  e8caf2ffff           call 0x600df0
// 00601b26  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00601b2e  85f6                 test esi, esi
// 00601b30  7453                 je 0x601b85
// 00601b32  57                   push edi
// 00601b33  8dbee4000000         lea edi, [esi + 0xe4]
// 00601b39  85ff                 test edi, edi
// 00601b3b  7431                 je 0x601b6e
// 00601b3d  8937                 mov dword ptr [edi], esi
// 00601b3f  8b33                 mov esi, dword ptr [ebx]
// 00601b41  85f6                 test esi, esi
// 00601b43  740c                 je 0x601b51
// 00601b45  8d4e08               lea ecx, [esi + 8]
// 00601b48  ba01000000           mov edx, 1
// 00601b4d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601b51  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601b54  85c9                 test ecx, ecx
// 00601b56  7413                 je 0x601b6b
// 00601b58  8d4108               lea eax, [ecx + 8]
// 00601b5b  83caff               or edx, 0xffffffff
// 00601b5e  f00fc110             lock xadd dword ptr [eax], edx
// 00601b62  7507                 jne 0x601b6b
// 00601b64  8b01                 mov eax, dword ptr [ecx]
// 00601b66  8b5008               mov edx, dword ptr [eax + 8]
// 00601b69  ffd2                 call edx
// 00601b6b  897704               mov dword ptr [edi + 4], esi
// 00601b6e  5f                   pop edi
// 00601b6f  5e                   pop esi
// 00601b70  8bc5                 mov eax, ebp
// 00601b72  5d                   pop ebp
// 00601b73  5b                   pop ebx
// 00601b74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601b78  64890d00000000       mov dword ptr fs:[0], ecx
// 00601b7f  83c410               add esp, 0x10
// 00601b82  c20800               ret 8
// 00601b85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601b89  5e                   pop esi
// 00601b8a  8bc5                 mov eax, ebp
// 00601b8c  5d                   pop ebp
// 00601b8d  5b                   pop ebx
// 00601b8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601b95  83c410               add esp, 0x10
// 00601b98  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
