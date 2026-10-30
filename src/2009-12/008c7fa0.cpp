// roc 2009-12 008c7fa0  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7fa0
//
// 008c7fa0  6aff                 push -1
// 008c7fa2  681b489600           push 0x96481b
// 008c7fa7  64a100000000         mov eax, dword ptr fs:[0]
// 008c7fad  50                   push eax
// 008c7fae  83ec08               sub esp, 8
// 008c7fb1  53                   push ebx
// 008c7fb2  56                   push esi
// 008c7fb3  57                   push edi
// 008c7fb4  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7fb9  33c4                 xor eax, esp
// 008c7fbb  50                   push eax
// 008c7fbc  8d442418             lea eax, [esp + 0x18]
// 008c7fc0  64a300000000         mov dword ptr fs:[0], eax
// 008c7fc6  8bf1                 mov esi, ecx
// 008c7fc8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008c7fcc  85ff                 test edi, edi
// 008c7fce  0f8c86000000         jl 0x8c805a
// 008c7fd4  8d8e84000000         lea ecx, [esi + 0x84]
// 008c7fda  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7fe0  3bf8                 cmp edi, eax
// 008c7fe2  7d76                 jge 0x8c805a
// 008c7fe4  6aff                 push -1
// 008c7fe6  57                   push edi
// 008c7fe7  8d44241c             lea eax, [esp + 0x1c]
// 008c7feb  50                   push eax
// 008c7fec  8bce                 mov ecx, esi
// 008c7fee  e82dfdffff           call 0x8c7d20
// 008c7ff3  8bd8                 mov ebx, eax
// 008c7ff5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008c7ff9  6a01                 push 1
// 008c7ffb  51                   push ecx
// 008c7ffc  8d4c2418             lea ecx, [esp + 0x18]
// 008c8000  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008c8008  ff15f0da9800         call dword ptr [0x98daf0]
// 008c800e  53                   push ebx
// 008c800f  50                   push eax
// 008c8010  8d542430             lea edx, [esp + 0x30]
// 008c8014  52                   push edx
// 008c8015  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008c801a  e8213db9ff           call 0x45bd40
// 008c801f  83c40c               add esp, 0xc
// 008c8022  8d4c2410             lea ecx, [esp + 0x10]
// 008c8026  ff15c0de9800         call dword ptr [0x98dec0]
// 008c802c  8d4c2414             lea ecx, [esp + 0x14]
// 008c8030  c644242004           mov byte ptr [esp + 0x20], 4
// 008c8035  ff15c0de9800         call dword ptr [0x98dec0]
// 008c803b  6a00                 push 0
// 008c803d  57                   push edi
// 008c803e  8d4c2430             lea ecx, [esp + 0x30]
// 008c8042  ff1580de9800         call dword ptr [0x98de80]
// 008c8048  50                   push eax
// 008c8049  8bce                 mov ecx, esi
// 008c804b  e870fbffff           call 0x8c7bc0
// 008c8050  8d4c2428             lea ecx, [esp + 0x28]
// 008c8054  ff15c0de9800         call dword ptr [0x98dec0]
// 008c805a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c805e  64890d00000000       mov dword ptr fs:[0], ecx
// 008c8065  59                   pop ecx
// 008c8066  5f                   pop edi
// 008c8067  5e                   pop esi
// 008c8068  5b                   pop ebx
// 008c8069  83c414               add esp, 0x14
// 008c806c  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp