// roc 2007-03 005b2e60  unit: seg_005b0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2e60
//
// 005b2e60  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b2e63  8b01                 mov eax, dword ptr [ecx]
// 005b2e65  8b542404             mov edx, dword ptr [esp + 4]
// 005b2e69  8b4004               mov eax, dword ptr [eax + 4]
// 005b2e6c  56                   push esi
// 005b2e6d  57                   push edi
// 005b2e6e  52                   push edx
// 005b2e6f  ffd0                 call eax
// 005b2e71  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b2e75  83c60c               add esi, 0xc
// 005b2e78  8bce                 mov ecx, esi
// 005b2e7a  8bf8                 mov edi, eax
// 005b2e7c  e83fc0faff           call 0x55eec0
// 005b2e81  897e08               mov dword ptr [esi + 8], edi
// 005b2e84  5f                   pop edi
// 005b2e85  c7460405000000       mov dword ptr [esi + 4], 5
// 005b2e8c  5e                   pop esi
// 005b2e8d  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?writeValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
