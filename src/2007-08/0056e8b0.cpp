// roc 2007-08 0056e8b0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e8b0
//
// 0056e8b0  56                   push esi
// 0056e8b1  8d44240c             lea eax, [esp + 0xc]
// 0056e8b5  8bf1                 mov esi, ecx
// 0056e8b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e8bb  50                   push eax
// 0056e8bc  51                   push ecx
// 0056e8bd  e8be220100           call 0x580b80
// 0056e8c2  83c408               add esp, 8
// 0056e8c5  84c0                 test al, al
// 0056e8c7  741a                 je 0x56e8e3
// 0056e8c9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e8cc  8b11                 mov edx, dword ptr [ecx]
// 0056e8ce  8b5208               mov edx, dword ptr [edx + 8]
// 0056e8d1  8d44240c             lea eax, [esp + 0xc]
// 0056e8d5  50                   push eax
// 0056e8d6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e8da  50                   push eax
// 0056e8db  ffd2                 call edx
// 0056e8dd  b001                 mov al, 1
// 0056e8df  5e                   pop esi
// 0056e8e0  c20800               ret 8
// 0056e8e3  32c0                 xor al, al
// 0056e8e5  5e                   pop esi
// 0056e8e6  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
