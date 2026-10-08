// roc 2007-08 0056ed00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ed00
//
// 0056ed00  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056ed03  8b01                 mov eax, dword ptr [ecx]
// 0056ed05  8b542404             mov edx, dword ptr [esp + 4]
// 0056ed09  8b4004               mov eax, dword ptr [eax + 4]
// 0056ed0c  53                   push ebx
// 0056ed0d  56                   push esi
// 0056ed0e  52                   push edx
// 0056ed0f  ffd0                 call eax
// 0056ed11  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056ed15  83c60c               add esi, 0xc
// 0056ed18  8bce                 mov ecx, esi
// 0056ed1a  8ad8                 mov bl, al
// 0056ed1c  e8afe6feff           call 0x55d3d0
// 0056ed21  885e08               mov byte ptr [esi + 8], bl
// 0056ed24  c7460404000000       mov dword ptr [esi + 4], 4
// 0056ed2b  5e                   pop esi
// 0056ed2c  5b                   pop ebx
// 0056ed2d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
