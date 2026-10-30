// roc 2009-06 0077fbb0  unit: CXTPStatusBarPane  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077fbb0
//
// 0077fbb0  6aff                 push -1
// 0077fbb2  6870a08700           push 0x87a070
// 0077fbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0077fbbd  50                   push eax
// 0077fbbe  83ec2c               sub esp, 0x2c
// 0077fbc1  55                   push ebp
// 0077fbc2  56                   push esi
// 0077fbc3  57                   push edi
// 0077fbc4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0077fbc9  33c4                 xor eax, esp
// 0077fbcb  50                   push eax
// 0077fbcc  8d44243c             lea eax, [esp + 0x3c]
// 0077fbd0  64a300000000         mov dword ptr fs:[0], eax
// 0077fbd6  8bf1                 mov esi, ecx
// 0077fbd8  8b4650               mov eax, dword ptr [esi + 0x50]
// 0077fbdb  50                   push eax
// 0077fbdc  8d4c242c             lea ecx, [esp + 0x2c]
// 0077fbe0  e8bd9cf9ff           call 0x7198a2
// 0077fbe5  8b16                 mov edx, dword ptr [esi]
// 0077fbe7  8b4258               mov eax, dword ptr [edx + 0x58]
// 0077fbea  8bce                 mov ecx, esi
// 0077fbec  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0077fbf4  ffd0                 call eax
// 0077fbf6  50                   push eax
// 0077fbf7  8d4c242c             lea ecx, [esp + 0x2c]
// 0077fbfb  51                   push ecx
// 0077fbfc  8d4c2420             lea ecx, [esp + 0x20]
// 0077fc00  e85b0cffff           call 0x770860
// 0077fc05  8d542410             lea edx, [esp + 0x10]
// 0077fc09  8d7e30               lea edi, [esi + 0x30]
// 0077fc0c  52                   push edx
// 0077fc0d  8bcf                 mov ecx, edi
// 0077fc0f  c644244801           mov byte ptr [esp + 0x48], 1
// 0077fc14  ff1554fb8900         call dword ptr [0x89fb54]
// 0077fc1a  50                   push eax
// 0077fc1b  8bcf                 mov ecx, edi
// 0077fc1d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0077fc23  50                   push eax
// 0077fc24  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0077fc28  50                   push eax
// 0077fc29  ff1550e18900         call dword ptr [0x89e150]
// 0077fc2f  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 0077fc32  034e68               add ecx, dword ptr [esi + 0x68]
// 0077fc35  8b16                 mov edx, dword ptr [esi]
// 0077fc37  034c2410             add ecx, dword ptr [esp + 0x10]
// 0077fc3b  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0077fc3e  894e24               mov dword ptr [esi + 0x24], ecx
// 0077fc41  8bce                 mov ecx, esi
// 0077fc43  ffd0                 call eax
// 0077fc45  8be8                 mov ebp, eax
// 0077fc47  85ed                 test ebp, ebp
// 0077fc49  7421                 je 0x77fc6c
// 0077fc4b  8bcf                 mov ecx, edi
// 0077fc4d  ff155cfb8900         call dword ptr [0x89fb5c]
// 0077fc53  0fb6f8               movzx edi, al
// 0077fc56  f7df                 neg edi
// 0077fc58  1bff                 sbb edi, edi
// 0077fc5a  83e7fe               and edi, 0xfffffffe
// 0077fc5d  8bcd                 mov ecx, ebp
// 0077fc5f  83c702               add edi, 2
// 0077fc62  e8b9850400           call 0x7c8220
// 0077fc67  03c7                 add eax, edi
// 0077fc69  014624               add dword ptr [esi + 0x24], eax
// 0077fc6c  8d4c2418             lea ecx, [esp + 0x18]
// 0077fc70  c644244400           mov byte ptr [esp + 0x44], 0
// 0077fc75  e8660cffff           call 0x7708e0
// 0077fc7a  8d4c2428             lea ecx, [esp + 0x28]
// 0077fc7e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0077fc86  e8119cf9ff           call 0x71989c
// 0077fc8b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0077fc8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0077fc96  59                   pop ecx
// 0077fc97  5f                   pop edi
// 0077fc98  5e                   pop esi
// 0077fc99  5d                   pop ebp
// 0077fc9a  83c438               add esp, 0x38
// 0077fc9d  c3                   ret 
// copied from an identical function in another client (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp