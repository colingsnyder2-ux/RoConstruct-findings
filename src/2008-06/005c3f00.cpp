// roc 2008-06 005c3f00  unit: RBX::Profiling::Profiler  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3f00
//
// 005c3f00  807c240400           cmp byte ptr [esp + 4], 0
// 005c3f05  740b                 je 0x5c3f12
// 005c3f07  ff15a8228000         call dword ptr [0x8022a8]
// 005c3f0d  a394949700           mov dword ptr [0x979494], eax
// 005c3f12  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?init@Profiling@RBX@@YAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
