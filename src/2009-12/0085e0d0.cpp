// roc 2009-12 0085e0d0  unit: CXTSplitterWnd  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e0d0
//
// 0085e0d0  56                   push esi
// 0085e0d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085e0d5  57                   push edi
// 0085e0d6  8bf9                 mov edi, ecx
// 0085e0d8  85f6                 test esi, esi
// 0085e0da  7513                 jne 0x85e0ef
// 0085e0dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085e0e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085e0e4  50                   push eax
// 0085e0e5  51                   push ecx
// 0085e0e6  8bcf                 mov ecx, edi
// 0085e0e8  e89b62f9ff           call 0x7f4388
// 0085e0ed  8bf0                 mov esi, eax
// 0085e0ef  e85c61f9ff           call 0x7f4250
// 0085e0f4  50                   push eax
// 0085e0f5  8bce                 mov ecx, esi
// 0085e0f7  e8ec5cf9ff           call 0x7f3de8
// 0085e0fc  85c0                 test eax, eax
// 0085e0fe  7416                 je 0x85e116
// 0085e100  8bcf                 mov ecx, edi
// 0085e102  e8475af9ff           call 0x7f3b4e
// 0085e107  6a01                 push 1
// 0085e109  56                   push esi
// 0085e10a  8bc8                 mov ecx, eax
// 0085e10c  e87765f9ff           call 0x7f4688
// 0085e111  5f                   pop edi
// 0085e112  5e                   pop esi
// 0085e113  c20c00               ret 0xc
// 0085e116  8bce                 mov ecx, esi
// 0085e118  e8e55af9ff           call 0x7f3c02
// 0085e11d  5f                   pop edi
// 0085e11e  5e                   pop esi
// 0085e11f  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetActivePane@CXTSplitterWnd@@UAEXHHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1