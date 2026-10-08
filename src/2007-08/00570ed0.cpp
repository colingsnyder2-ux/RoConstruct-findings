// roc 2007-08 00570ed0  unit: RBX::Reflection::ClassDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570ed0
//
// 00570ed0  80790400             cmp byte ptr [ecx + 4], 0
// 00570ed4  7410                 je 0x570ee6
// 00570ed6  8b01                 mov eax, dword ptr [ecx]
// 00570ed8  50                   push eax
// 00570ed9  ff155cd27700         call dword ptr [0x77d25c]
// 00570edf  50                   push eax
// 00570ee0  ff1504d27700         call dword ptr [0x77d204]
// 00570ee6  c3                   ret 
// library rbxgs/util\boost.cpp (function ??1ThreadPrioritySetter@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
