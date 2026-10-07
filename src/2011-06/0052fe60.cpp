// roc 2011-06 0052fe60  unit: RBX::Network::ProfiledRakPeer  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052fe60
//
// 0052fe60  56                   push esi
// 0052fe61  8bf1                 mov esi, ecx
// 0052fe63  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0052fe67  7549                 jne 0x52feb2
// 0052fe69  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052fe6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052fe71  50                   push eax
// 0052fe72  51                   push ecx
// 0052fe73  6a10                 push 0x10
// 0052fe75  e8e6e7ffff           call 0x52e660
// 0052fe7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052fe7e  8906                 mov dword ptr [esi], eax
// 0052fe80  c7460400000000       mov dword ptr [esi + 4], 0
// 0052fe87  c7460801000000       mov dword ptr [esi + 8], 1
// 0052fe8e  8b11                 mov edx, dword ptr [ecx]
// 0052fe90  8910                 mov dword ptr [eax], edx
// 0052fe92  8b5104               mov edx, dword ptr [ecx + 4]
// 0052fe95  895004               mov dword ptr [eax + 4], edx
// 0052fe98  8b5108               mov edx, dword ptr [ecx + 8]
// 0052fe9b  895008               mov dword ptr [eax + 8], edx
// 0052fe9e  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052fea1  83c40c               add esp, 0xc
// 0052fea4  89480c               mov dword ptr [eax + 0xc], ecx
// 0052fea7  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 0052feae  5e                   pop esi
// 0052feaf  c20c00               ret 0xc
// 0052feb2  8b4608               mov eax, dword ptr [esi + 8]
// 0052feb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052feb9  8b11                 mov edx, dword ptr [ecx]
// 0052febb  c1e004               shl eax, 4
// 0052febe  0306                 add eax, dword ptr [esi]
// 0052fec0  8910                 mov dword ptr [eax], edx
// 0052fec2  8b5104               mov edx, dword ptr [ecx + 4]
// 0052fec5  895004               mov dword ptr [eax + 4], edx
// 0052fec8  8b5108               mov edx, dword ptr [ecx + 8]
// 0052fecb  895008               mov dword ptr [eax + 8], edx
// 0052fece  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0052fed1  89480c               mov dword ptr [eax + 0xc], ecx
// 0052fed4  ff4608               inc dword ptr [esi + 8]
// 0052fed7  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052feda  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052fedd  3bc8                 cmp ecx, eax
// 0052fedf  7507                 jne 0x52fee8
// 0052fee1  c7460800000000       mov dword ptr [esi + 8], 0
// 0052fee8  8b5608               mov edx, dword ptr [esi + 8]
// 0052feeb  3b5604               cmp edx, dword ptr [esi + 4]
// 0052feee  0f8594000000         jne 0x52ff88
// 0052fef4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052fef8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052fefc  53                   push ebx
// 0052fefd  51                   push ecx
// 0052fefe  52                   push edx
// 0052feff  03c0                 add eax, eax
// 0052ff01  50                   push eax
// 0052ff02  e859e7ffff           call 0x52e660
// 0052ff07  8bd8                 mov ebx, eax
// 0052ff09  83c40c               add esp, 0xc
// 0052ff0c  85db                 test ebx, ebx
// 0052ff0e  7477                 je 0x52ff87
// 0052ff10  57                   push edi
// 0052ff11  33ff                 xor edi, edi
// 0052ff13  397e0c               cmp dword ptr [esi + 0xc], edi
// 0052ff16  7637                 jbe 0x52ff4f
// 0052ff18  8bcb                 mov ecx, ebx
// 0052ff1a  8d9b00000000         lea ebx, [ebx]
// 0052ff20  8b4604               mov eax, dword ptr [esi + 4]
// 0052ff23  03c7                 add eax, edi
// 0052ff25  33d2                 xor edx, edx
// 0052ff27  f7760c               div dword ptr [esi + 0xc]
// 0052ff2a  47                   inc edi
// 0052ff2b  83c110               add ecx, 0x10
// 0052ff2e  c1e204               shl edx, 4
// 0052ff31  0316                 add edx, dword ptr [esi]
// 0052ff33  8b02                 mov eax, dword ptr [edx]
// 0052ff35  8941f0               mov dword ptr [ecx - 0x10], eax
// 0052ff38  8b4204               mov eax, dword ptr [edx + 4]
// 0052ff3b  8941f4               mov dword ptr [ecx - 0xc], eax
// 0052ff3e  8b4208               mov eax, dword ptr [edx + 8]
// 0052ff41  8941f8               mov dword ptr [ecx - 8], eax
// 0052ff44  8b520c               mov edx, dword ptr [edx + 0xc]
// 0052ff47  8951fc               mov dword ptr [ecx - 4], edx
// 0052ff4a  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0052ff4d  72d1                 jb 0x52ff20
// 0052ff4f  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052ff52  894608               mov dword ptr [esi + 8], eax
// 0052ff55  03c0                 add eax, eax
// 0052ff57  89460c               mov dword ptr [esi + 0xc], eax
// 0052ff5a  8b06                 mov eax, dword ptr [esi]
// 0052ff5c  c7460400000000       mov dword ptr [esi + 4], 0
// 0052ff63  85c0                 test eax, eax
// 0052ff65  741d                 je 0x52ff84
// 0052ff67  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052ff6a  8d78fc               lea edi, [eax - 4]
// 0052ff6d  6840b68600           push 0x86b640
// 0052ff72  51                   push ecx
// 0052ff73  6a10                 push 0x10
// 0052ff75  50                   push eax
// 0052ff76  e85db22d00           call 0x80b1d8
// 0052ff7b  57                   push edi
// 0052ff7c  e883a32d00           call 0x80a304
// 0052ff81  83c404               add esp, 4
// 0052ff84  891e                 mov dword ptr [esi], ebx
// 0052ff86  5f                   pop edi
// 0052ff87  5b                   pop ebx
// 0052ff88  5e                   pop esi
// 0052ff89  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QAEXABUTimeAndValue2@BPSTracker@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
