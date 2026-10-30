// roc 2012-06 009dc870  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc870
//
// 009dc870  33c0                 xor eax, eax
// 009dc872  394158               cmp dword ptr [ecx + 0x58], eax
// 009dc875  7406                 je 0x9dc87d
// 009dc877  894158               mov dword ptr [ecx + 0x58], eax
// 009dc87a  89415c               mov dword ptr [ecx + 0x5c], eax
// 009dc87d  8b01                 mov eax, dword ptr [ecx]
// 009dc87f  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 009dc885  ffe2                 jmp edx
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
