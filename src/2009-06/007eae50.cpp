// roc 2009-06 007eae50  unit: CXTPCustomizeToolbarsPage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eae50
//
// 007eae50  56                   push esi
// 007eae51  8bf1                 mov esi, ecx
// 007eae53  e804e5f2ff           call 0x71935c
// 007eae58  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 007eae5e  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 007eae64  e847e8f3ff           call 0x7296b0
// 007eae69  85c0                 test eax, eax
// 007eae6b  7414                 je 0x7eae81
// 007eae6d  6a00                 push 0
// 007eae6f  6800004000           push 0x400000
// 007eae74  6a00                 push 0
// 007eae76  8d8e8c000000         lea ecx, [esi + 0x8c]
// 007eae7c  e857e1f2ff           call 0x718fd8
// 007eae81  8bce                 mov ecx, esi
// 007eae83  e8b8f9ffff           call 0x7ea840
// 007eae88  33c0                 xor eax, eax
// 007eae8a  5e                   pop esi
// 007eae8b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
