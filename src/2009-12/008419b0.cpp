// roc 2009-12 008419b0  unit: CXTPPopupBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008419b0
//
// 008419b0  56                   push esi
// 008419b1  8bf1                 mov esi, ecx
// 008419b3  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008419b9  c70614a09f00         mov dword ptr [esi], 0x9fa014
// 008419bf  c7465404a09f00       mov dword ptr [esi + 0x54], 0x9fa004
// 008419c6  c7465ca49f9f00       mov dword ptr [esi + 0x5c], 0x9f9fa4
// 008419cd  ff15c0de9800         call dword ptr [0x98dec0]
// 008419d3  8bce                 mov ecx, esi
// 008419d5  5e                   pop esi
// 008419d6  e9d564fcff           jmp 0x807eb0
// copied from an identical function in another client (function ??1CXTPPopupBar@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp