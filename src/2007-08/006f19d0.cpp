// roc 2007-08 006f19d0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f19d0
//
// 006f19d0  56                   push esi
// 006f19d1  8bf1                 mov esi, ecx
// 006f19d3  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 006f19dd  ff153cec7700         call dword ptr [0x77ec3c]
// 006f19e3  8bce                 mov ecx, esi
// 006f19e5  e854e8f3ff           call 0x63023e
// 006f19ea  5e                   pop esi
// 006f19eb  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnLButtonUp@CXTPImageEditorPicture@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
