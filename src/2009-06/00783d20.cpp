// roc 2009-06 00783d20  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783d20
//
// 00783d20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00783d24  8b542404             mov edx, dword ptr [esp + 4]
// 00783d28  56                   push esi
// 00783d29  8bf1                 mov esi, ecx
// 00783d2b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00783d2f  50                   push eax
// 00783d30  51                   push ecx
// 00783d31  52                   push edx
// 00783d32  8bce                 mov ecx, esi
// 00783d34  e859890c00           call 0x84c692
// 00783d39  8b4620               mov eax, dword ptr [esi + 0x20]
// 00783d3c  6a01                 push 1
// 00783d3e  6a00                 push 0
// 00783d40  50                   push eax
// 00783d41  ff157cee8900         call dword ptr [0x89ee7c]
// 00783d47  5e                   pop esi
// 00783d48  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1