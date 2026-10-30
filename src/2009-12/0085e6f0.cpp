// roc 2009-12 0085e6f0  unit: CXTSplitterWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e6f0
//
// 0085e6f0  56                   push esi
// 0085e6f1  8bf1                 mov esi, ecx
// 0085e6f3  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0085e6fa  7410                 je 0x85e70c
// 0085e6fc  6a00                 push 0
// 0085e6fe  ff1590b19800         call dword ptr [0x98b190]
// 0085e704  50                   push eax
// 0085e705  e85a5cf9ff           call 0x7f4364
// 0085e70a  eb05                 jmp 0x85e711
// 0085e70c  e86b820c00           call 0x92697c
// 0085e711  8b16                 mov edx, dword ptr [esi]
// 0085e713  8b92dc010000         mov edx, dword ptr [edx + 0x1dc]
// 0085e719  50                   push eax
// 0085e71a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085e71e  50                   push eax
// 0085e71f  8bce                 mov ecx, esi
// 0085e721  ffd2                 call edx
// 0085e723  5e                   pop esi
// 0085e724  c20400               ret 4
// copied from an identical function in another client (function ?OnInvertTracker@CXTSplitterWnd@@MAEXABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1