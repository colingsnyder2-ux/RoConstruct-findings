// roc 2009-12 0085d7d0  unit: CXTPDockingPane  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d7d0
//
// 0085d7d0  6aff                 push -1
// 0085d7d2  6898e59500           push 0x95e598
// 0085d7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0085d7dd  50                   push eax
// 0085d7de  51                   push ecx
// 0085d7df  56                   push esi
// 0085d7e0  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d7e5  33c4                 xor eax, esp
// 0085d7e7  50                   push eax
// 0085d7e8  8d44240c             lea eax, [esp + 0xc]
// 0085d7ec  64a300000000         mov dword ptr fs:[0], eax
// 0085d7f2  8bf1                 mov esi, ecx
// 0085d7f4  89742408             mov dword ptr [esp + 8], esi
// 0085d7f8  8d8edc000000         lea ecx, [esi + 0xdc]
// 0085d7fe  c70624d89f00         mov dword ptr [esi], 0x9fd824
// 0085d804  c70114d89f00         mov dword ptr [ecx], 0x9fd814
// 0085d80a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085d812  e8d9c9ffff           call 0x85a1f0
// 0085d817  8bce                 mov ecx, esi
// 0085d819  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0085d821  e80c930c00           call 0x926b32
// 0085d826  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d82a  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d831  59                   pop ecx
// 0085d832  5e                   pop esi
// 0085d833  83c410               add esp, 0x10
// 0085d836  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1