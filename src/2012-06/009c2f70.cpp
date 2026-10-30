// from server: 100% by auto
// roc 2012-06 009c2f70  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2f70
//
// 009c2f70  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 009c2f73  8b442404             mov eax, dword ptr [esp + 4]
// 009c2f77  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009c2f7a  8910                 mov dword ptr [eax], edx
// 009c2f7c  894804               mov dword ptr [eax + 4], ecx
// 009c2f7f  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?GetScreenSize@CXTPDockState@@AAE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
