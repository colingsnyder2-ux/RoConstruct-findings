// roc 2007-03 006c78e0  unit: seg_006c0000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c78e0
//
// 006c78e0  56                   push esi
// 006c78e1  8bf1                 mov esi, ecx
// 006c78e3  e8ea6df5ff           call 0x61e6d2
// 006c78e8  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006c78ee  e82d1c0000           call 0x6c9520
// 006c78f3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c78f7  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 006c78fd  8b01                 mov eax, dword ptr [ecx]
// 006c78ff  8b4008               mov eax, dword ptr [eax + 8]
// 006c7902  52                   push edx
// 006c7903  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c7907  52                   push edx
// 006c7908  56                   push esi
// 006c7909  ffd0                 call eax
// 006c790b  5e                   pop esi
// 006c790c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
