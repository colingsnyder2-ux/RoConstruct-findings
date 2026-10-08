// from server: 100% by auto
// roc 2008-06 00771e20  unit: CXTPCustomizeToolbarsPage  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771e20
//
// 00771e20  53                   push ebx
// 00771e21  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 00771e27  56                   push esi
// 00771e28  6a00                 push 0
// 00771e2a  6a00                 push 0
// 00771e2c  8bf1                 mov esi, ecx
// 00771e2e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00771e34  6888010000           push 0x188
// 00771e39  50                   push eax
// 00771e3a  ffd3                 call ebx
// 00771e3c  83f8ff               cmp eax, -1
// 00771e3f  7469                 je 0x771eaa
// 00771e41  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00771e47  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 00771e4d  57                   push edi
// 00771e4e  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 00771e54  6a00                 push 0
// 00771e56  50                   push eax
// 00771e57  6899010000           push 0x199
// 00771e5c  52                   push edx
// 00771e5d  ffd3                 call ebx
// 00771e5f  85c0                 test eax, eax
// 00771e61  7c43                 jl 0x771ea6
// 00771e63  3b8784000000         cmp eax, dword ptr [edi + 0x84]
// 00771e69  7d3b                 jge 0x771ea6
// 00771e6b  50                   push eax
// 00771e6c  8bcf                 mov ecx, edi
// 00771e6e  e8bd18f3ff           call 0x6a3730
// 00771e73  8bb888010000         mov edi, dword ptr [eax + 0x188]
// 00771e79  57                   push edi
// 00771e7a  8d8efc000000         lea ecx, [esi + 0xfc]
// 00771e80  e891eef2ff           call 0x6a0d16
// 00771e85  33c0                 xor eax, eax
// 00771e87  85ff                 test edi, edi
// 00771e89  0f94c0               sete al
// 00771e8c  8d8e50010000         lea ecx, [esi + 0x150]
// 00771e92  8bf8                 mov edi, eax
// 00771e94  57                   push edi
// 00771e95  e87ceef2ff           call 0x6a0d16
// 00771e9a  57                   push edi
// 00771e9b  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 00771ea1  e870eef2ff           call 0x6a0d16
// 00771ea6  5f                   pop edi
// 00771ea7  5e                   pop esi
// 00771ea8  5b                   pop ebx
// 00771ea9  c3                   ret 
// 00771eaa  6a00                 push 0
// 00771eac  8d8efc000000         lea ecx, [esi + 0xfc]
// 00771eb2  e85feef2ff           call 0x6a0d16
// 00771eb7  6a00                 push 0
// 00771eb9  8d8e50010000         lea ecx, [esi + 0x150]
// 00771ebf  e852eef2ff           call 0x6a0d16
// 00771ec4  6a00                 push 0
// 00771ec6  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 00771ecc  e845eef2ff           call 0x6a0d16
// 00771ed1  5e                   pop esi
// 00771ed2  5b                   pop ebx
// 00771ed3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSelectionChanged@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
