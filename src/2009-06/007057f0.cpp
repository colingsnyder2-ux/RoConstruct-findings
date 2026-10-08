// roc 2009-06 007057f0  unit: boost::thread_resource_error  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007057f0
//
// 007057f0  80790400             cmp byte ptr [ecx + 4], 0
// 007057f4  7410                 je 0x705806
// 007057f6  8b01                 mov eax, dword ptr [ecx]
// 007057f8  50                   push eax
// 007057f9  ff1594e28900         call dword ptr [0x89e294]
// 007057ff  50                   push eax
// 00705800  ff1500e38900         call dword ptr [0x89e300]
// 00705806  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1ThreadPrioritySetter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
