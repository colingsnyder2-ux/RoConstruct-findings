// roc 2008-06 00701880  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701880
//
// 00701880  33c0                 xor eax, eax
// 00701882  394158               cmp dword ptr [ecx + 0x58], eax
// 00701885  7406                 je 0x70188d
// 00701887  894158               mov dword ptr [ecx + 0x58], eax
// 0070188a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0070188d  8b01                 mov eax, dword ptr [ecx]
// 0070188f  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00701895  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
