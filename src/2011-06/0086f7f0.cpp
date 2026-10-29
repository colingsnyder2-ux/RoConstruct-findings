// roc 2011-06 0086f7f0  unit: CXTSplitterWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f7f0
//
// 0086f7f0  8b442404             mov eax, dword ptr [esp + 4]
// 0086f7f4  83f801               cmp eax, 1
// 0086f7f7  743b                 je 0x86f834
// 0086f7f9  83f865               cmp eax, 0x65
// 0086f7fc  7c05                 jl 0x86f803
// 0086f7fe  83f873               cmp eax, 0x73
// 0086f801  7e31                 jle 0x86f834
// 0086f803  83f802               cmp eax, 2
// 0086f806  7417                 je 0x86f81f
// 0086f808  3dc9000000           cmp eax, 0xc9
// 0086f80d  7c07                 jl 0x86f816
// 0086f80f  3dd7000000           cmp eax, 0xd7
// 0086f814  7e09                 jle 0x86f81f
// 0086f816  89442404             mov dword ptr [esp + 4], eax
// 0086f81a  e99fd31500           jmp 0x9ccbbe
// 0086f81f  e8cc640000           call 0x875cf0
// 0086f824  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 0086f82a  89442404             mov dword ptr [esp + 4], eax
// 0086f82e  ff25f41ba400         jmp dword ptr [0xa41bf4]
// 0086f834  e8b7640000           call 0x875cf0
// 0086f839  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0086f83f  894c2404             mov dword ptr [esp + 4], ecx
// 0086f843  ff25f41ba400         jmp dword ptr [0xa41bf4]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1