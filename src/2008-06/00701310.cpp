// from server: 100% by auto
// roc 2008-06 00701310  unit: CXTPTabClientWnd::CWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701310
//
// 00701310  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00701316  85c0                 test eax, eax
// 00701318  740d                 je 0x701327
// 0070131a  83786400             cmp dword ptr [eax + 0x64], 0
// 0070131e  7408                 je 0x701328
// 00701320  c7406001000000       mov dword ptr [eax + 0x60], 1
// 00701327  c3                   ret 
// 00701328  8bc8                 mov ecx, eax
// 0070132a  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0070132d  8b5004               mov edx, dword ptr [eax + 4]
// 00701330  83c154               add ecx, 0x54
// 00701333  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CWorkspace@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
