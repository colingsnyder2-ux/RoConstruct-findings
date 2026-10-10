// roc 2008-06 006e1ae0  unit: CRobloxControlColorSelector  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1ae0
//
// 006e1ae0  8b01                 mov eax, dword ptr [ecx]
// 006e1ae2  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006e1ae8  ffd2                 call edx
// 006e1aea  85c0                 test eax, eax
// 006e1aec  740c                 je 0x6e1afa
// 006e1aee  8b10                 mov edx, dword ptr [eax]
// 006e1af0  8b92e8010000         mov edx, dword ptr [edx + 0x1e8]
// 006e1af6  8bc8                 mov ecx, eax
// 006e1af8  ffe2                 jmp edx
// 006e1afa  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPControl@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
