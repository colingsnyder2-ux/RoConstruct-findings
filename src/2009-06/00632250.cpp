// roc 2009-06 00632250  unit: std::strstream  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00632250
//
// 00632250  8b4104               mov eax, dword ptr [ecx + 4]
// 00632253  85c0                 test eax, eax
// 00632255  7407                 je 0x63225e
// 00632257  50                   push eax
// 00632258  ff15b4e18900         call dword ptr [0x89e1b4]
// 0063225e  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
