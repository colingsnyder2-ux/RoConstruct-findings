// roc 2009-12 0052f280  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052f280
//
// 0052f280  8b01                 mov eax, dword ptr [ecx]
// 0052f282  85c0                 test eax, eax
// 0052f284  740d                 je 0x52f293
// 0052f286  8d50ff               lea edx, [eax - 1]
// 0052f289  83e207               and edx, 7
// 0052f28c  2bc2                 sub eax, edx
// 0052f28e  83c007               add eax, 7
// 0052f291  8901                 mov dword ptr [ecx], eax
// 0052f293  e978ffffff           jmp 0x52f210
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
