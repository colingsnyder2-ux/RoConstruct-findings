// roc 2010-06 00808df0  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808df0
//
// 00808df0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 00808df3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00808df9  83e801               sub eax, 1
// 00808dfc  7419                 je 0x808e17
// 00808dfe  83e801               sub eax, 1
// 00808e01  740e                 je 0x808e11
// 00808e03  83e801               sub eax, 1
// 00808e06  7403                 je 0x808e0b
// 00808e08  33c0                 xor eax, eax
// 00808e0a  c3                   ret 
// 00808e0b  b803000000           mov eax, 3
// 00808e10  c3                   ret 
// 00808e11  b801000000           mov eax, 1
// 00808e16  c3                   ret 
// 00808e17  b802000000           mov eax, 2
// 00808e1c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
