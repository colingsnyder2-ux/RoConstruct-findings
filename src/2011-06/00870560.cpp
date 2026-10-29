// roc 2011-06 00870560  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870560
//
// 00870560  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00870564  8b542404             mov edx, dword ptr [esp + 4]
// 00870568  56                   push esi
// 00870569  8bf1                 mov esi, ecx
// 0087056b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087056f  50                   push eax
// 00870570  51                   push ecx
// 00870571  52                   push edx
// 00870572  8bce                 mov ecx, esi
// 00870574  e86fc61500           call 0x9ccbe8
// 00870579  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087057c  6a01                 push 1
// 0087057e  6a00                 push 0
// 00870580  50                   push eax
// 00870581  ff15ec19a400         call dword ptr [0xa419ec]
// 00870587  5e                   pop esi
// 00870588  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1