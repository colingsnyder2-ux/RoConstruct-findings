// roc 2009-12 0085ed20  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ed20
//
// 0085ed20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085ed24  8b542404             mov edx, dword ptr [esp + 4]
// 0085ed28  56                   push esi
// 0085ed29  8bf1                 mov esi, ecx
// 0085ed2b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085ed2f  50                   push eax
// 0085ed30  51                   push ecx
// 0085ed31  52                   push edx
// 0085ed32  8bce                 mov ecx, esi
// 0085ed34  e8c57e0c00           call 0x926bfe
// 0085ed39  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085ed3c  6a01                 push 1
// 0085ed3e  6a00                 push 0
// 0085ed40  50                   push eax
// 0085ed41  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0085ed47  5e                   pop esi
// 0085ed48  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1