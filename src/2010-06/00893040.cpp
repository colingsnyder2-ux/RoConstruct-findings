// roc 2010-06 00893040  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893040
//
// 00893040  56                   push esi
// 00893041  57                   push edi
// 00893042  6a01                 push 1
// 00893044  8bf1                 mov esi, ecx
// 00893046  e8dd4bf1ff           call 0x7a7c28
// 0089304b  db8678070000         fild dword ptr [esi + 0x778]
// 00893051  83ec08               sub esp, 8
// 00893054  8d8e08010000         lea ecx, [esi + 0x108]
// 0089305a  dc358076a000         fdiv qword ptr [0xa07680]
// 00893060  dd1c24               fstp qword ptr [esp]
// 00893063  e848f0ffff           call 0x8920b0
// 00893068  db867c070000         fild dword ptr [esi + 0x77c]
// 0089306e  dd058076a000         fld qword ptr [0xa07680]
// 00893074  83ec18               sub esp, 0x18
// 00893077  dcf9                 fdiv st(1), st(0)
// 00893079  d9c9                 fxch st(1)
// 0089307b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0089307f  db8678070000         fild dword ptr [esi + 0x778]
// 00893085  d8f1                 fdiv st(1)
// 00893087  dd5c2408             fstp qword ptr [esp + 8]
// 0089308b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00893091  dd1c24               fstp qword ptr [esp]
// 00893094  e8d7e5ffff           call 0x891670
// 00893099  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 0089309f  8bf8                 mov edi, eax
// 008930a1  83c418               add esp, 0x18
// 008930a4  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008930aa  7408                 je 0x8930b4
// 008930ac  6a00                 push 0
// 008930ae  57                   push edi
// 008930af  e81c08f8ff           call 0x8138d0
// 008930b4  57                   push edi
// 008930b5  8bce                 mov ecx, esi
// 008930b7  e8f4e5ffff           call 0x8916b0
// 008930bc  5f                   pop edi
// 008930bd  5e                   pop esi
// 008930be  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditLum@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp