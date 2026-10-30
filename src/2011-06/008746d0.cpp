// roc 2011-06 008746d0  unit: CXTPToolTipContext  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008746d0
//
// 008746d0  53                   push ebx
// 008746d1  55                   push ebp
// 008746d2  56                   push esi
// 008746d3  8bf1                 mov esi, ecx
// 008746d5  57                   push edi
// 008746d6  8d7e70               lea edi, [esi + 0x70]
// 008746d9  8bcf                 mov ecx, edi
// 008746db  ff155c27a400         call dword ptr [0xa4275c]
// 008746e1  8b1dac19a400         mov ebx, dword ptr [0xa419ac]
// 008746e7  33ed                 xor ebp, ebp
// 008746e9  8d470c               lea eax, [edi + 0xc]
// 008746ec  50                   push eax
// 008746ed  896f08               mov dword ptr [edi + 8], ebp
// 008746f0  896f20               mov dword ptr [edi + 0x20], ebp
// 008746f3  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 008746fa  896f1c               mov dword ptr [edi + 0x1c], ebp
// 008746fd  ffd3                 call ebx
// 008746ff  83c728               add edi, 0x28
// 00874702  57                   push edi
// 00874703  ffd3                 call ebx
// 00874705  8dbea8000000         lea edi, [esi + 0xa8]
// 0087470b  8bcf                 mov ecx, edi
// 0087470d  ff155c27a400         call dword ptr [0xa4275c]
// 00874713  8d4f0c               lea ecx, [edi + 0xc]
// 00874716  51                   push ecx
// 00874717  896f08               mov dword ptr [edi + 8], ebp
// 0087471a  896f20               mov dword ptr [edi + 0x20], ebp
// 0087471d  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00874724  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00874727  ffd3                 call ebx
// 00874729  83c728               add edi, 0x28
// 0087472c  57                   push edi
// 0087472d  ffd3                 call ebx
// 0087472f  8dbee0000000         lea edi, [esi + 0xe0]
// 00874735  8bcf                 mov ecx, edi
// 00874737  ff155c27a400         call dword ptr [0xa4275c]
// 0087473d  8d570c               lea edx, [edi + 0xc]
// 00874740  52                   push edx
// 00874741  896f08               mov dword ptr [edi + 8], ebp
// 00874744  896f20               mov dword ptr [edi + 0x20], ebp
// 00874747  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 0087474e  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00874751  ffd3                 call ebx
// 00874753  83c728               add edi, 0x28
// 00874756  57                   push edi
// 00874757  ffd3                 call ebx
// 00874759  33ff                 xor edi, edi
// 0087475b  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 0087475e  7e2a                 jle 0x87478a
// 00874760  3bfd                 cmp edi, ebp
// 00874762  7c5e                 jl 0x8747c2
// 00874764  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00874767  7d59                 jge 0x8747c2
// 00874769  8b4658               mov eax, dword ptr [esi + 0x58]
// 0087476c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0087476f  3bdd                 cmp ebx, ebp
// 00874771  7411                 je 0x874784
// 00874773  8bcb                 mov ecx, ebx
// 00874775  ff15082ea400         call dword ptr [0xa42e08]
// 0087477b  53                   push ebx
// 0087477c  e8d758f9ff           call 0x80a058
// 00874781  83c404               add esp, 4
// 00874784  47                   inc edi
// 00874785  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00874788  7cd6                 jl 0x874760
// 0087478a  6aff                 push -1
// 0087478c  55                   push ebp
// 0087478d  8d4e54               lea ecx, [esi + 0x54]
// 00874790  e8aba3fcff           call 0x83eb40
// 00874795  8d8e28010000         lea ecx, [esi + 0x128]
// 0087479b  ff155c27a400         call dword ptr [0xa4275c]
// 008747a1  55                   push ebp
// 008747a2  8bce                 mov ecx, esi
// 008747a4  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 008747aa  e8c1f0ffff           call 0x873870
// 008747af  55                   push ebp
// 008747b0  8bce                 mov ecx, esi
// 008747b2  e889fdffff           call 0x874540
// 008747b7  5f                   pop edi
// 008747b8  8bce                 mov ecx, esi
// 008747ba  5e                   pop esi
// 008747bb  5d                   pop ebp
// 008747bc  5b                   pop ebx
// 008747bd  e95e63f9ff           jmp 0x80ab20
// 008747c2  e8435bf9ff           call 0x80a30a
// copied from an identical function in another client (function ?OnDestroy@CXTPToolTipContextToolTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp