// roc 2012-06 00a79540  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79540
//
// 00a79540  56                   push esi
// 00a79541  8bf1                 mov esi, ecx
// 00a79543  8b4604               mov eax, dword ptr [esi + 4]
// 00a79546  c7064c98c200         mov dword ptr [esi], 0xc2984c
// 00a7954c  85c0                 test eax, eax
// 00a7954e  7414                 je 0xa79564
// 00a79550  50                   push eax
// 00a79551  ff15143bb200         call dword ptr [0xb23b14]
// 00a79557  85c0                 test eax, eax
// 00a79559  7409                 je 0xa79564
// 00a7955b  6a00                 push 0
// 00a7955d  8bce                 mov ecx, esi
// 00a7955f  e88cffffff           call 0xa794f0
// 00a79564  5e                   pop esi
// 00a79565  c3                   ret 
// copied from an identical function in another client (function ??1CXTWndHook@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp