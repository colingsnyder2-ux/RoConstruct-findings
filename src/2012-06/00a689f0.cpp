// roc 2012-06 00a689f0  unit: PAVCXTShadowWnd::?$CList  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a689f0
//
// 00a689f0  6aff                 push -1
// 00a689f2  68a867ae00           push 0xae67a8
// 00a689f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a689fd  50                   push eax
// 00a689fe  83ec68               sub esp, 0x68
// 00a68a01  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a68a06  33c4                 xor eax, esp
// 00a68a08  89442464             mov dword ptr [esp + 0x64], eax
// 00a68a0c  56                   push esi
// 00a68a0d  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a68a12  33c4                 xor eax, esp
// 00a68a14  50                   push eax
// 00a68a15  8d442470             lea eax, [esp + 0x70]
// 00a68a19  64a300000000         mov dword ptr fs:[0], eax
// 00a68a1f  8bf1                 mov esi, ecx
// 00a68a21  56                   push esi
// 00a68a22  8d4c241c             lea ecx, [esp + 0x1c]
// 00a68a26  e843a0f1ff           call 0x982a6e
// 00a68a2b  56                   push esi
// 00a68a2c  8d4c240c             lea ecx, [esp + 0xc]
// 00a68a30  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00a68a38  e863c7f6ff           call 0x9d51a0
// 00a68a3d  837e6400             cmp dword ptr [esi + 0x64], 0
// 00a68a41  7413                 je 0xa68a56
// 00a68a43  8d442408             lea eax, [esp + 8]
// 00a68a47  50                   push eax
// 00a68a48  8d4c241c             lea ecx, [esp + 0x1c]
// 00a68a4c  51                   push ecx
// 00a68a4d  8bce                 mov ecx, esi
// 00a68a4f  e86cfeffff           call 0xa688c0
// 00a68a54  eb27                 jmp 0xa68a7d
// 00a68a56  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a68a5a  7404                 je 0xa68a60
// 00a68a5c  33c0                 xor eax, eax
// 00a68a5e  eb0e                 jmp 0xa68a6e
// 00a68a60  e8fb4df5ff           call 0x9bd860
// 00a68a65  6a10                 push 0x10
// 00a68a67  8bc8                 mov ecx, eax
// 00a68a69  e87245f5ff           call 0x9bcfe0
// 00a68a6e  50                   push eax
// 00a68a6f  8d54240c             lea edx, [esp + 0xc]
// 00a68a73  52                   push edx
// 00a68a74  8d4c2420             lea ecx, [esp + 0x20]
// 00a68a78  e82fa4f1ff           call 0x982eac
// 00a68a7d  8d4c2418             lea ecx, [esp + 0x18]
// 00a68a81  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00a68a89  e8da9ff1ff           call 0x982a68
// 00a68a8e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a68a92  64890d00000000       mov dword ptr fs:[0], ecx
// 00a68a99  59                   pop ecx
// 00a68a9a  5e                   pop esi
// 00a68a9b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a68a9f  33cc                 xor ecx, esp
// 00a68aa1  e891aff1ff           call 0x983a37
// 00a68aa6  83c474               add esp, 0x74
// 00a68aa9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp