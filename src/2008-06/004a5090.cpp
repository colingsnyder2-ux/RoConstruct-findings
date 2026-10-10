// from server: 100% by tester
// roc 2007-03 004977b0  unit: seg_00490000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004977b0
//
// 004977b0  8bc1                 mov eax, ecx
// 004977b2  8d4811               lea ecx, [eax + 0x11]
// 004977b5  c70000000000         mov dword ptr [eax], 0
// 004977bb  c7400400080000       mov dword ptr [eax + 4], 0x800
// 004977c2  c7400800000000       mov dword ptr [eax + 8], 0
// 004977c9  89480c               mov dword ptr [eax + 0xc], ecx
// 004977cc  c6401001             mov byte ptr [eax + 0x10], 1
// 004977d0  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
