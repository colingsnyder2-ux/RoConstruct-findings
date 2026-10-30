// roc 2009-12 0085ac10  unit: CXTPStatusBarPane  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ac10
//
// 0085ac10  6aff                 push -1
// 0085ac12  68d0e29500           push 0x95e2d0
// 0085ac17  64a100000000         mov eax, dword ptr fs:[0]
// 0085ac1d  50                   push eax
// 0085ac1e  83ec2c               sub esp, 0x2c
// 0085ac21  55                   push ebp
// 0085ac22  56                   push esi
// 0085ac23  57                   push edi
// 0085ac24  a10052b600           mov eax, dword ptr [0xb65200]
// 0085ac29  33c4                 xor eax, esp
// 0085ac2b  50                   push eax
// 0085ac2c  8d44243c             lea eax, [esp + 0x3c]
// 0085ac30  64a300000000         mov dword ptr fs:[0], eax
// 0085ac36  8bf1                 mov esi, ecx
// 0085ac38  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085ac3b  50                   push eax
// 0085ac3c  8d4c242c             lea ecx, [esp + 0x2c]
// 0085ac40  e8919af9ff           call 0x7f46d6
// 0085ac45  8b16                 mov edx, dword ptr [esi]
// 0085ac47  8b4258               mov eax, dword ptr [edx + 0x58]
// 0085ac4a  8bce                 mov ecx, esi
// 0085ac4c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0085ac54  ffd0                 call eax
// 0085ac56  50                   push eax
// 0085ac57  8d4c242c             lea ecx, [esp + 0x2c]
// 0085ac5b  51                   push ecx
// 0085ac5c  8d4c2420             lea ecx, [esp + 0x20]
// 0085ac60  e8fb09ffff           call 0x84b660
// 0085ac65  8d542410             lea edx, [esp + 0x10]
// 0085ac69  8d7e30               lea edi, [esi + 0x30]
// 0085ac6c  52                   push edx
// 0085ac6d  8bcf                 mov ecx, edi
// 0085ac6f  c644244801           mov byte ptr [esp + 0x48], 1
// 0085ac74  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0085ac7a  50                   push eax
// 0085ac7b  8bcf                 mov ecx, edi
// 0085ac7d  ff1580de9800         call dword ptr [0x98de80]
// 0085ac83  50                   push eax
// 0085ac84  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0085ac88  50                   push eax
// 0085ac89  ff156cb19800         call dword ptr [0x98b16c]
// 0085ac8f  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0085ac92  034e68               add ecx, dword ptr [esi + 0x68]
// 0085ac95  8b16                 mov edx, dword ptr [esi]
// 0085ac97  034c2410             add ecx, dword ptr [esp + 0x10]
// 0085ac9b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0085ac9e  894e24               mov dword ptr [esi + 0x24], ecx
// 0085aca1  8bce                 mov ecx, esi
// 0085aca3  ffd0                 call eax
// 0085aca5  8be8                 mov ebp, eax
// 0085aca7  85ed                 test ebp, ebp
// 0085aca9  7421                 je 0x85accc
// 0085acab  8bcf                 mov ecx, edi
// 0085acad  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0085acb3  0fb6f8               movzx edi, al
// 0085acb6  f7df                 neg edi
// 0085acb8  1bff                 sbb edi, edi
// 0085acba  83e7fe               and edi, 0xfffffffe
// 0085acbd  8bcd                 mov ecx, ebp
// 0085acbf  83c702               add edi, 2
// 0085acc2  e8b92fffff           call 0x84dc80
// 0085acc7  03c7                 add eax, edi
// 0085acc9  014624               add dword ptr [esi + 0x24], eax
// 0085accc  8d4c2418             lea ecx, [esp + 0x18]
// 0085acd0  c644244400           mov byte ptr [esp + 0x44], 0
// 0085acd5  e8060affff           call 0x84b6e0
// 0085acda  8d4c2428             lea ecx, [esp + 0x28]
// 0085acde  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0085ace6  e8e599f9ff           call 0x7f46d0
// 0085aceb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085acef  64890d00000000       mov dword ptr fs:[0], ecx
// 0085acf6  59                   pop ecx
// 0085acf7  5f                   pop edi
// 0085acf8  5e                   pop esi
// 0085acf9  5d                   pop ebp
// 0085acfa  83c438               add esp, 0x38
// 0085acfd  c3                   ret 
// copied from an identical function in another client (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp