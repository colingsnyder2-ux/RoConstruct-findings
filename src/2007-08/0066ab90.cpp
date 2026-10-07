// roc 2007-08 0066ab90  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ab90
//
// 0066ab90  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0066ab93  8b442404             mov eax, dword ptr [esp + 4]
// 0066ab97  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0066ab9a  8910                 mov dword ptr [eax], edx
// 0066ab9c  894804               mov dword ptr [eax + 4], ecx
// 0066ab9f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?GetScreenSize@CXTPDockState@@AAE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
