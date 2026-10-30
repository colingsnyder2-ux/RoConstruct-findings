// roc 2009-06 00779ff0  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779ff0
//
// 00779ff0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 00779ff3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00779ff9  83e801               sub eax, 1
// 00779ffc  7419                 je 0x77a017
// 00779ffe  83e801               sub eax, 1
// 0077a001  740e                 je 0x77a011
// 0077a003  83e801               sub eax, 1
// 0077a006  7403                 je 0x77a00b
// 0077a008  33c0                 xor eax, eax
// 0077a00a  c3                   ret 
// 0077a00b  b803000000           mov eax, 3
// 0077a010  c3                   ret 
// 0077a011  b801000000           mov eax, 1
// 0077a016  c3                   ret 
// 0077a017  b802000000           mov eax, 2
// 0077a01c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
