// roc 2007-03 00497950  unit: seg_00490000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497950
//
// 00497950  8b4108               mov eax, dword ptr [ecx + 8]
// 00497953  85c0                 test eax, eax
// 00497955  740e                 je 0x497965
// 00497957  8d50ff               lea edx, [eax - 1]
// 0049795a  83e207               and edx, 7
// 0049795d  2bc2                 sub eax, edx
// 0049795f  83c007               add eax, 7
// 00497962  894108               mov dword ptr [ecx + 8], eax
// 00497965  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?AlignReadToByteBoundary@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
