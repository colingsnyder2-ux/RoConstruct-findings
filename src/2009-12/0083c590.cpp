// roc 2009-12 0083c590  unit: CXTPAccessible  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c590
//
// 0083c590  6aff                 push -1
// 0083c592  683bc79500           push 0x95c73b
// 0083c597  64a100000000         mov eax, dword ptr fs:[0]
// 0083c59d  50                   push eax
// 0083c59e  51                   push ecx
// 0083c59f  53                   push ebx
// 0083c5a0  56                   push esi
// 0083c5a1  57                   push edi
// 0083c5a2  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c5a7  33c4                 xor eax, esp
// 0083c5a9  50                   push eax
// 0083c5aa  8d442414             lea eax, [esp + 0x14]
// 0083c5ae  64a300000000         mov dword ptr fs:[0], eax
// 0083c5b4  8bf1                 mov esi, ecx
// 0083c5b6  89742410             mov dword ptr [esp + 0x10], esi
// 0083c5ba  8d7e14               lea edi, [esi + 0x14]
// 0083c5bd  8bcf                 mov ecx, edi
// 0083c5bf  e85cf2ffff           call 0x83b820
// 0083c5c4  33db                 xor ebx, ebx
// 0083c5c6  6860849f00           push 0x9f8460
// 0083c5cb  8bcf                 mov ecx, edi
// 0083c5cd  895c2420             mov dword ptr [esp + 0x20], ebx
// 0083c5d1  e86affffff           call 0x83c540
// 0083c5d6  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0083c5d9  7466                 je 0x83c641
// 0083c5db  53                   push ebx
// 0083c5dc  684c849f00           push 0x9f844c
// 0083c5e1  56                   push esi
// 0083c5e2  8bcf                 mov ecx, edi
// 0083c5e4  e807f3ffff           call 0x83b8f0
// 0083c5e9  85c0                 test eax, eax
// 0083c5eb  7454                 je 0x83c641
// 0083c5ed  53                   push ebx
// 0083c5ee  6838849f00           push 0x9f8438
// 0083c5f3  8d4604               lea eax, [esi + 4]
// 0083c5f6  50                   push eax
// 0083c5f7  8bcf                 mov ecx, edi
// 0083c5f9  e8f2f2ffff           call 0x83b8f0
// 0083c5fe  85c0                 test eax, eax
// 0083c600  743f                 je 0x83c641
// 0083c602  53                   push ebx
// 0083c603  6828849f00           push 0x9f8428
// 0083c608  8d4e08               lea ecx, [esi + 8]
// 0083c60b  51                   push ecx
// 0083c60c  8bcf                 mov ecx, edi
// 0083c60e  e8ddf2ffff           call 0x83b8f0
// 0083c613  85c0                 test eax, eax
// 0083c615  742a                 je 0x83c641
// 0083c617  53                   push ebx
// 0083c618  6814849f00           push 0x9f8414
// 0083c61d  8d560c               lea edx, [esi + 0xc]
// 0083c620  52                   push edx
// 0083c621  8bcf                 mov ecx, edi
// 0083c623  e8c8f2ffff           call 0x83b8f0
// 0083c628  85c0                 test eax, eax
// 0083c62a  7415                 je 0x83c641
// 0083c62c  53                   push ebx
// 0083c62d  6804849f00           push 0x9f8404
// 0083c632  8d4610               lea eax, [esi + 0x10]
// 0083c635  50                   push eax
// 0083c636  8bcf                 mov ecx, edi
// 0083c638  e8b3f2ffff           call 0x83b8f0
// 0083c63d  85c0                 test eax, eax
// 0083c63f  750e                 jne 0x83c64f
// 0083c641  891e                 mov dword ptr [esi], ebx
// 0083c643  895e04               mov dword ptr [esi + 4], ebx
// 0083c646  895e08               mov dword ptr [esi + 8], ebx
// 0083c649  895e0c               mov dword ptr [esi + 0xc], ebx
// 0083c64c  895e10               mov dword ptr [esi + 0x10], ebx
// 0083c64f  8bc6                 mov eax, esi
// 0083c651  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083c655  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c65c  59                   pop ecx
// 0083c65d  5f                   pop edi
// 0083c65e  5e                   pop esi
// 0083c65f  5b                   pop ebx
// 0083c660  83c410               add esp, 0x10
// 0083c663  c3                   ret 
// copied from an identical function in another client (function ??0CXTPMultiMonitor@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp