// roc 2008-06 006a61e0  unit: MyXTPCommandBars  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a61e0
//
// 006a61e0  56                   push esi
// 006a61e1  57                   push edi
// 006a61e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a61e6  8bf1                 mov esi, ecx
// 006a61e8  8b06                 mov eax, dword ptr [esi]
// 006a61ea  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006a61ed  57                   push edi
// 006a61ee  ffd2                 call edx
// 006a61f0  85c0                 test eax, eax
// 006a61f2  741f                 je 0x6a6213
// 006a61f4  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006a61f7  81c1a8000000         add ecx, 0xa8
// 006a61fd  57                   push edi
// 006a61fe  e8cdb30700           call 0x7215d0
// 006a6203  c70001000000         mov dword ptr [eax], 1
// 006a6209  8b4674               mov eax, dword ptr [esi + 0x74]
// 006a620c  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006a6213  5f                   pop edi
// 006a6214  5e                   pop esi
// 006a6215  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?SetCommandUsed@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
