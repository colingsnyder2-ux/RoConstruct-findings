// roc 2010-06 0087c140  unit: VCEdit::?$CXTMaskEditT  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087c140
//
// 0087c140  6aff                 push -1
// 0087c142  688ba79b00           push 0x9ba78b
// 0087c147  64a100000000         mov eax, dword ptr fs:[0]
// 0087c14d  50                   push eax
// 0087c14e  83ec08               sub esp, 8
// 0087c151  53                   push ebx
// 0087c152  56                   push esi
// 0087c153  57                   push edi
// 0087c154  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087c159  33c4                 xor eax, esp
// 0087c15b  50                   push eax
// 0087c15c  8d442418             lea eax, [esp + 0x18]
// 0087c160  64a300000000         mov dword ptr fs:[0], eax
// 0087c166  8bf1                 mov esi, ecx
// 0087c168  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0087c16c  85ff                 test edi, edi
// 0087c16e  0f8c86000000         jl 0x87c1fa
// 0087c174  8d8e84000000         lea ecx, [esi + 0x84]
// 0087c17a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c180  3bf8                 cmp edi, eax
// 0087c182  7d76                 jge 0x87c1fa
// 0087c184  6aff                 push -1
// 0087c186  57                   push edi
// 0087c187  8d44241c             lea eax, [esp + 0x1c]
// 0087c18b  50                   push eax
// 0087c18c  8bce                 mov ecx, esi
// 0087c18e  e82dfdffff           call 0x87bec0
// 0087c193  8bd8                 mov ebx, eax
// 0087c195  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087c199  6a01                 push 1
// 0087c19b  51                   push ecx
// 0087c19c  8d4c2418             lea ecx, [esp + 0x18]
// 0087c1a0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0087c1a8  ff15f0ca9e00         call dword ptr [0x9ecaf0]
// 0087c1ae  53                   push ebx
// 0087c1af  50                   push eax
// 0087c1b0  8d542430             lea edx, [esp + 0x30]
// 0087c1b4  52                   push edx
// 0087c1b5  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0087c1ba  e8b150beff           call 0x461270
// 0087c1bf  83c40c               add esp, 0xc
// 0087c1c2  8d4c2410             lea ecx, [esp + 0x10]
// 0087c1c6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087c1cc  8d4c2414             lea ecx, [esp + 0x14]
// 0087c1d0  c644242004           mov byte ptr [esp + 0x20], 4
// 0087c1d5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087c1db  6a00                 push 0
// 0087c1dd  57                   push edi
// 0087c1de  8d4c2430             lea ecx, [esp + 0x30]
// 0087c1e2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087c1e8  50                   push eax
// 0087c1e9  8bce                 mov ecx, esi
// 0087c1eb  e870fbffff           call 0x87bd60
// 0087c1f0  8d4c2428             lea ecx, [esp + 0x28]
// 0087c1f4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087c1fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087c1fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0087c205  59                   pop ecx
// 0087c206  5f                   pop edi
// 0087c207  5e                   pop esi
// 0087c208  5b                   pop ebx
// 0087c209  83c414               add esp, 0x14
// 0087c20c  c20800               ret 8
// copied from an identical function in another client (function ?InsertCharAt@?$CXTMaskEditT@VCEdit@@@@QAEXHD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp