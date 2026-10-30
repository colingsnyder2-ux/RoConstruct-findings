// roc 2009-12 00817790  unit: MyXTPCommandBars  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817790
//
// 00817790  56                   push esi
// 00817791  57                   push edi
// 00817792  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00817796  8bf1                 mov esi, ecx
// 00817798  8b06                 mov eax, dword ptr [esi]
// 0081779a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081779d  57                   push edi
// 0081779e  ffd2                 call edx
// 008177a0  85c0                 test eax, eax
// 008177a2  741f                 je 0x8177c3
// 008177a4  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008177a7  81c1a8000000         add ecx, 0xa8
// 008177ad  57                   push edi
// 008177ae  e8cdc90700           call 0x894180
// 008177b3  c70001000000         mov dword ptr [eax], 1
// 008177b9  8b4674               mov eax, dword ptr [esi + 0x74]
// 008177bc  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 008177c3  5f                   pop edi
// 008177c4  5e                   pop esi
// 008177c5  c20400               ret 4
// copied from an identical function in another client (function ?SetCommandUsed@CXTPCommandBars@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp