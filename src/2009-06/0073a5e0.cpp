// roc 2009-06 0073a5e0  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a5e0
//
// 0073a5e0  8b442408             mov eax, dword ptr [esp + 8]
// 0073a5e4  56                   push esi
// 0073a5e5  57                   push edi
// 0073a5e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0073a5ea  50                   push eax
// 0073a5eb  57                   push edi
// 0073a5ec  8bf1                 mov esi, ecx
// 0073a5ee  e81d2fffff           call 0x72d510
// 0073a5f3  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 0073a5f9  898e88010000         mov dword ptr [esi + 0x188], ecx
// 0073a5ff  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0073a605  89968c010000         mov dword ptr [esi + 0x18c], edx
// 0073a60b  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 0073a611  5f                   pop edi
// 0073a612  898634010000         mov dword ptr [esi + 0x134], eax
// 0073a618  5e                   pop esi
// 0073a619  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
