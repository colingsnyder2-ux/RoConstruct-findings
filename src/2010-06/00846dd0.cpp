// roc 2010-06 00846dd0  unit: CXTPDockBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846dd0
//
// 00846dd0  56                   push esi
// 00846dd1  8bf1                 mov esi, ecx
// 00846dd3  e888d5ffff           call 0x844360
// 00846dd8  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 00846ddf  c706bc80a600         mov dword ptr [esi], 0xa680bc
// 00846de5  c746205c80a600       mov dword ptr [esi + 0x20], 0xa6805c
// 00846dec  8bc6                 mov eax, esi
// 00846dee  5e                   pop esi
// 00846def  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
