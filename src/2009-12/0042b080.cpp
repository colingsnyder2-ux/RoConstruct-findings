// roc 2009-12 0042b080  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042b080
//
// 0042b080  c70114459a00         mov dword ptr [ecx], 0x9a4514
// 0042b086  e9d5f2ffff           jmp 0x42a360
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
