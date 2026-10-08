// from server: 100% by auto
// roc 2011-06 008c5df0  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5df0
//
// 008c5df0  8b5108               mov edx, dword ptr [ecx + 8]
// 008c5df3  85d2                 test edx, edx
// 008c5df5  7505                 jne 0x8c5dfc
// 008c5df7  e80e45f4ff           call 0x80a30a
// 008c5dfc  8b4204               mov eax, dword ptr [edx + 4]
// 008c5dff  56                   push esi
// 008c5e00  8b7208               mov esi, dword ptr [edx + 8]
// 008c5e03  894108               mov dword ptr [ecx + 8], eax
// 008c5e06  85c0                 test eax, eax
// 008c5e08  7410                 je 0x8c5e1a
// 008c5e0a  52                   push edx
// 008c5e0b  c70000000000         mov dword ptr [eax], 0
// 008c5e11  e8ba020200           call 0x8e60d0
// 008c5e16  8bc6                 mov eax, esi
// 008c5e18  5e                   pop esi
// 008c5e19  c3                   ret 
// 008c5e1a  52                   push edx
// 008c5e1b  c7410400000000       mov dword ptr [ecx + 4], 0
// 008c5e22  e8a9020200           call 0x8e60d0
// 008c5e27  8bc6                 mov eax, esi
// 008c5e29  5e                   pop esi
// 008c5e2a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?RemoveTail@?$CList@PAVCAlphaBitmap@CXTPImageEditorPicture@@PAV12@@@QAEPAVCAlphaBitmap@CXTPImageEditorPicture@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
