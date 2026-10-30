// roc 2010-06 00893170  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893170
//
// 00893170  56                   push esi
// 00893171  57                   push edi
// 00893172  6a01                 push 1
// 00893174  8bf1                 mov esi, ecx
// 00893176  e8ad4af1ff           call 0x7a7c28
// 0089317b  db867c070000         fild dword ptr [esi + 0x77c]
// 00893181  83ec08               sub esp, 8
// 00893184  8d8e88000000         lea ecx, [esi + 0x88]
// 0089318a  dc358076a000         fdiv qword ptr [0xa07680]
// 00893190  dd1c24               fstp qword ptr [esp]
// 00893193  e8f8edffff           call 0x891f90
// 00893198  db867c070000         fild dword ptr [esi + 0x77c]
// 0089319e  dd058076a000         fld qword ptr [0xa07680]
// 008931a4  83ec18               sub esp, 0x18
// 008931a7  dcf9                 fdiv st(1), st(0)
// 008931a9  d9c9                 fxch st(1)
// 008931ab  dd5c2410             fstp qword ptr [esp + 0x10]
// 008931af  db8678070000         fild dword ptr [esi + 0x778]
// 008931b5  d8f1                 fdiv st(1)
// 008931b7  dd5c2408             fstp qword ptr [esp + 8]
// 008931bb  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008931c1  dd1c24               fstp qword ptr [esp]
// 008931c4  e8a7e4ffff           call 0x891670
// 008931c9  db867c070000         fild dword ptr [esi + 0x77c]
// 008931cf  dd058076a000         fld qword ptr [0xa07680]
// 008931d5  83c408               add esp, 8
// 008931d8  8d8e08010000         lea ecx, [esi + 0x108]
// 008931de  8bf8                 mov edi, eax
// 008931e0  dcf9                 fdiv st(1), st(0)
// 008931e2  8b01                 mov eax, dword ptr [ecx]
// 008931e4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008931ea  d9c9                 fxch st(1)
// 008931ec  dd5c2408             fstp qword ptr [esp + 8]
// 008931f0  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008931f6  dd1c24               fstp qword ptr [esp]
// 008931f9  ffd2                 call edx
// 008931fb  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00893201  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 00893207  7408                 je 0x893211
// 00893209  6a00                 push 0
// 0089320b  57                   push edi
// 0089320c  e8bf06f8ff           call 0x8138d0
// 00893211  57                   push edi
// 00893212  8bce                 mov ecx, esi
// 00893214  e897e4ffff           call 0x8916b0
// 00893219  5f                   pop edi
// 0089321a  5e                   pop esi
// 0089321b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditSat@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp