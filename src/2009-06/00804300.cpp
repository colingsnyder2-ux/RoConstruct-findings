// roc 2009-06 00804300  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804300
//
// 00804300  56                   push esi
// 00804301  57                   push edi
// 00804302  6a01                 push 1
// 00804304  8bf1                 mov esi, ecx
// 00804306  e8b549f1ff           call 0x718cc0
// 0080430b  db8678070000         fild dword ptr [esi + 0x778]
// 00804311  83ec08               sub esp, 8
// 00804314  8d8e08010000         lea ecx, [esi + 0x108]
// 0080431a  dc35703b8b00         fdiv qword ptr [0x8b3b70]
// 00804320  dd1c24               fstp qword ptr [esp]
// 00804323  e878f0ffff           call 0x8033a0
// 00804328  db867c070000         fild dword ptr [esi + 0x77c]
// 0080432e  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00804334  83ec18               sub esp, 0x18
// 00804337  dcf9                 fdiv st(1), st(0)
// 00804339  d9c9                 fxch st(1)
// 0080433b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0080433f  db8678070000         fild dword ptr [esi + 0x778]
// 00804345  d8f1                 fdiv st(1)
// 00804347  dd5c2408             fstp qword ptr [esp + 8]
// 0080434b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00804351  dd1c24               fstp qword ptr [esp]
// 00804354  e8d7e5ffff           call 0x802930
// 00804359  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 0080435f  8bf8                 mov edi, eax
// 00804361  83c418               add esp, 0x18
// 00804364  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 0080436a  7408                 je 0x804374
// 0080436c  6a00                 push 0
// 0080436e  57                   push edi
// 0080436f  e85c05f8ff           call 0x7848d0
// 00804374  57                   push edi
// 00804375  8bce                 mov ecx, esi
// 00804377  e8f4e5ffff           call 0x802970
// 0080437c  5f                   pop edi
// 0080437d  5e                   pop esi
// 0080437e  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditLum@CXTColorPageCustom@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp