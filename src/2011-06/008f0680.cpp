// roc 2011-06 008f0680  unit: PAVCXTShadowWnd::?$CList  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0680
//
// 008f0680  6aff                 push -1
// 008f0682  68a8cfa000           push 0xa0cfa8
// 008f0687  64a100000000         mov eax, dword ptr fs:[0]
// 008f068d  50                   push eax
// 008f068e  83ec68               sub esp, 0x68
// 008f0691  a12058c900           mov eax, dword ptr [0xc95820]
// 008f0696  33c4                 xor eax, esp
// 008f0698  89442464             mov dword ptr [esp + 0x64], eax
// 008f069c  56                   push esi
// 008f069d  a12058c900           mov eax, dword ptr [0xc95820]
// 008f06a2  33c4                 xor eax, esp
// 008f06a4  50                   push eax
// 008f06a5  8d442470             lea eax, [esp + 0x70]
// 008f06a9  64a300000000         mov dword ptr fs:[0], eax
// 008f06af  8bf1                 mov esi, ecx
// 008f06b1  56                   push esi
// 008f06b2  8d4c241c             lea ecx, [esp + 0x1c]
// 008f06b6  e833a3f1ff           call 0x80a9ee
// 008f06bb  56                   push esi
// 008f06bc  8d4c240c             lea ecx, [esp + 0xc]
// 008f06c0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008f06c8  e8c3c6f6ff           call 0x85cd90
// 008f06cd  837e6400             cmp dword ptr [esi + 0x64], 0
// 008f06d1  7413                 je 0x8f06e6
// 008f06d3  8d442408             lea eax, [esp + 8]
// 008f06d7  50                   push eax
// 008f06d8  8d4c241c             lea ecx, [esp + 0x1c]
// 008f06dc  51                   push ecx
// 008f06dd  8bce                 mov ecx, esi
// 008f06df  e83cfeffff           call 0x8f0520
// 008f06e4  eb27                 jmp 0x8f070d
// 008f06e6  837e6000             cmp dword ptr [esi + 0x60], 0
// 008f06ea  7404                 je 0x8f06f0
// 008f06ec  33c0                 xor eax, eax
// 008f06ee  eb0e                 jmp 0x8f06fe
// 008f06f0  e8eb4cf5ff           call 0x8453e0
// 008f06f5  6a10                 push 0x10
// 008f06f7  8bc8                 mov ecx, eax
// 008f06f9  e8b244f5ff           call 0x844bb0
// 008f06fe  50                   push eax
// 008f06ff  8d54240c             lea edx, [esp + 0xc]
// 008f0703  52                   push edx
// 008f0704  8d4c2420             lea ecx, [esp + 0x20]
// 008f0708  e813a7f1ff           call 0x80ae20
// 008f070d  8d4c2418             lea ecx, [esp + 0x18]
// 008f0711  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008f0719  e8caa2f1ff           call 0x80a9e8
// 008f071e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008f0722  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0729  59                   pop ecx
// 008f072a  5e                   pop esi
// 008f072b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008f072f  33cc                 xor ecx, esp
// 008f0731  e8c1b1f1ff           call 0x80b8f7
// 008f0736  83c474               add esp, 0x74
// 008f0739  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp