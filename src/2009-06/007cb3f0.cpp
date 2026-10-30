// roc 2009-06 007cb3f0  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cb3f0
//
// 007cb3f0  6aff                 push -1
// 007cb3f2  6840e58700           push 0x87e540
// 007cb3f7  64a100000000         mov eax, dword ptr fs:[0]
// 007cb3fd  50                   push eax
// 007cb3fe  81ec88000000         sub esp, 0x88
// 007cb404  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007cb409  33c4                 xor eax, esp
// 007cb40b  89842484000000       mov dword ptr [esp + 0x84], eax
// 007cb412  56                   push esi
// 007cb413  57                   push edi
// 007cb414  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007cb419  33c4                 xor eax, esp
// 007cb41b  50                   push eax
// 007cb41c  8d842494000000       lea eax, [esp + 0x94]
// 007cb423  64a300000000         mov dword ptr fs:[0], eax
// 007cb429  8bf1                 mov esi, ecx
// 007cb42b  56                   push esi
// 007cb42c  8d4c2440             lea ecx, [esp + 0x40]
// 007cb430  e893dff4ff           call 0x7193c8
// 007cb435  56                   push esi
// 007cb436  8d4c2410             lea ecx, [esp + 0x10]
// 007cb43a  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 007cb445  e88650faff           call 0x7704d0
// 007cb44a  e8d196f8ff           call 0x754b20
// 007cb44f  6a17                 push 0x17
// 007cb451  8bc8                 mov ecx, eax
// 007cb453  e8488ef8ff           call 0x7542a0
// 007cb458  8bf8                 mov edi, eax
// 007cb45a  e8c196f8ff           call 0x754b20
// 007cb45f  6a18                 push 0x18
// 007cb461  8bc8                 mov ecx, eax
// 007cb463  e8388ef8ff           call 0x7542a0
// 007cb468  50                   push eax
// 007cb469  8d442410             lea eax, [esp + 0x10]
// 007cb46d  50                   push eax
// 007cb46e  8d4c2444             lea ecx, [esp + 0x44]
// 007cb472  e859e3f4ff           call 0x7197d0
// 007cb477  57                   push edi
// 007cb478  57                   push edi
// 007cb479  8d4c2414             lea ecx, [esp + 0x14]
// 007cb47d  51                   push ecx
// 007cb47e  8d4c2448             lea ecx, [esp + 0x48]
// 007cb482  e843e3f4ff           call 0x7197ca
// 007cb487  57                   push edi
// 007cb488  8d4c2440             lea ecx, [esp + 0x40]
// 007cb48c  e85f0b0800           call 0x84bff0
// 007cb491  6a01                 push 1
// 007cb493  8d4c2440             lea ecx, [esp + 0x40]
// 007cb497  e86a0a0800           call 0x84bf06
// 007cb49c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007cb49f  e83e0a0800           call 0x84bee2
// 007cb4a4  a900200000           test eax, 0x2000
// 007cb4a9  750f                 jne 0x7cb4ba
// 007cb4ab  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007cb4ae  e82f0a0800           call 0x84bee2
// 007cb4b3  a900004000           test eax, 0x400000
// 007cb4b8  740e                 je 0x7cb4c8
// 007cb4ba  6800010000           push 0x100
// 007cb4bf  8d4c2440             lea ecx, [esp + 0x40]
// 007cb4c3  e84ce4f4ff           call 0x719914
// 007cb4c8  8d5674               lea edx, [esi + 0x74]
// 007cb4cb  52                   push edx
// 007cb4cc  8d442440             lea eax, [esp + 0x40]
// 007cb4d0  50                   push eax
// 007cb4d1  8d4c2434             lea ecx, [esp + 0x34]
// 007cb4d5  e88653faff           call 0x770860
// 007cb4da  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007cb4de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007cb4e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007cb4e6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007cb4ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 007cb4ee  83c003               add eax, 3
// 007cb4f1  83e902               sub ecx, 2
// 007cb4f4  8944241c             mov dword ptr [esp + 0x1c], eax
// 007cb4f8  89542424             mov dword ptr [esp + 0x24], edx
// 007cb4fc  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cb500  6824080000           push 0x824
// 007cb505  8d442420             lea eax, [esp + 0x20]
// 007cb509  894c2424             mov dword ptr [esp + 0x24], ecx
// 007cb50d  83c668               add esi, 0x68
// 007cb510  50                   push eax
// 007cb511  8bce                 mov ecx, esi
// 007cb513  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 007cb51b  89542430             mov dword ptr [esp + 0x30], edx
// 007cb51f  83c770               add edi, 0x70
// 007cb522  ff1554fb8900         call dword ptr [0x89fb54]
// 007cb528  50                   push eax
// 007cb529  8bce                 mov ecx, esi
// 007cb52b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007cb531  8b17                 mov edx, dword ptr [edi]
// 007cb533  50                   push eax
// 007cb534  8d4c244c             lea ecx, [esp + 0x4c]
// 007cb538  ffd2                 call edx
// 007cb53a  8d4c242c             lea ecx, [esp + 0x2c]
// 007cb53e  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 007cb546  e89553faff           call 0x7708e0
// 007cb54b  8d4c243c             lea ecx, [esp + 0x3c]
// 007cb54f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 007cb55a  e863def4ff           call 0x7193c2
// 007cb55f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007cb566  64890d00000000       mov dword ptr fs:[0], ecx
// 007cb56d  59                   pop ecx
// 007cb56e  5f                   pop edi
// 007cb56f  5e                   pop esi
// 007cb570  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007cb577  33cc                 xor ecx, esp
// 007cb579  e8fceff4ff           call 0x71a57a
// 007cb57e  81c494000000         add esp, 0x94
// 007cb584  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp