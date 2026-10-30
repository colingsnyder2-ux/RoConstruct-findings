// from server: 100% by auto
// roc 2008-06 00701ff0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701ff0
//
// 00701ff0  56                   push esi
// 00701ff1  8bf1                 mov esi, ecx
// 00701ff3  e8c89e0700           call 0x77bec0
// 00701ff8  dd05887a8100         fld qword ptr [0x817a88]
// 00701ffe  dd9e98000000         fstp qword ptr [esi + 0x98]
// 00702004  c706fcb18500         mov dword ptr [esi], 0x85b1fc
// 0070200a  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00702014  8bc6                 mov eax, esi
// 00702016  5e                   pop esi
// 00702017  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
