// roc 2008-06 004a5770  unit: RBX::VHint::?$FactoryProduct::Creator  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5770
//
// 004a5770  8b01                 mov eax, dword ptr [ecx]
// 004a5772  85c0                 test eax, eax
// 004a5774  740d                 je 0x4a5783
// 004a5776  8d50ff               lea edx, [eax - 1]
// 004a5779  83e207               and edx, 7
// 004a577c  2bc2                 sub eax, edx
// 004a577e  83c007               add eax, 7
// 004a5781  8901                 mov dword ptr [ecx], eax
// 004a5783  e978ffffff           jmp 0x4a5700
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
