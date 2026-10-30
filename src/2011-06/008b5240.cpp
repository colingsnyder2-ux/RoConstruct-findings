// roc 2011-06 008b5240  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5240
//
// 008b5240  6aff                 push -1
// 008b5242  6820b5a000           push 0xa0b520
// 008b5247  64a100000000         mov eax, dword ptr fs:[0]
// 008b524d  50                   push eax
// 008b524e  81ec88000000         sub esp, 0x88
// 008b5254  a12058c900           mov eax, dword ptr [0xc95820]
// 008b5259  33c4                 xor eax, esp
// 008b525b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008b5262  56                   push esi
// 008b5263  57                   push edi
// 008b5264  a12058c900           mov eax, dword ptr [0xc95820]
// 008b5269  33c4                 xor eax, esp
// 008b526b  50                   push eax
// 008b526c  8d842494000000       lea eax, [esp + 0x94]
// 008b5273  64a300000000         mov dword ptr fs:[0], eax
// 008b5279  8bf1                 mov esi, ecx
// 008b527b  56                   push esi
// 008b527c  8d4c2440             lea ecx, [esp + 0x40]
// 008b5280  e86957f5ff           call 0x80a9ee
// 008b5285  56                   push esi
// 008b5286  8d4c2410             lea ecx, [esp + 0x10]
// 008b528a  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008b5295  e8f67afaff           call 0x85cd90
// 008b529a  e84101f9ff           call 0x8453e0
// 008b529f  6a17                 push 0x17
// 008b52a1  8bc8                 mov ecx, eax
// 008b52a3  e808f9f8ff           call 0x844bb0
// 008b52a8  8bf8                 mov edi, eax
// 008b52aa  e83101f9ff           call 0x8453e0
// 008b52af  6a18                 push 0x18
// 008b52b1  8bc8                 mov ecx, eax
// 008b52b3  e8f8f8f8ff           call 0x844bb0
// 008b52b8  50                   push eax
// 008b52b9  8d442410             lea eax, [esp + 0x10]
// 008b52bd  50                   push eax
// 008b52be  8d4c2444             lea ecx, [esp + 0x44]
// 008b52c2  e8595bf5ff           call 0x80ae20
// 008b52c7  57                   push edi
// 008b52c8  57                   push edi
// 008b52c9  8d4c2414             lea ecx, [esp + 0x14]
// 008b52cd  51                   push ecx
// 008b52ce  8d4c2448             lea ecx, [esp + 0x48]
// 008b52d2  e8435bf5ff           call 0x80ae1a
// 008b52d7  57                   push edi
// 008b52d8  8d4c2440             lea ecx, [esp + 0x40]
// 008b52dc  e8b5731100           call 0x9cc696
// 008b52e1  6a01                 push 1
// 008b52e3  8d4c2440             lea ecx, [esp + 0x40]
// 008b52e7  e802731100           call 0x9cc5ee
// 008b52ec  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b52ef  e82a731100           call 0x9cc61e
// 008b52f4  a900200000           test eax, 0x2000
// 008b52f9  750f                 jne 0x8b530a
// 008b52fb  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b52fe  e81b731100           call 0x9cc61e
// 008b5303  a900004000           test eax, 0x400000
// 008b5308  740e                 je 0x8b5318
// 008b530a  6800010000           push 0x100
// 008b530f  8d4c2440             lea ecx, [esp + 0x40]
// 008b5313  e85e5cf5ff           call 0x80af76
// 008b5318  8d5674               lea edx, [esi + 0x74]
// 008b531b  52                   push edx
// 008b531c  8d442440             lea eax, [esp + 0x40]
// 008b5320  50                   push eax
// 008b5321  8d4c2434             lea ecx, [esp + 0x34]
// 008b5325  e8f67dfaff           call 0x85d120
// 008b532a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b532e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b5332  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b5336  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008b533a  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b533e  83c003               add eax, 3
// 008b5341  83e902               sub ecx, 2
// 008b5344  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b5348  89542424             mov dword ptr [esp + 0x24], edx
// 008b534c  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b5350  6824080000           push 0x824
// 008b5355  8d442420             lea eax, [esp + 0x20]
// 008b5359  894c2424             mov dword ptr [esp + 0x24], ecx
// 008b535d  83c668               add esi, 0x68
// 008b5360  50                   push eax
// 008b5361  8bce                 mov ecx, esi
// 008b5363  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 008b536b  89542430             mov dword ptr [esp + 0x30], edx
// 008b536f  83c770               add edi, 0x70
// 008b5372  ff15a826a400         call dword ptr [0xa426a8]
// 008b5378  50                   push eax
// 008b5379  8bce                 mov ecx, esi
// 008b537b  ff15c82da400         call dword ptr [0xa42dc8]
// 008b5381  8b17                 mov edx, dword ptr [edi]
// 008b5383  50                   push eax
// 008b5384  8d4c244c             lea ecx, [esp + 0x4c]
// 008b5388  ffd2                 call edx
// 008b538a  8d4c242c             lea ecx, [esp + 0x2c]
// 008b538e  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008b5396  e8057efaff           call 0x85d1a0
// 008b539b  8d4c243c             lea ecx, [esp + 0x3c]
// 008b539f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008b53aa  e83956f5ff           call 0x80a9e8
// 008b53af  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008b53b6  64890d00000000       mov dword ptr fs:[0], ecx
// 008b53bd  59                   pop ecx
// 008b53be  5f                   pop edi
// 008b53bf  5e                   pop esi
// 008b53c0  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b53c7  33cc                 xor ecx, esp
// 008b53c9  e82965f5ff           call 0x80b8f7
// 008b53ce  81c494000000         add esp, 0x94
// 008b53d4  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp