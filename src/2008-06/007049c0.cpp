// roc 2008-06 007049c0  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007049c0
//
// 007049c0  56                   push esi
// 007049c1  57                   push edi
// 007049c2  6a01                 push 1
// 007049c4  8bf1                 mov esi, ecx
// 007049c6  e8f5e6ffff           call 0x7030c0
// 007049cb  ff154c2b8000         call dword ptr [0x802b4c]
// 007049d1  50                   push eax
// 007049d2  e807c2f9ff           call 0x6a0bde
// 007049d7  6a00                 push 0
// 007049d9  8bf8                 mov edi, eax
// 007049db  ff15482b8000         call dword ptr [0x802b48]
// 007049e1  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 007049e7  85c0                 test eax, eax
// 007049e9  7418                 je 0x704a03
// 007049eb  8b4004               mov eax, dword ptr [eax + 4]
// 007049ee  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007049f1  50                   push eax
// 007049f2  51                   push ecx
// 007049f3  ff15c02c8000         call dword ptr [0x802cc0]
// 007049f9  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00704a03  5f                   pop edi
// 00704a04  5e                   pop esi
// 00704a05  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
