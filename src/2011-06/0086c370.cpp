// roc 2011-06 0086c370  unit: CXTPStatusBarPane  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c370
//
// 0086c370  6aff                 push -1
// 0086c372  68e073a000           push 0xa073e0
// 0086c377  64a100000000         mov eax, dword ptr fs:[0]
// 0086c37d  50                   push eax
// 0086c37e  83ec2c               sub esp, 0x2c
// 0086c381  55                   push ebp
// 0086c382  56                   push esi
// 0086c383  57                   push edi
// 0086c384  a12058c900           mov eax, dword ptr [0xc95820]
// 0086c389  33c4                 xor eax, esp
// 0086c38b  50                   push eax
// 0086c38c  8d44243c             lea eax, [esp + 0x3c]
// 0086c390  64a300000000         mov dword ptr fs:[0], eax
// 0086c396  8bf1                 mov esi, ecx
// 0086c398  8b4650               mov eax, dword ptr [esi + 0x50]
// 0086c39b  50                   push eax
// 0086c39c  8d4c242c             lea ecx, [esp + 0x2c]
// 0086c3a0  e883ebf9ff           call 0x80af28
// 0086c3a5  8b16                 mov edx, dword ptr [esi]
// 0086c3a7  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086c3aa  8bce                 mov ecx, esi
// 0086c3ac  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0086c3b4  ffd0                 call eax
// 0086c3b6  50                   push eax
// 0086c3b7  8d4c242c             lea ecx, [esp + 0x2c]
// 0086c3bb  51                   push ecx
// 0086c3bc  8d4c2420             lea ecx, [esp + 0x20]
// 0086c3c0  e85b0dffff           call 0x85d120
// 0086c3c5  8d542410             lea edx, [esp + 0x10]
// 0086c3c9  8d7e30               lea edi, [esi + 0x30]
// 0086c3cc  52                   push edx
// 0086c3cd  8bcf                 mov ecx, edi
// 0086c3cf  c644244801           mov byte ptr [esp + 0x48], 1
// 0086c3d4  ff15a826a400         call dword ptr [0xa426a8]
// 0086c3da  50                   push eax
// 0086c3db  8bcf                 mov ecx, edi
// 0086c3dd  ff15c82da400         call dword ptr [0xa42dc8]
// 0086c3e3  50                   push eax
// 0086c3e4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0086c3e8  50                   push eax
// 0086c3e9  ff153801a400         call dword ptr [0xa40138]
// 0086c3ef  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0086c3f2  034e68               add ecx, dword ptr [esi + 0x68]
// 0086c3f5  8b16                 mov edx, dword ptr [esi]
// 0086c3f7  034c2410             add ecx, dword ptr [esp + 0x10]
// 0086c3fb  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0086c3fe  894e24               mov dword ptr [esi + 0x24], ecx
// 0086c401  8bce                 mov ecx, esi
// 0086c403  ffd0                 call eax
// 0086c405  8be8                 mov ebp, eax
// 0086c407  85ed                 test ebp, ebp
// 0086c409  7421                 je 0x86c42c
// 0086c40b  8bcf                 mov ecx, edi
// 0086c40d  ff15b026a400         call dword ptr [0xa426b0]
// 0086c413  0fb6f8               movzx edi, al
// 0086c416  f7df                 neg edi
// 0086c418  1bff                 sbb edi, edi
// 0086c41a  83e7fe               and edi, 0xfffffffe
// 0086c41d  8bcd                 mov ecx, ebp
// 0086c41f  83c702               add edi, 2
// 0086c422  e869cfffff           call 0x869390
// 0086c427  03c7                 add eax, edi
// 0086c429  014624               add dword ptr [esi + 0x24], eax
// 0086c42c  8d4c2418             lea ecx, [esp + 0x18]
// 0086c430  c644244400           mov byte ptr [esp + 0x44], 0
// 0086c435  e8660dffff           call 0x85d1a0
// 0086c43a  8d4c2428             lea ecx, [esp + 0x28]
// 0086c43e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0086c446  e8d7eaf9ff           call 0x80af22
// 0086c44b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0086c44f  64890d00000000       mov dword ptr fs:[0], ecx
// 0086c456  59                   pop ecx
// 0086c457  5f                   pop edi
// 0086c458  5e                   pop esi
// 0086c459  5d                   pop ebp
// 0086c45a  83c438               add esp, 0x38
// 0086c45d  c3                   ret 
// copied from an identical function in another client (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp