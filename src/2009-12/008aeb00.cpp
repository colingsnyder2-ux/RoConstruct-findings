// roc 2009-12 008aeb00  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aeb00
//
// 008aeb00  56                   push esi
// 008aeb01  8bf1                 mov esi, ecx
// 008aeb03  e82853f4ff           call 0x7f3e30
// 008aeb08  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008aeb0e  e82d1d0000           call 0x8b0840
// 008aeb13  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008aeb17  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 008aeb1d  8b01                 mov eax, dword ptr [ecx]
// 008aeb1f  8b4008               mov eax, dword ptr [eax + 8]
// 008aeb22  52                   push edx
// 008aeb23  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008aeb27  52                   push edx
// 008aeb28  56                   push esi
// 008aeb29  ffd0                 call eax
// 008aeb2b  5e                   pop esi
// 008aeb2c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
