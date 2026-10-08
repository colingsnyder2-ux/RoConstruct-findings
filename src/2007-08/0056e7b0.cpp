// roc 2007-08 0056e7b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e7b0
//
// 0056e7b0  56                   push esi
// 0056e7b1  8d44240c             lea eax, [esp + 0xc]
// 0056e7b5  8bf1                 mov esi, ecx
// 0056e7b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056e7bb  50                   push eax
// 0056e7bc  51                   push ecx
// 0056e7bd  e85e1c0100           call 0x580420
// 0056e7c2  83c408               add esp, 8
// 0056e7c5  84c0                 test al, al
// 0056e7c7  741a                 je 0x56e7e3
// 0056e7c9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e7cc  8b11                 mov edx, dword ptr [ecx]
// 0056e7ce  8b5208               mov edx, dword ptr [edx + 8]
// 0056e7d1  8d44240c             lea eax, [esp + 0xc]
// 0056e7d5  50                   push eax
// 0056e7d6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e7da  50                   push eax
// 0056e7db  ffd2                 call edx
// 0056e7dd  b001                 mov al, 1
// 0056e7df  5e                   pop esi
// 0056e7e0  c20800               ret 8
// 0056e7e3  32c0                 xor al, al
// 0056e7e5  5e                   pop esi
// 0056e7e6  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
