// roc 2008-06 006c1f40  unit: CXTPToolBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1f40
//
// 006c1f40  56                   push esi
// 006c1f41  8bf1                 mov esi, ecx
// 006c1f43  e8c82effff           call 0x6b4e10
// 006c1f48  8bc8                 mov ecx, eax
// 006c1f4a  85c9                 test ecx, ecx
// 006c1f4c  7422                 je 0x6c1f70
// 006c1f4e  8b542408             mov edx, dword ptr [esp + 8]
// 006c1f52  83fa02               cmp edx, 2
// 006c1f55  740e                 je 0x6c1f65
// 006c1f57  85d2                 test edx, edx
// 006c1f59  740a                 je 0x6c1f65
// 006c1f5b  83fa03               cmp edx, 3
// 006c1f5e  7405                 je 0x6c1f65
// 006c1f60  83fa01               cmp edx, 1
// 006c1f63  7511                 jne 0x6c1f76
// 006c1f65  52                   push edx
// 006c1f66  56                   push esi
// 006c1f67  e8f40afeff           call 0x6a2a60
// 006c1f6c  85c0                 test eax, eax
// 006c1f6e  7515                 jne 0x6c1f85
// 006c1f70  33c0                 xor eax, eax
// 006c1f72  5e                   pop esi
// 006c1f73  c20400               ret 4
// 006c1f76  83fa04               cmp edx, 4
// 006c1f79  75f5                 jne 0x6c1f70
// 006c1f7b  56                   push esi
// 006c1f7c  e81f0bfeff           call 0x6a2aa0
// 006c1f81  85c0                 test eax, eax
// 006c1f83  74eb                 je 0x6c1f70
// 006c1f85  b801000000           mov eax, 1
// 006c1f8a  5e                   pop esi
// 006c1f8b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?SetPosition@CXTPToolBar@@UAEHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
