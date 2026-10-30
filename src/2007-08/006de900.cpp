// from server: 100% by auto
// roc 2007-08 006de900  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de900
//
// 006de900  56                   push esi
// 006de901  8bf1                 mov esi, ecx
// 006de903  e83619f5ff           call 0x63023e
// 006de908  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006de90e  e82d1c0000           call 0x6e0540
// 006de913  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006de917  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 006de91d  8b01                 mov eax, dword ptr [ecx]
// 006de91f  8b4008               mov eax, dword ptr [eax + 8]
// 006de922  52                   push edx
// 006de923  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006de927  52                   push edx
// 006de928  56                   push esi
// 006de929  ffd0                 call eax
// 006de92b  5e                   pop esi
// 006de92c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
