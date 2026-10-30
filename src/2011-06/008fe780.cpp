// from server: 100% by auto
// roc 2011-06 008fe780  unit: CXTPRibbonControlSystemPopupBarButton  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe780
//
// 008fe780  56                   push esi
// 008fe781  8bf1                 mov esi, ecx
// 008fe783  e8a82dfaff           call 0x8a1530
// 008fe788  c706a4caad00         mov dword ptr [esi], 0xadcaa4
// 008fe78e  c7462044caad00       mov dword ptr [esi + 0x20], 0xadca44
// 008fe795  8bc6                 mov eax, esi
// 008fe797  5e                   pop esi
// 008fe798  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
