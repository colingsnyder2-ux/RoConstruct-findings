// roc 2011-06 0084aac0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aac0
//
// 0084aac0  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0084aac3  8b442404             mov eax, dword ptr [esp + 4]
// 0084aac7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0084aaca  8910                 mov dword ptr [eax], edx
// 0084aacc  894804               mov dword ptr [eax + 4], ecx
// 0084aacf  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?GetScreenSize@CXTPDockState@@AAE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
