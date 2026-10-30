// roc 2009-12 0085dfb0  unit: CXTSplitterWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085dfb0
//
// 0085dfb0  8b442404             mov eax, dword ptr [esp + 4]
// 0085dfb4  83f801               cmp eax, 1
// 0085dfb7  743b                 je 0x85dff4
// 0085dfb9  83f865               cmp eax, 0x65
// 0085dfbc  7c05                 jl 0x85dfc3
// 0085dfbe  83f873               cmp eax, 0x73
// 0085dfc1  7e31                 jle 0x85dff4
// 0085dfc3  83f802               cmp eax, 2
// 0085dfc6  7417                 je 0x85dfdf
// 0085dfc8  3dc9000000           cmp eax, 0xc9
// 0085dfcd  7c07                 jl 0x85dfd6
// 0085dfcf  3dd7000000           cmp eax, 0xd7
// 0085dfd4  7e09                 jle 0x85dfdf
// 0085dfd6  89442404             mov dword ptr [esp + 4], eax
// 0085dfda  e9f58b0c00           jmp 0x926bd4
// 0085dfdf  e8fc640000           call 0x8644e0
// 0085dfe4  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 0085dfea  89442404             mov dword ptr [esp + 4], eax
// 0085dfee  ff2520ca9800         jmp dword ptr [0x98ca20]
// 0085dff4  e8e7640000           call 0x8644e0
// 0085dff9  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0085dfff  894c2404             mov dword ptr [esp + 4], ecx
// 0085e003  ff2520ca9800         jmp dword ptr [0x98ca20]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1