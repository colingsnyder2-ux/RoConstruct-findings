// roc 2009-12 008dedf0  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dedf0
//
// 008dedf0  56                   push esi
// 008dedf1  57                   push edi
// 008dedf2  6a01                 push 1
// 008dedf4  8bf1                 mov esi, ecx
// 008dedf6  e8ed4cf1ff           call 0x7f3ae8
// 008dedfb  db8678070000         fild dword ptr [esi + 0x778]
// 008dee01  83ec08               sub esp, 8
// 008dee04  8d8e08010000         lea ecx, [esi + 0x108]
// 008dee0a  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 008dee10  dd1c24               fstp qword ptr [esp]
// 008dee13  e878f0ffff           call 0x8dde90
// 008dee18  db867c070000         fild dword ptr [esi + 0x77c]
// 008dee1e  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008dee24  83ec18               sub esp, 0x18
// 008dee27  dcf9                 fdiv st(1), st(0)
// 008dee29  d9c9                 fxch st(1)
// 008dee2b  dd5c2410             fstp qword ptr [esp + 0x10]
// 008dee2f  db8678070000         fild dword ptr [esi + 0x778]
// 008dee35  d8f1                 fdiv st(1)
// 008dee37  dd5c2408             fstp qword ptr [esp + 8]
// 008dee3b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008dee41  dd1c24               fstp qword ptr [esp]
// 008dee44  e8d7e5ffff           call 0x8dd420
// 008dee49  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008dee4f  8bf8                 mov edi, eax
// 008dee51  83c418               add esp, 0x18
// 008dee54  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008dee5a  7408                 je 0x8dee64
// 008dee5c  6a00                 push 0
// 008dee5e  57                   push edi
// 008dee5f  e87c0af8ff           call 0x85f8e0
// 008dee64  57                   push edi
// 008dee65  8bce                 mov ecx, esi
// 008dee67  e8f4e5ffff           call 0x8dd460
// 008dee6c  5f                   pop edi
// 008dee6d  5e                   pop esi
// 008dee6e  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditLum@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp