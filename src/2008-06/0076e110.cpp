// from server: 100% by auto
// roc 2008-06 0076e110  unit: CXTPImageEditorPicker  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e110
//
// 0076e110  8b442404             mov eax, dword ptr [esp + 4]
// 0076e114  8b542408             mov edx, dword ptr [esp + 8]
// 0076e118  8981600a0000         mov dword ptr [ecx + 0xa60], eax
// 0076e11e  8991640a0000         mov dword ptr [ecx + 0xa64], edx
// 0076e124  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?SetIconSize@CXTPImageEditorDlg@@QAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
