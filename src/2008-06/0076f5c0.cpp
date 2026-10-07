// roc 2008-06 0076f5c0  unit: CXTPImageEditorDlg  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f5c0
//
// 0076f5c0  56                   push esi
// 0076f5c1  57                   push edi
// 0076f5c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076f5c6  8bf1                 mov esi, ecx
// 0076f5c8  8d4674               lea eax, [esi + 0x74]
// 0076f5cb  50                   push eax
// 0076f5cc  6a67                 push 0x67
// 0076f5ce  57                   push edi
// 0076f5cf  e81c19f3ff           call 0x6a0ef0
// 0076f5d4  81c6c8000000         add esi, 0xc8
// 0076f5da  56                   push esi
// 0076f5db  6a68                 push 0x68
// 0076f5dd  57                   push edi
// 0076f5de  e80d19f3ff           call 0x6a0ef0
// 0076f5e3  5f                   pop edi
// 0076f5e4  5e                   pop esi
// 0076f5e5  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?DoDataExchange@CXTPImageEditorDlg@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
