// roc 2008-06 006e19d0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e19d0
//
// 006e19d0  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 006e19d3  8b442404             mov eax, dword ptr [esp + 4]
// 006e19d7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006e19da  8910                 mov dword ptr [eax], edx
// 006e19dc  894804               mov dword ptr [eax + 4], ecx
// 006e19df  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GetScreenSize@CXTPDockState@@AAE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
