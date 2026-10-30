// roc 2007-03 006dfe70  unit: seg_006d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfe70
//
// 006dfe70  8b442404             mov eax, dword ptr [esp + 4]
// 006dfe74  8b542408             mov edx, dword ptr [esp + 8]
// 006dfe78  8981580a0000         mov dword ptr [ecx + 0xa58], eax
// 006dfe7e  89915c0a0000         mov dword ptr [ecx + 0xa5c], edx
// 006dfe84  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?SetIconSize@CXTPImageEditorDlg@@QAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
