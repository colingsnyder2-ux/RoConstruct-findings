// roc 2008-06 00754f60  unit: CXTPDockingPaneBase  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754f60
//
// 00754f60  8b5108               mov edx, dword ptr [ecx + 8]
// 00754f63  85d2                 test edx, edx
// 00754f65  7505                 jne 0x754f6c
// 00754f67  e8d8b9f4ff           call 0x6a0944
// 00754f6c  8b4204               mov eax, dword ptr [edx + 4]
// 00754f6f  56                   push esi
// 00754f70  8b7208               mov esi, dword ptr [edx + 8]
// 00754f73  894108               mov dword ptr [ecx + 8], eax
// 00754f76  85c0                 test eax, eax
// 00754f78  7410                 je 0x754f8a
// 00754f7a  52                   push edx
// 00754f7b  c70000000000         mov dword ptr [eax], 0
// 00754f81  e8eab90000           call 0x760970
// 00754f86  8bc6                 mov eax, esi
// 00754f88  5e                   pop esi
// 00754f89  c3                   ret 
// 00754f8a  52                   push edx
// 00754f8b  c7410400000000       mov dword ptr [ecx + 4], 0
// 00754f92  e8d9b90000           call 0x760970
// 00754f97  8bc6                 mov eax, esi
// 00754f99  5e                   pop esi
// 00754f9a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?RemoveTail@?$CList@PAVCAlphaBitmap@CXTPImageEditorPicture@@PAV12@@@QAEPAVCAlphaBitmap@CXTPImageEditorPicture@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
