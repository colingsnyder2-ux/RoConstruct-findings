// roc 2007-08 0056e830  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e830
//
// 0056e830  56                   push esi
// 0056e831  8d44240c             lea eax, [esp + 0xc]
// 0056e835  8bf1                 mov esi, ecx
// 0056e837  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e83b  50                   push eax
// 0056e83c  51                   push ecx
// 0056e83d  e82e250100           call 0x580d70
// 0056e842  83c408               add esp, 8
// 0056e845  84c0                 test al, al
// 0056e847  741a                 je 0x56e863
// 0056e849  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e84c  8b11                 mov edx, dword ptr [ecx]
// 0056e84e  8b5208               mov edx, dword ptr [edx + 8]
// 0056e851  8d44240c             lea eax, [esp + 0xc]
// 0056e855  50                   push eax
// 0056e856  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e85a  50                   push eax
// 0056e85b  ffd2                 call edx
// 0056e85d  b001                 mov al, 1
// 0056e85f  5e                   pop esi
// 0056e860  c20800               ret 8
// 0056e863  32c0                 xor al, al
// 0056e865  5e                   pop esi
// 0056e866  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
