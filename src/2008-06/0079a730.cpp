// from server: 100% by auto
// roc 2008-06 0079a730  unit: CXTPRibbonControlSystemPopupBarButton  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a730
//
// 0079a730  56                   push esi
// 0079a731  8bf1                 mov esi, ecx
// 0079a733  e808affaff           call 0x745640
// 0079a738  c70634ce8600         mov dword ptr [esi], 0x86ce34
// 0079a73e  c74620d4cd8600       mov dword ptr [esi + 0x20], 0x86cdd4
// 0079a745  8bc6                 mov eax, esi
// 0079a747  5e                   pop esi
// 0079a748  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
