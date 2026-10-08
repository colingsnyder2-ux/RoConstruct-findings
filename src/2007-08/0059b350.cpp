// roc 2007-08 0059b350  unit: RBX::VCamera::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b350
//
// 0059b350  56                   push esi
// 0059b351  57                   push edi
// 0059b352  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059b356  57                   push edi
// 0059b357  8bf1                 mov esi, ecx
// 0059b359  e8e2fbffff           call 0x59af40
// 0059b35e  8bc8                 mov ecx, eax
// 0059b360  e85bb9eaff           call 0x446cc0
// 0059b365  84c0                 test al, al
// 0059b367  741f                 je 0x59b388
// 0059b369  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059b36c  8d542410             lea edx, [esp + 0x10]
// 0059b370  52                   push edx
// 0059b371  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b375  897c2414             mov dword ptr [esp + 0x14], edi
// 0059b379  8b01                 mov eax, dword ptr [ecx]
// 0059b37b  8b4008               mov eax, dword ptr [eax + 8]
// 0059b37e  52                   push edx
// 0059b37f  ffd0                 call eax
// 0059b381  5f                   pop edi
// 0059b382  b001                 mov al, 1
// 0059b384  5e                   pop esi
// 0059b385  c20800               ret 8
// 0059b388  5f                   pop edi
// 0059b389  32c0                 xor al, al
// 0059b38b  5e                   pop esi
// 0059b38c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
