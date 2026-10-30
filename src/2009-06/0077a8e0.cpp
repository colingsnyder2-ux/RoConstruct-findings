// roc 2009-06 0077a8e0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a8e0
//
// 0077a8e0  56                   push esi
// 0077a8e1  8bf1                 mov esi, ecx
// 0077a8e3  e8989c0700           call 0x7f4580
// 0077a8e8  dd05e01c8b00         fld qword ptr [0x8b1ce0]
// 0077a8ee  dd9e98000000         fstp qword ptr [esi + 0x98]
// 0077a8f4  c7064cc28f00         mov dword ptr [esi], 0x8fc24c
// 0077a8fa  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0077a904  8bc6                 mov eax, esi
// 0077a906  5e                   pop esi
// 0077a907  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CWorkspace@CXTPTabClientWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
