// roc 2007-08 005dcbd0  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcbd0
//
// 005dcbd0  56                   push esi
// 005dcbd1  8d44240c             lea eax, [esp + 0xc]
// 005dcbd5  8bf1                 mov esi, ecx
// 005dcbd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dcbdb  50                   push eax
// 005dcbdc  51                   push ecx
// 005dcbdd  e8eef4ffff           call 0x5dc0d0
// 005dcbe2  8bc8                 mov ecx, eax
// 005dcbe4  e8b7f6ffff           call 0x5dc2a0
// 005dcbe9  84c0                 test al, al
// 005dcbeb  7422                 je 0x5dcc0f
// 005dcbed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcbf1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcbf4  8954240c             mov dword ptr [esp + 0xc], edx
// 005dcbf8  8b01                 mov eax, dword ptr [ecx]
// 005dcbfa  8b4008               mov eax, dword ptr [eax + 8]
// 005dcbfd  8d54240c             lea edx, [esp + 0xc]
// 005dcc01  52                   push edx
// 005dcc02  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcc06  52                   push edx
// 005dcc07  ffd0                 call eax
// 005dcc09  b001                 mov al, 1
// 005dcc0b  5e                   pop esi
// 005dcc0c  c20800               ret 8
// 005dcc0f  32c0                 xor al, al
// 005dcc11  5e                   pop esi
// 005dcc12  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
