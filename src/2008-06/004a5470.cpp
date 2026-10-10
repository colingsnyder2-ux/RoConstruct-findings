// from server: 100% by tester
// roc 2007-03 00497bf0  unit: seg_00490000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497bf0
//
// 00497bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00497bf4  014108               add dword ptr [ecx + 8], eax
// 00497bf7  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ?IgnoreBits@BitStream@RakNet@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
