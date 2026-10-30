// roc 2010-06 00832220  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00832220
//
// 00832220  8b442418             mov eax, dword ptr [esp + 0x18]
// 00832224  8b542414             mov edx, dword ptr [esp + 0x14]
// 00832228  53                   push ebx
// 00832229  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0083222d  56                   push esi
// 0083222e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00832232  57                   push edi
// 00832233  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00832237  85c0                 test eax, eax
// 00832239  7523                 jne 0x83225e
// 0083223b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00832240  751c                 jne 0x83225e
// 00832242  85ff                 test edi, edi
// 00832244  7418                 je 0x83225e
// 00832246  85db                 test ebx, ebx
// 00832248  7514                 jne 0x83225e
// 0083224a  85f6                 test esi, esi
// 0083224c  7510                 jne 0x83225e
// 0083224e  85d2                 test edx, edx
// 00832250  750c                 jne 0x83225e
// 00832252  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00832258  5f                   pop edi
// 00832259  5e                   pop esi
// 0083225a  5b                   pop ebx
// 0083225b  c21c00               ret 0x1c
// 0083225e  55                   push ebp
// 0083225f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00832263  55                   push ebp
// 00832264  50                   push eax
// 00832265  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00832269  52                   push edx
// 0083226a  56                   push esi
// 0083226b  57                   push edi
// 0083226c  53                   push ebx
// 0083226d  50                   push eax
// 0083226e  e8dd940000           call 0x83b750
// 00832273  5d                   pop ebp
// 00832274  5f                   pop edi
// 00832275  5e                   pop esi
// 00832276  5b                   pop ebx
// 00832277  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
