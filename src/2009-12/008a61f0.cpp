// roc 2009-12 008a61f0  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a61f0
//
// 008a61f0  6aff                 push -1
// 008a61f2  68b0269600           push 0x9626b0
// 008a61f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a61fd  50                   push eax
// 008a61fe  81ec88000000         sub esp, 0x88
// 008a6204  a10052b600           mov eax, dword ptr [0xb65200]
// 008a6209  33c4                 xor eax, esp
// 008a620b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008a6212  56                   push esi
// 008a6213  57                   push edi
// 008a6214  a10052b600           mov eax, dword ptr [0xb65200]
// 008a6219  33c4                 xor eax, esp
// 008a621b  50                   push eax
// 008a621c  8d842494000000       lea eax, [esp + 0x94]
// 008a6223  64a300000000         mov dword ptr fs:[0], eax
// 008a6229  8bf1                 mov esi, ecx
// 008a622b  56                   push esi
// 008a622c  8d4c2440             lea ecx, [esp + 0x40]
// 008a6230  e8bbdff4ff           call 0x7f41f0
// 008a6235  56                   push esi
// 008a6236  8d4c2410             lea ecx, [esp + 0x10]
// 008a623a  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008a6245  e88650faff           call 0x84b2d0
// 008a624a  e88197f8ff           call 0x82f9d0
// 008a624f  6a17                 push 0x17
// 008a6251  8bc8                 mov ecx, eax
// 008a6253  e8a88ef8ff           call 0x82f100
// 008a6258  8bf8                 mov edi, eax
// 008a625a  e87197f8ff           call 0x82f9d0
// 008a625f  6a18                 push 0x18
// 008a6261  8bc8                 mov ecx, eax
// 008a6263  e8988ef8ff           call 0x82f100
// 008a6268  50                   push eax
// 008a6269  8d442410             lea eax, [esp + 0x10]
// 008a626d  50                   push eax
// 008a626e  8d4c2444             lea ecx, [esp + 0x44]
// 008a6272  e887e3f4ff           call 0x7f45fe
// 008a6277  57                   push edi
// 008a6278  57                   push edi
// 008a6279  8d4c2414             lea ecx, [esp + 0x14]
// 008a627d  51                   push ecx
// 008a627e  8d4c2448             lea ecx, [esp + 0x48]
// 008a6282  e871e3f4ff           call 0x7f45f8
// 008a6287  57                   push edi
// 008a6288  8d4c2440             lea ecx, [esp + 0x40]
// 008a628c  e88f020800           call 0x926520
// 008a6291  6a01                 push 1
// 008a6293  8d4c2440             lea ecx, [esp + 0x40]
// 008a6297  e8f4010800           call 0x926490
// 008a629c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a629f  e8d4010800           call 0x926478
// 008a62a4  a900200000           test eax, 0x2000
// 008a62a9  750f                 jne 0x8a62ba
// 008a62ab  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a62ae  e8c5010800           call 0x926478
// 008a62b3  a900004000           test eax, 0x400000
// 008a62b8  740e                 je 0x8a62c8
// 008a62ba  6800010000           push 0x100
// 008a62bf  8d4c2440             lea ecx, [esp + 0x40]
// 008a62c3  e880e4f4ff           call 0x7f4748
// 008a62c8  8d5674               lea edx, [esi + 0x74]
// 008a62cb  52                   push edx
// 008a62cc  8d442440             lea eax, [esp + 0x40]
// 008a62d0  50                   push eax
// 008a62d1  8d4c2434             lea ecx, [esp + 0x34]
// 008a62d5  e88653faff           call 0x84b660
// 008a62da  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a62de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a62e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a62e6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008a62ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a62ee  83c003               add eax, 3
// 008a62f1  83e902               sub ecx, 2
// 008a62f4  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a62f8  89542424             mov dword ptr [esp + 0x24], edx
// 008a62fc  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a6300  6824080000           push 0x824
// 008a6305  8d442420             lea eax, [esp + 0x20]
// 008a6309  894c2424             mov dword ptr [esp + 0x24], ecx
// 008a630d  83c668               add esi, 0x68
// 008a6310  50                   push eax
// 008a6311  8bce                 mov ecx, esi
// 008a6313  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 008a631b  89542430             mov dword ptr [esp + 0x30], edx
// 008a631f  83c770               add edi, 0x70
// 008a6322  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a6328  50                   push eax
// 008a6329  8bce                 mov ecx, esi
// 008a632b  ff1580de9800         call dword ptr [0x98de80]
// 008a6331  8b17                 mov edx, dword ptr [edi]
// 008a6333  50                   push eax
// 008a6334  8d4c244c             lea ecx, [esp + 0x4c]
// 008a6338  ffd2                 call edx
// 008a633a  8d4c242c             lea ecx, [esp + 0x2c]
// 008a633e  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008a6346  e89553faff           call 0x84b6e0
// 008a634b  8d4c243c             lea ecx, [esp + 0x3c]
// 008a634f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008a635a  e88bdef4ff           call 0x7f41ea
// 008a635f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008a6366  64890d00000000       mov dword ptr fs:[0], ecx
// 008a636d  59                   pop ecx
// 008a636e  5f                   pop edi
// 008a636f  5e                   pop esi
// 008a6370  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008a6377  33cc                 xor ecx, esp
// 008a6379  e81cf0f4ff           call 0x7f539a
// 008a637e  81c494000000         add esp, 0x94
// 008a6384  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp