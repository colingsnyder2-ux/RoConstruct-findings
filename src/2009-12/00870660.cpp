// roc 2009-12 00870660  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870660
//
// 00870660  c701500da000         mov dword ptr [ecx], 0xa00d50
// 00870666  e9b55ef8ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
