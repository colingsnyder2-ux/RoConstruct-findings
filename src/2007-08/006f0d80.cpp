// from server: 100% by auto
// roc 2007-08 006f0d80  unit: CXTPImageEditorPicker  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0d80
//
// 006f0d80  8b442404             mov eax, dword ptr [esp + 4]
// 006f0d84  8b542408             mov edx, dword ptr [esp + 8]
// 006f0d88  8981580a0000         mov dword ptr [ecx + 0xa58], eax
// 006f0d8e  89915c0a0000         mov dword ptr [ecx + 0xa5c], edx
// 006f0d94  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?SetIconSize@CXTPImageEditorDlg@@QAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
