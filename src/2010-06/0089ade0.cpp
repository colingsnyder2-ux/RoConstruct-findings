// roc 2010-06 0089ade0  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089ade0
//
// 0089ade0  6aff                 push -1
// 0089ade2  6888c19b00           push 0x9bc188
// 0089ade7  64a100000000         mov eax, dword ptr fs:[0]
// 0089aded  50                   push eax
// 0089adee  83ec68               sub esp, 0x68
// 0089adf1  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089adf6  33c4                 xor eax, esp
// 0089adf8  89442464             mov dword ptr [esp + 0x64], eax
// 0089adfc  56                   push esi
// 0089adfd  57                   push edi
// 0089adfe  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089ae03  33c4                 xor eax, esp
// 0089ae05  50                   push eax
// 0089ae06  8d442474             lea eax, [esp + 0x74]
// 0089ae0a  64a300000000         mov dword ptr fs:[0], eax
// 0089ae10  8bf1                 mov esi, ecx
// 0089ae12  56                   push esi
// 0089ae13  8d4c2420             lea ecx, [esp + 0x20]
// 0089ae17  e814d5f0ff           call 0x7a8330
// 0089ae1c  56                   push esi
// 0089ae1d  8d4c2410             lea ecx, [esp + 0x10]
// 0089ae21  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0089ae2c  e8df44f6ff           call 0x7ff310
// 0089ae31  6aff                 push -1
// 0089ae33  6aff                 push -1
// 0089ae35  8d442414             lea eax, [esp + 0x14]
// 0089ae39  50                   push eax
// 0089ae3a  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0089ae40  e8db8cf4ff           call 0x7e3b20
// 0089ae45  6a14                 push 0x14
// 0089ae47  8bc8                 mov ecx, eax
// 0089ae49  e86284f4ff           call 0x7e32b0
// 0089ae4e  8bf8                 mov edi, eax
// 0089ae50  e8cb8cf4ff           call 0x7e3b20
// 0089ae55  6a10                 push 0x10
// 0089ae57  8bc8                 mov ecx, eax
// 0089ae59  e85284f4ff           call 0x7e32b0
// 0089ae5e  57                   push edi
// 0089ae5f  50                   push eax
// 0089ae60  8d4c2414             lea ecx, [esp + 0x14]
// 0089ae64  51                   push ecx
// 0089ae65  8d4c2428             lea ecx, [esp + 0x28]
// 0089ae69  e8cad8f0ff           call 0x7a8738
// 0089ae6e  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0089ae74  6a01                 push 1
// 0089ae76  6a00                 push 0
// 0089ae78  52                   push edx
// 0089ae79  ff1578ba9e00         call dword ptr [0x9eba78]
// 0089ae7f  8d4c241c             lea ecx, [esp + 0x1c]
// 0089ae83  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0089ae8b  e89ad4f0ff           call 0x7a832a
// 0089ae90  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089ae94  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ae9b  59                   pop ecx
// 0089ae9c  5f                   pop edi
// 0089ae9d  5e                   pop esi
// 0089ae9e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089aea2  33cc                 xor ecx, esp
// 0089aea4  e82be6f0ff           call 0x7a94d4
// 0089aea9  83c474               add esp, 0x74
// 0089aeac  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp