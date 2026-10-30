// roc 2010-06 00862bd0  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862bd0
//
// 00862bd0  56                   push esi
// 00862bd1  8bf1                 mov esi, ecx
// 00862bd3  e89853f4ff           call 0x7a7f70
// 00862bd8  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00862bde  e82d1d0000           call 0x864910
// 00862be3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00862be7  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 00862bed  8b01                 mov eax, dword ptr [ecx]
// 00862bef  8b4008               mov eax, dword ptr [eax + 8]
// 00862bf2  52                   push edx
// 00862bf3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00862bf7  52                   push edx
// 00862bf8  56                   push esi
// 00862bf9  ffd0                 call eax
// 00862bfb  5e                   pop esi
// 00862bfc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
