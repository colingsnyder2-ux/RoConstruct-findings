// roc 2009-12 0086f0c0  unit: PAVCXTPCommandBar::?$CArray  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f0c0
//
// 0086f0c0  53                   push ebx
// 0086f0c1  56                   push esi
// 0086f0c2  8bf1                 mov esi, ecx
// 0086f0c4  8b5610               mov edx, dword ptr [esi + 0x10]
// 0086f0c7  8d4e08               lea ecx, [esi + 8]
// 0086f0ca  33c0                 xor eax, eax
// 0086f0cc  57                   push edi
// 0086f0cd  85d2                 test edx, edx
// 0086f0cf  7e2d                 jle 0x86f0fe
// 0086f0d1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086f0d5  85c0                 test eax, eax
// 0086f0d7  7c13                 jl 0x86f0ec
// 0086f0d9  3bc2                 cmp eax, edx
// 0086f0db  7d0f                 jge 0x86f0ec
// 0086f0dd  8b5904               mov ebx, dword ptr [ecx + 4]
// 0086f0e0  3b3c83               cmp edi, dword ptr [ebx + eax*4]
// 0086f0e3  740c                 je 0x86f0f1
// 0086f0e5  40                   inc eax
// 0086f0e6  3bc2                 cmp eax, edx
// 0086f0e8  7ceb                 jl 0x86f0d5
// 0086f0ea  eb12                 jmp 0x86f0fe
// 0086f0ec  e81b4af8ff           call 0x7f3b0c
// 0086f0f1  83f8ff               cmp eax, -1
// 0086f0f4  7408                 je 0x86f0fe
// 0086f0f6  6a01                 push 1
// 0086f0f8  50                   push eax
// 0086f0f9  e882e1fbff           call 0x82d280
// 0086f0fe  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f102  7505                 jne 0x86f109
// 0086f104  e827fdffff           call 0x86ee30
// 0086f109  5f                   pop edi
// 0086f10a  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0086f111  5e                   pop esi
// 0086f112  5b                   pop ebx
// 0086f113  c20400               ret 4
// copied from an identical function in another client (function ?RemoveTrack@CXTPMouseManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp