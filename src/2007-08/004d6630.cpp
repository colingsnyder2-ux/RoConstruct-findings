// roc 2007-08 004d6630  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6630
//
// 004d6630  6aff                 push -1
// 004d6632  682b127500           push 0x75122b
// 004d6637  64a100000000         mov eax, dword ptr fs:[0]
// 004d663d  50                   push eax
// 004d663e  64892500000000       mov dword ptr fs:[0], esp
// 004d6645  83ec28               sub esp, 0x28
// 004d6648  53                   push ebx
// 004d6649  55                   push ebp
// 004d664a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d664e  56                   push esi
// 004d664f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d6653  d906                 fld dword ptr [esi]
// 004d6655  57                   push edi
// 004d6656  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d665a  d95c2420             fstp dword ptr [esp + 0x20]
// 004d665e  d94604               fld dword ptr [esi + 4]
// 004d6661  8d442420             lea eax, [esp + 0x20]
// 004d6665  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6669  50                   push eax
// 004d666a  d94608               fld dword ptr [esi + 8]
// 004d666d  8d4c2414             lea ecx, [esp + 0x14]
// 004d6671  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d6675  51                   push ecx
// 004d6676  d907                 fld dword ptr [edi]
// 004d6678  b90cfa8b00           mov ecx, 0x8bfa0c
// 004d667d  d95c2438             fstp dword ptr [esp + 0x38]
// 004d6681  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d6685  d94704               fld dword ptr [edi + 4]
// 004d6688  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d668c  e82fc0ffff           call 0x4d26c0
// 004d6691  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d6695  85db                 test ebx, ebx
// 004d6697  8b1510fa8b00         mov edx, dword ptr [0x8bfa10]
// 004d669d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d66a1  7408                 je 0x4d66ab
// 004d66a3  81fb0cfa8b00         cmp ebx, 0x8bfa0c
// 004d66a9  7406                 je 0x4d66b1
// 004d66ab  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d66b1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d66b5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d66b9  755e                 jne 0x4d6719
// 004d66bb  6a50                 push 0x50
// 004d66bd  e834981500           call 0x62fef6
// 004d66c2  83c404               add esp, 4
// 004d66c5  89442448             mov dword ptr [esp + 0x48], eax
// 004d66c9  85c0                 test eax, eax
// 004d66cb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d66d3  740e                 je 0x4d66e3
// 004d66d5  57                   push edi
// 004d66d6  55                   push ebp
// 004d66d7  56                   push esi
// 004d66d8  8bc8                 mov ecx, eax
// 004d66da  e821140100           call 0x4e7b00
// 004d66df  8bf0                 mov esi, eax
// 004d66e1  eb02                 jmp 0x4d66e5
// 004d66e3  33f6                 xor esi, esi
// 004d66e5  8d4c2420             lea ecx, [esp + 0x20]
// 004d66e9  51                   push ecx
// 004d66ea  b90cfa8b00           mov ecx, 0x8bfa0c
// 004d66ef  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d66f7  e824f2ffff           call 0x4d5920
// 004d66fc  56                   push esi
// 004d66fd  8bc8                 mov ecx, eax
// 004d66ff  e86ce8f9ff           call 0x474f70
// 004d6704  5f                   pop edi
// 004d6705  8bc6                 mov eax, esi
// 004d6707  5e                   pop esi
// 004d6708  5d                   pop ebp
// 004d6709  5b                   pop ebx
// 004d670a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d670e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6715  83c434               add esp, 0x34
// 004d6718  c3                   ret 
// 004d6719  85db                 test ebx, ebx
// 004d671b  7506                 jne 0x4d6723
// 004d671d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6723  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d6727  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d672a  7506                 jne 0x4d6732
// 004d672c  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6732  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6736  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d673a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d673d  5f                   pop edi
// 004d673e  5e                   pop esi
// 004d673f  5d                   pop ebp
// 004d6740  5b                   pop ebx
// 004d6741  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6748  83c434               add esp, 0x34
// 004d674b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
