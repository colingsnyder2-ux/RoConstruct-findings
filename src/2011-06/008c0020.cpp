// roc 2011-06 008c0020  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0020
//
// 008c0020  56                   push esi
// 008c0021  8bf1                 mov esi, ecx
// 008c0023  e806a6f4ff           call 0x80a62e
// 008c0028  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008c002e  e82d1d0000           call 0x8c1d60
// 008c0033  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008c0037  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 008c003d  8b01                 mov eax, dword ptr [ecx]
// 008c003f  8b4008               mov eax, dword ptr [eax + 8]
// 008c0042  52                   push edx
// 008c0043  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008c0047  52                   push edx
// 008c0048  56                   push esi
// 008c0049  ffd0                 call eax
// 008c004b  5e                   pop esi
// 008c004c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
