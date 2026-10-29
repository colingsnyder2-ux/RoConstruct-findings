// roc 2007-03 0067a4b0  unit: seg_00670000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067a4b0
//
// 0067a4b0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a4b4  83f801               cmp eax, 1
// 0067a4b7  743b                 je 0x67a4f4
// 0067a4b9  83f865               cmp eax, 0x65
// 0067a4bc  7c05                 jl 0x67a4c3
// 0067a4be  83f873               cmp eax, 0x73
// 0067a4c1  7e31                 jle 0x67a4f4
// 0067a4c3  83f802               cmp eax, 2
// 0067a4c6  7417                 je 0x67a4df
// 0067a4c8  3dc9000000           cmp eax, 0xc9
// 0067a4cd  7c07                 jl 0x67a4d6
// 0067a4cf  3dd7000000           cmp eax, 0xd7
// 0067a4d4  7e09                 jle 0x67a4df
// 0067a4d6  89442404             mov dword ptr [esp + 4], eax
// 0067a4da  e9330d0c00           jmp 0x73b212
// 0067a4df  e8fc870000           call 0x682ce0
// 0067a4e4  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 0067a4ea  89442404             mov dword ptr [esp + 4], eax
// 0067a4ee  ff25d0ed7700         jmp dword ptr [0x77edd0]
// 0067a4f4  e8e7870000           call 0x682ce0
// 0067a4f9  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0067a4ff  894c2404             mov dword ptr [esp + 4], ecx
// 0067a503  ff25d0ed7700         jmp dword ptr [0x77edd0]
// copied from an identical function in another client (function ?SetSplitCursor@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1