// roc 2009-06 00808d30  unit: CXTShadowHook  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808d30
//
// 00808d30  6aff                 push -1
// 00808d32  68a81c8800           push 0x881ca8
// 00808d37  64a100000000         mov eax, dword ptr fs:[0]
// 00808d3d  50                   push eax
// 00808d3e  83ec68               sub esp, 0x68
// 00808d41  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00808d46  33c4                 xor eax, esp
// 00808d48  89442464             mov dword ptr [esp + 0x64], eax
// 00808d4c  56                   push esi
// 00808d4d  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00808d52  33c4                 xor eax, esp
// 00808d54  50                   push eax
// 00808d55  8d442470             lea eax, [esp + 0x70]
// 00808d59  64a300000000         mov dword ptr fs:[0], eax
// 00808d5f  8bf1                 mov esi, ecx
// 00808d61  56                   push esi
// 00808d62  8d4c241c             lea ecx, [esp + 0x1c]
// 00808d66  e85d06f1ff           call 0x7193c8
// 00808d6b  56                   push esi
// 00808d6c  8d4c240c             lea ecx, [esp + 0xc]
// 00808d70  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00808d78  e85377f6ff           call 0x7704d0
// 00808d7d  837e6400             cmp dword ptr [esi + 0x64], 0
// 00808d81  7413                 je 0x808d96
// 00808d83  8d442408             lea eax, [esp + 8]
// 00808d87  50                   push eax
// 00808d88  8d4c241c             lea ecx, [esp + 0x1c]
// 00808d8c  51                   push ecx
// 00808d8d  8bce                 mov ecx, esi
// 00808d8f  e86cfeffff           call 0x808c00
// 00808d94  eb27                 jmp 0x808dbd
// 00808d96  837e6000             cmp dword ptr [esi + 0x60], 0
// 00808d9a  7404                 je 0x808da0
// 00808d9c  33c0                 xor eax, eax
// 00808d9e  eb0e                 jmp 0x808dae
// 00808da0  e87bbdf4ff           call 0x754b20
// 00808da5  6a10                 push 0x10
// 00808da7  8bc8                 mov ecx, eax
// 00808da9  e8f2b4f4ff           call 0x7542a0
// 00808dae  50                   push eax
// 00808daf  8d54240c             lea edx, [esp + 0xc]
// 00808db3  52                   push edx
// 00808db4  8d4c2420             lea ecx, [esp + 0x20]
// 00808db8  e8130af1ff           call 0x7197d0
// 00808dbd  8d4c2418             lea ecx, [esp + 0x18]
// 00808dc1  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00808dc9  e8f405f1ff           call 0x7193c2
// 00808dce  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00808dd2  64890d00000000       mov dword ptr fs:[0], ecx
// 00808dd9  59                   pop ecx
// 00808dda  5e                   pop esi
// 00808ddb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00808ddf  33cc                 xor ecx, esp
// 00808de1  e89417f1ff           call 0x71a57a
// 00808de6  83c474               add esp, 0x74
// 00808de9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp