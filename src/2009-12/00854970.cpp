// roc 2009-12 00854970  unit: CXTPTabManagerAtom  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854970
//
// 00854970  c701f4c69f00         mov dword ptr [ecx], 0x9fc6f4
// 00854976  e945a90700           jmp 0x8cf2c0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
