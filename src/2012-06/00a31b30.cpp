// roc 2012-06 00a31b30  unit: CXTPDockingPaneBase  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31b30
//
// 00a31b30  8b5108               mov edx, dword ptr [ecx + 8]
// 00a31b33  85d2                 test edx, edx
// 00a31b35  7505                 jne 0xa31b3c
// 00a31b37  e88408f5ff           call 0x9823c0
// 00a31b3c  8b4204               mov eax, dword ptr [edx + 4]
// 00a31b3f  56                   push esi
// 00a31b40  8b7208               mov esi, dword ptr [edx + 8]
// 00a31b43  894108               mov dword ptr [ecx + 8], eax
// 00a31b46  85c0                 test eax, eax
// 00a31b48  7410                 je 0xa31b5a
// 00a31b4a  52                   push edx
// 00a31b4b  c70000000000         mov dword ptr [eax], 0
// 00a31b51  e8ca43feff           call 0xa15f20
// 00a31b56  8bc6                 mov eax, esi
// 00a31b58  5e                   pop esi
// 00a31b59  c3                   ret 
// 00a31b5a  52                   push edx
// 00a31b5b  c7410400000000       mov dword ptr [ecx + 4], 0
// 00a31b62  e8b943feff           call 0xa15f20
// 00a31b67  8bc6                 mov eax, esi
// 00a31b69  5e                   pop esi
// 00a31b6a  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?RemoveTail@?$CList@PAVCAlphaBitmap@CXTPImageEditorPicture@@PAV12@@@QAEPAVCAlphaBitmap@CXTPImageEditorPicture@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
