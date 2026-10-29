// roc 2009-06 007836f0  unit: CXTSplitterWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007836f0
//
// 007836f0  56                   push esi
// 007836f1  8bf1                 mov esi, ecx
// 007836f3  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 007836fa  7410                 je 0x78370c
// 007836fc  6a00                 push 0
// 007836fe  ff1534e18900         call dword ptr [0x89e134]
// 00783704  50                   push eax
// 00783705  e82c5ef9ff           call 0x719536
// 0078370a  eb05                 jmp 0x783711
// 0078370c  e8ff8c0c00           call 0x84c410
// 00783711  8b16                 mov edx, dword ptr [esi]
// 00783713  8b92dc010000         mov edx, dword ptr [edx + 0x1dc]
// 00783719  50                   push eax
// 0078371a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078371e  50                   push eax
// 0078371f  8bce                 mov ecx, esi
// 00783721  ffd2                 call edx
// 00783723  5e                   pop esi
// 00783724  c20400               ret 4
// copied from an identical function in another client (function ?OnInvertTracker@CXTSplitterWnd@@MAEXABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1