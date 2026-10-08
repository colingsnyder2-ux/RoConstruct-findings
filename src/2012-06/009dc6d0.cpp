// roc 2012-06 009dc6d0  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc6d0
//
// 009dc6d0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 009dc6d3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009dc6d9  83e801               sub eax, 1
// 009dc6dc  7419                 je 0x9dc6f7
// 009dc6de  83e801               sub eax, 1
// 009dc6e1  740e                 je 0x9dc6f1
// 009dc6e3  83e801               sub eax, 1
// 009dc6e6  7403                 je 0x9dc6eb
// 009dc6e8  33c0                 xor eax, eax
// 009dc6ea  c3                   ret 
// 009dc6eb  b803000000           mov eax, 3
// 009dc6f0  c3                   ret 
// 009dc6f1  b801000000           mov eax, 1
// 009dc6f6  c3                   ret 
// 009dc6f7  b802000000           mov eax, 2
// 009dc6fc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
