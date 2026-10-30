// roc 2012-06 00a64160  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64160
//
// 00a64160  56                   push esi
// 00a64161  57                   push edi
// 00a64162  6a01                 push 1
// 00a64164  8bf1                 mov esi, ecx
// 00a64166  e831e2f1ff           call 0x98239c
// 00a6416b  db867c070000         fild dword ptr [esi + 0x77c]
// 00a64171  83ec08               sub esp, 8
// 00a64174  8d8e88000000         lea ecx, [esi + 0x88]
// 00a6417a  dc35383bb500         fdiv qword ptr [0xb53b38]
// 00a64180  dd1c24               fstp qword ptr [esp]
// 00a64183  e8f8edffff           call 0xa62f80
// 00a64188  db867c070000         fild dword ptr [esi + 0x77c]
// 00a6418e  dd05383bb500         fld qword ptr [0xb53b38]
// 00a64194  83ec18               sub esp, 0x18
// 00a64197  dcf9                 fdiv st(1), st(0)
// 00a64199  d9c9                 fxch st(1)
// 00a6419b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a6419f  db8678070000         fild dword ptr [esi + 0x778]
// 00a641a5  d8f1                 fdiv st(1)
// 00a641a7  dd5c2408             fstp qword ptr [esp + 8]
// 00a641ab  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a641b1  dd1c24               fstp qword ptr [esp]
// 00a641b4  e8a7e4ffff           call 0xa62660
// 00a641b9  db867c070000         fild dword ptr [esi + 0x77c]
// 00a641bf  dd05383bb500         fld qword ptr [0xb53b38]
// 00a641c5  83c408               add esp, 8
// 00a641c8  8d8e08010000         lea ecx, [esi + 0x108]
// 00a641ce  8bf8                 mov edi, eax
// 00a641d0  dcf9                 fdiv st(1), st(0)
// 00a641d2  8b01                 mov eax, dword ptr [ecx]
// 00a641d4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00a641da  d9c9                 fxch st(1)
// 00a641dc  dd5c2408             fstp qword ptr [esp + 8]
// 00a641e0  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a641e6  dd1c24               fstp qword ptr [esp]
// 00a641e9  ffd2                 call edx
// 00a641eb  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00a641f1  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00a641f7  7408                 je 0xa64201
// 00a641f9  6a00                 push 0
// 00a641fb  57                   push edi
// 00a641fc  e89f54f8ff           call 0x9e96a0
// 00a64201  57                   push edi
// 00a64202  8bce                 mov ecx, esi
// 00a64204  e897e4ffff           call 0xa626a0
// 00a64209  5f                   pop edi
// 00a6420a  5e                   pop esi
// 00a6420b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditSat@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp