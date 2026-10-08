// roc 2009-06 008172d0  unit: CXTPToolBar::CControlButtonHide  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008172d0
//
// 008172d0  56                   push esi
// 008172d1  8bf1                 mov esi, ecx
// 008172d3  e8288af4ff           call 0x75fd00
// 008172d8  c70664ed9000         mov dword ptr [esi], 0x90ed64
// 008172de  c7462004ed9000       mov dword ptr [esi + 0x20], 0x90ed04
// 008172e5  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 008172ef  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 008172f9  8bc6                 mov eax, esi
// 008172fb  5e                   pop esi
// 008172fc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
