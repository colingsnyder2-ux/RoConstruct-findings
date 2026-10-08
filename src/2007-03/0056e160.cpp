// roc 2007-03 0056e160  unit: seg_00560000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e160
//
// 0056e160  56                   push esi
// 0056e161  8d44240c             lea eax, [esp + 0xc]
// 0056e165  8bf1                 mov esi, ecx
// 0056e167  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e16b  50                   push eax
// 0056e16c  51                   push ecx
// 0056e16d  e8ce130100           call 0x57f540
// 0056e172  83c408               add esp, 8
// 0056e175  84c0                 test al, al
// 0056e177  741a                 je 0x56e193
// 0056e179  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e17c  8b11                 mov edx, dword ptr [ecx]
// 0056e17e  8b5208               mov edx, dword ptr [edx + 8]
// 0056e181  8d44240c             lea eax, [esp + 0xc]
// 0056e185  50                   push eax
// 0056e186  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e18a  50                   push eax
// 0056e18b  ffd2                 call edx
// 0056e18d  b001                 mov al, 1
// 0056e18f  5e                   pop esi
// 0056e190  c20800               ret 8
// 0056e193  32c0                 xor al, al
// 0056e195  5e                   pop esi
// 0056e196  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
