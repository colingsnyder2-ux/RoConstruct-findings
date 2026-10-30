// from server: 100% by auto
// roc 2012-06 009c67d0  unit: CXTPDockingPaneManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c67d0
//
// 009c67d0  8b542404             mov edx, dword ptr [esp + 4]
// 009c67d4  3b510c               cmp edx, dword ptr [ecx + 0xc]
// 009c67d7  7d13                 jge 0x9c67ec
// 009c67d9  85d2                 test edx, edx
// 009c67db  7c0f                 jl 0x9c67ec
// 009c67dd  8b4104               mov eax, dword ptr [ecx + 4]
// 009c67e0  740c                 je 0x9c67ee
// 009c67e2  83ea01               sub edx, 1
// 009c67e5  8b00                 mov eax, dword ptr [eax]
// 009c67e7  75f9                 jne 0x9c67e2
// 009c67e9  c20400               ret 4
// 009c67ec  33c0                 xor eax, eax
// 009c67ee  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ?FindIndex@?$CList@PAVCXTOutBarItem@@PAV1@@@QBEPAU__POSITION@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
