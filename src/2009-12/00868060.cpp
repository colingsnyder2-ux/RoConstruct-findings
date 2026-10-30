// roc 2009-12 00868060  unit: CXTPPropertyGridView  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868060
//
// 00868060  6aff                 push -1
// 00868062  684af39500           push 0x95f34a
// 00868067  64a100000000         mov eax, dword ptr fs:[0]
// 0086806d  50                   push eax
// 0086806e  83ec08               sub esp, 8
// 00868071  53                   push ebx
// 00868072  56                   push esi
// 00868073  57                   push edi
// 00868074  a10052b600           mov eax, dword ptr [0xb65200]
// 00868079  33c4                 xor eax, esp
// 0086807b  50                   push eax
// 0086807c  8d442418             lea eax, [esp + 0x18]
// 00868080  64a300000000         mov dword ptr fs:[0], eax
// 00868086  8bf1                 mov esi, ecx
// 00868088  89742410             mov dword ptr [esp + 0x10], esi
// 0086808c  e8b7c0f8ff           call 0x7f4148
// 00868091  c706c4989f00         mov dword ptr [esi], 0x9f98c4
// 00868097  8d5e54               lea ebx, [esi + 0x54]
// 0086809a  33ff                 xor edi, edi
// 0086809c  8bcb                 mov ecx, ebx
// 0086809e  897c2420             mov dword ptr [esp + 0x20], edi
// 008680a2  e83947fdff           call 0x83c7e0
// 008680a7  8d8ed8000000         lea ecx, [esi + 0xd8]
// 008680ad  c7060cf19f00         mov dword ptr [esi], 0x9ff10c
// 008680b3  c703acf09f00         mov dword ptr [ebx], 0x9ff0ac
// 008680b9  ff1574de9800         call dword ptr [0x98de74]
// 008680bf  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008680c5  c644242002           mov byte ptr [esp + 0x20], 2
// 008680ca  e811fbffff           call 0x867be0
// 008680cf  dd0510329b00         fld qword ptr [0x9b3210]
// 008680d5  b801000000           mov eax, 1
// 008680da  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 008680e0  b303                 mov bl, 3
// 008680e2  6a34                 push 0x34
// 008680e4  885c2424             mov byte ptr [esp + 0x24], bl
// 008680e8  89bedc000000         mov dword ptr [esi + 0xdc], edi
// 008680ee  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008680f4  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008680fa  898650010000         mov dword ptr [esi + 0x150], eax
// 00868100  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 00868106  e855b7f8ff           call 0x7f3860
// 0086810b  83c404               add esp, 4
// 0086810e  89442414             mov dword ptr [esp + 0x14], eax
// 00868112  c644242004           mov byte ptr [esp + 0x20], 4
// 00868117  3bc7                 cmp eax, edi
// 00868119  7409                 je 0x868124
// 0086811b  8bc8                 mov ecx, eax
// 0086811d  e82ee2ffff           call 0x866350
// 00868122  eb02                 jmp 0x868126
// 00868124  33c0                 xor eax, eax
// 00868126  885c2420             mov byte ptr [esp + 0x20], bl
// 0086812a  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00868130  e86b670000           call 0x86e8a0
// 00868135  8b10                 mov edx, dword ptr [eax]
// 00868137  8bc8                 mov ecx, eax
// 00868139  8b4218               mov eax, dword ptr [edx + 0x18]
// 0086813c  68f2260000           push 0x26f2
// 00868141  ffd0                 call eax
// 00868143  8bce                 mov ecx, esi
// 00868145  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 0086814b  89be48010000         mov dword ptr [esi + 0x148], edi
// 00868151  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00868157  89be4c010000         mov dword ptr [esi + 0x14c], edi
// 0086815d  89be54010000         mov dword ptr [esi + 0x154], edi
// 00868163  89be58010000         mov dword ptr [esi + 0x158], edi
// 00868169  e8dae20b00           call 0x926448
// 0086816e  8bc6                 mov eax, esi
// 00868170  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00868174  64890d00000000       mov dword ptr fs:[0], ecx
// 0086817b  59                   pop ecx
// 0086817c  5f                   pop edi
// 0086817d  5e                   pop esi
// 0086817e  5b                   pop ebx
// 0086817f  83c414               add esp, 0x14
// 00868182  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGridView@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp