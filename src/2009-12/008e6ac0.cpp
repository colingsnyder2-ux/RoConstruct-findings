// roc 2009-12 008e6ac0  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6ac0
//
// 008e6ac0  6aff                 push -1
// 008e6ac2  6898299600           push 0x962998
// 008e6ac7  64a100000000         mov eax, dword ptr fs:[0]
// 008e6acd  50                   push eax
// 008e6ace  83ec68               sub esp, 0x68
// 008e6ad1  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6ad6  33c4                 xor eax, esp
// 008e6ad8  89442464             mov dword ptr [esp + 0x64], eax
// 008e6adc  56                   push esi
// 008e6add  57                   push edi
// 008e6ade  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6ae3  33c4                 xor eax, esp
// 008e6ae5  50                   push eax
// 008e6ae6  8d442474             lea eax, [esp + 0x74]
// 008e6aea  64a300000000         mov dword ptr fs:[0], eax
// 008e6af0  8bf1                 mov esi, ecx
// 008e6af2  56                   push esi
// 008e6af3  8d4c2420             lea ecx, [esp + 0x20]
// 008e6af7  e8f4d6f0ff           call 0x7f41f0
// 008e6afc  56                   push esi
// 008e6afd  8d4c2410             lea ecx, [esp + 0x10]
// 008e6b01  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008e6b0c  e8bf47f6ff           call 0x84b2d0
// 008e6b11  6aff                 push -1
// 008e6b13  6aff                 push -1
// 008e6b15  8d442414             lea eax, [esp + 0x14]
// 008e6b19  50                   push eax
// 008e6b1a  ff1558ca9800         call dword ptr [0x98ca58]
// 008e6b20  e8ab8ef4ff           call 0x82f9d0
// 008e6b25  6a14                 push 0x14
// 008e6b27  8bc8                 mov ecx, eax
// 008e6b29  e8d285f4ff           call 0x82f100
// 008e6b2e  8bf8                 mov edi, eax
// 008e6b30  e89b8ef4ff           call 0x82f9d0
// 008e6b35  6a10                 push 0x10
// 008e6b37  8bc8                 mov ecx, eax
// 008e6b39  e8c285f4ff           call 0x82f100
// 008e6b3e  57                   push edi
// 008e6b3f  50                   push eax
// 008e6b40  8d4c2414             lea ecx, [esp + 0x14]
// 008e6b44  51                   push ecx
// 008e6b45  8d4c2428             lea ecx, [esp + 0x28]
// 008e6b49  e8aadaf0ff           call 0x7f45f8
// 008e6b4e  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008e6b54  6a01                 push 1
// 008e6b56  6a00                 push 0
// 008e6b58  52                   push edx
// 008e6b59  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e6b5f  8d4c241c             lea ecx, [esp + 0x1c]
// 008e6b63  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 008e6b6b  e87ad6f0ff           call 0x7f41ea
// 008e6b70  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008e6b74  64890d00000000       mov dword ptr fs:[0], ecx
// 008e6b7b  59                   pop ecx
// 008e6b7c  5f                   pop edi
// 008e6b7d  5e                   pop esi
// 008e6b7e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e6b82  33cc                 xor ecx, esp
// 008e6b84  e811e8f0ff           call 0x7f539a
// 008e6b89  83c474               add esp, 0x74
// 008e6b8c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp