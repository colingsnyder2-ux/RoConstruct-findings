// roc 2011-06 0086f010  unit: CXTPDockingPane  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f010
//
// 0086f010  6aff                 push -1
// 0086f012  682876a000           push 0xa07628
// 0086f017  64a100000000         mov eax, dword ptr fs:[0]
// 0086f01d  50                   push eax
// 0086f01e  51                   push ecx
// 0086f01f  56                   push esi
// 0086f020  a12058c900           mov eax, dword ptr [0xc95820]
// 0086f025  33c4                 xor eax, esp
// 0086f027  50                   push eax
// 0086f028  8d44240c             lea eax, [esp + 0xc]
// 0086f02c  64a300000000         mov dword ptr fs:[0], eax
// 0086f032  8bf1                 mov esi, ecx
// 0086f034  89742408             mov dword ptr [esp + 8], esi
// 0086f038  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086f03e  c706c4c3ac00         mov dword ptr [esi], 0xacc3c4
// 0086f044  c701b4c3ac00         mov dword ptr [ecx], 0xacc3b4
// 0086f04a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086f052  e8c9c8ffff           call 0x86b920
// 0086f057  8bce                 mov ecx, esi
// 0086f059  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0086f061  e8b6da1500           call 0x9ccb1c
// 0086f066  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086f06a  64890d00000000       mov dword ptr fs:[0], ecx
// 0086f071  59                   pop ecx
// 0086f072  5e                   pop esi
// 0086f073  83c410               add esp, 0x10
// 0086f076  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1