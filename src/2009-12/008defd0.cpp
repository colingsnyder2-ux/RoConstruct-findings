// roc 2009-12 008defd0  unit: CXTColorPageCustom  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008defd0
//
// 008defd0  55                   push ebp
// 008defd1  8bec                 mov ebp, esp
// 008defd3  83e4c0               and esp, 0xffffffc0
// 008defd6  83ec34               sub esp, 0x34
// 008defd9  8b4508               mov eax, dword ptr [ebp + 8]
// 008defdc  53                   push ebx
// 008defdd  56                   push esi
// 008defde  8bf1                 mov esi, ecx
// 008defe0  89442434             mov dword ptr [esp + 0x34], eax
// 008defe4  8d8688000000         lea eax, [esi + 0x88]
// 008defea  57                   push edi
// 008defeb  85c0                 test eax, eax
// 008defed  7403                 je 0x8deff2
// 008defef  8b4020               mov eax, dword ptr [eax + 0x20]
// 008deff2  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008deff5  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008deffb  3bf8                 cmp edi, eax
// 008deffd  0f8591000000         jne 0x8df094
// 008df003  dd86e8000000         fld qword ptr [esi + 0xe8]
// 008df009  d8c9                 fmul st(1)
// 008df00b  e8e05cf1ff           call 0x7f4cf0
// 008df010  dd86f0000000         fld qword ptr [esi + 0xf0]
// 008df016  d8c9                 fmul st(1)
// 008df018  89442438             mov dword ptr [esp + 0x38], eax
// 008df01c  89867c070000         mov dword ptr [esi + 0x77c], eax
// 008df022  e8c95cf1ff           call 0x7f4cf0
// 008df027  db442438             fild dword ptr [esp + 0x38]
// 008df02b  83ec18               sub esp, 0x18
// 008df02e  89442454             mov dword ptr [esp + 0x54], eax
// 008df032  d8f1                 fdiv st(1)
// 008df034  898674070000         mov dword ptr [esi + 0x774], eax
// 008df03a  dd5c2410             fstp qword ptr [esp + 0x10]
// 008df03e  db8678070000         fild dword ptr [esi + 0x778]
// 008df044  d8f1                 fdiv st(1)
// 008df046  dd5c2408             fstp qword ptr [esp + 8]
// 008df04a  da7c2454             fidivr dword ptr [esp + 0x54]
// 008df04e  dd1c24               fstp qword ptr [esp]
// 008df051  e8cae3ffff           call 0x8dd420
// 008df056  db867c070000         fild dword ptr [esi + 0x77c]
// 008df05c  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008df062  83c408               add esp, 8
// 008df065  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008df06b  8d8e08010000         lea ecx, [esi + 0x108]
// 008df071  dcf9                 fdiv st(1), st(0)
// 008df073  89442448             mov dword ptr [esp + 0x48], eax
// 008df077  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008df07d  d9c9                 fxch st(1)
// 008df07f  dd5c2408             fstp qword ptr [esp + 8]
// 008df083  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008df089  dd1c24               fstp qword ptr [esp]
// 008df08c  ffd0                 call eax
// 008df08e  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008df094  8d8608010000         lea eax, [esi + 0x108]
// 008df09a  85c0                 test eax, eax
// 008df09c  7403                 je 0x8df0a1
// 008df09e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008df0a1  3bf8                 cmp edi, eax
// 008df0a3  7547                 jne 0x8df0ec
// 008df0a5  dd8660010000         fld qword ptr [esi + 0x160]
// 008df0ab  d8c9                 fmul st(1)
// 008df0ad  e83e5cf1ff           call 0x7f4cf0
// 008df0b2  db867c070000         fild dword ptr [esi + 0x77c]
// 008df0b8  83ec18               sub esp, 0x18
// 008df0bb  89442454             mov dword ptr [esp + 0x54], eax
// 008df0bf  d8f1                 fdiv st(1)
// 008df0c1  898678070000         mov dword ptr [esi + 0x778], eax
// 008df0c7  dd5c2410             fstp qword ptr [esp + 0x10]
// 008df0cb  db442454             fild dword ptr [esp + 0x54]
// 008df0cf  d8f1                 fdiv st(1)
// 008df0d1  dd5c2408             fstp qword ptr [esp + 8]
// 008df0d5  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008df0db  dd1c24               fstp qword ptr [esp]
// 008df0de  e83de3ffff           call 0x8dd420
// 008df0e3  83c418               add esp, 0x18
// 008df0e6  89442438             mov dword ptr [esp + 0x38], eax
// 008df0ea  eb02                 jmp 0x8df0ee
// 008df0ec  ddd8                 fstp st(0)
// 008df0ee  85ff                 test edi, edi
// 008df0f0  0f8596000000         jne 0x8df18c
// 008df0f6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008df0fa  8dbe74070000         lea edi, [esi + 0x774]
// 008df100  57                   push edi
// 008df101  8d9e7c070000         lea ebx, [esi + 0x77c]
// 008df107  53                   push ebx
// 008df108  8d8678070000         lea eax, [esi + 0x778]
// 008df10e  50                   push eax
// 008df10f  51                   push ecx
// 008df110  8bce                 mov ecx, esi
// 008df112  e889e3ffff           call 0x8dd4a0
// 008df117  db03                 fild dword ptr [ebx]
// 008df119  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008df11f  83ec10               sub esp, 0x10
// 008df122  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008df128  dcf9                 fdiv st(1), st(0)
// 008df12a  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008df130  8d8e88000000         lea ecx, [esi + 0x88]
// 008df136  d9c9                 fxch st(1)
// 008df138  dd5c2408             fstp qword ptr [esp + 8]
// 008df13c  da3f                 fidivr dword ptr [edi]
// 008df13e  dd1c24               fstp qword ptr [esp]
// 008df141  ffd0                 call eax
// 008df143  db03                 fild dword ptr [ebx]
// 008df145  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008df14b  83ec10               sub esp, 0x10
// 008df14e  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008df154  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008df15a  dcf9                 fdiv st(1), st(0)
// 008df15c  8d8e08010000         lea ecx, [esi + 0x108]
// 008df162  d9c9                 fxch st(1)
// 008df164  dd5c2408             fstp qword ptr [esp + 8]
// 008df168  da3f                 fidivr dword ptr [edi]
// 008df16a  dd1c24               fstp qword ptr [esp]
// 008df16d  ffd0                 call eax
// 008df16f  db8678070000         fild dword ptr [esi + 0x778]
// 008df175  83ec08               sub esp, 8
// 008df178  8d8e08010000         lea ecx, [esi + 0x108]
// 008df17e  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 008df184  dd1c24               fstp qword ptr [esp]
// 008df187  e804edffff           call 0x8dde90
// 008df18c  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008df192  8b442438             mov eax, dword ptr [esp + 0x38]
// 008df196  3b8124010000         cmp eax, dword ptr [ecx + 0x124]
// 008df19c  7408                 je 0x8df1a6
// 008df19e  6a00                 push 0
// 008df1a0  50                   push eax
// 008df1a1  e83a07f8ff           call 0x85f8e0
// 008df1a6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008df1aa  51                   push ecx
// 008df1ab  8bce                 mov ecx, esi
// 008df1ad  e8aee2ffff           call 0x8dd460
// 008df1b2  5f                   pop edi
// 008df1b3  5e                   pop esi
// 008df1b4  33c0                 xor eax, eax
// 008df1b6  5b                   pop ebx
// 008df1b7  8be5                 mov esp, ebp
// 008df1b9  5d                   pop ebp
// 008df1ba  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateColor@CXTColorPageCustom@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp