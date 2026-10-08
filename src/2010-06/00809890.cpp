// roc 2010-06 00809890  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809890
//
// 00809890  56                   push esi
// 00809891  8bf1                 mov esi, ecx
// 00809893  e8789a0700           call 0x883310
// 00809898  dd056057a000         fld qword ptr [0xa05760]
// 0080989e  dd9e98000000         fstp qword ptr [esi + 0x98]
// 008098a4  c706b409a600         mov dword ptr [esi], 0xa609b4
// 008098aa  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 008098b4  8bc6                 mov eax, esi
// 008098b6  5e                   pop esi
// 008098b7  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
