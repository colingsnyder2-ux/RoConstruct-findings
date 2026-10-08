// roc 2007-03 004b9130  unit: seg_004b0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9130
//
// 004b9130  8bc1                 mov eax, ecx
// 004b9132  33c9                 xor ecx, ecx
// 004b9134  894808               mov dword ptr [eax + 8], ecx
// 004b9137  8908                 mov dword ptr [eax], ecx
// 004b9139  894804               mov dword ptr [eax + 4], ecx
// 004b913c  c3                   ret 
// library rbxgs-raknet/CommandParserInterface.cpp (function ??0?$List@URegisteredCommand@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CommandParserInterface.cpp
