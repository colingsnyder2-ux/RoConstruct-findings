// roc 2009-06 00804380  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804380
//
// 00804380  56                   push esi
// 00804381  57                   push edi
// 00804382  6a01                 push 1
// 00804384  8bf1                 mov esi, ecx
// 00804386  e83549f1ff           call 0x718cc0
// 0080438b  db8674070000         fild dword ptr [esi + 0x774]
// 00804391  83ec08               sub esp, 8
// 00804394  8d8e88000000         lea ecx, [esi + 0x88]
// 0080439a  dc35703b8b00         fdiv qword ptr [0x8b3b70]
// 008043a0  dd1c24               fstp qword ptr [esp]
// 008043a3  e858eeffff           call 0x803200
// 008043a8  db867c070000         fild dword ptr [esi + 0x77c]
// 008043ae  dd05703b8b00         fld qword ptr [0x8b3b70]
// 008043b4  83ec18               sub esp, 0x18
// 008043b7  dcf9                 fdiv st(1), st(0)
// 008043b9  d9c9                 fxch st(1)
// 008043bb  dd5c2410             fstp qword ptr [esp + 0x10]
// 008043bf  db8678070000         fild dword ptr [esi + 0x778]
// 008043c5  d8f1                 fdiv st(1)
// 008043c7  dd5c2408             fstp qword ptr [esp + 8]
// 008043cb  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008043d1  dd1c24               fstp qword ptr [esp]
// 008043d4  e857e5ffff           call 0x802930
// 008043d9  db867c070000         fild dword ptr [esi + 0x77c]
// 008043df  dd05703b8b00         fld qword ptr [0x8b3b70]
// 008043e5  83c408               add esp, 8
// 008043e8  8d8e08010000         lea ecx, [esi + 0x108]
// 008043ee  8bf8                 mov edi, eax
// 008043f0  dcf9                 fdiv st(1), st(0)
// 008043f2  8b01                 mov eax, dword ptr [ecx]
// 008043f4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008043fa  d9c9                 fxch st(1)
// 008043fc  dd5c2408             fstp qword ptr [esp + 8]
// 00804400  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00804406  dd1c24               fstp qword ptr [esp]
// 00804409  ffd2                 call edx
// 0080440b  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00804411  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00804417  7408                 je 0x804421
// 00804419  6a00                 push 0
// 0080441b  57                   push edi
// 0080441c  e8af04f8ff           call 0x7848d0
// 00804421  57                   push edi
// 00804422  8bce                 mov ecx, esi
// 00804424  e847e5ffff           call 0x802970
// 00804429  5f                   pop edi
// 0080442a  5e                   pop esi
// 0080442b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditHue@CXTColorPageCustom@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp