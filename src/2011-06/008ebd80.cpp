// roc 2011-06 008ebd80  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ebd80
//
// 008ebd80  56                   push esi
// 008ebd81  57                   push edi
// 008ebd82  6a01                 push 1
// 008ebd84  8bf1                 mov esi, ecx
// 008ebd86  e85be5f1ff           call 0x80a2e6
// 008ebd8b  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebd91  83ec08               sub esp, 8
// 008ebd94  8d8e88000000         lea ecx, [esi + 0x88]
// 008ebd9a  dc352891a600         fdiv qword ptr [0xa69128]
// 008ebda0  dd1c24               fstp qword ptr [esp]
// 008ebda3  e8f8edffff           call 0x8eaba0
// 008ebda8  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebdae  dd052891a600         fld qword ptr [0xa69128]
// 008ebdb4  83ec18               sub esp, 0x18
// 008ebdb7  dcf9                 fdiv st(1), st(0)
// 008ebdb9  d9c9                 fxch st(1)
// 008ebdbb  dd5c2410             fstp qword ptr [esp + 0x10]
// 008ebdbf  db8678070000         fild dword ptr [esi + 0x778]
// 008ebdc5  d8f1                 fdiv st(1)
// 008ebdc7  dd5c2408             fstp qword ptr [esp + 8]
// 008ebdcb  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebdd1  dd1c24               fstp qword ptr [esp]
// 008ebdd4  e8a7e4ffff           call 0x8ea280
// 008ebdd9  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebddf  dd052891a600         fld qword ptr [0xa69128]
// 008ebde5  83c408               add esp, 8
// 008ebde8  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebdee  8bf8                 mov edi, eax
// 008ebdf0  dcf9                 fdiv st(1), st(0)
// 008ebdf2  8b01                 mov eax, dword ptr [ecx]
// 008ebdf4  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008ebdfa  d9c9                 fxch st(1)
// 008ebdfc  dd5c2408             fstp qword ptr [esp + 8]
// 008ebe00  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebe06  dd1c24               fstp qword ptr [esp]
// 008ebe09  ffd2                 call edx
// 008ebe0b  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008ebe11  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008ebe17  7408                 je 0x8ebe21
// 008ebe19  6a00                 push 0
// 008ebe1b  57                   push edi
// 008ebe1c  e84f53f8ff           call 0x871170
// 008ebe21  57                   push edi
// 008ebe22  8bce                 mov ecx, esi
// 008ebe24  e897e4ffff           call 0x8ea2c0
// 008ebe29  5f                   pop edi
// 008ebe2a  5e                   pop esi
// 008ebe2b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditSat@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp