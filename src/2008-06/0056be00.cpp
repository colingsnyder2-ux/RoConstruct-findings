// from server: 100% by auto
// roc 2008-06 0056be00  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056be00
//
// 0056be00  8b01                 mov eax, dword ptr [ecx]
// 0056be02  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0056be05  ffe0                 jmp eax
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?pubsetbuf@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEPAV12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
