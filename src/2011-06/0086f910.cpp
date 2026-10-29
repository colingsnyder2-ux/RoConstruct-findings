// roc 2011-06 0086f910  unit: CXTSplitterWnd  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f910
//
// 0086f910  56                   push esi
// 0086f911  8b742410             mov esi, dword ptr [esp + 0x10]
// 0086f915  57                   push edi
// 0086f916  8bf9                 mov edi, ecx
// 0086f918  85f6                 test esi, esi
// 0086f91a  7513                 jne 0x86f92f
// 0086f91c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086f920  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086f924  50                   push eax
// 0086f925  51                   push ecx
// 0086f926  8bcf                 mov ecx, edi
// 0086f928  e85fb2f9ff           call 0x80ab8c
// 0086f92d  8bf0                 mov esi, eax
// 0086f92f  e820b1f9ff           call 0x80aa54
// 0086f934  50                   push eax
// 0086f935  8bce                 mov ecx, esi
// 0086f937  e8aaacf9ff           call 0x80a5e6
// 0086f93c  85c0                 test eax, eax
// 0086f93e  7416                 je 0x86f956
// 0086f940  8bcf                 mov ecx, edi
// 0086f942  e805aaf9ff           call 0x80a34c
// 0086f947  6a01                 push 1
// 0086f949  56                   push esi
// 0086f94a  8bc8                 mov ecx, eax
// 0086f94c  e86bb5f9ff           call 0x80aebc
// 0086f951  5f                   pop edi
// 0086f952  5e                   pop esi
// 0086f953  c20c00               ret 0xc
// 0086f956  8bce                 mov ecx, esi
// 0086f958  e8a3aaf9ff           call 0x80a400
// 0086f95d  5f                   pop edi
// 0086f95e  5e                   pop esi
// 0086f95f  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetActivePane@CXTSplitterWnd@@UAEXHHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1