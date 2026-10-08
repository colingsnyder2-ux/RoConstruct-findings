// roc 2007-08 005444e0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005444e0
//
// 005444e0  53                   push ebx
// 005444e1  56                   push esi
// 005444e2  57                   push edi
// 005444e3  8bd9                 mov ebx, ecx
// 005444e5  e8d6f6ffff           call 0x543bc0
// 005444ea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005444ee  8bf0                 mov esi, eax
// 005444f0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005444f3  7342                 jae 0x544537
// 005444f5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005444f8  85c9                 test ecx, ecx
// 005444fa  740f                 je 0x54450b
// 005444fc  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00544502  2bc1                 sub eax, ecx
// 00544504  c1f802               sar eax, 2
// 00544507  3bf8                 cmp edi, eax
// 00544509  7206                 jb 0x544511
// 0054450b  ff15d8e67700         call dword ptr [0x77e6d8]
// 00544511  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00544514  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 00544517  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0054451a  8d442414             lea eax, [esp + 0x14]
// 0054451e  50                   push eax
// 0054451f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00544523  897c2418             mov dword ptr [esp + 0x18], edi
// 00544527  8b11                 mov edx, dword ptr [ecx]
// 00544529  8b5208               mov edx, dword ptr [edx + 8]
// 0054452c  50                   push eax
// 0054452d  ffd2                 call edx
// 0054452f  5f                   pop edi
// 00544530  5e                   pop esi
// 00544531  b001                 mov al, 1
// 00544533  5b                   pop ebx
// 00544534  c20800               ret 8
// 00544537  5f                   pop edi
// 00544538  5e                   pop esi
// 00544539  32c0                 xor al, al
// 0054453b  5b                   pop ebx
// 0054453c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
