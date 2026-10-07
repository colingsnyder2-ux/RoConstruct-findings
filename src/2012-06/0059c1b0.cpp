// roc 2012-06 0059c1b0  unit: VAuthoringSettings::?$FactoryProduct  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c1b0
//
// 0059c1b0  56                   push esi
// 0059c1b1  8bf1                 mov esi, ecx
// 0059c1b3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0059c1b7  7549                 jne 0x59c202
// 0059c1b9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059c1bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059c1c1  50                   push eax
// 0059c1c2  51                   push ecx
// 0059c1c3  6a10                 push 0x10
// 0059c1c5  e8d6e5ffff           call 0x59a7a0
// 0059c1ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059c1ce  8906                 mov dword ptr [esi], eax
// 0059c1d0  c7460400000000       mov dword ptr [esi + 4], 0
// 0059c1d7  c7460801000000       mov dword ptr [esi + 8], 1
// 0059c1de  8b11                 mov edx, dword ptr [ecx]
// 0059c1e0  8910                 mov dword ptr [eax], edx
// 0059c1e2  8b5104               mov edx, dword ptr [ecx + 4]
// 0059c1e5  895004               mov dword ptr [eax + 4], edx
// 0059c1e8  8b5108               mov edx, dword ptr [ecx + 8]
// 0059c1eb  895008               mov dword ptr [eax + 8], edx
// 0059c1ee  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059c1f1  83c40c               add esp, 0xc
// 0059c1f4  89480c               mov dword ptr [eax + 0xc], ecx
// 0059c1f7  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 0059c1fe  5e                   pop esi
// 0059c1ff  c20c00               ret 0xc
// 0059c202  8b4608               mov eax, dword ptr [esi + 8]
// 0059c205  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c209  8b11                 mov edx, dword ptr [ecx]
// 0059c20b  c1e004               shl eax, 4
// 0059c20e  0306                 add eax, dword ptr [esi]
// 0059c210  8910                 mov dword ptr [eax], edx
// 0059c212  8b5104               mov edx, dword ptr [ecx + 4]
// 0059c215  895004               mov dword ptr [eax + 4], edx
// 0059c218  8b5108               mov edx, dword ptr [ecx + 8]
// 0059c21b  895008               mov dword ptr [eax + 8], edx
// 0059c21e  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059c221  89480c               mov dword ptr [eax + 0xc], ecx
// 0059c224  ff4608               inc dword ptr [esi + 8]
// 0059c227  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059c22a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059c22d  3bc8                 cmp ecx, eax
// 0059c22f  7507                 jne 0x59c238
// 0059c231  c7460800000000       mov dword ptr [esi + 8], 0
// 0059c238  8b5608               mov edx, dword ptr [esi + 8]
// 0059c23b  3b5604               cmp edx, dword ptr [esi + 4]
// 0059c23e  0f8594000000         jne 0x59c2d8
// 0059c244  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059c248  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059c24c  53                   push ebx
// 0059c24d  51                   push ecx
// 0059c24e  52                   push edx
// 0059c24f  03c0                 add eax, eax
// 0059c251  50                   push eax
// 0059c252  e849e5ffff           call 0x59a7a0
// 0059c257  8bd8                 mov ebx, eax
// 0059c259  83c40c               add esp, 0xc
// 0059c25c  85db                 test ebx, ebx
// 0059c25e  7477                 je 0x59c2d7
// 0059c260  57                   push edi
// 0059c261  33ff                 xor edi, edi
// 0059c263  397e0c               cmp dword ptr [esi + 0xc], edi
// 0059c266  7637                 jbe 0x59c29f
// 0059c268  8bcb                 mov ecx, ebx
// 0059c26a  8d9b00000000         lea ebx, [ebx]
// 0059c270  8b4604               mov eax, dword ptr [esi + 4]
// 0059c273  03c7                 add eax, edi
// 0059c275  33d2                 xor edx, edx
// 0059c277  f7760c               div dword ptr [esi + 0xc]
// 0059c27a  47                   inc edi
// 0059c27b  83c110               add ecx, 0x10
// 0059c27e  c1e204               shl edx, 4
// 0059c281  0316                 add edx, dword ptr [esi]
// 0059c283  8b02                 mov eax, dword ptr [edx]
// 0059c285  8941f0               mov dword ptr [ecx - 0x10], eax
// 0059c288  8b4204               mov eax, dword ptr [edx + 4]
// 0059c28b  8941f4               mov dword ptr [ecx - 0xc], eax
// 0059c28e  8b4208               mov eax, dword ptr [edx + 8]
// 0059c291  8941f8               mov dword ptr [ecx - 8], eax
// 0059c294  8b520c               mov edx, dword ptr [edx + 0xc]
// 0059c297  8951fc               mov dword ptr [ecx - 4], edx
// 0059c29a  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0059c29d  72d1                 jb 0x59c270
// 0059c29f  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059c2a2  894608               mov dword ptr [esi + 8], eax
// 0059c2a5  03c0                 add eax, eax
// 0059c2a7  89460c               mov dword ptr [esi + 0xc], eax
// 0059c2aa  8b06                 mov eax, dword ptr [esi]
// 0059c2ac  c7460400000000       mov dword ptr [esi + 4], 0
// 0059c2b3  85c0                 test eax, eax
// 0059c2b5  741d                 je 0x59c2d4
// 0059c2b7  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059c2ba  8d78fc               lea edi, [eax - 4]
// 0059c2bd  6890a75900           push 0x59a790
// 0059c2c2  51                   push ecx
// 0059c2c3  6a10                 push 0x10
// 0059c2c5  50                   push eax
// 0059c2c6  e8a56f3e00           call 0x983270
// 0059c2cb  57                   push edi
// 0059c2cc  e8e9603e00           call 0x9823ba
// 0059c2d1  83c404               add esp, 4
// 0059c2d4  891e                 mov dword ptr [esi], ebx
// 0059c2d6  5f                   pop edi
// 0059c2d7  5b                   pop ebx
// 0059c2d8  5e                   pop esi
// 0059c2d9  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QAEXABUTimeAndValue2@BPSTracker@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
