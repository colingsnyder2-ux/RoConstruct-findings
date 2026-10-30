// roc 2009-06 00783010  unit: CXTSplitterWnd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783010
//
// 00783010  8b442408             mov eax, dword ptr [esp + 8]
// 00783014  56                   push esi
// 00783015  8bf1                 mov esi, ecx
// 00783017  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078301b  50                   push eax
// 0078301c  51                   push ecx
// 0078301d  8bce                 mov ecx, esi
// 0078301f  e84a960c00           call 0x84c66e
// 00783024  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0078302b  7524                 jne 0x783051
// 0078302d  57                   push edi
// 0078302e  6a00                 push 0
// 00783030  8dbefc000000         lea edi, [esi + 0xfc]
// 00783036  57                   push edi
// 00783037  6a00                 push 0
// 00783039  6a26                 push 0x26
// 0078303b  ff1564ee8900         call dword ptr [0x89ee64]
// 00783041  f6860801000002       test byte ptr [esi + 0x108], 2
// 00783048  7406                 je 0x783050
// 0078304a  c70700000000         mov dword ptr [edi], 0
// 00783050  5f                   pop edi
// 00783051  5e                   pop esi
// 00783052  c20800               ret 8
// copied from an identical function in another client (function ?OnSettingChange@CXTSplitterWnd@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1