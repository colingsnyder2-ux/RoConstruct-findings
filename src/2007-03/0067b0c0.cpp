// roc 2007-03 0067b0c0  unit: seg_00670000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b0c0
//
// 0067b0c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067b0c4  8b542404             mov edx, dword ptr [esp + 4]
// 0067b0c8  56                   push esi
// 0067b0c9  8bf1                 mov esi, ecx
// 0067b0cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067b0cf  50                   push eax
// 0067b0d0  51                   push ecx
// 0067b0d1  52                   push edx
// 0067b0d2  8bce                 mov ecx, esi
// 0067b0d4  e863010c00           call 0x73b23c
// 0067b0d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0067b0dc  6a01                 push 1
// 0067b0de  6a00                 push 0
// 0067b0e0  50                   push eax
// 0067b0e1  ff1554ee7700         call dword ptr [0x77ee54]
// 0067b0e7  5e                   pop esi
// 0067b0e8  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1