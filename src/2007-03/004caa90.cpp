// roc 2007-03 004caa90  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004caa90
//
// 004caa90  6aff                 push -1
// 004caa92  68cbd77400           push 0x74d7cb
// 004caa97  64a100000000         mov eax, dword ptr fs:[0]
// 004caa9d  50                   push eax
// 004caa9e  64892500000000       mov dword ptr fs:[0], esp
// 004caaa5  83ec28               sub esp, 0x28
// 004caaa8  53                   push ebx
// 004caaa9  55                   push ebp
// 004caaaa  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004caaae  56                   push esi
// 004caaaf  8b742444             mov esi, dword ptr [esp + 0x44]
// 004caab3  d906                 fld dword ptr [esi]
// 004caab5  57                   push edi
// 004caab6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004caaba  d95c2420             fstp dword ptr [esp + 0x20]
// 004caabe  d94604               fld dword ptr [esi + 4]
// 004caac1  8d442420             lea eax, [esp + 0x20]
// 004caac5  d95c2424             fstp dword ptr [esp + 0x24]
// 004caac9  50                   push eax
// 004caaca  d94608               fld dword ptr [esi + 8]
// 004caacd  8d4c2414             lea ecx, [esp + 0x14]
// 004caad1  d95c242c             fstp dword ptr [esp + 0x2c]
// 004caad5  51                   push ecx
// 004caad6  d907                 fld dword ptr [edi]
// 004caad8  b9e09e8b00           mov ecx, 0x8b9ee0
// 004caadd  d95c2438             fstp dword ptr [esp + 0x38]
// 004caae1  896c2434             mov dword ptr [esp + 0x34], ebp
// 004caae5  d94704               fld dword ptr [edi + 4]
// 004caae8  d95c243c             fstp dword ptr [esp + 0x3c]
// 004caaec  e8afbcffff           call 0x4c67a0
// 004caaf1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004caaf5  85db                 test ebx, ebx
// 004caaf7  8b15e49e8b00         mov edx, dword ptr [0x8b9ee4]
// 004caafd  8954241c             mov dword ptr [esp + 0x1c], edx
// 004cab01  7408                 je 0x4cab0b
// 004cab03  81fbe09e8b00         cmp ebx, 0x8b9ee0
// 004cab09  7406                 je 0x4cab11
// 004cab0b  ff1544e97700         call dword ptr [0x77e944]
// 004cab11  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cab15  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004cab19  755e                 jne 0x4cab79
// 004cab1b  6a50                 push 0x50
// 004cab1d  e8e6351500           call 0x61e108
// 004cab22  83c404               add esp, 4
// 004cab25  89442448             mov dword ptr [esp + 0x48], eax
// 004cab29  85c0                 test eax, eax
// 004cab2b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004cab33  740e                 je 0x4cab43
// 004cab35  57                   push edi
// 004cab36  55                   push ebp
// 004cab37  56                   push esi
// 004cab38  8bc8                 mov ecx, eax
// 004cab3a  e8710a0100           call 0x4db5b0
// 004cab3f  8bf0                 mov esi, eax
// 004cab41  eb02                 jmp 0x4cab45
// 004cab43  33f6                 xor esi, esi
// 004cab45  8d4c2420             lea ecx, [esp + 0x20]
// 004cab49  51                   push ecx
// 004cab4a  b9e09e8b00           mov ecx, 0x8b9ee0
// 004cab4f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004cab57  e884f1ffff           call 0x4c9ce0
// 004cab5c  56                   push esi
// 004cab5d  8bc8                 mov ecx, eax
// 004cab5f  e82ca5faff           call 0x475090
// 004cab64  5f                   pop edi
// 004cab65  8bc6                 mov eax, esi
// 004cab67  5e                   pop esi
// 004cab68  5d                   pop ebp
// 004cab69  5b                   pop ebx
// 004cab6a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cab6e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cab75  83c434               add esp, 0x34
// 004cab78  c3                   ret 
// 004cab79  85db                 test ebx, ebx
// 004cab7b  7506                 jne 0x4cab83
// 004cab7d  ff1544e97700         call dword ptr [0x77e944]
// 004cab83  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cab87  3b5304               cmp edx, dword ptr [ebx + 4]
// 004cab8a  7506                 jne 0x4cab92
// 004cab8c  ff1544e97700         call dword ptr [0x77e944]
// 004cab92  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cab96  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004cab9a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004cab9d  5f                   pop edi
// 004cab9e  5e                   pop esi
// 004cab9f  5d                   pop ebp
// 004caba0  5b                   pop ebx
// 004caba1  64890d00000000       mov dword ptr fs:[0], ecx
// 004caba8  83c434               add esp, 0x34
// 004cabab  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
