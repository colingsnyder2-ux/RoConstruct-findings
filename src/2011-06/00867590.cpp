// roc 2011-06 00867590  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00867590
//
// 00867590  56                   push esi
// 00867591  57                   push edi
// 00867592  6a01                 push 1
// 00867594  8bf1                 mov esi, ecx
// 00867596  e895e6ffff           call 0x865c30
// 0086759b  ff15e819a400         call dword ptr [0xa419e8]
// 008675a1  50                   push eax
// 008675a2  e8812dfaff           call 0x80a328
// 008675a7  6a00                 push 0
// 008675a9  8bf8                 mov edi, eax
// 008675ab  ff15241ba400         call dword ptr [0xa41b24]
// 008675b1  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 008675b7  85c0                 test eax, eax
// 008675b9  7418                 je 0x8675d3
// 008675bb  8b4004               mov eax, dword ptr [eax + 4]
// 008675be  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008675c1  50                   push eax
// 008675c2  51                   push ecx
// 008675c3  ff15dc19a400         call dword ptr [0xa419dc]
// 008675c9  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008675d3  5f                   pop edi
// 008675d4  5e                   pop esi
// 008675d5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
