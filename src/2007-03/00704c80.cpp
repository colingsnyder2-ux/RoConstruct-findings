// roc 2007-03 00704c80  unit: seg_00700000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704c80
//
// 00704c80  6aff                 push -1
// 00704c82  6898977600           push 0x769798
// 00704c87  64a100000000         mov eax, dword ptr fs:[0]
// 00704c8d  50                   push eax
// 00704c8e  83ec68               sub esp, 0x68
// 00704c91  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00704c96  33c4                 xor eax, esp
// 00704c98  89442464             mov dword ptr [esp + 0x64], eax
// 00704c9c  56                   push esi
// 00704c9d  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00704ca2  33c4                 xor eax, esp
// 00704ca4  50                   push eax
// 00704ca5  8d442470             lea eax, [esp + 0x70]
// 00704ca9  64a300000000         mov dword ptr fs:[0], eax
// 00704caf  8bf1                 mov esi, ecx
// 00704cb1  56                   push esi
// 00704cb2  8d4c241c             lea ecx, [esp + 0x1c]
// 00704cb6  e8699cf1ff           call 0x61e924
// 00704cbb  56                   push esi
// 00704cbc  8d4c240c             lea ecx, [esp + 0xc]
// 00704cc0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00704cc8  e8936bf6ff           call 0x66b860
// 00704ccd  837e6400             cmp dword ptr [esi + 0x64], 0
// 00704cd1  7413                 je 0x704ce6
// 00704cd3  8d442408             lea eax, [esp + 8]
// 00704cd7  50                   push eax
// 00704cd8  8d4c241c             lea ecx, [esp + 0x1c]
// 00704cdc  51                   push ecx
// 00704cdd  8bce                 mov ecx, esi
// 00704cdf  e8dcfbffff           call 0x7048c0
// 00704ce4  eb27                 jmp 0x704d0d
// 00704ce6  837e6000             cmp dword ptr [esi + 0x60], 0
// 00704cea  7404                 je 0x704cf0
// 00704cec  33c0                 xor eax, eax
// 00704cee  eb0e                 jmp 0x704cfe
// 00704cf0  e8ab02f5ff           call 0x654fa0
// 00704cf5  6a10                 push 0x10
// 00704cf7  8bc8                 mov ecx, eax
// 00704cf9  e8b2faf4ff           call 0x6547b0
// 00704cfe  50                   push eax
// 00704cff  8d54240c             lea edx, [esp + 0xc]
// 00704d03  52                   push edx
// 00704d04  8d4c2420             lea ecx, [esp + 0x20]
// 00704d08  e80da0f1ff           call 0x61ed1a
// 00704d0d  8d4c2418             lea ecx, [esp + 0x18]
// 00704d11  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00704d19  e8009cf1ff           call 0x61e91e
// 00704d1e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00704d22  64890d00000000       mov dword ptr fs:[0], ecx
// 00704d29  59                   pop ecx
// 00704d2a  5e                   pop esi
// 00704d2b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00704d2f  33cc                 xor ecx, esp
// 00704d31  e870a1f1ff           call 0x61eea6
// 00704d36  83c474               add esp, 0x74
// 00704d39  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp