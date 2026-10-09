// roc 2009-12 008116d0  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008116d0
//
// 008116d0  8b442408             mov eax, dword ptr [esp + 8]
// 008116d4  56                   push esi
// 008116d5  57                   push edi
// 008116d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008116da  50                   push eax
// 008116db  57                   push edi
// 008116dc  8bf1                 mov esi, ecx
// 008116de  e86d2fffff           call 0x804650
// 008116e3  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 008116e9  898e88010000         mov dword ptr [esi + 0x188], ecx
// 008116ef  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 008116f5  89968c010000         mov dword ptr [esi + 0x18c], edx
// 008116fb  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 00811701  5f                   pop edi
// 00811702  898634010000         mov dword ptr [esi + 0x134], eax
// 00811708  5e                   pop esi
// 00811709  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
