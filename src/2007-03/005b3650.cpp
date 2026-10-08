// roc 2007-03 005b3650  unit: seg_005b0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3650
//
// 005b3650  56                   push esi
// 005b3651  57                   push edi
// 005b3652  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b3656  57                   push edi
// 005b3657  8bf1                 mov esi, ecx
// 005b3659  e872f5ffff           call 0x5b2bd0
// 005b365e  8bc8                 mov ecx, eax
// 005b3660  e8ab2be9ff           call 0x446210
// 005b3665  84c0                 test al, al
// 005b3667  741f                 je 0x5b3688
// 005b3669  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b366c  8d542410             lea edx, [esp + 0x10]
// 005b3670  52                   push edx
// 005b3671  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b3675  897c2414             mov dword ptr [esp + 0x14], edi
// 005b3679  8b01                 mov eax, dword ptr [ecx]
// 005b367b  8b4008               mov eax, dword ptr [eax + 8]
// 005b367e  52                   push edx
// 005b367f  ffd0                 call eax
// 005b3681  5f                   pop edi
// 005b3682  b001                 mov al, 1
// 005b3684  5e                   pop esi
// 005b3685  c20800               ret 8
// 005b3688  5f                   pop edi
// 005b3689  32c0                 xor al, al
// 005b368b  5e                   pop esi
// 005b368c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
