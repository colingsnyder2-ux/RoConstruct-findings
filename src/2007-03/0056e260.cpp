// roc 2007-03 0056e260  unit: seg_00560000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e260
//
// 0056e260  56                   push esi
// 0056e261  8d44240c             lea eax, [esp + 0xc]
// 0056e265  8bf1                 mov esi, ecx
// 0056e267  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e26b  50                   push eax
// 0056e26c  51                   push ecx
// 0056e26d  e80e190100           call 0x57fb80
// 0056e272  83c408               add esp, 8
// 0056e275  84c0                 test al, al
// 0056e277  741a                 je 0x56e293
// 0056e279  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e27c  8b11                 mov edx, dword ptr [ecx]
// 0056e27e  8b5208               mov edx, dword ptr [edx + 8]
// 0056e281  8d44240c             lea eax, [esp + 0xc]
// 0056e285  50                   push eax
// 0056e286  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e28a  50                   push eax
// 0056e28b  ffd2                 call edx
// 0056e28d  b001                 mov al, 1
// 0056e28f  5e                   pop esi
// 0056e290  c20800               ret 8
// 0056e293  32c0                 xor al, al
// 0056e295  5e                   pop esi
// 0056e296  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
