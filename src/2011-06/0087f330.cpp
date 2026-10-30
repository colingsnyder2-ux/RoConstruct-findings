// roc 2011-06 0087f330  unit: CSelectionCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f330
//
// 0087f330  6aff                 push -1
// 0087f332  68188aa000           push 0xa08a18
// 0087f337  64a100000000         mov eax, dword ptr fs:[0]
// 0087f33d  50                   push eax
// 0087f33e  81ec84000000         sub esp, 0x84
// 0087f344  53                   push ebx
// 0087f345  56                   push esi
// 0087f346  57                   push edi
// 0087f347  a12058c900           mov eax, dword ptr [0xc95820]
// 0087f34c  33c4                 xor eax, esp
// 0087f34e  50                   push eax
// 0087f34f  8d842494000000       lea eax, [esp + 0x94]
// 0087f356  64a300000000         mov dword ptr fs:[0], eax
// 0087f35c  8bf1                 mov esi, ecx
// 0087f35e  8dbed0000000         lea edi, [esi + 0xd0]
// 0087f364  8bcf                 mov ecx, edi
// 0087f366  ff15b026a400         call dword ptr [0xa426b0]
// 0087f36c  84c0                 test al, al
// 0087f36e  742d                 je 0x87f39d
// 0087f370  8d4c244c             lea ecx, [esp + 0x4c]
// 0087f374  e877d9fdff           call 0x85ccf0
// 0087f379  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0087f380  8b10                 mov edx, dword ptr [eax]
// 0087f382  8911                 mov dword ptr [ecx], edx
// 0087f384  8b5004               mov edx, dword ptr [eax + 4]
// 0087f387  895104               mov dword ptr [ecx + 4], edx
// 0087f38a  8b5008               mov edx, dword ptr [eax + 8]
// 0087f38d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087f390  895108               mov dword ptr [ecx + 8], edx
// 0087f393  89410c               mov dword ptr [ecx + 0xc], eax
// 0087f396  8bc1                 mov eax, ecx
// 0087f398  e9e3000000           jmp 0x87f480
// 0087f39d  56                   push esi
// 0087f39e  8d4c2414             lea ecx, [esp + 0x14]
// 0087f3a2  e8e9d9fdff           call 0x85cd90
// 0087f3a7  6a00                 push 0
// 0087f3a9  8d4c2424             lea ecx, [esp + 0x24]
// 0087f3ad  e830d21400           call 0x9cc5e2
// 0087f3b2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087f3b5  6a00                 push 0
// 0087f3b7  6a00                 push 0
// 0087f3b9  6a31                 push 0x31
// 0087f3bb  51                   push ecx
// 0087f3bc  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 0087f3c7  ff15c019a400         call dword ptr [0xa419c0]
// 0087f3cd  50                   push eax
// 0087f3ce  e895b7f8ff           call 0x80ab68
// 0087f3d3  50                   push eax
// 0087f3d4  8d542424             lea edx, [esp + 0x24]
// 0087f3d8  52                   push edx
// 0087f3d9  8d4c2444             lea ecx, [esp + 0x44]
// 0087f3dd  e83eddfdff           call 0x85d120
// 0087f3e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087f3e6  8d44245c             lea eax, [esp + 0x5c]
// 0087f3ea  50                   push eax
// 0087f3eb  51                   push ecx
// 0087f3ec  ff15d800a400         call dword ptr [0xa400d8]
// 0087f3f2  8bcf                 mov ecx, edi
// 0087f3f4  ff15a826a400         call dword ptr [0xa426a8]
// 0087f3fa  8bcf                 mov ecx, edi
// 0087f3fc  8bd8                 mov ebx, eax
// 0087f3fe  ff15c82da400         call dword ptr [0xa42dc8]
// 0087f404  8d542434             lea edx, [esp + 0x34]
// 0087f408  52                   push edx
// 0087f409  53                   push ebx
// 0087f40a  50                   push eax
// 0087f40b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087f40f  50                   push eax
// 0087f410  ff153801a400         call dword ptr [0xa40138]
// 0087f416  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0087f41a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087f41e  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 0087f424  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087f428  8d540a0c             lea edx, [edx + ecx + 0xc]
// 0087f42c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087f430  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0087f434  f7df                 neg edi
// 0087f436  1bff                 sbb edi, edi
// 0087f438  83e712               and edi, 0x12
// 0087f43b  2bc7                 sub eax, edi
// 0087f43d  2b442410             sub eax, dword ptr [esp + 0x10]
// 0087f441  3bd0                 cmp edx, eax
// 0087f443  7e02                 jle 0x87f447
// 0087f445  8bd0                 mov edx, eax
// 0087f447  8b766c               mov esi, dword ptr [esi + 0x6c]
// 0087f44a  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 0087f451  2bce                 sub ecx, esi
// 0087f453  8d0416               lea eax, [esi + edx]
// 0087f456  894f0c               mov dword ptr [edi + 0xc], ecx
// 0087f459  8d4c243c             lea ecx, [esp + 0x3c]
// 0087f45d  8937                 mov dword ptr [edi], esi
// 0087f45f  897704               mov dword ptr [edi + 4], esi
// 0087f462  894708               mov dword ptr [edi + 8], eax
// 0087f465  e836ddfdff           call 0x85d1a0
// 0087f46a  8d4c2420             lea ecx, [esp + 0x20]
// 0087f46e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0087f479  e85ed11400           call 0x9cc5dc
// 0087f47e  8bc7                 mov eax, edi
// 0087f480  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0087f487  64890d00000000       mov dword ptr fs:[0], ecx
// 0087f48e  59                   pop ecx
// 0087f48f  5f                   pop edi
// 0087f490  5e                   pop esi
// 0087f491  5b                   pop ebx
// 0087f492  81c490000000         add esp, 0x90
// 0087f498  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp