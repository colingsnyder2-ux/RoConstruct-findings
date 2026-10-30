// roc 2012-06 00a64030  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64030
//
// 00a64030  56                   push esi
// 00a64031  57                   push edi
// 00a64032  6a01                 push 1
// 00a64034  8bf1                 mov esi, ecx
// 00a64036  e861e3f1ff           call 0x98239c
// 00a6403b  db8678070000         fild dword ptr [esi + 0x778]
// 00a64041  83ec08               sub esp, 8
// 00a64044  8d8e08010000         lea ecx, [esi + 0x108]
// 00a6404a  dc35383bb500         fdiv qword ptr [0xb53b38]
// 00a64050  dd1c24               fstp qword ptr [esp]
// 00a64053  e848f0ffff           call 0xa630a0
// 00a64058  db867c070000         fild dword ptr [esi + 0x77c]
// 00a6405e  dd05383bb500         fld qword ptr [0xb53b38]
// 00a64064  83ec18               sub esp, 0x18
// 00a64067  dcf9                 fdiv st(1), st(0)
// 00a64069  d9c9                 fxch st(1)
// 00a6406b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a6406f  db8678070000         fild dword ptr [esi + 0x778]
// 00a64075  d8f1                 fdiv st(1)
// 00a64077  dd5c2408             fstp qword ptr [esp + 8]
// 00a6407b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a64081  dd1c24               fstp qword ptr [esp]
// 00a64084  e8d7e5ffff           call 0xa62660
// 00a64089  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00a6408f  8bf8                 mov edi, eax
// 00a64091  83c418               add esp, 0x18
// 00a64094  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00a6409a  7408                 je 0xa640a4
// 00a6409c  6a00                 push 0
// 00a6409e  57                   push edi
// 00a6409f  e8fc55f8ff           call 0x9e96a0
// 00a640a4  57                   push edi
// 00a640a5  8bce                 mov ecx, esi
// 00a640a7  e8f4e5ffff           call 0xa626a0
// 00a640ac  5f                   pop edi
// 00a640ad  5e                   pop esi
// 00a640ae  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditLum@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp