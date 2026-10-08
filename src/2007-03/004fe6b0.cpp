// roc 2007-03 004fe6b0  unit: seg_004f0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe6b0
//
// 004fe6b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fe6b4  8b542404             mov edx, dword ptr [esp + 4]
// 004fe6b8  8d44240c             lea eax, [esp + 0xc]
// 004fe6bc  50                   push eax
// 004fe6bd  51                   push ecx
// 004fe6be  52                   push edx
// 004fe6bf  e82cffffff           call 0x4fe5f0
// 004fe6c4  83c40c               add esp, 0xc
// 004fe6c7  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?printf@TextOutput@G3D@@QAAXPBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
