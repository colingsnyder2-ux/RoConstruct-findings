// roc 2010-06 008930c0  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008930c0
//
// 008930c0  56                   push esi
// 008930c1  57                   push edi
// 008930c2  6a01                 push 1
// 008930c4  8bf1                 mov esi, ecx
// 008930c6  e85d4bf1ff           call 0x7a7c28
// 008930cb  db8674070000         fild dword ptr [esi + 0x774]
// 008930d1  83ec08               sub esp, 8
// 008930d4  8d8e88000000         lea ecx, [esi + 0x88]
// 008930da  dc358076a000         fdiv qword ptr [0xa07680]
// 008930e0  dd1c24               fstp qword ptr [esp]
// 008930e3  e858eeffff           call 0x891f40
// 008930e8  db867c070000         fild dword ptr [esi + 0x77c]
// 008930ee  dd058076a000         fld qword ptr [0xa07680]
// 008930f4  83ec18               sub esp, 0x18
// 008930f7  dcf9                 fdiv st(1), st(0)
// 008930f9  d9c9                 fxch st(1)
// 008930fb  dd5c2410             fstp qword ptr [esp + 0x10]
// 008930ff  db8678070000         fild dword ptr [esi + 0x778]
// 00893105  d8f1                 fdiv st(1)
// 00893107  dd5c2408             fstp qword ptr [esp + 8]
// 0089310b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00893111  dd1c24               fstp qword ptr [esp]
// 00893114  e857e5ffff           call 0x891670
// 00893119  db867c070000         fild dword ptr [esi + 0x77c]
// 0089311f  dd058076a000         fld qword ptr [0xa07680]
// 00893125  83c408               add esp, 8
// 00893128  8d8e08010000         lea ecx, [esi + 0x108]
// 0089312e  8bf8                 mov edi, eax
// 00893130  dcf9                 fdiv st(1), st(0)
// 00893132  8b01                 mov eax, dword ptr [ecx]
// 00893134  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0089313a  d9c9                 fxch st(1)
// 0089313c  dd5c2408             fstp qword ptr [esp + 8]
// 00893140  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00893146  dd1c24               fstp qword ptr [esp]
// 00893149  ffd2                 call edx
// 0089314b  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00893151  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00893157  7408                 je 0x893161
// 00893159  6a00                 push 0
// 0089315b  57                   push edi
// 0089315c  e86f07f8ff           call 0x8138d0
// 00893161  57                   push edi
// 00893162  8bce                 mov ecx, esi
// 00893164  e847e5ffff           call 0x8916b0
// 00893169  5f                   pop edi
// 0089316a  5e                   pop esi
// 0089316b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditHue@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp