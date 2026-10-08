// roc 2007-08 004d62f0  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d62f0
//
// 004d62f0  6aff                 push -1
// 004d62f2  682b127500           push 0x75122b
// 004d62f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d62fd  50                   push eax
// 004d62fe  64892500000000       mov dword ptr fs:[0], esp
// 004d6305  83ec18               sub esp, 0x18
// 004d6308  53                   push ebx
// 004d6309  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d630d  55                   push ebp
// 004d630e  56                   push esi
// 004d630f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d6313  d906                 fld dword ptr [esi]
// 004d6315  57                   push edi
// 004d6316  d95c2418             fstp dword ptr [esp + 0x18]
// 004d631a  8d442418             lea eax, [esp + 0x18]
// 004d631e  d94604               fld dword ptr [esi + 4]
// 004d6321  50                   push eax
// 004d6322  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6326  8d4c2414             lea ecx, [esp + 0x14]
// 004d632a  d94608               fld dword ptr [esi + 8]
// 004d632d  51                   push ecx
// 004d632e  b918fa8b00           mov ecx, 0x8bfa18
// 004d6333  d95c2428             fstp dword ptr [esp + 0x28]
// 004d6337  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d633b  e810c3ffff           call 0x4d2650
// 004d6340  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d6344  85ff                 test edi, edi
// 004d6346  8b2d1cfa8b00         mov ebp, dword ptr [0x8bfa1c]
// 004d634c  7408                 je 0x4d6356
// 004d634e  81ff18fa8b00         cmp edi, 0x8bfa18
// 004d6354  7406                 je 0x4d635c
// 004d6356  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d635c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d6360  755d                 jne 0x4d63bf
// 004d6362  6a50                 push 0x50
// 004d6364  e88d9b1500           call 0x62fef6
// 004d6369  83c404               add esp, 4
// 004d636c  89442438             mov dword ptr [esp + 0x38], eax
// 004d6370  85c0                 test eax, eax
// 004d6372  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d637a  740d                 je 0x4d6389
// 004d637c  53                   push ebx
// 004d637d  56                   push esi
// 004d637e  8bc8                 mov ecx, eax
// 004d6380  e8fbe50000           call 0x4e4980
// 004d6385  8bf0                 mov esi, eax
// 004d6387  eb02                 jmp 0x4d638b
// 004d6389  33f6                 xor esi, esi
// 004d638b  8d542418             lea edx, [esp + 0x18]
// 004d638f  52                   push edx
// 004d6390  b918fa8b00           mov ecx, 0x8bfa18
// 004d6395  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d639d  e87ef4ffff           call 0x4d5820
// 004d63a2  56                   push esi
// 004d63a3  8bc8                 mov ecx, eax
// 004d63a5  e8c6ebf9ff           call 0x474f70
// 004d63aa  5f                   pop edi
// 004d63ab  8bc6                 mov eax, esi
// 004d63ad  5e                   pop esi
// 004d63ae  5d                   pop ebp
// 004d63af  5b                   pop ebx
// 004d63b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d63b4  64890d00000000       mov dword ptr fs:[0], ecx
// 004d63bb  83c424               add esp, 0x24
// 004d63be  c3                   ret 
// 004d63bf  85ff                 test edi, edi
// 004d63c1  7506                 jne 0x4d63c9
// 004d63c3  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d63c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d63cd  3b4704               cmp eax, dword ptr [edi + 4]
// 004d63d0  7506                 jne 0x4d63d8
// 004d63d2  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d63d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d63dc  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d63df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d63e3  5f                   pop edi
// 004d63e4  5e                   pop esi
// 004d63e5  5d                   pop ebp
// 004d63e6  5b                   pop ebx
// 004d63e7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d63ee  83c424               add esp, 0x24
// 004d63f1  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
