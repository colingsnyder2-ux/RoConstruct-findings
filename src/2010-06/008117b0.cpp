// roc 2010-06 008117b0  unit: CXTPDockingPane  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008117b0
//
// 008117b0  6aff                 push -1
// 008117b2  68a8449b00           push 0x9b44a8
// 008117b7  64a100000000         mov eax, dword ptr fs:[0]
// 008117bd  50                   push eax
// 008117be  51                   push ecx
// 008117bf  56                   push esi
// 008117c0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008117c5  33c4                 xor eax, esp
// 008117c7  50                   push eax
// 008117c8  8d44240c             lea eax, [esp + 0xc]
// 008117cc  64a300000000         mov dword ptr fs:[0], eax
// 008117d2  8bf1                 mov esi, ecx
// 008117d4  89742408             mov dword ptr [esp + 8], esi
// 008117d8  8d8edc000000         lea ecx, [esi + 0xdc]
// 008117de  c706e41aa600         mov dword ptr [esi], 0xa61ae4
// 008117e4  c701d41aa600         mov dword ptr [ecx], 0xa61ad4
// 008117ea  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008117f2  e869c9ffff           call 0x80e160
// 008117f7  8bce                 mov ecx, esi
// 008117f9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00811801  e86ebc1600           call 0x97d474
// 00811806  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081180a  64890d00000000       mov dword ptr fs:[0], ecx
// 00811811  59                   pop ecx
// 00811812  5e                   pop esi
// 00811813  83c410               add esp, 0x10
// 00811816  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1