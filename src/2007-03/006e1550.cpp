// roc 2007-03 006e1550  unit: seg_006e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e1550
//
// 006e1550  8b810c0a0000         mov eax, dword ptr [ecx + 0xa0c]
// 006e1556  6a00                 push 0
// 006e1558  6a00                 push 0
// 006e155a  50                   push eax
// 006e155b  ff1554ee7700         call dword ptr [0x77ee54]
// 006e1561  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnPictureChanged@CXTPImageEditorDlg@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
