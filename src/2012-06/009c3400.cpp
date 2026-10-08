// from server: 100% by auto
// roc 2012-06 009c3400  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c3400
//
// 009c3400  8b442404             mov eax, dword ptr [esp + 4]
// 009c3404  8b10                 mov edx, dword ptr [eax]
// 009c3406  895124               mov dword ptr [ecx + 0x24], edx
// 009c3409  8b5004               mov edx, dword ptr [eax + 4]
// 009c340c  56                   push esi
// 009c340d  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 009c3410  895128               mov dword ptr [ecx + 0x28], edx
// 009c3413  8b10                 mov edx, dword ptr [eax]
// 009c3415  57                   push edi
// 009c3416  8b7920               mov edi, dword ptr [ecx + 0x20]
// 009c3419  3bd6                 cmp edx, esi
// 009c341b  7505                 jne 0x9c3422
// 009c341d  397804               cmp dword ptr [eax + 4], edi
// 009c3420  7417                 je 0x9c3439
// 009c3422  85d2                 test edx, edx
// 009c3424  7413                 je 0x9c3439
// 009c3426  83780400             cmp dword ptr [eax + 4], 0
// 009c342a  740d                 je 0x9c3439
// 009c342c  b801000000           mov eax, 1
// 009c3431  5f                   pop edi
// 009c3432  894118               mov dword ptr [ecx + 0x18], eax
// 009c3435  5e                   pop esi
// 009c3436  c20400               ret 4
// 009c3439  33c0                 xor eax, eax
// 009c343b  5f                   pop edi
// 009c343c  894118               mov dword ptr [ecx + 0x18], eax
// 009c343f  5e                   pop esi
// 009c3440  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?SetScreenSize@CXTPDockState@@AAEXAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
