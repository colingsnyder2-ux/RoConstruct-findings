// roc 2008-06 005a7770  unit: RBX::Log  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7770
//
// 005a7770  8b4104               mov eax, dword ptr [ecx + 4]
// 005a7773  85c0                 test eax, eax
// 005a7775  7407                 je 0x5a777e
// 005a7777  50                   push eax
// 005a7778  ff15a0218000         call dword ptr [0x8021a0]
// 005a777e  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
