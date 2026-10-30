// from server: 100% by auto
// roc 2012-06 009d0b10  unit: CXTPControls  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d0b10
//
// 009d0b10  56                   push esi
// 009d0b11  8bf1                 mov esi, ecx
// 009d0b13  e808ffffff           call 0x9d0a20
// 009d0b18  c7062449c100         mov dword ptr [esi], 0xc14924
// 009d0b1e  c7464001000000       mov dword ptr [esi + 0x40], 1
// 009d0b25  8bc6                 mov eax, esi
// 009d0b27  5e                   pop esi
// 009d0b28  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ??0CXTPOriginalControls@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
