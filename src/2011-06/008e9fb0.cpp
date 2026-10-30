// roc 2011-06 008e9fb0  unit: CXTColorPageStandard  size: 525 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e9fb0
//
// 008e9fb0  6aff                 push -1
// 008e9fb2  681ee0a000           push 0xa0e01e
// 008e9fb7  64a100000000         mov eax, dword ptr fs:[0]
// 008e9fbd  50                   push eax
// 008e9fbe  81eca8000000         sub esp, 0xa8
// 008e9fc4  a12058c900           mov eax, dword ptr [0xc95820]
// 008e9fc9  33c4                 xor eax, esp
// 008e9fcb  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 008e9fd2  53                   push ebx
// 008e9fd3  55                   push ebp
// 008e9fd4  56                   push esi
// 008e9fd5  57                   push edi
// 008e9fd6  a12058c900           mov eax, dword ptr [0xc95820]
// 008e9fdb  33c4                 xor eax, esp
// 008e9fdd  50                   push eax
// 008e9fde  8d8424bc000000       lea eax, [esp + 0xbc]
// 008e9fe5  64a300000000         mov dword ptr fs:[0], eax
// 008e9feb  8bf1                 mov esi, ecx
// 008e9fed  56                   push esi
// 008e9fee  8d4c2468             lea ecx, [esp + 0x68]
// 008e9ff2  e8f709f2ff           call 0x80a9ee
// 008e9ff7  56                   push esi
// 008e9ff8  8d4c2418             lea ecx, [esp + 0x18]
// 008e9ffc  c78424c800000000000000 mov dword ptr [esp + 0xc8], 0
// 008ea007  e8842df7ff           call 0x85cd90
// 008ea00c  8d442464             lea eax, [esp + 0x64]
// 008ea010  50                   push eax
// 008ea011  8d4c2438             lea ecx, [esp + 0x38]
// 008ea015  e8a62ef7ff           call 0x85cec0
// 008ea01a  8d7e54               lea edi, [esi + 0x54]
// 008ea01d  c68424c400000001     mov byte ptr [esp + 0xc4], 1
// 008ea025  85ff                 test edi, edi
// 008ea027  740a                 je 0x8ea033
// 008ea029  837f0400             cmp dword ptr [edi + 4], 0
// 008ea02d  0f8500010000         jne 0x8ea133
// 008ea033  8bcf                 mov ecx, edi
// 008ea035  e8e205f2ff           call 0x80a61c
// 008ea03a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ea03e  2b442418             sub eax, dword ptr [esp + 0x18]
// 008ea042  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ea046  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008ea04a  50                   push eax
// 008ea04b  51                   push ecx
// 008ea04c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ea050  51                   push ecx
// 008ea051  ff158801a400         call dword ptr [0xa40188]
// 008ea057  50                   push eax
// 008ea058  8bcf                 mov ecx, edi
// 008ea05a  e8c905f2ff           call 0x80a628
// 008ea05f  8d4c2424             lea ecx, [esp + 0x24]
// 008ea063  e8ac0df2ff           call 0x80ae14
// 008ea068  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ea06c  52                   push edx
// 008ea06d  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 008ea075  ff158401a400         call dword ptr [0xa40184]
// 008ea07b  50                   push eax
// 008ea07c  8d4c2428             lea ecx, [esp + 0x28]
// 008ea080  e8710df2ff           call 0x80adf6
// 008ea085  85ff                 test edi, edi
// 008ea087  7504                 jne 0x8ea08d
// 008ea089  33c0                 xor eax, eax
// 008ea08b  eb03                 jmp 0x8ea090
// 008ea08d  8b4704               mov eax, dword ptr [edi + 4]
// 008ea090  50                   push eax
// 008ea091  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ea095  50                   push eax
// 008ea096  e8610df2ff           call 0x80adfc
// 008ea09b  6a01                 push 1
// 008ea09d  8d4c2428             lea ecx, [esp + 0x28]
// 008ea0a1  8bd8                 mov ebx, eax
// 008ea0a3  e846250e00           call 0x9cc5ee
// 008ea0a8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ea0ab  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008ea0af  51                   push ecx
// 008ea0b0  ff15b819a400         call dword ptr [0xa419b8]
// 008ea0b6  50                   push eax
// 008ea0b7  e86c02f2ff           call 0x80a328
// 008ea0bc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ea0bf  8b5020               mov edx, dword ptr [eax + 0x20]
// 008ea0c2  51                   push ecx
// 008ea0c3  55                   push ebp
// 008ea0c4  6838010000           push 0x138
// 008ea0c9  52                   push edx
// 008ea0ca  ff15c019a400         call dword ptr [0xa419c0]
// 008ea0d0  85c0                 test eax, eax
// 008ea0d2  7413                 je 0x8ea0e7
// 008ea0d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008ea0d8  50                   push eax
// 008ea0d9  8d442418             lea eax, [esp + 0x18]
// 008ea0dd  50                   push eax
// 008ea0de  51                   push ecx
// 008ea0df  ff15e81ba400         call dword ptr [0xa41be8]
// 008ea0e5  eb1d                 jmp 0x8ea104
// 008ea0e7  e8f4b2f5ff           call 0x8453e0
// 008ea0ec  6a0f                 push 0xf
// 008ea0ee  8bc8                 mov ecx, eax
// 008ea0f0  e8bbaaf5ff           call 0x844bb0
// 008ea0f5  50                   push eax
// 008ea0f6  8d542418             lea edx, [esp + 0x18]
// 008ea0fa  52                   push edx
// 008ea0fb  8d4c242c             lea ecx, [esp + 0x2c]
// 008ea0ff  e81c0df2ff           call 0x80ae20
// 008ea104  8d442424             lea eax, [esp + 0x24]
// 008ea108  50                   push eax
// 008ea109  8bce                 mov ecx, esi
// 008ea10b  e8f0ebffff           call 0x8e8d00
// 008ea110  85db                 test ebx, ebx
// 008ea112  7403                 je 0x8ea117
// 008ea114  8b5b04               mov ebx, dword ptr [ebx + 4]
// 008ea117  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008ea11b  53                   push ebx
// 008ea11c  51                   push ecx
// 008ea11d  e8da0cf2ff           call 0x80adfc
// 008ea122  8d4c2424             lea ecx, [esp + 0x24]
// 008ea126  c68424c400000001     mov byte ptr [esp + 0xc4], 1
// 008ea12e  e8cf0cf2ff           call 0x80ae02
// 008ea133  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ea137  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ea13b  2b442418             sub eax, dword ptr [esp + 0x18]
// 008ea13f  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008ea143  85ff                 test edi, edi
// 008ea145  7403                 je 0x8ea14a
// 008ea147  8b7f04               mov edi, dword ptr [edi + 4]
// 008ea14a  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ea14e  6a04                 push 4
// 008ea150  50                   push eax
// 008ea151  51                   push ecx
// 008ea152  6a00                 push 0
// 008ea154  6a00                 push 0
// 008ea156  6a00                 push 0
// 008ea158  57                   push edi
// 008ea159  6a00                 push 0
// 008ea15b  6a00                 push 0
// 008ea15d  52                   push edx
// 008ea15e  ff15e41aa400         call dword ptr [0xa41ae4]
// 008ea164  8d442434             lea eax, [esp + 0x34]
// 008ea168  50                   push eax
// 008ea169  8bce                 mov ecx, esi
// 008ea16b  e8c0d7ffff           call 0x8e7930
// 008ea170  8d4c2434             lea ecx, [esp + 0x34]
// 008ea174  c68424c400000000     mov byte ptr [esp + 0xc4], 0
// 008ea17c  e87f2ef7ff           call 0x85d000
// 008ea181  8d4c2464             lea ecx, [esp + 0x64]
// 008ea185  c78424c4000000ffffffff mov dword ptr [esp + 0xc4], 0xffffffff
// 008ea190  e85308f2ff           call 0x80a9e8
// 008ea195  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 008ea19c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea1a3  59                   pop ecx
// 008ea1a4  5f                   pop edi
// 008ea1a5  5e                   pop esi
// 008ea1a6  5d                   pop ebp
// 008ea1a7  5b                   pop ebx
// 008ea1a8  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008ea1af  33cc                 xor ecx, esp
// 008ea1b1  e84117f2ff           call 0x80b8f7
// 008ea1b6  81c4b4000000         add esp, 0xb4
// 008ea1bc  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorHex@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp