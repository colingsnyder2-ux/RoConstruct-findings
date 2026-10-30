// roc 2010-06 00897b20  unit: CXTShadowHook  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897b20
//
// 00897b20  6aff                 push -1
// 00897b22  68f8999b00           push 0x9b99f8
// 00897b27  64a100000000         mov eax, dword ptr fs:[0]
// 00897b2d  50                   push eax
// 00897b2e  83ec68               sub esp, 0x68
// 00897b31  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00897b36  33c4                 xor eax, esp
// 00897b38  89442464             mov dword ptr [esp + 0x64], eax
// 00897b3c  56                   push esi
// 00897b3d  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00897b42  33c4                 xor eax, esp
// 00897b44  50                   push eax
// 00897b45  8d442470             lea eax, [esp + 0x70]
// 00897b49  64a300000000         mov dword ptr fs:[0], eax
// 00897b4f  8bf1                 mov esi, ecx
// 00897b51  56                   push esi
// 00897b52  8d4c241c             lea ecx, [esp + 0x1c]
// 00897b56  e8d507f1ff           call 0x7a8330
// 00897b5b  56                   push esi
// 00897b5c  8d4c240c             lea ecx, [esp + 0xc]
// 00897b60  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00897b68  e8a377f6ff           call 0x7ff310
// 00897b6d  837e6400             cmp dword ptr [esi + 0x64], 0
// 00897b71  7413                 je 0x897b86
// 00897b73  8d442408             lea eax, [esp + 8]
// 00897b77  50                   push eax
// 00897b78  8d4c241c             lea ecx, [esp + 0x1c]
// 00897b7c  51                   push ecx
// 00897b7d  8bce                 mov ecx, esi
// 00897b7f  e86cfeffff           call 0x8979f0
// 00897b84  eb27                 jmp 0x897bad
// 00897b86  837e6000             cmp dword ptr [esi + 0x60], 0
// 00897b8a  7404                 je 0x897b90
// 00897b8c  33c0                 xor eax, eax
// 00897b8e  eb0e                 jmp 0x897b9e
// 00897b90  e88bbff4ff           call 0x7e3b20
// 00897b95  6a10                 push 0x10
// 00897b97  8bc8                 mov ecx, eax
// 00897b99  e812b7f4ff           call 0x7e32b0
// 00897b9e  50                   push eax
// 00897b9f  8d54240c             lea edx, [esp + 0xc]
// 00897ba3  52                   push edx
// 00897ba4  8d4c2420             lea ecx, [esp + 0x20]
// 00897ba8  e8910bf1ff           call 0x7a873e
// 00897bad  8d4c2418             lea ecx, [esp + 0x18]
// 00897bb1  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00897bb9  e86c07f1ff           call 0x7a832a
// 00897bbe  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00897bc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00897bc9  59                   pop ecx
// 00897bca  5e                   pop esi
// 00897bcb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00897bcf  33cc                 xor ecx, esp
// 00897bd1  e8fe18f1ff           call 0x7a94d4
// 00897bd6  83c474               add esp, 0x74
// 00897bd9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp