// roc 2009-06 0080bfd0  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080bfd0
//
// 0080bfd0  6aff                 push -1
// 0080bfd2  6858208800           push 0x882058
// 0080bfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0080bfdd  50                   push eax
// 0080bfde  83ec68               sub esp, 0x68
// 0080bfe1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080bfe6  33c4                 xor eax, esp
// 0080bfe8  89442464             mov dword ptr [esp + 0x64], eax
// 0080bfec  56                   push esi
// 0080bfed  57                   push edi
// 0080bfee  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080bff3  33c4                 xor eax, esp
// 0080bff5  50                   push eax
// 0080bff6  8d442474             lea eax, [esp + 0x74]
// 0080bffa  64a300000000         mov dword ptr fs:[0], eax
// 0080c000  8bf1                 mov esi, ecx
// 0080c002  56                   push esi
// 0080c003  8d4c2420             lea ecx, [esp + 0x20]
// 0080c007  e8bcd3f0ff           call 0x7193c8
// 0080c00c  56                   push esi
// 0080c00d  8d4c2410             lea ecx, [esp + 0x10]
// 0080c011  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 0080c01c  e8af44f6ff           call 0x7704d0
// 0080c021  6aff                 push -1
// 0080c023  6aff                 push -1
// 0080c025  8d442414             lea eax, [esp + 0x14]
// 0080c029  50                   push eax
// 0080c02a  ff15bced8900         call dword ptr [0x89edbc]
// 0080c030  e8eb8af4ff           call 0x754b20
// 0080c035  6a14                 push 0x14
// 0080c037  8bc8                 mov ecx, eax
// 0080c039  e86282f4ff           call 0x7542a0
// 0080c03e  8bf8                 mov edi, eax
// 0080c040  e8db8af4ff           call 0x754b20
// 0080c045  6a10                 push 0x10
// 0080c047  8bc8                 mov ecx, eax
// 0080c049  e85282f4ff           call 0x7542a0
// 0080c04e  57                   push edi
// 0080c04f  50                   push eax
// 0080c050  8d4c2414             lea ecx, [esp + 0x14]
// 0080c054  51                   push ecx
// 0080c055  8d4c2428             lea ecx, [esp + 0x28]
// 0080c059  e86cd7f0ff           call 0x7197ca
// 0080c05e  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0080c064  6a01                 push 1
// 0080c066  6a00                 push 0
// 0080c068  52                   push edx
// 0080c069  ff157cee8900         call dword ptr [0x89ee7c]
// 0080c06f  8d4c241c             lea ecx, [esp + 0x1c]
// 0080c073  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0080c07b  e842d3f0ff           call 0x7193c2
// 0080c080  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080c084  64890d00000000       mov dword ptr fs:[0], ecx
// 0080c08b  59                   pop ecx
// 0080c08c  5f                   pop edi
// 0080c08d  5e                   pop esi
// 0080c08e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0080c092  33cc                 xor ecx, esp
// 0080c094  e8e1e4f0ff           call 0x71a57a
// 0080c099  83c474               add esp, 0x74
// 0080c09c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp