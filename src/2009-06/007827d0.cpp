// roc 2009-06 007827d0  unit: CXTPDockingPane  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007827d0
//
// 007827d0  6aff                 push -1
// 007827d2  68e8a28700           push 0x87a2e8
// 007827d7  64a100000000         mov eax, dword ptr fs:[0]
// 007827dd  50                   push eax
// 007827de  51                   push ecx
// 007827df  56                   push esi
// 007827e0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007827e5  33c4                 xor eax, esp
// 007827e7  50                   push eax
// 007827e8  8d44240c             lea eax, [esp + 0xc]
// 007827ec  64a300000000         mov dword ptr fs:[0], eax
// 007827f2  8bf1                 mov esi, ecx
// 007827f4  89742408             mov dword ptr [esp + 8], esi
// 007827f8  8d8edc000000         lea ecx, [esi + 0xdc]
// 007827fe  c7067cd38f00         mov dword ptr [esi], 0x8fd37c
// 00782804  c7016cd38f00         mov dword ptr [ecx], 0x8fd36c
// 0078280a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00782812  e819c9ffff           call 0x77f130
// 00782817  8bce                 mov ecx, esi
// 00782819  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00782821  e8a09d0c00           call 0x84c5c6
// 00782826  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078282a  64890d00000000       mov dword ptr fs:[0], ecx
// 00782831  59                   pop ecx
// 00782832  5e                   pop esi
// 00782833  83c410               add esp, 0x10
// 00782836  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1