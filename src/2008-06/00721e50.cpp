// roc 2008-06 00721e50  unit: CXTPRibbonBar::CControlQuickAccessCommand  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721e50
//
// 00721e50  56                   push esi
// 00721e51  8bf1                 mov esi, ecx
// 00721e53  e858b9f8ff           call 0x6ad7b0
// 00721e58  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00721e5e  85c0                 test eax, eax
// 00721e60  7410                 je 0x721e72
// 00721e62  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00721e68  8b11                 mov edx, dword ptr [ecx]
// 00721e6a  50                   push eax
// 00721e6b  8b4258               mov eax, dword ptr [edx + 0x58]
// 00721e6e  ffd0                 call eax
// 00721e70  eb2c                 jmp 0x721e9e
// 00721e72  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00721e78  6a01                 push 1
// 00721e7a  6aff                 push -1
// 00721e7c  51                   push ecx
// 00721e7d  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00721e83  e8081dfdff           call 0x6f3b90
// 00721e88  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 00721e8e  8b10                 mov edx, dword ptr [eax]
// 00721e90  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00721e96  83e1ef               and ecx, 0xffffffef
// 00721e99  51                   push ecx
// 00721e9a  8bc8                 mov ecx, eax
// 00721e9c  ffd2                 call edx
// 00721e9e  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00721ea4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00721ea7  8b11                 mov edx, dword ptr [ecx]
// 00721ea9  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00721eaf  5e                   pop esi
// 00721eb0  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlQuickAccessCommand@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
