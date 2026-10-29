// roc 2010-06 00812d10  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812d10
//
// 00812d10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00812d14  8b542404             mov edx, dword ptr [esp + 4]
// 00812d18  56                   push esi
// 00812d19  8bf1                 mov esi, ecx
// 00812d1b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812d1f  50                   push eax
// 00812d20  51                   push ecx
// 00812d21  52                   push edx
// 00812d22  8bce                 mov ecx, esi
// 00812d24  e817a81600           call 0x97d540
// 00812d29  8b4620               mov eax, dword ptr [esi + 0x20]
// 00812d2c  6a01                 push 1
// 00812d2e  6a00                 push 0
// 00812d30  50                   push eax
// 00812d31  ff1578ba9e00         call dword ptr [0x9eba78]
// 00812d37  5e                   pop esi
// 00812d38  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1