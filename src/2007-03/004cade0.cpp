// roc 2007-03 004cade0  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cade0
//
// 004cade0  6aff                 push -1
// 004cade2  68cbd77400           push 0x74d7cb
// 004cade7  64a100000000         mov eax, dword ptr fs:[0]
// 004caded  50                   push eax
// 004cadee  64892500000000       mov dword ptr fs:[0], esp
// 004cadf5  83ec18               sub esp, 0x18
// 004cadf8  53                   push ebx
// 004cadf9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004cadfd  55                   push ebp
// 004cadfe  56                   push esi
// 004cadff  8b742434             mov esi, dword ptr [esp + 0x34]
// 004cae03  d906                 fld dword ptr [esi]
// 004cae05  57                   push edi
// 004cae06  d95c2418             fstp dword ptr [esp + 0x18]
// 004cae0a  8d442418             lea eax, [esp + 0x18]
// 004cae0e  d94604               fld dword ptr [esi + 4]
// 004cae11  50                   push eax
// 004cae12  d95c2420             fstp dword ptr [esp + 0x20]
// 004cae16  8d4c2414             lea ecx, [esp + 0x14]
// 004cae1a  d94608               fld dword ptr [esi + 8]
// 004cae1d  51                   push ecx
// 004cae1e  b9b09e8b00           mov ecx, 0x8b9eb0
// 004cae23  d95c2428             fstp dword ptr [esp + 0x28]
// 004cae27  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004cae2b  e800b9ffff           call 0x4c6730
// 004cae30  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cae34  85ff                 test edi, edi
// 004cae36  8b2db49e8b00         mov ebp, dword ptr [0x8b9eb4]
// 004cae3c  7408                 je 0x4cae46
// 004cae3e  81ffb09e8b00         cmp edi, 0x8b9eb0
// 004cae44  7406                 je 0x4cae4c
// 004cae46  ff1544e97700         call dword ptr [0x77e944]
// 004cae4c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004cae50  755d                 jne 0x4caeaf
// 004cae52  6a50                 push 0x50
// 004cae54  e8af321500           call 0x61e108
// 004cae59  83c404               add esp, 4
// 004cae5c  89442438             mov dword ptr [esp + 0x38], eax
// 004cae60  85c0                 test eax, eax
// 004cae62  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004cae6a  740d                 je 0x4cae79
// 004cae6c  53                   push ebx
// 004cae6d  56                   push esi
// 004cae6e  8bc8                 mov ecx, eax
// 004cae70  e87b3e0100           call 0x4decf0
// 004cae75  8bf0                 mov esi, eax
// 004cae77  eb02                 jmp 0x4cae7b
// 004cae79  33f6                 xor esi, esi
// 004cae7b  8d542418             lea edx, [esp + 0x18]
// 004cae7f  52                   push edx
// 004cae80  b9b09e8b00           mov ecx, 0x8b9eb0
// 004cae85  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004cae8d  e84eedffff           call 0x4c9be0
// 004cae92  56                   push esi
// 004cae93  8bc8                 mov ecx, eax
// 004cae95  e8f6a1faff           call 0x475090
// 004cae9a  5f                   pop edi
// 004cae9b  8bc6                 mov eax, esi
// 004cae9d  5e                   pop esi
// 004cae9e  5d                   pop ebp
// 004cae9f  5b                   pop ebx
// 004caea0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004caea4  64890d00000000       mov dword ptr fs:[0], ecx
// 004caeab  83c424               add esp, 0x24
// 004caeae  c3                   ret 
// 004caeaf  85ff                 test edi, edi
// 004caeb1  7506                 jne 0x4caeb9
// 004caeb3  ff1544e97700         call dword ptr [0x77e944]
// 004caeb9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004caebd  3b4704               cmp eax, dword ptr [edi + 4]
// 004caec0  7506                 jne 0x4caec8
// 004caec2  ff1544e97700         call dword ptr [0x77e944]
// 004caec8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004caecc  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004caecf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004caed3  5f                   pop edi
// 004caed4  5e                   pop esi
// 004caed5  5d                   pop ebp
// 004caed6  5b                   pop ebx
// 004caed7  64890d00000000       mov dword ptr fs:[0], ecx
// 004caede  83c424               add esp, 0x24
// 004caee1  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
