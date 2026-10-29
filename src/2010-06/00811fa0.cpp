// roc 2010-06 00811fa0  unit: CXTSplitterWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811fa0
//
// 00811fa0  8b442404             mov eax, dword ptr [esp + 4]
// 00811fa4  83f801               cmp eax, 1
// 00811fa7  743b                 je 0x811fe4
// 00811fa9  83f865               cmp eax, 0x65
// 00811fac  7c05                 jl 0x811fb3
// 00811fae  83f873               cmp eax, 0x73
// 00811fb1  7e31                 jle 0x811fe4
// 00811fb3  83f802               cmp eax, 2
// 00811fb6  7417                 je 0x811fcf
// 00811fb8  3dc9000000           cmp eax, 0xc9
// 00811fbd  7c07                 jl 0x811fc6
// 00811fbf  3dd7000000           cmp eax, 0xd7
// 00811fc4  7e09                 jle 0x811fcf
// 00811fc6  89442404             mov dword ptr [esp + 4], eax
// 00811fca  e947b51600           jmp 0x97d516
// 00811fcf  e8ec640000           call 0x8184c0
// 00811fd4  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 00811fda  89442404             mov dword ptr [esp + 4], eax
// 00811fde  ff25b4bb9e00         jmp dword ptr [0x9ebbb4]
// 00811fe4  e8d7640000           call 0x8184c0
// 00811fe9  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00811fef  894c2404             mov dword ptr [esp + 4], ecx
// 00811ff3  ff25b4bb9e00         jmp dword ptr [0x9ebbb4]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1