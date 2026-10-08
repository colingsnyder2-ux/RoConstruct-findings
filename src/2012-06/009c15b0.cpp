// from server: 100% by auto
// roc 2012-06 009c15b0  unit: CRobloxTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c15b0
//
// 009c15b0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 009c15b3  8b4838               mov ecx, dword ptr [eax + 0x38]
// 009c15b6  85c9                 test ecx, ecx
// 009c15b8  7403                 je 0x9c15bd
// 009c15ba  51                   push ecx
// 009c15bb  eb0b                 jmp 0x9c15c8
// 009c15bd  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c15c0  50                   push eax
// 009c15c1  ff15503ab200         call dword ptr [0xb23a50]
// 009c15c7  50                   push eax
// 009c15c8  e89910fcff           call 0x982666
// 009c15cd  85c0                 test eax, eax
// 009c15cf  741c                 je 0x9c15ed
// 009c15d1  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c15d4  85c0                 test eax, eax
// 009c15d6  7415                 je 0x9c15ed
// 009c15d8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c15dc  51                   push ecx
// 009c15dd  8b4904               mov ecx, dword ptr [ecx + 4]
// 009c15e0  51                   push ecx
// 009c15e1  6a4e                 push 0x4e
// 009c15e3  50                   push eax
// 009c15e4  ff15043cb200         call dword ptr [0xb23c04]
// 009c15ea  c20400               ret 4
// 009c15ed  33c0                 xor eax, eax
// 009c15ef  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SendNotify@CXTPTreeBase@@MAEJPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
