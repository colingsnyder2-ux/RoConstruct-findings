// roc 2011-06 008c78c0  unit: CXTPDockingPanePaintManager  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c78c0
//
// 008c78c0  6aff                 push -1
// 008c78c2  68d6c4a000           push 0xa0c4d6
// 008c78c7  64a100000000         mov eax, dword ptr fs:[0]
// 008c78cd  50                   push eax
// 008c78ce  81ec84010000         sub esp, 0x184
// 008c78d4  a12058c900           mov eax, dword ptr [0xc95820]
// 008c78d9  33c4                 xor eax, esp
// 008c78db  89842480010000       mov dword ptr [esp + 0x180], eax
// 008c78e2  53                   push ebx
// 008c78e3  55                   push ebp
// 008c78e4  56                   push esi
// 008c78e5  57                   push edi
// 008c78e6  a12058c900           mov eax, dword ptr [0xc95820]
// 008c78eb  33c4                 xor eax, esp
// 008c78ed  50                   push eax
// 008c78ee  8d842498010000       lea eax, [esp + 0x198]
// 008c78f5  64a300000000         mov dword ptr fs:[0], eax
// 008c78fb  8bf1                 mov esi, ecx
// 008c78fd  e8aef6f7ff           call 0x846fb0
// 008c7902  e8d9daf7ff           call 0x8453e0
// 008c7907  8bd8                 mov ebx, eax
// 008c7909  33ff                 xor edi, edi
// 008c790b  8daea4000000         lea ebp, [esi + 0xa4]
// 008c7911  57                   push edi
// 008c7912  8bcb                 mov ecx, ebx
// 008c7914  e897d2f7ff           call 0x844bb0
// 008c7919  894500               mov dword ptr [ebp], eax
// 008c791c  47                   inc edi
// 008c791d  83c504               add ebp, 4
// 008c7920  83ff3e               cmp edi, 0x3e
// 008c7923  76ec                 jbe 0x8c7911
// 008c7925  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 008c792b  89463c               mov dword ptr [esi + 0x3c], eax
// 008c792e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008c7934  894648               mov dword ptr [esi + 0x48], eax
// 008c7937  e8a4daf7ff           call 0x8453e0
// 008c793c  d905685ba700         fld dword ptr [0xa75b68]
// 008c7942  8b3d181ba400         mov edi, dword ptr [0xa41b18]
// 008c7948  51                   push ecx
// 008c7949  d91c24               fstp dword ptr [esp]
// 008c794c  68cd000000           push 0xcd
// 008c7951  6a05                 push 5
// 008c7953  8bd8                 mov ebx, eax
// 008c7955  ffd7                 call edi
// 008c7957  50                   push eax
// 008c7958  6a0f                 push 0xf
// 008c795a  ffd7                 call edi
// 008c795c  50                   push eax
// 008c795d  8bcb                 mov ecx, ebx
// 008c795f  e89cd1f7ff           call 0x844b00
// 008c7964  50                   push eax
// 008c7965  6a0f                 push 0xf
// 008c7967  ffd7                 call edi
// 008c7969  50                   push eax
// 008c796a  8d4e50               lea ecx, [esi + 0x50]
// 008c796d  e89ecff7ff           call 0x844910
// 008c7972  33db                 xor ebx, ebx
// 008c7974  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 008c797a  744f                 je 0x8c79cb
// 008c797c  6850010000           push 0x150
// 008c7981  8d442448             lea eax, [esp + 0x48]
// 008c7985  53                   push ebx
// 008c7986  50                   push eax
// 008c7987  c744244c54010000     mov dword ptr [esp + 0x4c], 0x154
// 008c798f  e85039f4ff           call 0x80b2e4
// 008c7994  83c40c               add esp, 0xc
// 008c7997  53                   push ebx
// 008c7998  8d4c2444             lea ecx, [esp + 0x44]
// 008c799c  51                   push ecx
// 008c799d  6854010000           push 0x154
// 008c79a2  6a29                 push 0x29
// 008c79a4  ff155c1ba400         call dword ptr [0xa41b5c]
// 008c79aa  395e20               cmp dword ptr [esi + 0x20], ebx
// 008c79ad  750b                 jne 0x8c79ba
// 008c79af  c78424ac00000090010000 mov dword ptr [esp + 0xac], 0x190
// 008c79ba  6a01                 push 1
// 008c79bc  8d9424a0000000       lea edx, [esp + 0xa0]
// 008c79c3  52                   push edx
// 008c79c4  8bce                 mov ecx, esi
// 008c79c6  e835fdffff           call 0x8c7700
// 008c79cb  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c79d1  8b01                 mov eax, dword ptr [ecx]
// 008c79d3  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008c79d6  ffd2                 call edx
// 008c79d8  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c79de  8b01                 mov eax, dword ptr [ecx]
// 008c79e0  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008c79e3  ffd2                 call edx
// 008c79e5  ff15e819a400         call dword ptr [0xa419e8]
// 008c79eb  50                   push eax
// 008c79ec  e83729f4ff           call 0x80a328
// 008c79f1  50                   push eax
// 008c79f2  8d4c2420             lea ecx, [esp + 0x20]
// 008c79f6  e8e74b1000           call 0x9cc5e2
// 008c79fb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008c7a01  050c010000           add eax, 0x10c
// 008c7a06  50                   push eax
// 008c7a07  8d442420             lea eax, [esp + 0x20]
// 008c7a0b  50                   push eax
// 008c7a0c  8d4c2438             lea ecx, [esp + 0x38]
// 008c7a10  899c24a8010000       mov dword ptr [esp + 0x1a8], ebx
// 008c7a17  e80457f9ff           call 0x85d120
// 008c7a1c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c7a20  8b3d3801a400         mov edi, dword ptr [0xa40138]
// 008c7a26  8d4c2414             lea ecx, [esp + 0x14]
// 008c7a2a  51                   push ecx
// 008c7a2b  6a01                 push 1
// 008c7a2d  686056a600           push 0xa65660
// 008c7a32  52                   push edx
// 008c7a33  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 008c7a3b  ffd7                 call edi
// 008c7a3d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c7a41  83c00a               add eax, 0xa
// 008c7a44  83f818               cmp eax, 0x18
// 008c7a47  7d07                 jge 0x8c7a50
// 008c7a49  b818000000           mov eax, 0x18
// 008c7a4e  eb1a                 jmp 0x8c7a6a
// 008c7a50  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c7a54  8d4c2414             lea ecx, [esp + 0x14]
// 008c7a58  51                   push ecx
// 008c7a59  6a01                 push 1
// 008c7a5b  686056a600           push 0xa65660
// 008c7a60  52                   push edx
// 008c7a61  ffd7                 call edi
// 008c7a63  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c7a67  83c00a               add eax, 0xa
// 008c7a6a  68c868ad00           push 0xad68c8
// 008c7a6f  53                   push ebx
// 008c7a70  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 008c7a76  898680000000         mov dword ptr [esi + 0x80], eax
// 008c7a7c  e88f59fbff           call 0x87d410
// 008c7a81  68e419ac00           push 0xac19e4
// 008c7a86  53                   push ebx
// 008c7a87  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 008c7a8d  e87e59fbff           call 0x87d410
// 008c7a92  688c18ad00           push 0xad188c
// 008c7a97  53                   push ebx
// 008c7a98  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 008c7a9e  e86d59fbff           call 0x87d410
// 008c7aa3  688c09ad00           push 0xad098c
// 008c7aa8  53                   push ebx
// 008c7aa9  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 008c7aaf  e85c59fbff           call 0x87d410
// 008c7ab4  8d4c2430             lea ecx, [esp + 0x30]
// 008c7ab8  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 008c7abe  c68424a001000000     mov byte ptr [esp + 0x1a0], 0
// 008c7ac6  e8d556f9ff           call 0x85d1a0
// 008c7acb  8d4c241c             lea ecx, [esp + 0x1c]
// 008c7acf  c78424a0010000ffffffff mov dword ptr [esp + 0x1a0], 0xffffffff
// 008c7ada  e8fd4a1000           call 0x9cc5dc
// 008c7adf  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 008c7ae6  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7aed  59                   pop ecx
// 008c7aee  5f                   pop edi
// 008c7aef  5e                   pop esi
// 008c7af0  5d                   pop ebp
// 008c7af1  5b                   pop ebx
// 008c7af2  8b8c2480010000       mov ecx, dword ptr [esp + 0x180]
// 008c7af9  33cc                 xor ecx, esp
// 008c7afb  e8f73df4ff           call 0x80b8f7
// 008c7b00  81c490010000         add esp, 0x190
// 008c7b06  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\DockingPane\XTPDockingPanePaintManager.cpp