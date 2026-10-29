// roc 2007-03 0067a510  unit: seg_00670000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067a510
//
// 0067a510  8b442408             mov eax, dword ptr [esp + 8]
// 0067a514  56                   push esi
// 0067a515  8bf1                 mov esi, ecx
// 0067a517  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067a51b  50                   push eax
// 0067a51c  51                   push ecx
// 0067a51d  8bce                 mov ecx, esi
// 0067a51f  e8f40c0c00           call 0x73b218
// 0067a524  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0067a52b  7524                 jne 0x67a551
// 0067a52d  57                   push edi
// 0067a52e  6a00                 push 0
// 0067a530  8dbefc000000         lea edi, [esi + 0xfc]
// 0067a536  57                   push edi
// 0067a537  6a00                 push 0
// 0067a539  6a26                 push 0x26
// 0067a53b  ff150cef7700         call dword ptr [0x77ef0c]
// 0067a541  f6860801000002       test byte ptr [esi + 0x108], 2
// 0067a548  7406                 je 0x67a550
// 0067a54a  c70700000000         mov dword ptr [edi], 0
// 0067a550  5f                   pop edi
// 0067a551  5e                   pop esi
// 0067a552  c20800               ret 8
// copied from an identical function in another client (function ?OnSettingChange@CXTSplitterWnd@@IAEXIPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1