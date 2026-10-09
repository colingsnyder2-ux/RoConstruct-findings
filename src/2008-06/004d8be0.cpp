// roc 2008-06 004d8be0  unit: RBX::ViewBase  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8be0
//
// 004d8be0  6aff                 push -1
// 004d8be2  68abfd7b00           push 0x7bfdab
// 004d8be7  64a100000000         mov eax, dword ptr fs:[0]
// 004d8bed  50                   push eax
// 004d8bee  64892500000000       mov dword ptr fs:[0], esp
// 004d8bf5  51                   push ecx
// 004d8bf6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d8bfa  53                   push ebx
// 004d8bfb  55                   push ebp
// 004d8bfc  8be9                 mov ebp, ecx
// 004d8bfe  56                   push esi
// 004d8bff  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d8c03  50                   push eax
// 004d8c04  8d5d04               lea ebx, [ebp + 4]
// 004d8c07  56                   push esi
// 004d8c08  8bcb                 mov ecx, ebx
// 004d8c0a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004d8c0e  897500               mov dword ptr [ebp], esi
// 004d8c11  e83affffff           call 0x4d8b50
// 004d8c16  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d8c1e  85f6                 test esi, esi
// 004d8c20  7453                 je 0x4d8c75
// 004d8c22  57                   push edi
// 004d8c23  8dbee4000000         lea edi, [esi + 0xe4]
// 004d8c29  85ff                 test edi, edi
// 004d8c2b  7431                 je 0x4d8c5e
// 004d8c2d  8937                 mov dword ptr [edi], esi
// 004d8c2f  8b33                 mov esi, dword ptr [ebx]
// 004d8c31  85f6                 test esi, esi
// 004d8c33  740c                 je 0x4d8c41
// 004d8c35  8d4e08               lea ecx, [esi + 8]
// 004d8c38  ba01000000           mov edx, 1
// 004d8c3d  f00fc111             lock xadd dword ptr [ecx], edx
// 004d8c41  8b4f04               mov ecx, dword ptr [edi + 4]
// 004d8c44  85c9                 test ecx, ecx
// 004d8c46  7413                 je 0x4d8c5b
// 004d8c48  8d4108               lea eax, [ecx + 8]
// 004d8c4b  83caff               or edx, 0xffffffff
// 004d8c4e  f00fc110             lock xadd dword ptr [eax], edx
// 004d8c52  7507                 jne 0x4d8c5b
// 004d8c54  8b01                 mov eax, dword ptr [ecx]
// 004d8c56  8b5008               mov edx, dword ptr [eax + 8]
// 004d8c59  ffd2                 call edx
// 004d8c5b  897704               mov dword ptr [edi + 4], esi
// 004d8c5e  5f                   pop edi
// 004d8c5f  5e                   pop esi
// 004d8c60  8bc5                 mov eax, ebp
// 004d8c62  5d                   pop ebp
// 004d8c63  5b                   pop ebx
// 004d8c64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d8c68  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8c6f  83c410               add esp, 0x10
// 004d8c72  c20800               ret 8
// 004d8c75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d8c79  5e                   pop esi
// 004d8c7a  8bc5                 mov eax, ebp
// 004d8c7c  5d                   pop ebp
// 004d8c7d  5b                   pop ebx
// 004d8c7e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8c85  83c410               add esp, 0x10
// 004d8c88  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
