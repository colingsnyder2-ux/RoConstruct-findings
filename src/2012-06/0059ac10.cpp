// roc 2012-06 0059ac10  unit: VAuthoringSettings::?$FactoryProduct  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ac10
//
// 0059ac10  83ec34               sub esp, 0x34
// 0059ac13  53                   push ebx
// 0059ac14  55                   push ebp
// 0059ac15  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0059ac19  56                   push esi
// 0059ac1a  57                   push edi
// 0059ac1b  8bf9                 mov edi, ecx
// 0059ac1d  33db                 xor ebx, ebx
// 0059ac1f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059ac23  8d7710               lea esi, [edi + 0x10]
// 0059ac26  8b4604               mov eax, dword ptr [esi + 4]
// 0059ac29  3b4608               cmp eax, dword ptr [esi + 8]
// 0059ac2c  742e                 je 0x59ac5c
// 0059ac2e  8d4c2414             lea ecx, [esp + 0x14]
// 0059ac32  51                   push ecx
// 0059ac33  8bce                 mov ecx, esi
// 0059ac35  83cb01               or ebx, 1
// 0059ac38  e813f9ffff           call 0x59a550
// 0059ac3d  8b4808               mov ecx, dword ptr [eax + 8]
// 0059ac40  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059ac43  81c140420f00         add ecx, 0xf4240
// 0059ac49  83d000               adc eax, 0
// 0059ac4c  3bc5                 cmp eax, ebp
// 0059ac4e  770c                 ja 0x59ac5c
// 0059ac50  7206                 jb 0x59ac58
// 0059ac52  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 0059ac56  7304                 jae 0x59ac5c
// 0059ac58  b001                 mov al, 1
// 0059ac5a  eb02                 jmp 0x59ac5e
// 0059ac5c  32c0                 xor al, al
// 0059ac5e  f6c301               test bl, 1
// 0059ac61  7403                 je 0x59ac66
// 0059ac63  83e3fe               and ebx, 0xfffffffe
// 0059ac66  84c0                 test al, al
// 0059ac68  7425                 je 0x59ac8f
// 0059ac6a  8d542424             lea edx, [esp + 0x24]
// 0059ac6e  52                   push edx
// 0059ac6f  8bce                 mov ecx, esi
// 0059ac71  e8daf8ffff           call 0x59a550
// 0059ac76  8b08                 mov ecx, dword ptr [eax]
// 0059ac78  294f08               sub dword ptr [edi + 8], ecx
// 0059ac7b  8b5004               mov edx, dword ptr [eax + 4]
// 0059ac7e  8d442434             lea eax, [esp + 0x34]
// 0059ac82  19570c               sbb dword ptr [edi + 0xc], edx
// 0059ac85  50                   push eax
// 0059ac86  8bce                 mov ecx, esi
// 0059ac88  e823f9ffff           call 0x59a5b0
// 0059ac8d  eb97                 jmp 0x59ac26
// 0059ac8f  5f                   pop edi
// 0059ac90  5e                   pop esi
// 0059ac91  5d                   pop ebp
// 0059ac92  5b                   pop ebx
// 0059ac93  83c434               add esp, 0x34
// 0059ac96  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?ClearExpired1@BPSTracker@RakNet@@QAEX_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
