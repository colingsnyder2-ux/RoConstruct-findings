// roc 2009-12 00855960  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855960
//
// 00855960  56                   push esi
// 00855961  8bf1                 mov esi, ecx
// 00855963  e8c8970700           call 0x8cf130
// 00855968  dd05e0499a00         fld qword ptr [0x9a49e0]
// 0085596e  dd9e98000000         fstp qword ptr [esi + 0x98]
// 00855974  c706f4c69f00         mov dword ptr [esi], 0x9fc6f4
// 0085597a  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00855984  8bc6                 mov eax, esi
// 00855986  5e                   pop esi
// 00855987  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
