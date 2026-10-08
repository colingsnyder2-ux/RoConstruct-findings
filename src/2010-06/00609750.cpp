// roc 2010-06 00609750  unit: std::strstream  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00609750
//
// 00609750  8b4104               mov eax, dword ptr [ecx + 4]
// 00609753  85c0                 test eax, eax
// 00609755  7407                 je 0x60975e
// 00609757  50                   push eax
// 00609758  ff1568a39e00         call dword ptr [0x9ea368]
// 0060975e  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
