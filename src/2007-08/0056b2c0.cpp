// roc 2007-08 0056b2c0  unit: ArchiveBinder  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056b2c0
//
// 0056b2c0  6aff                 push -1
// 0056b2c2  64a100000000         mov eax, dword ptr fs:[0]
// 0056b2c8  6800467500           push 0x754600
// 0056b2cd  50                   push eax
// 0056b2ce  64892500000000       mov dword ptr fs:[0], esp
// 0056b2d5  83ec34               sub esp, 0x34
// 0056b2d8  53                   push ebx
// 0056b2d9  55                   push ebp
// 0056b2da  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0056b2de  56                   push esi
// 0056b2df  57                   push edi
// 0056b2e0  55                   push ebp
// 0056b2e1  8bf1                 mov esi, ecx
// 0056b2e3  e838e3ffff           call 0x569620
// 0056b2e8  33db                 xor ebx, ebx
// 0056b2ea  3bf3                 cmp esi, ebx
// 0056b2ec  8bf8                 mov edi, eax
// 0056b2ee  7506                 jne 0x56b2f6
// 0056b2f0  ff15d8e67700         call dword ptr [0x77e6d8]
// 0056b2f6  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056b2f9  7412                 je 0x56b30d
// 0056b2fb  8d470c               lea eax, [edi + 0xc]
// 0056b2fe  50                   push eax
// 0056b2ff  55                   push ebp
// 0056b300  ff1520e67700         call dword ptr [0x77e620]
// 0056b306  83c408               add esp, 8
// 0056b309  84c0                 test al, al
// 0056b30b  7449                 je 0x56b356
// 0056b30d  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056b311  895c2414             mov dword ptr [esp + 0x14], ebx
// 0056b315  55                   push ebp
// 0056b316  8d4c2424             lea ecx, [esp + 0x24]
// 0056b31a  895c2450             mov dword ptr [esp + 0x50], ebx
// 0056b31e  ff159ce67700         call dword ptr [0x77e69c]
// 0056b324  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0056b328  895c2440             mov dword ptr [esp + 0x40], ebx
// 0056b32c  8d4c2420             lea ecx, [esp + 0x20]
// 0056b330  51                   push ecx
// 0056b331  57                   push edi
// 0056b332  56                   push esi
// 0056b333  8d542424             lea edx, [esp + 0x24]
// 0056b337  52                   push edx
// 0056b338  8bce                 mov ecx, esi
// 0056b33a  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0056b33f  e86cfdffff           call 0x56b0b0
// 0056b344  8b30                 mov esi, dword ptr [eax]
// 0056b346  8b7804               mov edi, dword ptr [eax + 4]
// 0056b349  8d4c2420             lea ecx, [esp + 0x20]
// 0056b34d  885c244c             mov byte ptr [esp + 0x4c], bl
// 0056b351  e84ae2ffff           call 0x5695a0
// 0056b356  3bf3                 cmp esi, ebx
// 0056b358  7506                 jne 0x56b360
// 0056b35a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0056b360  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056b363  7506                 jne 0x56b36b
// 0056b365  ff15d8e67700         call dword ptr [0x77e6d8]
// 0056b36b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056b36f  8d4728               lea eax, [edi + 0x28]
// 0056b372  5f                   pop edi
// 0056b373  5e                   pop esi
// 0056b374  5d                   pop ebp
// 0056b375  5b                   pop ebx
// 0056b376  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b37d  83c440               add esp, 0x40
// 0056b380  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@@std@@QAEAAVInstanceHandle@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
