// roc 2008-06 00635e00  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635e00
//
// 00635e00  6aff                 push -1
// 00635e02  68abfd7b00           push 0x7bfdab
// 00635e07  64a100000000         mov eax, dword ptr fs:[0]
// 00635e0d  50                   push eax
// 00635e0e  64892500000000       mov dword ptr fs:[0], esp
// 00635e15  51                   push ecx
// 00635e16  8b442418             mov eax, dword ptr [esp + 0x18]
// 00635e1a  53                   push ebx
// 00635e1b  55                   push ebp
// 00635e1c  8be9                 mov ebp, ecx
// 00635e1e  56                   push esi
// 00635e1f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00635e23  50                   push eax
// 00635e24  8d5d04               lea ebx, [ebp + 4]
// 00635e27  56                   push esi
// 00635e28  8bcb                 mov ecx, ebx
// 00635e2a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00635e2e  897500               mov dword ptr [ebp], esi
// 00635e31  e83affffff           call 0x635d70
// 00635e36  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00635e3e  85f6                 test esi, esi
// 00635e40  7453                 je 0x635e95
// 00635e42  57                   push edi
// 00635e43  8dbee4000000         lea edi, [esi + 0xe4]
// 00635e49  85ff                 test edi, edi
// 00635e4b  7431                 je 0x635e7e
// 00635e4d  8937                 mov dword ptr [edi], esi
// 00635e4f  8b33                 mov esi, dword ptr [ebx]
// 00635e51  85f6                 test esi, esi
// 00635e53  740c                 je 0x635e61
// 00635e55  8d4e08               lea ecx, [esi + 8]
// 00635e58  ba01000000           mov edx, 1
// 00635e5d  f00fc111             lock xadd dword ptr [ecx], edx
// 00635e61  8b4f04               mov ecx, dword ptr [edi + 4]
// 00635e64  85c9                 test ecx, ecx
// 00635e66  7413                 je 0x635e7b
// 00635e68  8d4108               lea eax, [ecx + 8]
// 00635e6b  83caff               or edx, 0xffffffff
// 00635e6e  f00fc110             lock xadd dword ptr [eax], edx
// 00635e72  7507                 jne 0x635e7b
// 00635e74  8b01                 mov eax, dword ptr [ecx]
// 00635e76  8b5008               mov edx, dword ptr [eax + 8]
// 00635e79  ffd2                 call edx
// 00635e7b  897704               mov dword ptr [edi + 4], esi
// 00635e7e  5f                   pop edi
// 00635e7f  5e                   pop esi
// 00635e80  8bc5                 mov eax, ebp
// 00635e82  5d                   pop ebp
// 00635e83  5b                   pop ebx
// 00635e84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635e88  64890d00000000       mov dword ptr fs:[0], ecx
// 00635e8f  83c410               add esp, 0x10
// 00635e92  c20800               ret 8
// 00635e95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00635e99  5e                   pop esi
// 00635e9a  8bc5                 mov eax, ebp
// 00635e9c  5d                   pop ebp
// 00635e9d  5b                   pop ebx
// 00635e9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00635ea5  83c410               add esp, 0x10
// 00635ea8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
