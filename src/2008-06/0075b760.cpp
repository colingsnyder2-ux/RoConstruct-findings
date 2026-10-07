// roc 2008-06 0075b760  unit: CXTPDockingPaneMiniWnd  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b760
//
// 0075b760  56                   push esi
// 0075b761  8bf1                 mov esi, ecx
// 0075b763  e80055f4ff           call 0x6a0c68
// 0075b768  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075b76e  e82d1d0000           call 0x75d4a0
// 0075b773  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0075b777  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 0075b77d  8b01                 mov eax, dword ptr [ecx]
// 0075b77f  8b4008               mov eax, dword ptr [eax + 8]
// 0075b782  52                   push edx
// 0075b783  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0075b787  52                   push edx
// 0075b788  56                   push esi
// 0075b789  ffd0                 call eax
// 0075b78b  5e                   pop esi
// 0075b78c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnSizing@CXTPDockingPaneMiniWnd@@IAEXIPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
