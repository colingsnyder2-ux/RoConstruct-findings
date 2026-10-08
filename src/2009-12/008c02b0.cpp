// roc 2009-12 008c02b0  unit: CXTPShadowsManager::CShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c02b0
//
// 008c02b0  c7010489a000         mov dword ptr [ecx], 0xa08904
// 008c02b6  e99586f7ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
