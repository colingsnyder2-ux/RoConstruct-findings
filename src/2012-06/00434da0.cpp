// roc 2012-06 00434da0  unit: MainLogManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434da0
//
// 00434da0  8b4104               mov eax, dword ptr [ecx + 4]
// 00434da3  85c0                 test eax, eax
// 00434da5  7407                 je 0x434dae
// 00434da7  50                   push eax
// 00434da8  ff158c21b200         call dword ptr [0xb2218c]
// 00434dae  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
