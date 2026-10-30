// from server: 100% by auto
// roc 2008-06 006f3540  unit: CXTPControls  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3540
//
// 006f3540  56                   push esi
// 006f3541  8bf1                 mov esi, ecx
// 006f3543  e808ffffff           call 0x6f3450
// 006f3548  c7067c918500         mov dword ptr [esi], 0x85917c
// 006f354e  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006f3555  8bc6                 mov eax, esi
// 006f3557  5e                   pop esi
// 006f3558  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ??0CXTPOriginalControls@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
