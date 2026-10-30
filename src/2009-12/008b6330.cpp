// roc 2009-12 008b6330  unit: CXTPDockingPanePaintManager  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6330
//
// 008b6330  6aff                 push -1
// 008b6332  68f6329600           push 0x9632f6
// 008b6337  64a100000000         mov eax, dword ptr fs:[0]
// 008b633d  50                   push eax
// 008b633e  81ec84010000         sub esp, 0x184
// 008b6344  a10052b600           mov eax, dword ptr [0xb65200]
// 008b6349  33c4                 xor eax, esp
// 008b634b  89842480010000       mov dword ptr [esp + 0x180], eax
// 008b6352  53                   push ebx
// 008b6353  55                   push ebp
// 008b6354  56                   push esi
// 008b6355  57                   push edi
// 008b6356  a10052b600           mov eax, dword ptr [0xb65200]
// 008b635b  33c4                 xor eax, esp
// 008b635d  50                   push eax
// 008b635e  8d842498010000       lea eax, [esp + 0x198]
// 008b6365  64a300000000         mov dword ptr fs:[0], eax
// 008b636b  8bf1                 mov esi, ecx
// 008b636d  e82eb2f7ff           call 0x8315a0
// 008b6372  e85996f7ff           call 0x82f9d0
// 008b6377  8bd8                 mov ebx, eax
// 008b6379  33ff                 xor edi, edi
// 008b637b  8daea4000000         lea ebp, [esi + 0xa4]
// 008b6381  57                   push edi
// 008b6382  8bcb                 mov ecx, ebx
// 008b6384  e8778df7ff           call 0x82f100
// 008b6389  894500               mov dword ptr [ebp], eax
// 008b638c  47                   inc edi
// 008b638d  83c504               add ebp, 4
// 008b6390  83ff3e               cmp edi, 0x3e
// 008b6393  76ec                 jbe 0x8b6381
// 008b6395  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008b639b  89463c               mov dword ptr [esi + 0x3c], eax
// 008b639e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008b63a4  894648               mov dword ptr [esi + 0x48], eax
// 008b63a7  e82496f7ff           call 0x82f9d0
// 008b63ac  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008b63b2  8b3dd8ca9800         mov edi, dword ptr [0x98cad8]
// 008b63b8  51                   push ecx
// 008b63b9  d91c24               fstp dword ptr [esp]
// 008b63bc  68cd000000           push 0xcd
// 008b63c1  6a05                 push 5
// 008b63c3  8bd8                 mov ebx, eax
// 008b63c5  ffd7                 call edi
// 008b63c7  50                   push eax
// 008b63c8  6a0f                 push 0xf
// 008b63ca  ffd7                 call edi
// 008b63cc  50                   push eax
// 008b63cd  8bcb                 mov ecx, ebx
// 008b63cf  e87c8cf7ff           call 0x82f050
// 008b63d4  50                   push eax
// 008b63d5  6a0f                 push 0xf
// 008b63d7  ffd7                 call edi
// 008b63d9  50                   push eax
// 008b63da  8d4e50               lea ecx, [esi + 0x50]
// 008b63dd  e87e8af7ff           call 0x82ee60
// 008b63e2  33db                 xor ebx, ebx
// 008b63e4  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 008b63ea  744f                 je 0x8b643b
// 008b63ec  6850010000           push 0x150
// 008b63f1  8d442448             lea eax, [esp + 0x48]
// 008b63f5  53                   push ebx
// 008b63f6  50                   push eax
// 008b63f7  c744244c54010000     mov dword ptr [esp + 0x4c], 0x154
// 008b63ff  e8a0e6f3ff           call 0x7f4aa4
// 008b6404  83c40c               add esp, 0xc
// 008b6407  53                   push ebx
// 008b6408  8d4c2444             lea ecx, [esp + 0x44]
// 008b640c  51                   push ecx
// 008b640d  6854010000           push 0x154
// 008b6412  6a29                 push 0x29
// 008b6414  ff1500cc9800         call dword ptr [0x98cc00]
// 008b641a  395e20               cmp dword ptr [esi + 0x20], ebx
// 008b641d  750b                 jne 0x8b642a
// 008b641f  c78424ac00000090010000 mov dword ptr [esp + 0xac], 0x190
// 008b642a  6a01                 push 1
// 008b642c  8d9424a0000000       lea edx, [esp + 0xa0]
// 008b6433  52                   push edx
// 008b6434  8bce                 mov ecx, esi
// 008b6436  e835fdffff           call 0x8b6170
// 008b643b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b6441  8b01                 mov eax, dword ptr [ecx]
// 008b6443  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008b6446  ffd2                 call edx
// 008b6448  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008b644e  8b01                 mov eax, dword ptr [ecx]
// 008b6450  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008b6453  ffd2                 call edx
// 008b6455  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008b645b  50                   push eax
// 008b645c  e8c9d6f3ff           call 0x7f3b2a
// 008b6461  50                   push eax
// 008b6462  8d4c2420             lea ecx, [esp + 0x20]
// 008b6466  e81f000700           call 0x92648a
// 008b646b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008b6471  050c010000           add eax, 0x10c
// 008b6476  50                   push eax
// 008b6477  8d442420             lea eax, [esp + 0x20]
// 008b647b  50                   push eax
// 008b647c  8d4c2438             lea ecx, [esp + 0x38]
// 008b6480  899c24a8010000       mov dword ptr [esp + 0x1a8], ebx
// 008b6487  e8d451f9ff           call 0x84b660
// 008b648c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b6490  8b3d6cb19800         mov edi, dword ptr [0x98b16c]
// 008b6496  8d4c2414             lea ecx, [esp + 0x14]
// 008b649a  51                   push ecx
// 008b649b  6a01                 push 1
// 008b649d  6868619a00           push 0x9a6168
// 008b64a2  52                   push edx
// 008b64a3  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 008b64ab  ffd7                 call edi
// 008b64ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b64b1  83c00a               add eax, 0xa
// 008b64b4  83f818               cmp eax, 0x18
// 008b64b7  7d07                 jge 0x8b64c0
// 008b64b9  b818000000           mov eax, 0x18
// 008b64be  eb1a                 jmp 0x8b64da
// 008b64c0  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b64c4  8d4c2414             lea ecx, [esp + 0x14]
// 008b64c8  51                   push ecx
// 008b64c9  6a01                 push 1
// 008b64cb  6868619a00           push 0x9a6168
// 008b64d0  52                   push edx
// 008b64d1  ffd7                 call edi
// 008b64d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b64d7  83c00a               add eax, 0xa
// 008b64da  68d07ba000           push 0xa07bd0
// 008b64df  53                   push ebx
// 008b64e0  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 008b64e6  898680000000         mov dword ptr [esi + 0x80], eax
// 008b64ec  e80f58fbff           call 0x86bd00
// 008b64f1  6820299f00           push 0x9f2920
// 008b64f6  53                   push ebx
// 008b64f7  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 008b64fd  e8fe57fbff           call 0x86bd00
// 008b6502  68e42ba000           push 0xa02be4
// 008b6507  53                   push ebx
// 008b6508  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 008b650e  e8ed57fbff           call 0x86bd00
// 008b6513  682c16a000           push 0xa0162c
// 008b6518  53                   push ebx
// 008b6519  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 008b651f  e8dc57fbff           call 0x86bd00
// 008b6524  8d4c2430             lea ecx, [esp + 0x30]
// 008b6528  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 008b652e  c68424a001000000     mov byte ptr [esp + 0x1a0], 0
// 008b6536  e8a551f9ff           call 0x84b6e0
// 008b653b  8d4c241c             lea ecx, [esp + 0x1c]
// 008b653f  c78424a0010000ffffffff mov dword ptr [esp + 0x1a0], 0xffffffff
// 008b654a  e835ff0600           call 0x926484
// 008b654f  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 008b6556  64890d00000000       mov dword ptr fs:[0], ecx
// 008b655d  59                   pop ecx
// 008b655e  5f                   pop edi
// 008b655f  5e                   pop esi
// 008b6560  5d                   pop ebp
// 008b6561  5b                   pop ebx
// 008b6562  8b8c2480010000       mov ecx, dword ptr [esp + 0x180]
// 008b6569  33cc                 xor ecx, esp
// 008b656b  e82aeef3ff           call 0x7f539a
// 008b6570  81c490010000         add esp, 0x190
// 008b6576  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\DockingPane\XTPDockingPanePaintManager.cpp