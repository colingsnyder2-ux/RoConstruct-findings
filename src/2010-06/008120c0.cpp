// roc 2010-06 008120c0  unit: CXTSplitterWnd  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008120c0
//
// 008120c0  56                   push esi
// 008120c1  8b742410             mov esi, dword ptr [esp + 0x10]
// 008120c5  57                   push edi
// 008120c6  8bf9                 mov edi, ecx
// 008120c8  85f6                 test esi, esi
// 008120ca  7513                 jne 0x8120df
// 008120cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 008120d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008120d4  50                   push eax
// 008120d5  51                   push ecx
// 008120d6  8bcf                 mov ecx, edi
// 008120d8  e8eb63f9ff           call 0x7a84c8
// 008120dd  8bf0                 mov esi, eax
// 008120df  e8ac62f9ff           call 0x7a8390
// 008120e4  50                   push eax
// 008120e5  8bce                 mov ecx, esi
// 008120e7  e83c5ef9ff           call 0x7a7f28
// 008120ec  85c0                 test eax, eax
// 008120ee  7416                 je 0x812106
// 008120f0  8bcf                 mov ecx, edi
// 008120f2  e8975bf9ff           call 0x7a7c8e
// 008120f7  6a01                 push 1
// 008120f9  56                   push esi
// 008120fa  8bc8                 mov ecx, eax
// 008120fc  e8c766f9ff           call 0x7a87c8
// 00812101  5f                   pop edi
// 00812102  5e                   pop esi
// 00812103  c20c00               ret 0xc
// 00812106  8bce                 mov ecx, esi
// 00812108  e8355cf9ff           call 0x7a7d42
// 0081210d  5f                   pop edi
// 0081210e  5e                   pop esi
// 0081210f  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetActivePane@CXTSplitterWnd@@UAEXHHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1