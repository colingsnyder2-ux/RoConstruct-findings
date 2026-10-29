// roc 2009-06 007830d0  unit: CXTSplitterWnd  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007830d0
//
// 007830d0  56                   push esi
// 007830d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 007830d5  57                   push edi
// 007830d6  8bf9                 mov edi, ecx
// 007830d8  85f6                 test esi, esi
// 007830da  7513                 jne 0x7830ef
// 007830dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 007830e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007830e4  50                   push eax
// 007830e5  51                   push ecx
// 007830e6  8bcf                 mov ecx, edi
// 007830e8  e86d64f9ff           call 0x71955a
// 007830ed  8bf0                 mov esi, eax
// 007830ef  e83463f9ff           call 0x719428
// 007830f4  50                   push eax
// 007830f5  8bce                 mov ecx, esi
// 007830f7  e8b85ef9ff           call 0x718fb4
// 007830fc  85c0                 test eax, eax
// 007830fe  7416                 je 0x783116
// 00783100  8bcf                 mov ecx, edi
// 00783102  e81f5cf9ff           call 0x718d26
// 00783107  6a01                 push 1
// 00783109  56                   push esi
// 0078310a  8bc8                 mov ecx, eax
// 0078310c  e84367f9ff           call 0x719854
// 00783111  5f                   pop edi
// 00783112  5e                   pop esi
// 00783113  c20c00               ret 0xc
// 00783116  8bce                 mov ecx, esi
// 00783118  e8bd5cf9ff           call 0x718dda
// 0078311d  5f                   pop edi
// 0078311e  5e                   pop esi
// 0078311f  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetActivePane@CXTSplitterWnd@@UAEXHHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1