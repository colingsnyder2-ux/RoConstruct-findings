// from server: 100% by auto
// roc 2007-08 0064efd0  unit: CXTPToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064efd0
//
// 0064efd0  8b442408             mov eax, dword ptr [esp + 8]
// 0064efd4  56                   push esi
// 0064efd5  8b742408             mov esi, dword ptr [esp + 8]
// 0064efd9  50                   push eax
// 0064efda  56                   push esi
// 0064efdb  e8604affff           call 0x643a40
// 0064efe0  8bc8                 mov ecx, eax
// 0064efe2  e8f941ffff           call 0x6431e0
// 0064efe7  8bc6                 mov eax, esi
// 0064efe9  5e                   pop esi
// 0064efea  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPToolBar.cpp (function ?GetAutoIconSize@CXTPCommandBar@@IBE?AVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPToolBar.cpp
