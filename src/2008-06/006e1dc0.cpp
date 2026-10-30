// from server: 100% by auto
// roc 2008-06 006e1dc0  unit: CXTPControls  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1dc0
//
// 006e1dc0  8b442404             mov eax, dword ptr [esp + 4]
// 006e1dc4  8b10                 mov edx, dword ptr [eax]
// 006e1dc6  895124               mov dword ptr [ecx + 0x24], edx
// 006e1dc9  8b5004               mov edx, dword ptr [eax + 4]
// 006e1dcc  56                   push esi
// 006e1dcd  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 006e1dd0  895128               mov dword ptr [ecx + 0x28], edx
// 006e1dd3  8b10                 mov edx, dword ptr [eax]
// 006e1dd5  57                   push edi
// 006e1dd6  8b7920               mov edi, dword ptr [ecx + 0x20]
// 006e1dd9  3bd6                 cmp edx, esi
// 006e1ddb  7505                 jne 0x6e1de2
// 006e1ddd  397804               cmp dword ptr [eax + 4], edi
// 006e1de0  7417                 je 0x6e1df9
// 006e1de2  85d2                 test edx, edx
// 006e1de4  7413                 je 0x6e1df9
// 006e1de6  83780400             cmp dword ptr [eax + 4], 0
// 006e1dea  740d                 je 0x6e1df9
// 006e1dec  b801000000           mov eax, 1
// 006e1df1  5f                   pop edi
// 006e1df2  894118               mov dword ptr [ecx + 0x18], eax
// 006e1df5  5e                   pop esi
// 006e1df6  c20400               ret 4
// 006e1df9  33c0                 xor eax, eax
// 006e1dfb  5f                   pop edi
// 006e1dfc  894118               mov dword ptr [ecx + 0x18], eax
// 006e1dff  5e                   pop esi
// 006e1e00  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?SetScreenSize@CXTPDockState@@AAEXAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
