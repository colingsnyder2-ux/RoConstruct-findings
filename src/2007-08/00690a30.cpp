// roc 2007-08 00690a30  unit: CXTSplitterWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690a30
//
// 00690a30  8b442404             mov eax, dword ptr [esp + 4]
// 00690a34  83f801               cmp eax, 1
// 00690a37  743b                 je 0x690a74
// 00690a39  83f865               cmp eax, 0x65
// 00690a3c  7c05                 jl 0x690a43
// 00690a3e  83f873               cmp eax, 0x73
// 00690a41  7e31                 jle 0x690a74
// 00690a43  83f802               cmp eax, 2
// 00690a46  7417                 je 0x690a5f
// 00690a48  3dc9000000           cmp eax, 0xc9
// 00690a4d  7c07                 jl 0x690a56
// 00690a4f  3dd7000000           cmp eax, 0xd7
// 00690a54  7e09                 jle 0x690a5f
// 00690a56  89442404             mov dword ptr [esp + 4], eax
// 00690a5a  e979800a00           jmp 0x738ad8
// 00690a5f  e88c6e0000           call 0x6978f0
// 00690a64  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 00690a6a  89442404             mov dword ptr [esp + 4], eax
// 00690a6e  ff2560ed7700         jmp dword ptr [0x77ed60]
// 00690a74  e8776e0000           call 0x6978f0
// 00690a79  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00690a7f  894c2404             mov dword ptr [esp + 4], ecx
// 00690a83  ff2560ed7700         jmp dword ptr [0x77ed60]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1