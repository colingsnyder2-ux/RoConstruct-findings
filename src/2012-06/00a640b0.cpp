// roc 2012-06 00a640b0  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a640b0
//
// 00a640b0  56                   push esi
// 00a640b1  57                   push edi
// 00a640b2  6a01                 push 1
// 00a640b4  8bf1                 mov esi, ecx
// 00a640b6  e8e1e2f1ff           call 0x98239c
// 00a640bb  db8674070000         fild dword ptr [esi + 0x774]
// 00a640c1  83ec08               sub esp, 8
// 00a640c4  8d8e88000000         lea ecx, [esi + 0x88]
// 00a640ca  dc35383bb500         fdiv qword ptr [0xb53b38]
// 00a640d0  dd1c24               fstp qword ptr [esp]
// 00a640d3  e858eeffff           call 0xa62f30
// 00a640d8  db867c070000         fild dword ptr [esi + 0x77c]
// 00a640de  dd05383bb500         fld qword ptr [0xb53b38]
// 00a640e4  83ec18               sub esp, 0x18
// 00a640e7  dcf9                 fdiv st(1), st(0)
// 00a640e9  d9c9                 fxch st(1)
// 00a640eb  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a640ef  db8678070000         fild dword ptr [esi + 0x778]
// 00a640f5  d8f1                 fdiv st(1)
// 00a640f7  dd5c2408             fstp qword ptr [esp + 8]
// 00a640fb  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a64101  dd1c24               fstp qword ptr [esp]
// 00a64104  e857e5ffff           call 0xa62660
// 00a64109  db867c070000         fild dword ptr [esi + 0x77c]
// 00a6410f  dd05383bb500         fld qword ptr [0xb53b38]
// 00a64115  83c408               add esp, 8
// 00a64118  8d8e08010000         lea ecx, [esi + 0x108]
// 00a6411e  8bf8                 mov edi, eax
// 00a64120  dcf9                 fdiv st(1), st(0)
// 00a64122  8b01                 mov eax, dword ptr [ecx]
// 00a64124  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00a6412a  d9c9                 fxch st(1)
// 00a6412c  dd5c2408             fstp qword ptr [esp + 8]
// 00a64130  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a64136  dd1c24               fstp qword ptr [esp]
// 00a64139  ffd2                 call edx
// 00a6413b  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00a64141  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00a64147  7408                 je 0xa64151
// 00a64149  6a00                 push 0
// 00a6414b  57                   push edi
// 00a6414c  e84f55f8ff           call 0x9e96a0
// 00a64151  57                   push edi
// 00a64152  8bce                 mov ecx, esi
// 00a64154  e847e5ffff           call 0xa626a0
// 00a64159  5f                   pop edi
// 00a6415a  5e                   pop esi
// 00a6415b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditHue@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp