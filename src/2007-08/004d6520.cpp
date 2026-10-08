// roc 2007-08 004d6520  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6520
//
// 004d6520  6aff                 push -1
// 004d6522  682b127500           push 0x75122b
// 004d6527  64a100000000         mov eax, dword ptr fs:[0]
// 004d652d  50                   push eax
// 004d652e  64892500000000       mov dword ptr fs:[0], esp
// 004d6535  83ec18               sub esp, 0x18
// 004d6538  53                   push ebx
// 004d6539  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d653d  55                   push ebp
// 004d653e  56                   push esi
// 004d653f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d6543  d906                 fld dword ptr [esi]
// 004d6545  57                   push edi
// 004d6546  d95c2418             fstp dword ptr [esp + 0x18]
// 004d654a  8d442418             lea eax, [esp + 0x18]
// 004d654e  d94604               fld dword ptr [esi + 4]
// 004d6551  50                   push eax
// 004d6552  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6556  8d4c2414             lea ecx, [esp + 0x14]
// 004d655a  d94608               fld dword ptr [esi + 8]
// 004d655d  51                   push ecx
// 004d655e  b960fa8b00           mov ecx, 0x8bfa60
// 004d6563  d95c2428             fstp dword ptr [esp + 0x28]
// 004d6567  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d656b  e8e0c0ffff           call 0x4d2650
// 004d6570  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d6574  85ff                 test edi, edi
// 004d6576  8b2d64fa8b00         mov ebp, dword ptr [0x8bfa64]
// 004d657c  7408                 je 0x4d6586
// 004d657e  81ff60fa8b00         cmp edi, 0x8bfa60
// 004d6584  7406                 je 0x4d658c
// 004d6586  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d658c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d6590  755d                 jne 0x4d65ef
// 004d6592  6a50                 push 0x50
// 004d6594  e85d991500           call 0x62fef6
// 004d6599  83c404               add esp, 4
// 004d659c  89442438             mov dword ptr [esp + 0x38], eax
// 004d65a0  85c0                 test eax, eax
// 004d65a2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d65aa  740d                 je 0x4d65b9
// 004d65ac  53                   push ebx
// 004d65ad  56                   push esi
// 004d65ae  8bc8                 mov ecx, eax
// 004d65b0  e8bb130100           call 0x4e7970
// 004d65b5  8bf0                 mov esi, eax
// 004d65b7  eb02                 jmp 0x4d65bb
// 004d65b9  33f6                 xor esi, esi
// 004d65bb  8d542418             lea edx, [esp + 0x18]
// 004d65bf  52                   push edx
// 004d65c0  b960fa8b00           mov ecx, 0x8bfa60
// 004d65c5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d65cd  e84ef2ffff           call 0x4d5820
// 004d65d2  56                   push esi
// 004d65d3  8bc8                 mov ecx, eax
// 004d65d5  e896e9f9ff           call 0x474f70
// 004d65da  5f                   pop edi
// 004d65db  8bc6                 mov eax, esi
// 004d65dd  5e                   pop esi
// 004d65de  5d                   pop ebp
// 004d65df  5b                   pop ebx
// 004d65e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d65e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004d65eb  83c424               add esp, 0x24
// 004d65ee  c3                   ret 
// 004d65ef  85ff                 test edi, edi
// 004d65f1  7506                 jne 0x4d65f9
// 004d65f3  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d65f9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d65fd  3b4704               cmp eax, dword ptr [edi + 4]
// 004d6600  7506                 jne 0x4d6608
// 004d6602  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6608  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d660c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d660f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6613  5f                   pop edi
// 004d6614  5e                   pop esi
// 004d6615  5d                   pop ebp
// 004d6616  5b                   pop ebx
// 004d6617  64890d00000000       mov dword ptr fs:[0], ecx
// 004d661e  83c424               add esp, 0x24
// 004d6621  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
