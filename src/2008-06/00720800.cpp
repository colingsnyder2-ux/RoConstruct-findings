// roc 2008-06 00720800  unit: CXTPMenuBar::CControlMDIButton  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720800
//
// 00720800  56                   push esi
// 00720801  8bf1                 mov esi, ecx
// 00720803  e898ffffff           call 0x7207a0
// 00720808  8b06                 mov eax, dword ptr [esi]
// 0072080a  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00720810  8bce                 mov ecx, esi
// 00720812  ffd2                 call edx
// 00720814  85c0                 test eax, eax
// 00720816  740d                 je 0x720825
// 00720818  8b06                 mov eax, dword ptr [esi]
// 0072081a  8b9020020000         mov edx, dword ptr [eax + 0x220]
// 00720820  8bce                 mov ecx, esi
// 00720822  5e                   pop esi
// 00720823  ffe2                 jmp edx
// 00720825  5e                   pop esi
// 00720826  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?RefreshMenu@CXTPMenuBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
