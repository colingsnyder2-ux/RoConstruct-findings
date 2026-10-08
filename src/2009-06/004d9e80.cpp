// roc 2009-06 004d9e80  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9e80
//
// 004d9e80  8b01                 mov eax, dword ptr [ecx]
// 004d9e82  85c0                 test eax, eax
// 004d9e84  740d                 je 0x4d9e93
// 004d9e86  8d50ff               lea edx, [eax - 1]
// 004d9e89  83e207               and edx, 7
// 004d9e8c  2bc2                 sub eax, edx
// 004d9e8e  83c007               add eax, 7
// 004d9e91  8901                 mov dword ptr [ecx], eax
// 004d9e93  e978ffffff           jmp 0x4d9e10
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
