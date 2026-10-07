// roc 2008-06 006ecd50  unit: CXTPCustomizeOptionsPage  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ecd50
//
// 006ecd50  56                   push esi
// 006ecd51  57                   push edi
// 006ecd52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ecd56  8bf1                 mov esi, ecx
// 006ecd58  8d869c000000         lea eax, [esi + 0x9c]
// 006ecd5e  50                   push eax
// 006ecd5f  6a6a                 push 0x6a
// 006ecd61  57                   push edi
// 006ecd62  e88941fbff           call 0x6a0ef0
// 006ecd67  8d8ef0000000         lea ecx, [esi + 0xf0]
// 006ecd6d  51                   push ecx
// 006ecd6e  6a6a                 push 0x6a
// 006ecd70  57                   push edi
// 006ecd71  e868f70c00           call 0x7bc4de
// 006ecd76  8d9688000000         lea edx, [esi + 0x88]
// 006ecd7c  52                   push edx
// 006ecd7d  6a64                 push 0x64
// 006ecd7f  57                   push edi
// 006ecd80  e853f70c00           call 0x7bc4d8
// 006ecd85  8d868c000000         lea eax, [esi + 0x8c]
// 006ecd8b  50                   push eax
// 006ecd8c  6a65                 push 0x65
// 006ecd8e  57                   push edi
// 006ecd8f  e844f70c00           call 0x7bc4d8
// 006ecd94  8d8e90000000         lea ecx, [esi + 0x90]
// 006ecd9a  51                   push ecx
// 006ecd9b  6a67                 push 0x67
// 006ecd9d  57                   push edi
// 006ecd9e  e835f70c00           call 0x7bc4d8
// 006ecda3  8d9694000000         lea edx, [esi + 0x94]
// 006ecda9  52                   push edx
// 006ecdaa  6a68                 push 0x68
// 006ecdac  57                   push edi
// 006ecdad  e826f70c00           call 0x7bc4d8
// 006ecdb2  81c698000000         add esi, 0x98
// 006ecdb8  56                   push esi
// 006ecdb9  6a69                 push 0x69
// 006ecdbb  57                   push edi
// 006ecdbc  e817f70c00           call 0x7bc4d8
// 006ecdc1  5f                   pop edi
// 006ecdc2  5e                   pop esi
// 006ecdc3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?DoDataExchange@CXTPCustomizeOptionsPage@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
