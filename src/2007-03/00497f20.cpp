// roc 2007-03 00497f20  unit: seg_00490000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497f20
//
// 00497f20  8b01                 mov eax, dword ptr [ecx]
// 00497f22  85c0                 test eax, eax
// 00497f24  740d                 je 0x497f33
// 00497f26  8d50ff               lea edx, [eax - 1]
// 00497f29  83e207               and edx, 7
// 00497f2c  2bc2                 sub eax, edx
// 00497f2e  83c007               add eax, 7
// 00497f31  8901                 mov dword ptr [ecx], eax
// 00497f33  e978ffffff           jmp 0x497eb0
// library rbxgs-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
