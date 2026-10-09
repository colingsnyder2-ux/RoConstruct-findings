// roc 2009-12 00854d70  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854d70
//
// 00854d70  8b4188               mov eax, dword ptr [ecx - 0x78]
// 00854d73  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00854d79  83e801               sub eax, 1
// 00854d7c  7419                 je 0x854d97
// 00854d7e  83e801               sub eax, 1
// 00854d81  740e                 je 0x854d91
// 00854d83  83e801               sub eax, 1
// 00854d86  7403                 je 0x854d8b
// 00854d88  33c0                 xor eax, eax
// 00854d8a  c3                   ret 
// 00854d8b  b803000000           mov eax, 3
// 00854d90  c3                   ret 
// 00854d91  b801000000           mov eax, 1
// 00854d96  c3                   ret 
// 00854d97  b802000000           mov eax, 2
// 00854d9c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
