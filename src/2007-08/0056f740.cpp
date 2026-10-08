// roc 2007-08 0056f740  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f740
//
// 0056f740  83ec0c               sub esp, 0xc
// 0056f743  56                   push esi
// 0056f744  8d442404             lea eax, [esp + 4]
// 0056f748  8bf1                 mov esi, ecx
// 0056f74a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056f74e  50                   push eax
// 0056f74f  51                   push ecx
// 0056f750  e8dbdb0100           call 0x58d330
// 0056f755  83c408               add esp, 8
// 0056f758  84c0                 test al, al
// 0056f75a  741d                 je 0x56f779
// 0056f75c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056f75f  8b11                 mov edx, dword ptr [ecx]
// 0056f761  8b5208               mov edx, dword ptr [edx + 8]
// 0056f764  8d442404             lea eax, [esp + 4]
// 0056f768  50                   push eax
// 0056f769  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056f76d  50                   push eax
// 0056f76e  ffd2                 call edx
// 0056f770  b001                 mov al, 1
// 0056f772  5e                   pop esi
// 0056f773  83c40c               add esp, 0xc
// 0056f776  c20800               ret 8
// 0056f779  32c0                 xor al, al
// 0056f77b  5e                   pop esi
// 0056f77c  83c40c               add esp, 0xc
// 0056f77f  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
