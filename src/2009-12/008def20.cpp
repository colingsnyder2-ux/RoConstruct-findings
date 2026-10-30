// roc 2009-12 008def20  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008def20
//
// 008def20  56                   push esi
// 008def21  57                   push edi
// 008def22  6a01                 push 1
// 008def24  8bf1                 mov esi, ecx
// 008def26  e8bd4bf1ff           call 0x7f3ae8
// 008def2b  db867c070000         fild dword ptr [esi + 0x77c]
// 008def31  83ec08               sub esp, 8
// 008def34  8d8e88000000         lea ecx, [esi + 0x88]
// 008def3a  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 008def40  dd1c24               fstp qword ptr [esp]
// 008def43  e8f8edffff           call 0x8ddd40
// 008def48  db867c070000         fild dword ptr [esi + 0x77c]
// 008def4e  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008def54  83ec18               sub esp, 0x18
// 008def57  dcf9                 fdiv st(1), st(0)
// 008def59  d9c9                 fxch st(1)
// 008def5b  dd5c2410             fstp qword ptr [esp + 0x10]
// 008def5f  db8678070000         fild dword ptr [esi + 0x778]
// 008def65  d8f1                 fdiv st(1)
// 008def67  dd5c2408             fstp qword ptr [esp + 8]
// 008def6b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008def71  dd1c24               fstp qword ptr [esp]
// 008def74  e8a7e4ffff           call 0x8dd420
// 008def79  db867c070000         fild dword ptr [esi + 0x77c]
// 008def7f  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008def85  83c408               add esp, 8
// 008def88  8d8e08010000         lea ecx, [esi + 0x108]
// 008def8e  8bf8                 mov edi, eax
// 008def90  dcf9                 fdiv st(1), st(0)
// 008def92  8b01                 mov eax, dword ptr [ecx]
// 008def94  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008def9a  d9c9                 fxch st(1)
// 008def9c  dd5c2408             fstp qword ptr [esp + 8]
// 008defa0  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008defa6  dd1c24               fstp qword ptr [esp]
// 008defa9  ffd2                 call edx
// 008defab  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008defb1  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008defb7  7408                 je 0x8defc1
// 008defb9  6a00                 push 0
// 008defbb  57                   push edi
// 008defbc  e81f09f8ff           call 0x85f8e0
// 008defc1  57                   push edi
// 008defc2  8bce                 mov ecx, esi
// 008defc4  e897e4ffff           call 0x8dd460
// 008defc9  5f                   pop edi
// 008defca  5e                   pop esi
// 008defcb  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditSat@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp