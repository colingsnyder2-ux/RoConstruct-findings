// roc 2007-03 00497930  unit: seg_00490000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497930
//
// 00497930  8b01                 mov eax, dword ptr [ecx]
// 00497932  85c0                 test eax, eax
// 00497934  740d                 je 0x497943
// 00497936  8d50ff               lea edx, [eax - 1]
// 00497939  83e207               and edx, 7
// 0049793c  2bc2                 sub eax, edx
// 0049793e  83c007               add eax, 7
// 00497941  8901                 mov dword ptr [ecx], eax
// 00497943  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?AlignWriteToByteBoundary@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
