// roc 2012-06 0099f8e0  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f8e0
//
// 0099f8e0  8b442408             mov eax, dword ptr [esp + 8]
// 0099f8e4  56                   push esi
// 0099f8e5  57                   push edi
// 0099f8e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0099f8ea  50                   push eax
// 0099f8eb  57                   push edi
// 0099f8ec  8bf1                 mov esi, ecx
// 0099f8ee  e87d35ffff           call 0x992e70
// 0099f8f3  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 0099f8f9  898e88010000         mov dword ptr [esi + 0x188], ecx
// 0099f8ff  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0099f905  89968c010000         mov dword ptr [esi + 0x18c], edx
// 0099f90b  8b8734010000         mov eax, dword ptr [edi + 0x134]
// 0099f911  5f                   pop edi
// 0099f912  898634010000         mov dword ptr [esi + 0x134], eax
// 0099f918  5e                   pop esi
// 0099f919  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?Copy@CXTPToolBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
