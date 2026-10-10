// roc 2008-06 00701680  unit: CXTPControlTabWorkspace  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701680
//
// 00701680  8b4988               mov ecx, dword ptr [ecx - 0x78]
// 00701683  8b01                 mov eax, dword ptr [ecx]
// 00701685  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 0070168b  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?RedrawControl@CXTPControlTabWorkspace@@UAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
