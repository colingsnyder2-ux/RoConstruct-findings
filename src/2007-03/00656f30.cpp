// roc 2007-03 00656f30  unit: seg_00650000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00656f30
//
// 00656f30  8b442404             mov eax, dword ptr [esp + 4]
// 00656f34  8b10                 mov edx, dword ptr [eax]
// 00656f36  895124               mov dword ptr [ecx + 0x24], edx
// 00656f39  8b5004               mov edx, dword ptr [eax + 4]
// 00656f3c  56                   push esi
// 00656f3d  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 00656f40  895128               mov dword ptr [ecx + 0x28], edx
// 00656f43  8b10                 mov edx, dword ptr [eax]
// 00656f45  3bd6                 cmp edx, esi
// 00656f47  57                   push edi
// 00656f48  8b7920               mov edi, dword ptr [ecx + 0x20]
// 00656f4b  7505                 jne 0x656f52
// 00656f4d  397804               cmp dword ptr [eax + 4], edi
// 00656f50  7417                 je 0x656f69
// 00656f52  85d2                 test edx, edx
// 00656f54  7413                 je 0x656f69
// 00656f56  83780400             cmp dword ptr [eax + 4], 0
// 00656f5a  740d                 je 0x656f69
// 00656f5c  b801000000           mov eax, 1
// 00656f61  5f                   pop edi
// 00656f62  894118               mov dword ptr [ecx + 0x18], eax
// 00656f65  5e                   pop esi
// 00656f66  c20400               ret 4
// 00656f69  33c0                 xor eax, eax
// 00656f6b  5f                   pop edi
// 00656f6c  894118               mov dword ptr [ecx + 0x18], eax
// 00656f6f  5e                   pop esi
// 00656f70  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?SetScreenSize@CXTPDockState@@AAEXAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
