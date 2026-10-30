// roc 2009-12 00893440  unit: CXTPMenuBar::CControlMDIButton  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893440
//
// 00893440  56                   push esi
// 00893441  8bf1                 mov esi, ecx
// 00893443  e898ffffff           call 0x8933e0
// 00893448  8b06                 mov eax, dword ptr [esi]
// 0089344a  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00893450  8bce                 mov ecx, esi
// 00893452  ffd2                 call edx
// 00893454  85c0                 test eax, eax
// 00893456  740d                 je 0x893465
// 00893458  8b06                 mov eax, dword ptr [esi]
// 0089345a  8b9020020000         mov edx, dword ptr [eax + 0x220]
// 00893460  8bce                 mov ecx, esi
// 00893462  5e                   pop esi
// 00893463  ffe2                 jmp edx
// 00893465  5e                   pop esi
// 00893466  c3                   ret 
// copied from an identical function in another client (function ?RefreshMenu@CXTPMenuBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp