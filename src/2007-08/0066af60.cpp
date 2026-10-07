// roc 2007-08 0066af60  unit: CXTPToolBar::CControlButtonExpand  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066af60
//
// 0066af60  8b442404             mov eax, dword ptr [esp + 4]
// 0066af64  8b10                 mov edx, dword ptr [eax]
// 0066af66  895124               mov dword ptr [ecx + 0x24], edx
// 0066af69  8b5004               mov edx, dword ptr [eax + 4]
// 0066af6c  56                   push esi
// 0066af6d  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 0066af70  895128               mov dword ptr [ecx + 0x28], edx
// 0066af73  8b10                 mov edx, dword ptr [eax]
// 0066af75  3bd6                 cmp edx, esi
// 0066af77  57                   push edi
// 0066af78  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0066af7b  7505                 jne 0x66af82
// 0066af7d  397804               cmp dword ptr [eax + 4], edi
// 0066af80  7417                 je 0x66af99
// 0066af82  85d2                 test edx, edx
// 0066af84  7413                 je 0x66af99
// 0066af86  83780400             cmp dword ptr [eax + 4], 0
// 0066af8a  740d                 je 0x66af99
// 0066af8c  b801000000           mov eax, 1
// 0066af91  5f                   pop edi
// 0066af92  894118               mov dword ptr [ecx + 0x18], eax
// 0066af95  5e                   pop esi
// 0066af96  c20400               ret 4
// 0066af99  33c0                 xor eax, eax
// 0066af9b  5f                   pop edi
// 0066af9c  894118               mov dword ptr [ecx + 0x18], eax
// 0066af9f  5e                   pop esi
// 0066afa0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?SetScreenSize@CXTPDockState@@AAEXAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
