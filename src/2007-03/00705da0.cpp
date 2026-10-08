// roc 2007-03 00705da0  unit: seg_00700000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705da0
//
// 00705da0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 00705da6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ?getSleepCount@Assembly@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
