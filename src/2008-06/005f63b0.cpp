// from server: 100% by auto
// roc 2008-06 005f63b0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f63b0
//
// 005f63b0  55                   push ebp
// 005f63b1  8bec                 mov ebp, esp
// 005f63b3  6aff                 push -1
// 005f63b5  68e0767d00           push 0x7d76e0
// 005f63ba  64a100000000         mov eax, dword ptr fs:[0]
// 005f63c0  50                   push eax
// 005f63c1  64892500000000       mov dword ptr fs:[0], esp
// 005f63c8  83ec38               sub esp, 0x38
// 005f63cb  8b4508               mov eax, dword ptr [ebp + 8]
// 005f63ce  53                   push ebx
// 005f63cf  56                   push esi
// 005f63d0  57                   push edi
// 005f63d1  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f63d4  6a01                 push 1
// 005f63d6  33ff                 xor edi, edi
// 005f63d8  50                   push eax
// 005f63d9  8bf1                 mov esi, ecx
// 005f63db  897dfc               mov dword ptr [ebp - 4], edi
// 005f63de  e82dfdffff           call 0x5f6110
// 005f63e3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f63e6  897e50               mov dword ptr [esi + 0x50], edi
// 005f63e9  5f                   pop edi
// 005f63ea  5e                   pop esi
// 005f63eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005f63f2  5b                   pop ebx
// 005f63f3  8be5                 mov esp, ebp
// 005f63f5  5d                   pop ebp
// 005f63f6  c20400               ret 4
// 005f63f9  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005f63fc  51                   push ecx
// 005f63fd  8d4dbc               lea ecx, [ebp - 0x44]
// 005f6400  e8fbf5ffff           call 0x5f5a00
// 005f6405  68346a8f00           push 0x8f6a34
// 005f640a  8d55bc               lea edx, [ebp - 0x44]
// 005f640d  52                   push edx
// 005f640e  e879b10a00           call 0x6a158c

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp
