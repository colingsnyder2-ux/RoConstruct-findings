// roc 2007-08 005dc1d0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc1d0
//
// 005dc1d0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dc1d3  8b01                 mov eax, dword ptr [ecx]
// 005dc1d5  8b542404             mov edx, dword ptr [esp + 4]
// 005dc1d9  8b4004               mov eax, dword ptr [eax + 4]
// 005dc1dc  56                   push esi
// 005dc1dd  57                   push edi
// 005dc1de  52                   push edx
// 005dc1df  ffd0                 call eax
// 005dc1e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005dc1e5  83c60c               add esi, 0xc
// 005dc1e8  8bce                 mov ecx, esi
// 005dc1ea  8bf8                 mov edi, eax
// 005dc1ec  e8df11f8ff           call 0x55d3d0
// 005dc1f1  897e08               mov dword ptr [esi + 8], edi
// 005dc1f4  5f                   pop edi
// 005dc1f5  c7460405000000       mov dword ptr [esi + 4], 5
// 005dc1fc  5e                   pop esi
// 005dc1fd  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?writeValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
