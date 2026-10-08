// roc 2012-06 00a38430  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38430
//
// 00a38430  56                   push esi
// 00a38431  8bf1                 mov esi, ecx
// 00a38433  e8a6a2f4ff           call 0x9826de
// 00a38438  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00a3843e  e82d1d0000           call 0xa3a170
// 00a38443  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a38447  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 00a3844d  8b01                 mov eax, dword ptr [ecx]
// 00a3844f  8b4008               mov eax, dword ptr [eax + 8]
// 00a38452  52                   push edx
// 00a38453  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a38457  52                   push edx
// 00a38458  56                   push esi
// 00a38459  ffd0                 call eax
// 00a3845b  5e                   pop esi
// 00a3845c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
