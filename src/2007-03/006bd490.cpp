// roc 2007-03 006bd490  unit: seg_006b0000  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bd490
//
// 006bd490  6aff                 push -1
// 006bd492  6820717600           push 0x767120
// 006bd497  64a100000000         mov eax, dword ptr fs:[0]
// 006bd49d  50                   push eax
// 006bd49e  81ec88000000         sub esp, 0x88
// 006bd4a4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006bd4a9  33c4                 xor eax, esp
// 006bd4ab  89842484000000       mov dword ptr [esp + 0x84], eax
// 006bd4b2  56                   push esi
// 006bd4b3  57                   push edi
// 006bd4b4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006bd4b9  33c4                 xor eax, esp
// 006bd4bb  50                   push eax
// 006bd4bc  8d842494000000       lea eax, [esp + 0x94]
// 006bd4c3  64a300000000         mov dword ptr fs:[0], eax
// 006bd4c9  8bf1                 mov esi, ecx
// 006bd4cb  56                   push esi
// 006bd4cc  8d4c2440             lea ecx, [esp + 0x40]
// 006bd4d0  e84f14f6ff           call 0x61e924
// 006bd4d5  56                   push esi
// 006bd4d6  8d4c2410             lea ecx, [esp + 0x10]
// 006bd4da  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 006bd4e5  e876e3faff           call 0x66b860
// 006bd4ea  e8b17af9ff           call 0x654fa0
// 006bd4ef  6a17                 push 0x17
// 006bd4f1  8bc8                 mov ecx, eax
// 006bd4f3  e8b872f9ff           call 0x6547b0
// 006bd4f8  8bf8                 mov edi, eax
// 006bd4fa  e8a17af9ff           call 0x654fa0
// 006bd4ff  6a18                 push 0x18
// 006bd501  8bc8                 mov ecx, eax
// 006bd503  e8a872f9ff           call 0x6547b0
// 006bd508  50                   push eax
// 006bd509  8d442410             lea eax, [esp + 0x10]
// 006bd50d  50                   push eax
// 006bd50e  8d4c2444             lea ecx, [esp + 0x44]
// 006bd512  e80318f6ff           call 0x61ed1a
// 006bd517  57                   push edi
// 006bd518  57                   push edi
// 006bd519  8d4c2414             lea ecx, [esp + 0x14]
// 006bd51d  51                   push ecx
// 006bd51e  8d4c2448             lea ecx, [esp + 0x48]
// 006bd522  e8ed17f6ff           call 0x61ed14
// 006bd527  57                   push edi
// 006bd528  8d4c2440             lea ecx, [esp + 0x40]
// 006bd52c  e8a3d80700           call 0x73add4
// 006bd531  6a01                 push 1
// 006bd533  8d4c2440             lea ecx, [esp + 0x40]
// 006bd537  e864d60700           call 0x73aba0
// 006bd53c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006bd53f  e842d50700           call 0x73aa86
// 006bd544  a900200000           test eax, 0x2000
// 006bd549  750f                 jne 0x6bd55a
// 006bd54b  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006bd54e  e833d50700           call 0x73aa86
// 006bd553  a900004000           test eax, 0x400000
// 006bd558  740e                 je 0x6bd568
// 006bd55a  6800010000           push 0x100
// 006bd55f  8d4c2440             lea ecx, [esp + 0x40]
// 006bd563  e89618f6ff           call 0x61edfe
// 006bd568  8d5674               lea edx, [esi + 0x74]
// 006bd56b  52                   push edx
// 006bd56c  8d442440             lea eax, [esp + 0x40]
// 006bd570  50                   push eax
// 006bd571  8d4c2434             lea ecx, [esp + 0x34]
// 006bd575  e876e8faff           call 0x66bdf0
// 006bd57a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bd57e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bd582  8b542414             mov edx, dword ptr [esp + 0x14]
// 006bd586  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006bd58a  8944241c             mov dword ptr [esp + 0x1c], eax
// 006bd58e  83c003               add eax, 3
// 006bd591  83e902               sub ecx, 2
// 006bd594  8944241c             mov dword ptr [esp + 0x1c], eax
// 006bd598  89542424             mov dword ptr [esp + 0x24], edx
// 006bd59c  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bd5a0  6824080000           push 0x824
// 006bd5a5  8d442420             lea eax, [esp + 0x20]
// 006bd5a9  894c2424             mov dword ptr [esp + 0x24], ecx
// 006bd5ad  83c668               add esi, 0x68
// 006bd5b0  50                   push eax
// 006bd5b1  8bce                 mov ecx, esi
// 006bd5b3  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 006bd5bb  89542430             mov dword ptr [esp + 0x30], edx
// 006bd5bf  83c770               add edi, 0x70
// 006bd5c2  ff1520db7700         call dword ptr [0x77db20]
// 006bd5c8  50                   push eax
// 006bd5c9  8bce                 mov ecx, esi
// 006bd5cb  ff1554dd7700         call dword ptr [0x77dd54]
// 006bd5d1  8b17                 mov edx, dword ptr [edi]
// 006bd5d3  50                   push eax
// 006bd5d4  8d4c244c             lea ecx, [esp + 0x4c]
// 006bd5d8  ffd2                 call edx
// 006bd5da  8d4c242c             lea ecx, [esp + 0x2c]
// 006bd5de  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 006bd5e6  e885e8faff           call 0x66be70
// 006bd5eb  8d4c243c             lea ecx, [esp + 0x3c]
// 006bd5ef  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 006bd5fa  e81f13f6ff           call 0x61e91e
// 006bd5ff  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 006bd606  64890d00000000       mov dword ptr fs:[0], ecx
// 006bd60d  59                   pop ecx
// 006bd60e  5f                   pop edi
// 006bd60f  5e                   pop esi
// 006bd610  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 006bd617  33cc                 xor ecx, esp
// 006bd619  e88818f6ff           call 0x61eea6
// 006bd61e  81c494000000         add esp, 0x94
// 006bd624  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp