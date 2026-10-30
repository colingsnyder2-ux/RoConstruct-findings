// roc 2009-12 0086eb70  unit: CXTPResourceManager  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086eb70
//
// 0086eb70  6aff                 push -1
// 0086eb72  6858fa9500           push 0x95fa58
// 0086eb77  64a100000000         mov eax, dword ptr fs:[0]
// 0086eb7d  50                   push eax
// 0086eb7e  83ec08               sub esp, 8
// 0086eb81  53                   push ebx
// 0086eb82  55                   push ebp
// 0086eb83  56                   push esi
// 0086eb84  57                   push edi
// 0086eb85  a10052b600           mov eax, dword ptr [0xb65200]
// 0086eb8a  33c4                 xor eax, esp
// 0086eb8c  50                   push eax
// 0086eb8d  8d44241c             lea eax, [esp + 0x1c]
// 0086eb91  64a300000000         mov dword ptr fs:[0], eax
// 0086eb97  e824f5ffff           call 0x86e0c0
// 0086eb9c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0086eba0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0086eba4  8b1d6cca9800         mov ebx, dword ptr [0x98ca6c]
// 0086ebaa  85c0                 test eax, eax
// 0086ebac  7457                 je 0x86ec05
// 0086ebae  0fb7f5               movzx esi, bp
// 0086ebb1  6a02                 push 2
// 0086ebb3  56                   push esi
// 0086ebb4  50                   push eax
// 0086ebb5  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086ebbb  85c0                 test eax, eax
// 0086ebbd  7446                 je 0x86ec05
// 0086ebbf  8d4c2414             lea ecx, [esp + 0x14]
// 0086ebc3  e838feffff           call 0x86ea00
// 0086ebc8  56                   push esi
// 0086ebc9  6a02                 push 2
// 0086ebcb  56                   push esi
// 0086ebcc  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0086ebd4  e80556f8ff           call 0x7f41de
// 0086ebd9  50                   push eax
// 0086ebda  ffd3                 call ebx
// 0086ebdc  50                   push eax
// 0086ebdd  8bcf                 mov ecx, edi
// 0086ebdf  e84652f8ff           call 0x7f3e2a
// 0086ebe4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0086ebec  8d4c2414             lea ecx, [esp + 0x14]
// 0086ebf0  85c0                 test eax, eax
// 0086ebf2  740c                 je 0x86ec00
// 0086ebf4  e847faffff           call 0x86e640
// 0086ebf9  b801000000           mov eax, 1
// 0086ebfe  eb1c                 jmp 0x86ec1c
// 0086ec00  e83bfaffff           call 0x86e640
// 0086ec05  0fb7c5               movzx eax, bp
// 0086ec08  50                   push eax
// 0086ec09  6a02                 push 2
// 0086ec0b  50                   push eax
// 0086ec0c  e8cd55f8ff           call 0x7f41de
// 0086ec11  50                   push eax
// 0086ec12  ffd3                 call ebx
// 0086ec14  50                   push eax
// 0086ec15  8bcf                 mov ecx, edi
// 0086ec17  e80e52f8ff           call 0x7f3e2a
// 0086ec1c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086ec20  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ec27  59                   pop ecx
// 0086ec28  5f                   pop edi
// 0086ec29  5e                   pop esi
// 0086ec2a  5d                   pop ebp
// 0086ec2b  5b                   pop ebx
// 0086ec2c  83c414               add esp, 0x14
// 0086ec2f  c20800               ret 8
// copied from an identical function in another client (function ?LoadBitmapA@CXTPResourceManager@@UAEHPAVCBitmap@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp