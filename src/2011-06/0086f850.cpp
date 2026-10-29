// roc 2011-06 0086f850  unit: CXTSplitterWnd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f850
//
// 0086f850  8b442408             mov eax, dword ptr [esp + 8]
// 0086f854  56                   push esi
// 0086f855  8bf1                 mov esi, ecx
// 0086f857  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086f85b  50                   push eax
// 0086f85c  51                   push ecx
// 0086f85d  8bce                 mov ecx, esi
// 0086f85f  e860d31500           call 0x9ccbc4
// 0086f864  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0086f86b  7524                 jne 0x86f891
// 0086f86d  57                   push edi
// 0086f86e  6a00                 push 0
// 0086f870  8dbefc000000         lea edi, [esi + 0xfc]
// 0086f876  57                   push edi
// 0086f877  6a00                 push 0
// 0086f879  6a26                 push 0x26
// 0086f87b  ff155c1ba400         call dword ptr [0xa41b5c]
// 0086f881  f6860801000002       test byte ptr [esi + 0x108], 2
// 0086f888  7406                 je 0x86f890
// 0086f88a  c70700000000         mov dword ptr [edi], 0
// 0086f890  5f                   pop edi
// 0086f891  5e                   pop esi
// 0086f892  c20800               ret 8
// copied from an identical function in another client (function ?OnSettingChange@CXTSplitterWnd@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1