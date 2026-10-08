// roc 2011-06 008642e0  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008642e0
//
// 008642e0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 008642e3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008642e9  83e801               sub eax, 1
// 008642ec  7419                 je 0x864307
// 008642ee  83e801               sub eax, 1
// 008642f1  740e                 je 0x864301
// 008642f3  83e801               sub eax, 1
// 008642f6  7403                 je 0x8642fb
// 008642f8  33c0                 xor eax, eax
// 008642fa  c3                   ret 
// 008642fb  b803000000           mov eax, 3
// 00864300  c3                   ret 
// 00864301  b801000000           mov eax, 1
// 00864306  c3                   ret 
// 00864307  b802000000           mov eax, 2
// 0086430c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
