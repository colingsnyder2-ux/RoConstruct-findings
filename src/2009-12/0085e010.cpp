// roc 2009-12 0085e010  unit: CXTSplitterWnd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e010
//
// 0085e010  8b442408             mov eax, dword ptr [esp + 8]
// 0085e014  56                   push esi
// 0085e015  8bf1                 mov esi, ecx
// 0085e017  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085e01b  50                   push eax
// 0085e01c  51                   push ecx
// 0085e01d  8bce                 mov ecx, esi
// 0085e01f  e8b68b0c00           call 0x926bda
// 0085e024  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0085e02b  7524                 jne 0x85e051
// 0085e02d  57                   push edi
// 0085e02e  6a00                 push 0
// 0085e030  8dbefc000000         lea edi, [esi + 0xfc]
// 0085e036  57                   push edi
// 0085e037  6a00                 push 0
// 0085e039  6a26                 push 0x26
// 0085e03b  ff1500cc9800         call dword ptr [0x98cc00]
// 0085e041  f6860801000002       test byte ptr [esi + 0x108], 2
// 0085e048  7406                 je 0x85e050
// 0085e04a  c70700000000         mov dword ptr [edi], 0
// 0085e050  5f                   pop edi
// 0085e051  5e                   pop esi
// 0085e052  c20800               ret 8
// copied from an identical function in another client (function ?OnSettingChange@CXTSplitterWnd@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1