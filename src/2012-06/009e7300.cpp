// roc 2012-06 009e7300  unit: CXTPStatusBarPane  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7300
//
// 009e7300  6aff                 push -1
// 009e7302  681011ae00           push 0xae1110
// 009e7307  64a100000000         mov eax, dword ptr fs:[0]
// 009e730d  50                   push eax
// 009e730e  83ec2c               sub esp, 0x2c
// 009e7311  55                   push ebp
// 009e7312  56                   push esi
// 009e7313  57                   push edi
// 009e7314  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e7319  33c4                 xor eax, esp
// 009e731b  50                   push eax
// 009e731c  8d44243c             lea eax, [esp + 0x3c]
// 009e7320  64a300000000         mov dword ptr fs:[0], eax
// 009e7326  8bf1                 mov esi, ecx
// 009e7328  8b4650               mov eax, dword ptr [esi + 0x50]
// 009e732b  50                   push eax
// 009e732c  8d4c242c             lea ecx, [esp + 0x2c]
// 009e7330  e867bcf9ff           call 0x982f9c
// 009e7335  8b16                 mov edx, dword ptr [esi]
// 009e7337  8b4258               mov eax, dword ptr [edx + 0x58]
// 009e733a  8bce                 mov ecx, esi
// 009e733c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 009e7344  ffd0                 call eax
// 009e7346  50                   push eax
// 009e7347  8d4c242c             lea ecx, [esp + 0x2c]
// 009e734b  51                   push ecx
// 009e734c  8d4c2420             lea ecx, [esp + 0x20]
// 009e7350  e8dbe1feff           call 0x9d5530
// 009e7355  8d542410             lea edx, [esp + 0x10]
// 009e7359  8d7e30               lea edi, [esi + 0x30]
// 009e735c  52                   push edx
// 009e735d  8bcf                 mov ecx, edi
// 009e735f  c644244801           mov byte ptr [esp + 0x48], 1
// 009e7364  ff155846b200         call dword ptr [0xb24658]
// 009e736a  50                   push eax
// 009e736b  8bcf                 mov ecx, edi
// 009e736d  ff159847b200         call dword ptr [0xb24798]
// 009e7373  50                   push eax
// 009e7374  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009e7378  50                   push eax
// 009e7379  ff154021b200         call dword ptr [0xb22140]
// 009e737f  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 009e7382  034e68               add ecx, dword ptr [esi + 0x68]
// 009e7385  8b16                 mov edx, dword ptr [esi]
// 009e7387  034c2410             add ecx, dword ptr [esp + 0x10]
// 009e738b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 009e738e  894e24               mov dword ptr [esi + 0x24], ecx
// 009e7391  8bce                 mov ecx, esi
// 009e7393  ffd0                 call eax
// 009e7395  8be8                 mov ebp, eax
// 009e7397  85ed                 test ebp, ebp
// 009e7399  7421                 je 0x9e73bc
// 009e739b  8bcf                 mov ecx, edi
// 009e739d  ff156046b200         call dword ptr [0xb24660]
// 009e73a3  0fb6f8               movzx edi, al
// 009e73a6  f7df                 neg edi
// 009e73a8  1bff                 sbb edi, edi
// 009e73aa  83e7fe               and edi, 0xfffffffe
// 009e73ad  8bcd                 mov ecx, ebp
// 009e73af  83c702               add edi, 2
// 009e73b2  e8a9420400           call 0xa2b660
// 009e73b7  03c7                 add eax, edi
// 009e73b9  014624               add dword ptr [esi + 0x24], eax
// 009e73bc  8d4c2418             lea ecx, [esp + 0x18]
// 009e73c0  c644244400           mov byte ptr [esp + 0x44], 0
// 009e73c5  e8e6e1feff           call 0x9d55b0
// 009e73ca  8d4c2428             lea ecx, [esp + 0x28]
// 009e73ce  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 009e73d6  e8bbbbf9ff           call 0x982f96
// 009e73db  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009e73df  64890d00000000       mov dword ptr fs:[0], ecx
// 009e73e6  59                   pop ecx
// 009e73e7  5f                   pop edi
// 009e73e8  5e                   pop esi
// 009e73e9  5d                   pop ebp
// 009e73ea  83c438               add esp, 0x38
// 009e73ed  c3                   ret 
// copied from an identical function in another client (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp