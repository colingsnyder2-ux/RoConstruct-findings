// roc 2009-12 007e2370  unit: PasteVerb  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e2370
//
// 007e2370  80790400             cmp byte ptr [ecx + 4], 0
// 007e2374  7410                 je 0x7e2386
// 007e2376  8b01                 mov eax, dword ptr [ecx]
// 007e2378  50                   push eax
// 007e2379  ff15c0b29800         call dword ptr [0x98b2c0]
// 007e237f  50                   push eax
// 007e2380  ff159cb39800         call dword ptr [0x98b39c]
// 007e2386  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1ThreadPrioritySetter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
