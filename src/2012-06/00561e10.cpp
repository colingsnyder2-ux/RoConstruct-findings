// roc 2012-06 00561e10  unit: RBX::VHint::?$FactoryProduct::Creator  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561e10
//
// 00561e10  81ec80000000         sub esp, 0x80
// 00561e16  56                   push esi
// 00561e17  6a7c                 push 0x7c
// 00561e19  8d442408             lea eax, [esp + 8]
// 00561e1d  50                   push eax
// 00561e1e  6a00                 push 0
// 00561e20  8bf1                 mov esi, ecx
// 00561e22  e829fbffff           call 0x561950
// 00561e27  8b0d4c89d800         mov ecx, dword ptr [0xd8894c]
// 00561e2d  8d442404             lea eax, [esp + 4]
// 00561e31  8a10                 mov dl, byte ptr [eax]
// 00561e33  3a11                 cmp dl, byte ptr [ecx]
// 00561e35  751a                 jne 0x561e51
// 00561e37  84d2                 test dl, dl
// 00561e39  7412                 je 0x561e4d
// 00561e3b  8a5001               mov dl, byte ptr [eax + 1]
// 00561e3e  3a5101               cmp dl, byte ptr [ecx + 1]
// 00561e41  750e                 jne 0x561e51
// 00561e43  83c002               add eax, 2
// 00561e46  83c102               add ecx, 2
// 00561e49  84d2                 test dl, dl
// 00561e4b  75e4                 jne 0x561e31
// 00561e4d  33c0                 xor eax, eax
// 00561e4f  eb05                 jmp 0x561e56
// 00561e51  1bc0                 sbb eax, eax
// 00561e53  83d8ff               sbb eax, -1
// 00561e56  85c0                 test eax, eax
// 00561e58  751c                 jne 0x561e76
// 00561e5a  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00561e61  66833902             cmp word ptr [ecx], 2
// 00561e65  750f                 jne 0x561e76
// 00561e67  8b155089d800         mov edx, dword ptr [0xd88950]
// 00561e6d  50                   push eax
// 00561e6e  52                   push edx
// 00561e6f  8bce                 mov ecx, esi
// 00561e71  e8eafbffff           call 0x561a60
// 00561e76  5e                   pop esi
// 00561e77  81c480000000         add esp, 0x80
// 00561e7d  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ?FixForIPVersion@SystemAddress@RakNet@@QAEXABU12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
