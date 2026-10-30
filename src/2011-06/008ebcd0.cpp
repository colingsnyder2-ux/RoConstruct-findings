// roc 2011-06 008ebcd0  unit: CXTColorPageCustom  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ebcd0
//
// 008ebcd0  56                   push esi
// 008ebcd1  57                   push edi
// 008ebcd2  6a01                 push 1
// 008ebcd4  8bf1                 mov esi, ecx
// 008ebcd6  e80be6f1ff           call 0x80a2e6
// 008ebcdb  db8674070000         fild dword ptr [esi + 0x774]
// 008ebce1  83ec08               sub esp, 8
// 008ebce4  8d8e88000000         lea ecx, [esi + 0x88]
// 008ebcea  dc352891a600         fdiv qword ptr [0xa69128]
// 008ebcf0  dd1c24               fstp qword ptr [esp]
// 008ebcf3  e858eeffff           call 0x8eab50
// 008ebcf8  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebcfe  dd052891a600         fld qword ptr [0xa69128]
// 008ebd04  83ec18               sub esp, 0x18
// 008ebd07  dcf9                 fdiv st(1), st(0)
// 008ebd09  d9c9                 fxch st(1)
// 008ebd0b  dd5c2410             fstp qword ptr [esp + 0x10]
// 008ebd0f  db8678070000         fild dword ptr [esi + 0x778]
// 008ebd15  d8f1                 fdiv st(1)
// 008ebd17  dd5c2408             fstp qword ptr [esp + 8]
// 008ebd1b  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebd21  dd1c24               fstp qword ptr [esp]
// 008ebd24  e857e5ffff           call 0x8ea280
// 008ebd29  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebd2f  dd052891a600         fld qword ptr [0xa69128]
// 008ebd35  83c408               add esp, 8
// 008ebd38  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebd3e  8bf8                 mov edi, eax
// 008ebd40  dcf9                 fdiv st(1), st(0)
// 008ebd42  8b01                 mov eax, dword ptr [ecx]
// 008ebd44  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 008ebd4a  d9c9                 fxch st(1)
// 008ebd4c  dd5c2408             fstp qword ptr [esp + 8]
// 008ebd50  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebd56  dd1c24               fstp qword ptr [esp]
// 008ebd59  ffd2                 call edx
// 008ebd5b  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008ebd61  3bb924010000         cmp edi, dword ptr [ecx + 0x124]
// 008ebd67  7408                 je 0x8ebd71
// 008ebd69  6a00                 push 0
// 008ebd6b  57                   push edi
// 008ebd6c  e8ff53f8ff           call 0x871170
// 008ebd71  57                   push edi
// 008ebd72  8bce                 mov ecx, esi
// 008ebd74  e847e5ffff           call 0x8ea2c0
// 008ebd79  5f                   pop edi
// 008ebd7a  5e                   pop esi
// 008ebd7b  c3                   ret 
// copied from an identical function in another client (function ?OnChangeEditHue@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp