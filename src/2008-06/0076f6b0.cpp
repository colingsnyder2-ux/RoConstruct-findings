// from server: 100% by auto
// roc 2008-06 0076f6b0  unit: CXTPImageEditorDlg  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f6b0
//
// 0076f6b0  8b81140a0000         mov eax, dword ptr [ecx + 0xa14]
// 0076f6b6  6a00                 push 0
// 0076f6b8  6a00                 push 0
// 0076f6ba  50                   push eax
// 0076f6bb  ff15182e8000         call dword ptr [0x802e18]
// 0076f6c1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnPictureChanged@CXTPImageEditorDlg@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
