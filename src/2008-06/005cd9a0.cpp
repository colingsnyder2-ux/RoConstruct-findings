// roc 2008-06 005cd9a0  unit: RBX::VCamera::?$FactoryProduct  size: 452 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd9a0
//
// 005cd9a0  6aff                 push -1
// 005cd9a2  687d547d00           push 0x7d547d
// 005cd9a7  64a100000000         mov eax, dword ptr fs:[0]
// 005cd9ad  50                   push eax
// 005cd9ae  64892500000000       mov dword ptr fs:[0], esp
// 005cd9b5  83ec50               sub esp, 0x50
// 005cd9b8  53                   push ebx
// 005cd9b9  55                   push ebp
// 005cd9ba  56                   push esi
// 005cd9bb  8bf1                 mov esi, ecx
// 005cd9bd  57                   push edi
// 005cd9be  89742410             mov dword ptr [esp + 0x10], esi
// 005cd9c2  e8f9feffff           call 0x5cd8c0
// 005cd9c7  8dae30010000         lea ebp, [esi + 0x130]
// 005cd9cd  33db                 xor ebx, ebx
// 005cd9cf  8bcd                 mov ecx, ebp
// 005cd9d1  895c2468             mov dword ptr [esp + 0x68], ebx
// 005cd9d5  c70654a68300         mov dword ptr [esi], 0x83a654
// 005cd9db  c7461048a68300       mov dword ptr [esi + 0x10], 0x83a648
// 005cd9e2  c7461440a68300       mov dword ptr [esi + 0x14], 0x83a640
// 005cd9e9  c7462038a68300       mov dword ptr [esi + 0x20], 0x83a638
// 005cd9f0  c7462428a68300       mov dword ptr [esi + 0x24], 0x83a628
// 005cd9f7  c7464418a68300       mov dword ptr [esi + 0x44], 0x83a618
// 005cd9fe  c7466408a68300       mov dword ptr [esi + 0x64], 0x83a608
// 005cda05  c78684000000f8a58300 mov dword ptr [esi + 0x84], 0x83a5f8
// 005cda0f  c786a4000000e8a58300 mov dword ptr [esi + 0xa4], 0x83a5e8
// 005cda19  c786c4000000d8a58300 mov dword ptr [esi + 0xc4], 0x83a5d8
// 005cda23  e89830f4ff           call 0x510ac0
// 005cda28  8d8e74010000         lea ecx, [esi + 0x174]
// 005cda2e  c644246801           mov byte ptr [esp + 0x68], 1
// 005cda33  e898a8eaff           call 0x4782d0
// 005cda38  8dbea4010000         lea edi, [esi + 0x1a4]
// 005cda3e  e8dd63f4ff           call 0x513e20
// 005cda43  50                   push eax
// 005cda44  8bcf                 mov ecx, edi
// 005cda46  e8d557f4ff           call 0x513220
// 005cda4b  d9ee                 fldz 
// 005cda4d  d95724               fst dword ptr [edi + 0x24]
// 005cda50  d95f28               fstp dword ptr [edi + 0x28]
// 005cda53  d90544798300         fld dword ptr [0x837944]
// 005cda59  d95f2c               fstp dword ptr [edi + 0x2c]
// 005cda5c  899ed4010000         mov dword ptr [esi + 0x1d4], ebx
// 005cda62  c786d801000001000000 mov dword ptr [esi + 0x1d8], 1
// 005cda6c  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 005cda72  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 005cda78  68e4118100           push 0x8111e4
// 005cda7d  8d4c2418             lea ecx, [esp + 0x18]
// 005cda81  c644246c02           mov byte ptr [esp + 0x6c], 2
// 005cda86  889ee4010000         mov byte ptr [esi + 0x1e4], bl
// 005cda8c  ff1558248000         call dword ptr [0x802458]
// 005cda92  8d442414             lea eax, [esp + 0x14]
// 005cda96  50                   push eax
// 005cda97  8bce                 mov ecx, esi
// 005cda99  c644246c03           mov byte ptr [esp + 0x6c], 3
// 005cda9e  e8edd4f8ff           call 0x55af90
// 005cdaa3  8d4c2414             lea ecx, [esp + 0x14]
// 005cdaa7  c644246802           mov byte ptr [esp + 0x68], 2
// 005cdaac  ff1568248000         call dword ptr [0x802468]
// 005cdab2  d905d0a58300         fld dword ptr [0x83a5d0]
// 005cdab8  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 005cdabe  51                   push ecx
// 005cdabf  d905e06d8200         fld dword ptr [0x826de0]
// 005cdac5  8bcd                 mov ecx, ebp
// 005cdac7  d99e40010000         fstp dword ptr [esi + 0x140]
// 005cdacd  d905cca58300         fld dword ptr [0x83a5cc]
// 005cdad3  d91c24               fstp dword ptr [esp]
// 005cdad6  e8352df4ff           call 0x510810
// 005cdadb  e84063f4ff           call 0x513e20
// 005cdae0  50                   push eax
// 005cdae1  8d4c2434             lea ecx, [esp + 0x34]
// 005cdae5  e83657f4ff           call 0x513220
// 005cdaea  d9ee                 fldz 
// 005cdaec  f60550f0960001       test byte ptr [0x96f050], 1
// 005cdaf3  d9542454             fst dword ptr [esp + 0x54]
// 005cdaf7  d905bccc8100         fld dword ptr [0x81ccbc]
// 005cdafd  d9542458             fst dword ptr [esp + 0x58]
// 005cdb01  d95c245c             fstp dword ptr [esp + 0x5c]
// 005cdb05  751b                 jne 0x5cdb22
// 005cdb07  830d50f0960001       or dword ptr [0x96f050], 1
// 005cdb0e  d91544f09600         fst dword ptr [0x96f044]
// 005cdb14  d91548f09600         fst dword ptr [0x96f048]
// 005cdb1a  d91d4cf09600         fstp dword ptr [0x96f04c]
// 005cdb20  eb02                 jmp 0x5cdb24
// 005cdb22  ddd8                 fstp st(0)
// 005cdb24  6844f09600           push 0x96f044
// 005cdb29  8d4c2434             lea ecx, [esp + 0x34]
// 005cdb2d  e8eeb2f4ff           call 0x518e20
// 005cdb32  8d4c2430             lea ecx, [esp + 0x30]
// 005cdb36  51                   push ecx
// 005cdb37  e874fe0000           call 0x5dd9b0
// 005cdb3c  83c404               add esp, 4
// 005cdb3f  84c0                 test al, al
// 005cdb41  740c                 je 0x5cdb4f
// 005cdb43  8d542430             lea edx, [esp + 0x30]
// 005cdb47  52                   push edx
// 005cdb48  8bcd                 mov ecx, ebp
// 005cdb4a  e8912cf4ff           call 0x5107e0
// 005cdb4f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005cdb53  5f                   pop edi
// 005cdb54  8bc6                 mov eax, esi
// 005cdb56  5e                   pop esi
// 005cdb57  5d                   pop ebp
// 005cdb58  5b                   pop ebx
// 005cdb59  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdb60  83c45c               add esp, 0x5c
// 005cdb63  c3                   ret 
// library rbxgs/roc_unit_435aad3f0f5b5fb5.cpp (function ??0Camera@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_435aad3f0f5b5fb5.cpp
