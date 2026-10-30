// roc 2011-06 008f3940  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3940
//
// 008f3940  6aff                 push -1
// 008f3942  6848bba000           push 0xa0bb48
// 008f3947  64a100000000         mov eax, dword ptr fs:[0]
// 008f394d  50                   push eax
// 008f394e  83ec68               sub esp, 0x68
// 008f3951  a12058c900           mov eax, dword ptr [0xc95820]
// 008f3956  33c4                 xor eax, esp
// 008f3958  89442464             mov dword ptr [esp + 0x64], eax
// 008f395c  56                   push esi
// 008f395d  57                   push edi
// 008f395e  a12058c900           mov eax, dword ptr [0xc95820]
// 008f3963  33c4                 xor eax, esp
// 008f3965  50                   push eax
// 008f3966  8d442474             lea eax, [esp + 0x74]
// 008f396a  64a300000000         mov dword ptr fs:[0], eax
// 008f3970  8bf1                 mov esi, ecx
// 008f3972  56                   push esi
// 008f3973  8d4c2420             lea ecx, [esp + 0x20]
// 008f3977  e87270f1ff           call 0x80a9ee
// 008f397c  56                   push esi
// 008f397d  8d4c2410             lea ecx, [esp + 0x10]
// 008f3981  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008f398c  e8ff93f6ff           call 0x85cd90
// 008f3991  6aff                 push -1
// 008f3993  6aff                 push -1
// 008f3995  8d442414             lea eax, [esp + 0x14]
// 008f3999  50                   push eax
// 008f399a  ff15e41ba400         call dword ptr [0xa41be4]
// 008f39a0  e83b1af5ff           call 0x8453e0
// 008f39a5  6a14                 push 0x14
// 008f39a7  8bc8                 mov ecx, eax
// 008f39a9  e80212f5ff           call 0x844bb0
// 008f39ae  8bf8                 mov edi, eax
// 008f39b0  e82b1af5ff           call 0x8453e0
// 008f39b5  6a10                 push 0x10
// 008f39b7  8bc8                 mov ecx, eax
// 008f39b9  e8f211f5ff           call 0x844bb0
// 008f39be  57                   push edi
// 008f39bf  50                   push eax
// 008f39c0  8d4c2414             lea ecx, [esp + 0x14]
// 008f39c4  51                   push ecx
// 008f39c5  8d4c2428             lea ecx, [esp + 0x28]
// 008f39c9  e84c74f1ff           call 0x80ae1a
// 008f39ce  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008f39d4  6a01                 push 1
// 008f39d6  6a00                 push 0
// 008f39d8  52                   push edx
// 008f39d9  ff15ec19a400         call dword ptr [0xa419ec]
// 008f39df  8d4c241c             lea ecx, [esp + 0x1c]
// 008f39e3  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 008f39eb  e8f86ff1ff           call 0x80a9e8
// 008f39f0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008f39f4  64890d00000000       mov dword ptr fs:[0], ecx
// 008f39fb  59                   pop ecx
// 008f39fc  5f                   pop edi
// 008f39fd  5e                   pop esi
// 008f39fe  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008f3a02  33cc                 xor ecx, esp
// 008f3a04  e8ee7ef1ff           call 0x80b8f7
// 008f3a09  83c474               add esp, 0x74
// 008f3a0c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp