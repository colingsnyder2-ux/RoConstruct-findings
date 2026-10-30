// roc 2009-06 00782fb0  unit: CXTSplitterWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782fb0
//
// 00782fb0  8b442404             mov eax, dword ptr [esp + 4]
// 00782fb4  83f801               cmp eax, 1
// 00782fb7  743b                 je 0x782ff4
// 00782fb9  83f865               cmp eax, 0x65
// 00782fbc  7c05                 jl 0x782fc3
// 00782fbe  83f873               cmp eax, 0x73
// 00782fc1  7e31                 jle 0x782ff4
// 00782fc3  83f802               cmp eax, 2
// 00782fc6  7417                 je 0x782fdf
// 00782fc8  3dc9000000           cmp eax, 0xc9
// 00782fcd  7c07                 jl 0x782fd6
// 00782fcf  3dd7000000           cmp eax, 0xd7
// 00782fd4  7e09                 jle 0x782fdf
// 00782fd6  89442404             mov dword ptr [esp + 4], eax
// 00782fda  e989960c00           jmp 0x84c668
// 00782fdf  e8fc640000           call 0x7894e0
// 00782fe4  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 00782fea  89442404             mov dword ptr [esp + 4], eax
// 00782fee  ff2590ed8900         jmp dword ptr [0x89ed90]
// 00782ff4  e8e7640000           call 0x7894e0
// 00782ff9  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00782fff  894c2404             mov dword ptr [esp + 4], ecx
// 00783003  ff2590ed8900         jmp dword ptr [0x89ed90]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1