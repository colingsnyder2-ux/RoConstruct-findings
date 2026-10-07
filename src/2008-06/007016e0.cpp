// roc 2008-06 007016e0  unit: CXTPControlTabWorkspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007016e0
//
// 007016e0  8b4188               mov eax, dword ptr [ecx - 0x78]
// 007016e3  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007016e9  83e801               sub eax, 1
// 007016ec  7419                 je 0x701707
// 007016ee  83e801               sub eax, 1
// 007016f1  740e                 je 0x701701
// 007016f3  83e801               sub eax, 1
// 007016f6  7403                 je 0x7016fb
// 007016f8  33c0                 xor eax, eax
// 007016fa  c3                   ret 
// 007016fb  b803000000           mov eax, 3
// 00701700  c3                   ret 
// 00701701  b801000000           mov eax, 1
// 00701706  c3                   ret 
// 00701707  b802000000           mov eax, 2
// 0070170c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetPosition@CXTPControlTabWorkspace@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
