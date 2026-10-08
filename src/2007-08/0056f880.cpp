// roc 2007-08 0056f880  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f880
//
// 0056f880  8b542404             mov edx, dword ptr [esp + 4]
// 0056f884  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f887  8b01                 mov eax, dword ptr [ecx]
// 0056f889  8b4004               mov eax, dword ptr [eax + 4]
// 0056f88c  83ec0c               sub esp, 0xc
// 0056f88f  56                   push esi
// 0056f890  57                   push edi
// 0056f891  52                   push edx
// 0056f892  8d54240c             lea edx, [esp + 0xc]
// 0056f896  52                   push edx
// 0056f897  ffd0                 call eax
// 0056f899  8d4c2408             lea ecx, [esp + 8]
// 0056f89d  51                   push ecx
// 0056f89e  8d4c241c             lea ecx, [esp + 0x1c]
// 0056f8a2  e84971f9ff           call 0x5069f0
// 0056f8a7  0fb6742418           movzx esi, byte ptr [esp + 0x18]
// 0056f8ac  0fb6542419           movzx edx, byte ptr [esp + 0x19]
// 0056f8b1  0fb644241a           movzx eax, byte ptr [esp + 0x1a]
// 0056f8b6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056f8ba  81c600ff0000         add esi, 0xff00
// 0056f8c0  c1e608               shl esi, 8
// 0056f8c3  03f2                 add esi, edx
// 0056f8c5  83c70c               add edi, 0xc
// 0056f8c8  c1e608               shl esi, 8
// 0056f8cb  8bcf                 mov ecx, edi
// 0056f8cd  03f0                 add esi, eax
// 0056f8cf  e8fcdafeff           call 0x55d3d0
// 0056f8d4  897708               mov dword ptr [edi + 8], esi
// 0056f8d7  c7470406000000       mov dword ptr [edi + 4], 6
// 0056f8de  5f                   pop edi
// 0056f8df  5e                   pop esi
// 0056f8e0  83c40c               add esp, 0xc
// 0056f8e3  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
