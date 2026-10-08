// roc 2007-08 00588ae0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588ae0
//
// 00588ae0  6aff                 push -1
// 00588ae2  687b6b7500           push 0x756b7b
// 00588ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00588aed  50                   push eax
// 00588aee  64892500000000       mov dword ptr fs:[0], esp
// 00588af5  51                   push ecx
// 00588af6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00588afa  53                   push ebx
// 00588afb  55                   push ebp
// 00588afc  8be9                 mov ebp, ecx
// 00588afe  56                   push esi
// 00588aff  8b742420             mov esi, dword ptr [esp + 0x20]
// 00588b03  50                   push eax
// 00588b04  8d5d04               lea ebx, [ebp + 4]
// 00588b07  56                   push esi
// 00588b08  8bcb                 mov ecx, ebx
// 00588b0a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00588b0e  897500               mov dword ptr [ebp], esi
// 00588b11  e88af7ffff           call 0x5882a0
// 00588b16  85f6                 test esi, esi
// 00588b18  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00588b20  7453                 je 0x588b75
// 00588b22  57                   push edi
// 00588b23  8dbea4000000         lea edi, [esi + 0xa4]
// 00588b29  85ff                 test edi, edi
// 00588b2b  7431                 je 0x588b5e
// 00588b2d  8937                 mov dword ptr [edi], esi
// 00588b2f  8b33                 mov esi, dword ptr [ebx]
// 00588b31  85f6                 test esi, esi
// 00588b33  740c                 je 0x588b41
// 00588b35  8d4e08               lea ecx, [esi + 8]
// 00588b38  ba01000000           mov edx, 1
// 00588b3d  f00fc111             lock xadd dword ptr [ecx], edx
// 00588b41  8b4f04               mov ecx, dword ptr [edi + 4]
// 00588b44  85c9                 test ecx, ecx
// 00588b46  7413                 je 0x588b5b
// 00588b48  8d4108               lea eax, [ecx + 8]
// 00588b4b  83caff               or edx, 0xffffffff
// 00588b4e  f00fc110             lock xadd dword ptr [eax], edx
// 00588b52  7507                 jne 0x588b5b
// 00588b54  8b01                 mov eax, dword ptr [ecx]
// 00588b56  8b5008               mov edx, dword ptr [eax + 8]
// 00588b59  ffd2                 call edx
// 00588b5b  897704               mov dword ptr [edi + 4], esi
// 00588b5e  5f                   pop edi
// 00588b5f  5e                   pop esi
// 00588b60  8bc5                 mov eax, ebp
// 00588b62  5d                   pop ebp
// 00588b63  5b                   pop ebx
// 00588b64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00588b68  64890d00000000       mov dword ptr fs:[0], ecx
// 00588b6f  83c410               add esp, 0x10
// 00588b72  c20800               ret 8
// 00588b75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588b79  5e                   pop esi
// 00588b7a  8bc5                 mov eax, ebp
// 00588b7c  5d                   pop ebp
// 00588b7d  5b                   pop ebx
// 00588b7e  64890d00000000       mov dword ptr fs:[0], ecx
// 00588b85  83c410               add esp, 0x10
// 00588b88  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
