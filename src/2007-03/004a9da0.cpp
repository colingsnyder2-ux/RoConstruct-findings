// roc 2007-03 004a9da0  unit: seg_004a0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9da0
//
// 004a9da0  83790800             cmp dword ptr [ecx + 8], 0
// 004a9da4  7609                 jbe 0x4a9daf
// 004a9da6  8b01                 mov eax, dword ptr [ecx]
// 004a9da8  50                   push eax
// 004a9da9  e842431700           call 0x61e0f0
// 004a9dae  59                   pop ecx
// 004a9daf  c3                   ret 
// library rbxgs-raknet/CommandParserInterface.cpp (function ??1?$List@URegisteredCommand@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CommandParserInterface.cpp
