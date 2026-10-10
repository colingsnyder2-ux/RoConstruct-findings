// roc 2008-06 0044e410  unit: CRobloxControlColorSelector  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e410
//
// 0044e410  56                   push esi
// 0044e411  8bf1                 mov esi, ecx
// 0044e413  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0044e419  83f8ff               cmp eax, -1
// 0044e41c  750f                 jne 0x44e42d
// 0044e41e  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0044e424  85c9                 test ecx, ecx
// 0044e426  7405                 je 0x44e42d
// 0044e428  e893d32500           call 0x6ab7c0
// 0044e42d  85c0                 test eax, eax
// 0044e42f  7427                 je 0x44e458
// 0044e431  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0044e437  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0044e43e  7518                 jne 0x44e458
// 0044e440  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044e444  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044e448  8b16                 mov edx, dword ptr [esi]
// 0044e44a  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0044e450  50                   push eax
// 0044e451  51                   push ecx
// 0044e452  6a01                 push 1
// 0044e454  8bce                 mov ecx, esi
// 0044e456  ffd2                 call edx
// 0044e458  5e                   pop esi
// 0044e459  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnLButtonUp@CXTPControlColorSelector@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopupColor.cpp
