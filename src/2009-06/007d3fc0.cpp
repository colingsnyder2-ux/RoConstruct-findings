// roc 2009-06 007d3fc0  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3fc0
//
// 007d3fc0  56                   push esi
// 007d3fc1  8bf1                 mov esi, ecx
// 007d3fc3  e84050f4ff           call 0x719008
// 007d3fc8  8d8ef8000000         lea ecx, [esi + 0xf8]
// 007d3fce  e82d1d0000           call 0x7d5d00
// 007d3fd3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d3fd7  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 007d3fdd  8b01                 mov eax, dword ptr [ecx]
// 007d3fdf  8b4008               mov eax, dword ptr [eax + 8]
// 007d3fe2  52                   push edx
// 007d3fe3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d3fe7  52                   push edx
// 007d3fe8  56                   push esi
// 007d3fe9  ffd0                 call eax
// 007d3feb  5e                   pop esi
// 007d3fec  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
