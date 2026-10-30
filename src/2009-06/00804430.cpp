// roc 2009-06 00804430  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804430
//
// 00804430  56                   push esi
// 00804431  57                   push edi
// 00804432  6a01                 push 1
// 00804434  8bf1                 mov esi, ecx
// 00804436  e88548f1ff           call 0x718cc0
// 0080443b  db867c070000         fild dword ptr [esi + 0x77c]
// 00804441  83ec08               sub esp, 8
// 00804444  8d8e88000000         lea ecx, [esi + 0x88]
// 0080444a  dc35703b8b00         fdiv qword ptr [0x8b3b70]
// 00804450  dd1c24               fstp qword ptr [esp]
// 00804453  e8f8edffff           call 0x803250
// 00804458  db867c070000         fild dword ptr [esi + 0x77c]
// 0080445e  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00804464  83ec18               sub esp, 0x18
// 00804467  dcf9                 fdiv st(1), st(0)
// 00804469  d9c9                 fxch st(1)
// 0080446b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0080446f  db8678070000         fild dword ptr [esi + 0x778]
// 00804475  d8f1                 fdiv st(1)
// 00804477  dd5c2408             fstp qword ptr [esp + 8]
// 0080447b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00804481  dd1c24               fstp qword ptr [esp]
// 00804484  e8a7e4ffff           call 0x802930
// 00804489  db867c070000         fild dword ptr [esi + 0x77c]
// 0080448f  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00804495  83c408               add esp, 8
// 00804498  8d8e08010000         lea ecx, [esi + 0x108]
// 0080449e  8bf8                 mov edi, eax
// 008044a0  dcf9                 fdiv st(1), st(0)
// 008044a2  8b01                 mov eax, dword ptr [ecx]
// 008044a4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008044aa  d9c9                 fxch st(1)
// 008044ac  dd5c2408             fstp qword ptr [esp + 8]
// 008044b0  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008044b6  dd1c24               fstp qword ptr [esp]
// 008044b9  ffd2                 call edx
// 008044bb  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008044c1  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008044c7  7408                 je 0x8044d1
// 008044c9  6a00                 push 0
// 008044cb  57                   push edi
// 008044cc  e8ff03f8ff           call 0x7848d0
// 008044d1  57                   push edi
// 008044d2  8bce                 mov ecx, esi
// 008044d4  e897e4ffff           call 0x802970
// 008044d9  5f                   pop edi
// 008044da  5e                   pop esi
// 008044db  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditSat@CXTColorPageCustom@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp