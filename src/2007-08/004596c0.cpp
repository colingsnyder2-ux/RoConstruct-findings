// roc 2007-08 004596c0  unit: CRobloxWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004596c0
//
// 004596c0  56                   push esi
// 004596c1  8b31                 mov esi, dword ptr [ecx]
// 004596c3  85f6                 test esi, esi
// 004596c5  7415                 je 0x4596dc
// 004596c7  8d8e18000200         lea ecx, [esi + 0x20018]
// 004596cd  ff15ace67700         call dword ptr [0x77e6ac]
// 004596d3  56                   push esi
// 004596d4  e889651d00           call 0x62fc62
// 004596d9  83c404               add esp, 4
// 004596dc  5e                   pop esi
// 004596dd  c3                   ret 
// library rbxgs/v8kernel\Kernel.cpp (function ??1?$scoped_ptr@VCodeProfiler@Profiling@RBX@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Kernel.cpp
