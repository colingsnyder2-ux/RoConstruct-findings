// roc 2008-06 006ee1f0  unit: CXTPPopupBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee1f0
//
// 006ee1f0  56                   push esi
// 006ee1f1  8bf1                 mov esi, ecx
// 006ee1f3  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 006ee1f9  c706148b8500         mov dword ptr [esi], 0x858b14
// 006ee1ff  c74654048b8500       mov dword ptr [esi + 0x54], 0x858b04
// 006ee206  c7465ca48a8500       mov dword ptr [esi + 0x5c], 0x858aa4
// 006ee20d  ff15143f8000         call dword ptr [0x803f14]
// 006ee213  8bce                 mov ecx, esi
// 006ee215  5e                   pop esi
// 006ee216  e9a5a5fcff           jmp 0x6b87c0
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ??1CXTPPopupBar@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
