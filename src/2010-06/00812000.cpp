// roc 2010-06 00812000  unit: CXTSplitterWnd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812000
//
// 00812000  8b442408             mov eax, dword ptr [esp + 8]
// 00812004  56                   push esi
// 00812005  8bf1                 mov esi, ecx
// 00812007  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081200b  50                   push eax
// 0081200c  51                   push ecx
// 0081200d  8bce                 mov ecx, esi
// 0081200f  e808b51600           call 0x97d51c
// 00812014  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0081201b  7524                 jne 0x812041
// 0081201d  57                   push edi
// 0081201e  6a00                 push 0
// 00812020  8dbefc000000         lea edi, [esi + 0xfc]
// 00812026  57                   push edi
// 00812027  6a00                 push 0
// 00812029  6a26                 push 0x26
// 0081202b  ff1594ba9e00         call dword ptr [0x9eba94]
// 00812031  f6860801000002       test byte ptr [esi + 0x108], 2
// 00812038  7406                 je 0x812040
// 0081203a  c70700000000         mov dword ptr [edi], 0
// 00812040  5f                   pop edi
// 00812041  5e                   pop esi
// 00812042  c20800               ret 8
// copied from an identical function in another client (function ?OnSettingChange@CXTSplitterWnd@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1