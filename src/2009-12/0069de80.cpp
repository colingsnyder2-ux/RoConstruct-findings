// roc 2009-12 0069de80  unit: std::strstream  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069de80
//
// 0069de80  8b4104               mov eax, dword ptr [ecx + 4]
// 0069de83  85c0                 test eax, eax
// 0069de85  7407                 je 0x69de8e
// 0069de87  50                   push eax
// 0069de88  ff15f8b19800         call dword ptr [0x98b1f8]
// 0069de8e  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
