// from server: 100% by auto
// roc 2008-06 0076ec00  unit: CXTPImageEditorDlg::CDlgToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ec00
//
// 0076ec00  56                   push esi
// 0076ec01  8bf1                 mov esi, ecx
// 0076ec03  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 0076ec0d  ff15b42d8000         call dword ptr [0x802db4]
// 0076ec13  8bce                 mov ecx, esi
// 0076ec15  e84e20f3ff           call 0x6a0c68
// 0076ec1a  5e                   pop esi
// 0076ec1b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnLButtonUp@CXTPImageEditorPicture@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
