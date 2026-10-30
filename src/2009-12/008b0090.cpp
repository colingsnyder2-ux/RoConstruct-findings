// roc 2009-12 008b0090  unit: CXTPDockingPaneMiniWnd  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0090
//
// 008b0090  8b442404             mov eax, dword ptr [esp + 4]
// 008b0094  394118               cmp dword ptr [ecx + 0x18], eax
// 008b0097  7519                 jne 0x8b00b2
// 008b0099  8d8108ffffff         lea eax, [ecx - 0xf8]
// 008b009f  f7d8                 neg eax
// 008b00a1  1bc0                 sbb eax, eax
// 008b00a3  23c1                 and eax, ecx
// 008b00a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b00a9  50                   push eax
// 008b00aa  e8d13a0100           call 0x8c3b80
// 008b00af  c20800               ret 8
// 008b00b2  83793800             cmp dword ptr [ecx + 0x38], 0
// 008b00b6  7416                 je 0x8b00ce
// 008b00b8  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 008b00bb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008b00be  56                   push esi
// 008b00bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008b00c3  83c120               add ecx, 0x20
// 008b00c6  56                   push esi
// 008b00c7  50                   push eax
// 008b00c8  8b420c               mov eax, dword ptr [edx + 0xc]
// 008b00cb  ffd0                 call eax
// 008b00cd  5e                   pop esi
// 008b00ce  c20800               ret 8
// copied from an identical function in another client (function ?FindPane@CXTPDockingPaneMiniWnd@@MBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp