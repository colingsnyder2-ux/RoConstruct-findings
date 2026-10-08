// roc 2007-08 0059b3b0  unit: RBX::VCamera::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b3b0
//
// 0059b3b0  53                   push ebx
// 0059b3b1  56                   push esi
// 0059b3b2  57                   push edi
// 0059b3b3  8bd9                 mov ebx, ecx
// 0059b3b5  e886fbffff           call 0x59af40
// 0059b3ba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059b3be  8bf0                 mov esi, eax
// 0059b3c0  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0059b3c3  7342                 jae 0x59b407
// 0059b3c5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0059b3c8  85c9                 test ecx, ecx
// 0059b3ca  740f                 je 0x59b3db
// 0059b3cc  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0059b3d2  2bc1                 sub eax, ecx
// 0059b3d4  c1f802               sar eax, 2
// 0059b3d7  3bf8                 cmp edi, eax
// 0059b3d9  7206                 jb 0x59b3e1
// 0059b3db  ff15d8e67700         call dword ptr [0x77e6d8]
// 0059b3e1  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059b3e4  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 0059b3e7  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0059b3ea  8d442414             lea eax, [esp + 0x14]
// 0059b3ee  50                   push eax
// 0059b3ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059b3f3  897c2418             mov dword ptr [esp + 0x18], edi
// 0059b3f7  8b11                 mov edx, dword ptr [ecx]
// 0059b3f9  8b5208               mov edx, dword ptr [edx + 8]
// 0059b3fc  50                   push eax
// 0059b3fd  ffd2                 call edx
// 0059b3ff  5f                   pop edi
// 0059b400  5e                   pop esi
// 0059b401  b001                 mov al, 1
// 0059b403  5b                   pop ebx
// 0059b404  c20800               ret 8
// 0059b407  5f                   pop edi
// 0059b408  5e                   pop esi
// 0059b409  32c0                 xor al, al
// 0059b40b  5b                   pop ebx
// 0059b40c  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?setIndexValue@?$EnumPropDescriptor@VCamera@RBX@@W4CameraType@12@@Reflection@RBX@@UBE_NPAVDescribedBase@23@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
