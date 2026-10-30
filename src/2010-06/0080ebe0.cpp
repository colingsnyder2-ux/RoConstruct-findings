// roc 2010-06 0080ebe0  unit: CXTPStatusBarPane  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080ebe0
//
// 0080ebe0  6aff                 push -1
// 0080ebe2  6800429b00           push 0x9b4200
// 0080ebe7  64a100000000         mov eax, dword ptr fs:[0]
// 0080ebed  50                   push eax
// 0080ebee  83ec2c               sub esp, 0x2c
// 0080ebf1  55                   push ebp
// 0080ebf2  56                   push esi
// 0080ebf3  57                   push edi
// 0080ebf4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0080ebf9  33c4                 xor eax, esp
// 0080ebfb  50                   push eax
// 0080ebfc  8d44243c             lea eax, [esp + 0x3c]
// 0080ec00  64a300000000         mov dword ptr fs:[0], eax
// 0080ec06  8bf1                 mov esi, ecx
// 0080ec08  8b4650               mov eax, dword ptr [esi + 0x50]
// 0080ec0b  50                   push eax
// 0080ec0c  8d4c242c             lea ecx, [esp + 0x2c]
// 0080ec10  e81f9cf9ff           call 0x7a8834
// 0080ec15  8b16                 mov edx, dword ptr [esi]
// 0080ec17  8b4258               mov eax, dword ptr [edx + 0x58]
// 0080ec1a  8bce                 mov ecx, esi
// 0080ec1c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0080ec24  ffd0                 call eax
// 0080ec26  50                   push eax
// 0080ec27  8d4c242c             lea ecx, [esp + 0x2c]
// 0080ec2b  51                   push ecx
// 0080ec2c  8d4c2420             lea ecx, [esp + 0x20]
// 0080ec30  e86b0affff           call 0x7ff6a0
// 0080ec35  8d542410             lea edx, [esp + 0x10]
// 0080ec39  8d7e30               lea edi, [esi + 0x30]
// 0080ec3c  52                   push edx
// 0080ec3d  8bcf                 mov ecx, edi
// 0080ec3f  c644244801           mov byte ptr [esp + 0x48], 1
// 0080ec44  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0080ec4a  50                   push eax
// 0080ec4b  8bcf                 mov ecx, edi
// 0080ec4d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0080ec53  50                   push eax
// 0080ec54  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080ec58  50                   push eax
// 0080ec59  ff1594a19e00         call dword ptr [0x9ea194]
// 0080ec5f  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0080ec62  034e68               add ecx, dword ptr [esi + 0x68]
// 0080ec65  8b16                 mov edx, dword ptr [esi]
// 0080ec67  034c2410             add ecx, dword ptr [esp + 0x10]
// 0080ec6b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0080ec6e  894e24               mov dword ptr [esi + 0x24], ecx
// 0080ec71  8bce                 mov ecx, esi
// 0080ec73  ffd0                 call eax
// 0080ec75  8be8                 mov ebp, eax
// 0080ec77  85ed                 test ebp, ebp
// 0080ec79  7421                 je 0x80ec9c
// 0080ec7b  8bcf                 mov ecx, edi
// 0080ec7d  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0080ec83  0fb6f8               movzx edi, al
// 0080ec86  f7df                 neg edi
// 0080ec88  1bff                 sbb edi, edi
// 0080ec8a  83e7fe               and edi, 0xfffffffe
// 0080ec8d  8bcd                 mov ecx, ebp
// 0080ec8f  83c702               add edi, 2
// 0080ec92  e809f5fbff           call 0x7ce1a0
// 0080ec97  03c7                 add eax, edi
// 0080ec99  014624               add dword ptr [esi + 0x24], eax
// 0080ec9c  8d4c2418             lea ecx, [esp + 0x18]
// 0080eca0  c644244400           mov byte ptr [esp + 0x44], 0
// 0080eca5  e8760affff           call 0x7ff720
// 0080ecaa  8d4c2428             lea ecx, [esp + 0x28]
// 0080ecae  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0080ecb6  e8739bf9ff           call 0x7a882e
// 0080ecbb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080ecbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ecc6  59                   pop ecx
// 0080ecc7  5f                   pop edi
// 0080ecc8  5e                   pop esi
// 0080ecc9  5d                   pop ebp
// 0080ecca  83c438               add esp, 0x38
// 0080eccd  c3                   ret 
// copied from an identical function in another client (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp