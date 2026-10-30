// roc 2007-08 00712e00  unit: PAVCXTShadowWnd::?$CList  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712e00
//
// 00712e00  6aff                 push -1
// 00712e02  6898847600           push 0x768498
// 00712e07  64a100000000         mov eax, dword ptr fs:[0]
// 00712e0d  50                   push eax
// 00712e0e  83ec68               sub esp, 0x68
// 00712e11  a188518b00           mov eax, dword ptr [0x8b5188]
// 00712e16  33c4                 xor eax, esp
// 00712e18  89442464             mov dword ptr [esp + 0x64], eax
// 00712e1c  56                   push esi
// 00712e1d  a188518b00           mov eax, dword ptr [0x8b5188]
// 00712e22  33c4                 xor eax, esp
// 00712e24  50                   push eax
// 00712e25  8d442470             lea eax, [esp + 0x70]
// 00712e29  64a300000000         mov dword ptr fs:[0], eax
// 00712e2f  8bf1                 mov esi, ecx
// 00712e31  56                   push esi
// 00712e32  8d4c241c             lea ecx, [esp + 0x1c]
// 00712e36  e855d6f1ff           call 0x630490
// 00712e3b  56                   push esi
// 00712e3c  8d4c240c             lea ecx, [esp + 0xc]
// 00712e40  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00712e48  e8b3d1f6ff           call 0x680000
// 00712e4d  837e6400             cmp dword ptr [esi + 0x64], 0
// 00712e51  7413                 je 0x712e66
// 00712e53  8d442408             lea eax, [esp + 8]
// 00712e57  50                   push eax
// 00712e58  8d4c241c             lea ecx, [esp + 0x1c]
// 00712e5c  51                   push ecx
// 00712e5d  8bce                 mov ecx, esi
// 00712e5f  e86cfeffff           call 0x712cd0
// 00712e64  eb27                 jmp 0x712e8d
// 00712e66  837e6000             cmp dword ptr [esi + 0x60], 0
// 00712e6a  7404                 je 0x712e70
// 00712e6c  33c0                 xor eax, eax
// 00712e6e  eb0e                 jmp 0x712e7e
// 00712e70  e8fb60f5ff           call 0x668f70
// 00712e75  6a10                 push 0x10
// 00712e77  8bc8                 mov ecx, eax
// 00712e79  e8f258f5ff           call 0x668770
// 00712e7e  50                   push eax
// 00712e7f  8d54240c             lea edx, [esp + 0xc]
// 00712e83  52                   push edx
// 00712e84  8d4c2420             lea ecx, [esp + 0x20]
// 00712e88  e823daf1ff           call 0x6308b0
// 00712e8d  8d4c2418             lea ecx, [esp + 0x18]
// 00712e91  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00712e99  e8ecd5f1ff           call 0x63048a
// 00712e9e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00712ea2  64890d00000000       mov dword ptr fs:[0], ecx
// 00712ea9  59                   pop ecx
// 00712eaa  5e                   pop esi
// 00712eab  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00712eaf  33cc                 xor ecx, esp
// 00712eb1  e868dbf1ff           call 0x630a1e
// 00712eb6  83c474               add esp, 0x74
// 00712eb9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp