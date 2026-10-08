// roc 2010-06 00879b90  unit: CXTPCustomizeToolbarsPage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879b90
//
// 00879b90  56                   push esi
// 00879b91  8bf1                 mov esi, ecx
// 00879b93  e82ce7f2ff           call 0x7a82c4
// 00879b98  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 00879b9e  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00879ba4  e8d7e8f4ff           call 0x7c8480
// 00879ba9  85c0                 test eax, eax
// 00879bab  7414                 je 0x879bc1
// 00879bad  6a00                 push 0
// 00879baf  6800004000           push 0x400000
// 00879bb4  6a00                 push 0
// 00879bb6  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00879bbc  e885e3f2ff           call 0x7a7f46
// 00879bc1  8bce                 mov ecx, esi
// 00879bc3  e8b8f9ffff           call 0x879580
// 00879bc8  33c0                 xor eax, eax
// 00879bca  5e                   pop esi
// 00879bcb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnInitDialog@CXTPCustomizeToolbarsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
