// roc 2008-06 0060a650  unit: RBX::VelocityMotor  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a650
//
// 0060a650  6aff                 push -1
// 0060a652  68168a7d00           push 0x7d8a16
// 0060a657  64a100000000         mov eax, dword ptr fs:[0]
// 0060a65d  50                   push eax
// 0060a65e  64892500000000       mov dword ptr fs:[0], esp
// 0060a665  51                   push ecx
// 0060a666  56                   push esi
// 0060a667  8bf1                 mov esi, ecx
// 0060a669  57                   push edi
// 0060a66a  89742408             mov dword ptr [esp + 8], esi
// 0060a66e  c706542d8400         mov dword ptr [esi], 0x842d54
// 0060a674  c74610442d8400       mov dword ptr [esi + 0x10], 0x842d44
// 0060a67b  c746143c2d8400       mov dword ptr [esi + 0x14], 0x842d3c
// 0060a682  c74620342d8400       mov dword ptr [esi + 0x20], 0x842d34
// 0060a689  c74624242d8400       mov dword ptr [esi + 0x24], 0x842d24
// 0060a690  c74644142d8400       mov dword ptr [esi + 0x44], 0x842d14
// 0060a697  c74664042d8400       mov dword ptr [esi + 0x64], 0x842d04
// 0060a69e  c78684000000f42c8400 mov dword ptr [esi + 0x84], 0x842cf4
// 0060a6a8  c786a4000000e42c8400 mov dword ptr [esi + 0xa4], 0x842ce4
// 0060a6b2  c786c4000000d42c8400 mov dword ptr [esi + 0xc4], 0x842cd4
// 0060a6bc  c78630010000bc2c8400 mov dword ptr [esi + 0x130], 0x842cbc
// 0060a6c6  8d8e5c010000         lea ecx, [esi + 0x15c]
// 0060a6cc  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0060a6d4  e8d7adf8ff           call 0x5954b0
// 0060a6d9  8bbe58010000         mov edi, dword ptr [esi + 0x158]
// 0060a6df  c644241400           mov byte ptr [esp + 0x14], 0
// 0060a6e4  85ff                 test edi, edi
// 0060a6e6  742a                 je 0x60a712
// 0060a6e8  8d4704               lea eax, [edi + 4]
// 0060a6eb  83c9ff               or ecx, 0xffffffff
// 0060a6ee  f00fc108             lock xadd dword ptr [eax], ecx
// 0060a6f2  751e                 jne 0x60a712
// 0060a6f4  8b17                 mov edx, dword ptr [edi]
// 0060a6f6  8b4204               mov eax, dword ptr [edx + 4]
// 0060a6f9  8bcf                 mov ecx, edi
// 0060a6fb  ffd0                 call eax
// 0060a6fd  8d4f08               lea ecx, [edi + 8]
// 0060a700  83caff               or edx, 0xffffffff
// 0060a703  f00fc111             lock xadd dword ptr [ecx], edx
// 0060a707  7509                 jne 0x60a712
// 0060a709  8b07                 mov eax, dword ptr [edi]
// 0060a70b  8b5008               mov edx, dword ptr [eax + 8]
// 0060a70e  8bcf                 mov ecx, edi
// 0060a710  ffd2                 call edx
// 0060a712  8bce                 mov ecx, esi
// 0060a714  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0060a71c  e8cff3ffff           call 0x609af0
// 0060a721  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a725  5f                   pop edi
// 0060a726  5e                   pop esi
// 0060a727  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a72e  83c410               add esp, 0x10
// 0060a731  c3                   ret 
// library rbxgs/roc_unit_04a4f43d7b9f24d1.cpp (function ??1VelocityMotor@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_04a4f43d7b9f24d1.cpp
