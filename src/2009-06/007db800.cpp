// roc 2009-06 007db800  unit: CXTPDockingPanePaintManager  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007db800
//
// 007db800  6aff                 push -1
// 007db802  6856f28700           push 0x87f256
// 007db807  64a100000000         mov eax, dword ptr fs:[0]
// 007db80d  50                   push eax
// 007db80e  81ec84010000         sub esp, 0x184
// 007db814  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007db819  33c4                 xor eax, esp
// 007db81b  89842480010000       mov dword ptr [esp + 0x180], eax
// 007db822  53                   push ebx
// 007db823  55                   push ebp
// 007db824  56                   push esi
// 007db825  57                   push edi
// 007db826  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007db82b  33c4                 xor eax, esp
// 007db82d  50                   push eax
// 007db82e  8d842498010000       lea eax, [esp + 0x198]
// 007db835  64a300000000         mov dword ptr fs:[0], eax
// 007db83b  8bf1                 mov esi, ecx
// 007db83d  e8aeaef7ff           call 0x7566f0
// 007db842  e8d992f7ff           call 0x754b20
// 007db847  8bd8                 mov ebx, eax
// 007db849  33ff                 xor edi, edi
// 007db84b  8daea4000000         lea ebp, [esi + 0xa4]
// 007db851  57                   push edi
// 007db852  8bcb                 mov ecx, ebx
// 007db854  e8478af7ff           call 0x7542a0
// 007db859  894500               mov dword ptr [ebp], eax
// 007db85c  47                   inc edi
// 007db85d  83c504               add ebp, 4
// 007db860  83ff3e               cmp edi, 0x3e
// 007db863  76ec                 jbe 0x7db851
// 007db865  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007db86b  89463c               mov dword ptr [esi + 0x3c], eax
// 007db86e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007db874  894648               mov dword ptr [esi + 0x48], eax
// 007db877  e8a492f7ff           call 0x754b20
// 007db87c  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007db882  8b3de4ee8900         mov edi, dword ptr [0x89eee4]
// 007db888  51                   push ecx
// 007db889  d91c24               fstp dword ptr [esp]
// 007db88c  68cd000000           push 0xcd
// 007db891  6a05                 push 5
// 007db893  8bd8                 mov ebx, eax
// 007db895  ffd7                 call edi
// 007db897  50                   push eax
// 007db898  6a0f                 push 0xf
// 007db89a  ffd7                 call edi
// 007db89c  50                   push eax
// 007db89d  8bcb                 mov ecx, ebx
// 007db89f  e84c89f7ff           call 0x7541f0
// 007db8a4  50                   push eax
// 007db8a5  6a0f                 push 0xf
// 007db8a7  ffd7                 call edi
// 007db8a9  50                   push eax
// 007db8aa  8d4e50               lea ecx, [esi + 0x50]
// 007db8ad  e84e87f7ff           call 0x754000
// 007db8b2  33db                 xor ebx, ebx
// 007db8b4  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 007db8ba  744f                 je 0x7db90b
// 007db8bc  6850010000           push 0x150
// 007db8c1  8d442448             lea eax, [esp + 0x48]
// 007db8c5  53                   push ebx
// 007db8c6  50                   push eax
// 007db8c7  c744244c54010000     mov dword ptr [esp + 0x4c], 0x154
// 007db8cf  e8a0e3f3ff           call 0x719c74
// 007db8d4  83c40c               add esp, 0xc
// 007db8d7  53                   push ebx
// 007db8d8  8d4c2444             lea ecx, [esp + 0x44]
// 007db8dc  51                   push ecx
// 007db8dd  6854010000           push 0x154
// 007db8e2  6a29                 push 0x29
// 007db8e4  ff1564ee8900         call dword ptr [0x89ee64]
// 007db8ea  395e20               cmp dword ptr [esi + 0x20], ebx
// 007db8ed  750b                 jne 0x7db8fa
// 007db8ef  c78424ac00000090010000 mov dword ptr [esp + 0xac], 0x190
// 007db8fa  6a01                 push 1
// 007db8fc  8d9424a0000000       lea edx, [esp + 0xa0]
// 007db903  52                   push edx
// 007db904  8bce                 mov ecx, esi
// 007db906  e835fdffff           call 0x7db640
// 007db90b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007db911  8b01                 mov eax, dword ptr [ecx]
// 007db913  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007db916  ffd2                 call edx
// 007db918  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007db91e  8b01                 mov eax, dword ptr [ecx]
// 007db920  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007db923  ffd2                 call edx
// 007db925  ff15e8ec8900         call dword ptr [0x89ece8]
// 007db92b  50                   push eax
// 007db92c  e8d1d3f3ff           call 0x718d02
// 007db931  50                   push eax
// 007db932  8d4c2420             lea ecx, [esp + 0x20]
// 007db936  e8bf050700           call 0x84befa
// 007db93b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007db941  050c010000           add eax, 0x10c
// 007db946  50                   push eax
// 007db947  8d442420             lea eax, [esp + 0x20]
// 007db94b  50                   push eax
// 007db94c  8d4c2438             lea ecx, [esp + 0x38]
// 007db950  899c24a8010000       mov dword ptr [esp + 0x1a8], ebx
// 007db957  e8044ff9ff           call 0x770860
// 007db95c  8b542424             mov edx, dword ptr [esp + 0x24]
// 007db960  8b3d50e18900         mov edi, dword ptr [0x89e150]
// 007db966  8d4c2414             lea ecx, [esp + 0x14]
// 007db96a  51                   push ecx
// 007db96b  6a01                 push 1
// 007db96d  68f8338b00           push 0x8b33f8
// 007db972  52                   push edx
// 007db973  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 007db97b  ffd7                 call edi
// 007db97d  8b442418             mov eax, dword ptr [esp + 0x18]
// 007db981  83c00a               add eax, 0xa
// 007db984  83f818               cmp eax, 0x18
// 007db987  7d07                 jge 0x7db990
// 007db989  b818000000           mov eax, 0x18
// 007db98e  eb1a                 jmp 0x7db9aa
// 007db990  8b542424             mov edx, dword ptr [esp + 0x24]
// 007db994  8d4c2414             lea ecx, [esp + 0x14]
// 007db998  51                   push ecx
// 007db999  6a01                 push 1
// 007db99b  68f8338b00           push 0x8b33f8
// 007db9a0  52                   push edx
// 007db9a1  ffd7                 call edi
// 007db9a3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007db9a7  83c00a               add eax, 0xa
// 007db9aa  6860779000           push 0x907760
// 007db9af  53                   push ebx
// 007db9b0  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 007db9b6  898680000000         mov dword ptr [esi + 0x80], eax
// 007db9bc  e81f53fbff           call 0x790ce0
// 007db9c1  6844248f00           push 0x8f2444
// 007db9c6  53                   push ebx
// 007db9c7  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 007db9cd  e80e53fbff           call 0x790ce0
// 007db9d2  6864279000           push 0x902764
// 007db9d7  53                   push ebx
// 007db9d8  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 007db9de  e8fd52fbff           call 0x790ce0
// 007db9e3  684c0a9000           push 0x900a4c
// 007db9e8  53                   push ebx
// 007db9e9  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 007db9ef  e8ec52fbff           call 0x790ce0
// 007db9f4  8d4c2430             lea ecx, [esp + 0x30]
// 007db9f8  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 007db9fe  c68424a001000000     mov byte ptr [esp + 0x1a0], 0
// 007dba06  e8d54ef9ff           call 0x7708e0
// 007dba0b  8d4c241c             lea ecx, [esp + 0x1c]
// 007dba0f  c78424a0010000ffffffff mov dword ptr [esp + 0x1a0], 0xffffffff
// 007dba1a  e8d5040700           call 0x84bef4
// 007dba1f  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 007dba26  64890d00000000       mov dword ptr fs:[0], ecx
// 007dba2d  59                   pop ecx
// 007dba2e  5f                   pop edi
// 007dba2f  5e                   pop esi
// 007dba30  5d                   pop ebp
// 007dba31  5b                   pop ebx
// 007dba32  8b8c2480010000       mov ecx, dword ptr [esp + 0x180]
// 007dba39  33cc                 xor ecx, esp
// 007dba3b  e83aebf3ff           call 0x71a57a
// 007dba40  81c490010000         add esp, 0x190
// 007dba46  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\DockingPane\XTPDockingPanePaintManager.cpp