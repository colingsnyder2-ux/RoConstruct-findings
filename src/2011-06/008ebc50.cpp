// roc 2011-06 008ebc50  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ebc50
//
// 008ebc50  56                   push esi
// 008ebc51  57                   push edi
// 008ebc52  6a01                 push 1
// 008ebc54  8bf1                 mov esi, ecx
// 008ebc56  e88be6f1ff           call 0x80a2e6
// 008ebc5b  db8678070000         fild dword ptr [esi + 0x778]
// 008ebc61  83ec08               sub esp, 8
// 008ebc64  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebc6a  dc352891a600         fdiv qword ptr [0xa69128]
// 008ebc70  dd1c24               fstp qword ptr [esp]
// 008ebc73  e848f0ffff           call 0x8eacc0
// 008ebc78  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebc7e  dd052891a600         fld qword ptr [0xa69128]
// 008ebc84  83ec18               sub esp, 0x18
// 008ebc87  dcf9                 fdiv st(1), st(0)
// 008ebc89  d9c9                 fxch st(1)
// 008ebc8b  dd5c2410             fstp qword ptr [esp + 0x10]
// 008ebc8f  db8678070000         fild dword ptr [esi + 0x778]
// 008ebc95  d8f1                 fdiv st(1)
// 008ebc97  dd5c2408             fstp qword ptr [esp + 8]
// 008ebc9b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebca1  dd1c24               fstp qword ptr [esp]
// 008ebca4  e8d7e5ffff           call 0x8ea280
// 008ebca9  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008ebcaf  8bf8                 mov edi, eax
// 008ebcb1  83c418               add esp, 0x18
// 008ebcb4  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008ebcba  7408                 je 0x8ebcc4
// 008ebcbc  6a00                 push 0
// 008ebcbe  57                   push edi
// 008ebcbf  e8ac54f8ff           call 0x871170
// 008ebcc4  57                   push edi
// 008ebcc5  8bce                 mov ecx, esi
// 008ebcc7  e8f4e5ffff           call 0x8ea2c0
// 008ebccc  5f                   pop edi
// 008ebccd  5e                   pop esi
// 008ebcce  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditLum@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp