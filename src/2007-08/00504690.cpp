// roc 2007-08 00504690  unit: G3D::Log  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504690
//
// 00504690  6aff                 push -1
// 00504692  68a9427400           push 0x7442a9
// 00504697  64a100000000         mov eax, dword ptr fs:[0]
// 0050469d  50                   push eax
// 0050469e  83ec20               sub esp, 0x20
// 005046a1  a188518b00           mov eax, dword ptr [0x8b5188]
// 005046a6  33c4                 xor eax, esp
// 005046a8  8944241c             mov dword ptr [esp + 0x1c], eax
// 005046ac  56                   push esi
// 005046ad  a188518b00           mov eax, dword ptr [0x8b5188]
// 005046b2  33c4                 xor eax, esp
// 005046b4  50                   push eax
// 005046b5  8d442428             lea eax, [esp + 0x28]
// 005046b9  64a300000000         mov dword ptr fs:[0], eax
// 005046bf  8b442438             mov eax, dword ptr [esp + 0x38]
// 005046c3  50                   push eax
// 005046c4  8d44240c             lea eax, [esp + 0xc]
// 005046c8  50                   push eax
// 005046c9  e8523f0000           call 0x508620
// 005046ce  8b35f8e57700         mov esi, dword ptr [0x77e5f8]
// 005046d4  8d4c2410             lea ecx, [esp + 0x10]
// 005046d8  685c047a00           push 0x7a045c
// 005046dd  51                   push ecx
// 005046de  c744244000000000     mov dword ptr [esp + 0x40], 0
// 005046e6  ffd6                 call esi
// 005046e8  83c410               add esp, 0x10
// 005046eb  84c0                 test al, al
// 005046ed  0f852d010000         jne 0x504820
// 005046f3  8d542408             lea edx, [esp + 8]
// 005046f7  6854047a00           push 0x7a0454
// 005046fc  52                   push edx
// 005046fd  ffd6                 call esi
// 005046ff  83c408               add esp, 8
// 00504702  84c0                 test al, al
// 00504704  0f8516010000         jne 0x504820
// 0050470a  8d442408             lea eax, [esp + 8]
// 0050470e  6850047a00           push 0x7a0450
// 00504713  50                   push eax
// 00504714  ffd6                 call esi
// 00504716  83c408               add esp, 8
// 00504719  84c0                 test al, al
// 0050471b  8d4c2408             lea ecx, [esp + 8]
// 0050471f  7418                 je 0x504739
// 00504721  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00504729  ff15ace67700         call dword ptr [0x77e6ac]
// 0050472f  b802000000           mov eax, 2
// 00504734  e9fb000000           jmp 0x504834
// 00504739  684c047a00           push 0x7a044c
// 0050473e  51                   push ecx
// 0050473f  ffd6                 call esi
// 00504741  83c408               add esp, 8
// 00504744  84c0                 test al, al
// 00504746  741c                 je 0x504764
// 00504748  8d4c2408             lea ecx, [esp + 8]
// 0050474c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00504754  ff15ace67700         call dword ptr [0x77e6ac]
// 0050475a  b801000000           mov eax, 1
// 0050475f  e9d0000000           jmp 0x504834
// 00504764  8d542408             lea edx, [esp + 8]
// 00504768  6848047a00           push 0x7a0448
// 0050476d  52                   push edx
// 0050476e  ffd6                 call esi
// 00504770  83c408               add esp, 8
// 00504773  84c0                 test al, al
// 00504775  741c                 je 0x504793
// 00504777  8d4c2408             lea ecx, [esp + 8]
// 0050477b  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00504783  ff15ace67700         call dword ptr [0x77e6ac]
// 00504789  b803000000           mov eax, 3
// 0050478e  e9a1000000           jmp 0x504834
// 00504793  8d442408             lea eax, [esp + 8]
// 00504797  6844047a00           push 0x7a0444
// 0050479c  50                   push eax
// 0050479d  ffd6                 call esi
// 0050479f  83c408               add esp, 8
// 005047a2  84c0                 test al, al
// 005047a4  8d4c2408             lea ecx, [esp + 8]
// 005047a8  7415                 je 0x5047bf
// 005047aa  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005047b2  ff15ace67700         call dword ptr [0x77e6ac]
// 005047b8  b804000000           mov eax, 4
// 005047bd  eb75                 jmp 0x504834
// 005047bf  6840ab7800           push 0x78ab40
// 005047c4  51                   push ecx
// 005047c5  ffd6                 call esi
// 005047c7  83c408               add esp, 8
// 005047ca  84c0                 test al, al
// 005047cc  7419                 je 0x5047e7
// 005047ce  8d4c2408             lea ecx, [esp + 8]
// 005047d2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005047da  ff15ace67700         call dword ptr [0x77e6ac]
// 005047e0  b805000000           mov eax, 5
// 005047e5  eb4d                 jmp 0x504834
// 005047e7  8d542408             lea edx, [esp + 8]
// 005047eb  6840047a00           push 0x7a0440
// 005047f0  52                   push edx
// 005047f1  ffd6                 call esi
// 005047f3  83c408               add esp, 8
// 005047f6  84c0                 test al, al
// 005047f8  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00504800  8d4c2408             lea ecx, [esp + 8]
// 00504804  740d                 je 0x504813
// 00504806  ff15ace67700         call dword ptr [0x77e6ac]
// 0050480c  b807000000           mov eax, 7
// 00504811  eb21                 jmp 0x504834
// 00504813  ff15ace67700         call dword ptr [0x77e6ac]
// 00504819  b809000000           mov eax, 9
// 0050481e  eb14                 jmp 0x504834
// 00504820  8d4c2408             lea ecx, [esp + 8]
// 00504824  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0050482c  ff15ace67700         call dword ptr [0x77e6ac]
// 00504832  33c0                 xor eax, eax
// 00504834  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00504838  64890d00000000       mov dword ptr fs:[0], ecx
// 0050483f  59                   pop ecx
// 00504840  5e                   pop esi
// 00504841  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00504845  33cc                 xor ecx, esp
// 00504847  e8d2c11200           call 0x630a1e
// 0050484c  83c42c               add esp, 0x2c
// 0050484f  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?stringToFormat@GImage@G3D@@SA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
