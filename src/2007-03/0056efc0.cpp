// roc 2007-03 0056efc0  unit: seg_00560000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056efc0
//
// 0056efc0  83ec0c               sub esp, 0xc
// 0056efc3  56                   push esi
// 0056efc4  8d442404             lea eax, [esp + 4]
// 0056efc8  8bf1                 mov esi, ecx
// 0056efca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056efce  50                   push eax
// 0056efcf  51                   push ecx
// 0056efd0  e82b8c0100           call 0x587c00
// 0056efd5  83c408               add esp, 8
// 0056efd8  84c0                 test al, al
// 0056efda  741d                 je 0x56eff9
// 0056efdc  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056efdf  8b11                 mov edx, dword ptr [ecx]
// 0056efe1  8b5208               mov edx, dword ptr [edx + 8]
// 0056efe4  8d442404             lea eax, [esp + 4]
// 0056efe8  50                   push eax
// 0056efe9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056efed  50                   push eax
// 0056efee  ffd2                 call edx
// 0056eff0  b001                 mov al, 1
// 0056eff2  5e                   pop esi
// 0056eff3  83c40c               add esp, 0xc
// 0056eff6  c20800               ret 8
// 0056eff9  32c0                 xor al, al
// 0056effb  5e                   pop esi
// 0056effc  83c40c               add esp, 0xc
// 0056efff  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
