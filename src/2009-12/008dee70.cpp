// roc 2009-12 008dee70  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dee70
//
// 008dee70  56                   push esi
// 008dee71  57                   push edi
// 008dee72  6a01                 push 1
// 008dee74  8bf1                 mov esi, ecx
// 008dee76  e86d4cf1ff           call 0x7f3ae8
// 008dee7b  db8674070000         fild dword ptr [esi + 0x774]
// 008dee81  83ec08               sub esp, 8
// 008dee84  8d8e88000000         lea ecx, [esi + 0x88]
// 008dee8a  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 008dee90  dd1c24               fstp qword ptr [esp]
// 008dee93  e858eeffff           call 0x8ddcf0
// 008dee98  db867c070000         fild dword ptr [esi + 0x77c]
// 008dee9e  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008deea4  83ec18               sub esp, 0x18
// 008deea7  dcf9                 fdiv st(1), st(0)
// 008deea9  d9c9                 fxch st(1)
// 008deeab  dd5c2410             fstp qword ptr [esp + 0x10]
// 008deeaf  db8678070000         fild dword ptr [esi + 0x778]
// 008deeb5  d8f1                 fdiv st(1)
// 008deeb7  dd5c2408             fstp qword ptr [esp + 8]
// 008deebb  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008deec1  dd1c24               fstp qword ptr [esp]
// 008deec4  e857e5ffff           call 0x8dd420
// 008deec9  db867c070000         fild dword ptr [esi + 0x77c]
// 008deecf  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008deed5  83c408               add esp, 8
// 008deed8  8d8e08010000         lea ecx, [esi + 0x108]
// 008deede  8bf8                 mov edi, eax
// 008deee0  dcf9                 fdiv st(1), st(0)
// 008deee2  8b01                 mov eax, dword ptr [ecx]
// 008deee4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008deeea  d9c9                 fxch st(1)
// 008deeec  dd5c2408             fstp qword ptr [esp + 8]
// 008deef0  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008deef6  dd1c24               fstp qword ptr [esp]
// 008deef9  ffd2                 call edx
// 008deefb  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008def01  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008def07  7408                 je 0x8def11
// 008def09  6a00                 push 0
// 008def0b  57                   push edi
// 008def0c  e8cf09f8ff           call 0x85f8e0
// 008def11  57                   push edi
// 008def12  8bce                 mov ecx, esi
// 008def14  e847e5ffff           call 0x8dd460
// 008def19  5f                   pop edi
// 008def1a  5e                   pop esi
// 008def1b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditHue@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp