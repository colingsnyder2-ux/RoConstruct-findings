// roc 2010-06 0080c370  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080c370
//
// 0080c370  56                   push esi
// 0080c371  57                   push edi
// 0080c372  6a01                 push 1
// 0080c374  8bf1                 mov esi, ecx
// 0080c376  e8e5e5ffff           call 0x80a960
// 0080c37b  ff1574ba9e00         call dword ptr [0x9eba74]
// 0080c381  50                   push eax
// 0080c382  e8e3b8f9ff           call 0x7a7c6a
// 0080c387  6a00                 push 0
// 0080c389  8bf8                 mov edi, eax
// 0080c38b  ff15d0ba9e00         call dword ptr [0x9ebad0]
// 0080c391  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0080c397  85c0                 test eax, eax
// 0080c399  7418                 je 0x80c3b3
// 0080c39b  8b4004               mov eax, dword ptr [eax + 4]
// 0080c39e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0080c3a1  50                   push eax
// 0080c3a2  51                   push ecx
// 0080c3a3  ff1568ba9e00         call dword ptr [0x9eba68]
// 0080c3a9  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0080c3b3  5f                   pop edi
// 0080c3b4  5e                   pop esi
// 0080c3b5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
