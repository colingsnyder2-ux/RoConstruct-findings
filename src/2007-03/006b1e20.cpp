// roc 2007-03 006b1e20  unit: seg_006b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b1e20
//
// 006b1e20  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 006b1e26  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ?getBackendToolState@Tool@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
