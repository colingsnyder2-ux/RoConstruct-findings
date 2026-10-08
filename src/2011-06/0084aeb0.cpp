// from server: 100% by auto
// roc 2011-06 0084aeb0  unit: CXTPControls  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084aeb0
//
// 0084aeb0  8b442404             mov eax, dword ptr [esp + 4]
// 0084aeb4  8b10                 mov edx, dword ptr [eax]
// 0084aeb6  895124               mov dword ptr [ecx + 0x24], edx
// 0084aeb9  8b5004               mov edx, dword ptr [eax + 4]
// 0084aebc  56                   push esi
// 0084aebd  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 0084aec0  895128               mov dword ptr [ecx + 0x28], edx
// 0084aec3  8b10                 mov edx, dword ptr [eax]
// 0084aec5  57                   push edi
// 0084aec6  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0084aec9  3bd6                 cmp edx, esi
// 0084aecb  7505                 jne 0x84aed2
// 0084aecd  397804               cmp dword ptr [eax + 4], edi
// 0084aed0  7417                 je 0x84aee9
// 0084aed2  85d2                 test edx, edx
// 0084aed4  7413                 je 0x84aee9
// 0084aed6  83780400             cmp dword ptr [eax + 4], 0
// 0084aeda  740d                 je 0x84aee9
// 0084aedc  b801000000           mov eax, 1
// 0084aee1  5f                   pop edi
// 0084aee2  894118               mov dword ptr [ecx + 0x18], eax
// 0084aee5  5e                   pop esi
// 0084aee6  c20400               ret 4
// 0084aee9  33c0                 xor eax, eax
// 0084aeeb  5f                   pop edi
// 0084aeec  894118               mov dword ptr [ecx + 0x18], eax
// 0084aeef  5e                   pop esi
// 0084aef0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?SetScreenSize@CXTPDockState@@AAEXAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
