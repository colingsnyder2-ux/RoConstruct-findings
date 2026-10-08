// roc 2007-08 004d60c0  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d60c0
//
// 004d60c0  6aff                 push -1
// 004d60c2  682b127500           push 0x75122b
// 004d60c7  64a100000000         mov eax, dword ptr fs:[0]
// 004d60cd  50                   push eax
// 004d60ce  64892500000000       mov dword ptr fs:[0], esp
// 004d60d5  83ec18               sub esp, 0x18
// 004d60d8  53                   push ebx
// 004d60d9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d60dd  55                   push ebp
// 004d60de  56                   push esi
// 004d60df  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d60e3  d906                 fld dword ptr [esi]
// 004d60e5  57                   push edi
// 004d60e6  d95c2418             fstp dword ptr [esp + 0x18]
// 004d60ea  8d442418             lea eax, [esp + 0x18]
// 004d60ee  d94604               fld dword ptr [esi + 4]
// 004d60f1  50                   push eax
// 004d60f2  d95c2420             fstp dword ptr [esp + 0x20]
// 004d60f6  8d4c2414             lea ecx, [esp + 0x14]
// 004d60fa  d94608               fld dword ptr [esi + 8]
// 004d60fd  51                   push ecx
// 004d60fe  b9f4f98b00           mov ecx, 0x8bf9f4
// 004d6103  d95c2428             fstp dword ptr [esp + 0x28]
// 004d6107  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d610b  e840c5ffff           call 0x4d2650
// 004d6110  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d6114  85ff                 test edi, edi
// 004d6116  8b2df8f98b00         mov ebp, dword ptr [0x8bf9f8]
// 004d611c  7408                 je 0x4d6126
// 004d611e  81fff4f98b00         cmp edi, 0x8bf9f4
// 004d6124  7406                 je 0x4d612c
// 004d6126  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d612c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d6130  755d                 jne 0x4d618f
// 004d6132  6a50                 push 0x50
// 004d6134  e8bd9d1500           call 0x62fef6
// 004d6139  83c404               add esp, 4
// 004d613c  89442438             mov dword ptr [esp + 0x38], eax
// 004d6140  85c0                 test eax, eax
// 004d6142  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d614a  740d                 je 0x4d6159
// 004d614c  53                   push ebx
// 004d614d  56                   push esi
// 004d614e  8bc8                 mov ecx, eax
// 004d6150  e82bb60000           call 0x4e1780
// 004d6155  8bf0                 mov esi, eax
// 004d6157  eb02                 jmp 0x4d615b
// 004d6159  33f6                 xor esi, esi
// 004d615b  8d542418             lea edx, [esp + 0x18]
// 004d615f  52                   push edx
// 004d6160  b9f4f98b00           mov ecx, 0x8bf9f4
// 004d6165  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d616d  e8aef6ffff           call 0x4d5820
// 004d6172  56                   push esi
// 004d6173  8bc8                 mov ecx, eax
// 004d6175  e8f6edf9ff           call 0x474f70
// 004d617a  5f                   pop edi
// 004d617b  8bc6                 mov eax, esi
// 004d617d  5e                   pop esi
// 004d617e  5d                   pop ebp
// 004d617f  5b                   pop ebx
// 004d6180  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d6184  64890d00000000       mov dword ptr fs:[0], ecx
// 004d618b  83c424               add esp, 0x24
// 004d618e  c3                   ret 
// 004d618f  85ff                 test edi, edi
// 004d6191  7506                 jne 0x4d6199
// 004d6193  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6199  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d619d  3b4704               cmp eax, dword ptr [edi + 4]
// 004d61a0  7506                 jne 0x4d61a8
// 004d61a2  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d61a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d61ac  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d61af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d61b3  5f                   pop edi
// 004d61b4  5e                   pop esi
// 004d61b5  5d                   pop ebp
// 004d61b6  5b                   pop ebx
// 004d61b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d61be  83c424               add esp, 0x24
// 004d61c1  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
