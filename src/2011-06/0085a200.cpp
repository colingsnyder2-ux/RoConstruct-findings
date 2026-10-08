// from server: 100% by auto
// roc 2011-06 0085a200  unit: CXTPControlToolbars  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a200
//
// 0085a200  56                   push esi
// 0085a201  8bf1                 mov esi, ecx
// 0085a203  e828730400           call 0x8a1530
// 0085a208  c7066497ac00         mov dword ptr [esi], 0xac9764
// 0085a20e  c746200497ac00       mov dword ptr [esi + 0x20], 0xac9704
// 0085a215  8bc6                 mov eax, esi
// 0085a217  5e                   pop esi
// 0085a218  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
