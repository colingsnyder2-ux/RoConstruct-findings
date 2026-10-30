// roc 2009-12 00808020  unit: CXTPCommandBar  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808020
//
// 00808020  56                   push esi
// 00808021  8bf1                 mov esi, ecx
// 00808023  85f6                 test esi, esi
// 00808025  7455                 je 0x80807c
// 00808027  837e2000             cmp dword ptr [esi + 0x20], 0
// 0080802b  744f                 je 0x80807c
// 0080802d  e840e41100           call 0x926472
// 00808032  a900000010           test eax, 0x10000000
// 00808037  7443                 je 0x80807c
// 00808039  8bce                 mov ecx, esi
// 0080803b  e820fdffff           call 0x807d60
// 00808040  8bce                 mov ecx, esi
// 00808042  e8a9f7ffff           call 0x8077f0
// 00808047  f686e800000002       test byte ptr [esi + 0xe8], 2
// 0080804e  7410                 je 0x808060
// 00808050  8b06                 mov eax, dword ptr [esi]
// 00808052  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00808058  6a01                 push 1
// 0080805a  6a00                 push 0
// 0080805c  8bce                 mov ecx, esi
// 0080805e  ffd2                 call edx
// 00808060  f686e800000001       test byte ptr [esi + 0xe8], 1
// 00808067  7413                 je 0x80807c
// 00808069  8b06                 mov eax, dword ptr [esi]
// 0080806b  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00808071  8bce                 mov ecx, esi
// 00808073  ffd2                 call edx
// 00808075  83a6e8000000fe       and dword ptr [esi + 0xe8], 0xfffffffe
// 0080807c  33c0                 xor eax, eax
// 0080807e  5e                   pop esi
// 0080807f  c20800               ret 8
// copied from an identical function in another client (function ?OnIdleUpdateCmdUI@CXTPCommandBar@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp