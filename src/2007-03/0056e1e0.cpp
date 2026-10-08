// roc 2007-03 0056e1e0  unit: seg_00560000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e1e0
//
// 0056e1e0  56                   push esi
// 0056e1e1  8d44240c             lea eax, [esp + 0xc]
// 0056e1e5  8bf1                 mov esi, ecx
// 0056e1e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e1eb  50                   push eax
// 0056e1ec  51                   push ecx
// 0056e1ed  e86e1a0100           call 0x57fc60
// 0056e1f2  83c408               add esp, 8
// 0056e1f5  84c0                 test al, al
// 0056e1f7  741a                 je 0x56e213
// 0056e1f9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e1fc  8b11                 mov edx, dword ptr [ecx]
// 0056e1fe  8b5208               mov edx, dword ptr [edx + 8]
// 0056e201  8d44240c             lea eax, [esp + 0xc]
// 0056e205  50                   push eax
// 0056e206  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e20a  50                   push eax
// 0056e20b  ffd2                 call edx
// 0056e20d  b001                 mov al, 1
// 0056e20f  5e                   pop esi
// 0056e210  c20800               ret 8
// 0056e213  32c0                 xor al, al
// 0056e215  5e                   pop esi
// 0056e216  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
