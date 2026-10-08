// roc 2007-08 0056ed70  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ed70
//
// 0056ed70  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056ed73  8b01                 mov eax, dword ptr [ecx]
// 0056ed75  8b542404             mov edx, dword ptr [esp + 4]
// 0056ed79  8b4004               mov eax, dword ptr [eax + 4]
// 0056ed7c  56                   push esi
// 0056ed7d  57                   push edi
// 0056ed7e  52                   push edx
// 0056ed7f  ffd0                 call eax
// 0056ed81  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056ed85  83c60c               add esi, 0xc
// 0056ed88  8bce                 mov ecx, esi
// 0056ed8a  8bf8                 mov edi, eax
// 0056ed8c  e83fe6feff           call 0x55d3d0
// 0056ed91  897e08               mov dword ptr [esi + 8], edi
// 0056ed94  5f                   pop edi
// 0056ed95  c7460405000000       mov dword ptr [esi + 4], 5
// 0056ed9c  5e                   pop esi
// 0056ed9d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@H@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
