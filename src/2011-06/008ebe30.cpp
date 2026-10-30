// roc 2011-06 008ebe30  unit: CXTColorPageCustom  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ebe30
//
// 008ebe30  55                   push ebp
// 008ebe31  8bec                 mov ebp, esp
// 008ebe33  83e4c0               and esp, 0xffffffc0
// 008ebe36  83ec34               sub esp, 0x34
// 008ebe39  8b4508               mov eax, dword ptr [ebp + 8]
// 008ebe3c  53                   push ebx
// 008ebe3d  56                   push esi
// 008ebe3e  8bf1                 mov esi, ecx
// 008ebe40  89442434             mov dword ptr [esp + 0x34], eax
// 008ebe44  8d8688000000         lea eax, [esi + 0x88]
// 008ebe4a  57                   push edi
// 008ebe4b  85c0                 test eax, eax
// 008ebe4d  7403                 je 0x8ebe52
// 008ebe4f  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ebe52  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 008ebe55  dd052891a600         fld qword ptr [0xa69128]
// 008ebe5b  3bf8                 cmp edi, eax
// 008ebe5d  0f8591000000         jne 0x8ebef4
// 008ebe63  dd86e8000000         fld qword ptr [esi + 0xe8]
// 008ebe69  d8c9                 fmul st(1)
// 008ebe6b  e8c0f6f1ff           call 0x80b530
// 008ebe70  dd86f0000000         fld qword ptr [esi + 0xf0]
// 008ebe76  d8c9                 fmul st(1)
// 008ebe78  89442438             mov dword ptr [esp + 0x38], eax
// 008ebe7c  89867c070000         mov dword ptr [esi + 0x77c], eax
// 008ebe82  e8a9f6f1ff           call 0x80b530
// 008ebe87  db442438             fild dword ptr [esp + 0x38]
// 008ebe8b  83ec18               sub esp, 0x18
// 008ebe8e  89442454             mov dword ptr [esp + 0x54], eax
// 008ebe92  d8f1                 fdiv st(1)
// 008ebe94  898674070000         mov dword ptr [esi + 0x774], eax
// 008ebe9a  dd5c2410             fstp qword ptr [esp + 0x10]
// 008ebe9e  db8678070000         fild dword ptr [esi + 0x778]
// 008ebea4  d8f1                 fdiv st(1)
// 008ebea6  dd5c2408             fstp qword ptr [esp + 8]
// 008ebeaa  da7c2454             fidivr dword ptr [esp + 0x54]
// 008ebeae  dd1c24               fstp qword ptr [esp]
// 008ebeb1  e8cae3ffff           call 0x8ea280
// 008ebeb6  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebebc  dd052891a600         fld qword ptr [0xa69128]
// 008ebec2  83c408               add esp, 8
// 008ebec5  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008ebecb  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebed1  dcf9                 fdiv st(1), st(0)
// 008ebed3  89442448             mov dword ptr [esp + 0x48], eax
// 008ebed7  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ebedd  d9c9                 fxch st(1)
// 008ebedf  dd5c2408             fstp qword ptr [esp + 8]
// 008ebee3  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebee9  dd1c24               fstp qword ptr [esp]
// 008ebeec  ffd0                 call eax
// 008ebeee  dd052891a600         fld qword ptr [0xa69128]
// 008ebef4  8d8608010000         lea eax, [esi + 0x108]
// 008ebefa  85c0                 test eax, eax
// 008ebefc  7403                 je 0x8ebf01
// 008ebefe  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ebf01  3bf8                 cmp edi, eax
// 008ebf03  7547                 jne 0x8ebf4c
// 008ebf05  dd8660010000         fld qword ptr [esi + 0x160]
// 008ebf0b  d8c9                 fmul st(1)
// 008ebf0d  e81ef6f1ff           call 0x80b530
// 008ebf12  db867c070000         fild dword ptr [esi + 0x77c]
// 008ebf18  83ec18               sub esp, 0x18
// 008ebf1b  89442454             mov dword ptr [esp + 0x54], eax
// 008ebf1f  d8f1                 fdiv st(1)
// 008ebf21  898678070000         mov dword ptr [esi + 0x778], eax
// 008ebf27  dd5c2410             fstp qword ptr [esp + 0x10]
// 008ebf2b  db442454             fild dword ptr [esp + 0x54]
// 008ebf2f  d8f1                 fdiv st(1)
// 008ebf31  dd5c2408             fstp qword ptr [esp + 8]
// 008ebf35  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008ebf3b  dd1c24               fstp qword ptr [esp]
// 008ebf3e  e83de3ffff           call 0x8ea280
// 008ebf43  83c418               add esp, 0x18
// 008ebf46  89442438             mov dword ptr [esp + 0x38], eax
// 008ebf4a  eb02                 jmp 0x8ebf4e
// 008ebf4c  ddd8                 fstp st(0)
// 008ebf4e  85ff                 test edi, edi
// 008ebf50  0f8596000000         jne 0x8ebfec
// 008ebf56  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ebf5a  8dbe74070000         lea edi, [esi + 0x774]
// 008ebf60  57                   push edi
// 008ebf61  8d9e7c070000         lea ebx, [esi + 0x77c]
// 008ebf67  53                   push ebx
// 008ebf68  8d8678070000         lea eax, [esi + 0x778]
// 008ebf6e  50                   push eax
// 008ebf6f  51                   push ecx
// 008ebf70  8bce                 mov ecx, esi
// 008ebf72  e889e3ffff           call 0x8ea300
// 008ebf77  db03                 fild dword ptr [ebx]
// 008ebf79  dd052891a600         fld qword ptr [0xa69128]
// 008ebf7f  83ec10               sub esp, 0x10
// 008ebf82  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008ebf88  dcf9                 fdiv st(1), st(0)
// 008ebf8a  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ebf90  8d8e88000000         lea ecx, [esi + 0x88]
// 008ebf96  d9c9                 fxch st(1)
// 008ebf98  dd5c2408             fstp qword ptr [esp + 8]
// 008ebf9c  da3f                 fidivr dword ptr [edi]
// 008ebf9e  dd1c24               fstp qword ptr [esp]
// 008ebfa1  ffd0                 call eax
// 008ebfa3  db03                 fild dword ptr [ebx]
// 008ebfa5  dd052891a600         fld qword ptr [0xa69128]
// 008ebfab  83ec10               sub esp, 0x10
// 008ebfae  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008ebfb4  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ebfba  dcf9                 fdiv st(1), st(0)
// 008ebfbc  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebfc2  d9c9                 fxch st(1)
// 008ebfc4  dd5c2408             fstp qword ptr [esp + 8]
// 008ebfc8  da3f                 fidivr dword ptr [edi]
// 008ebfca  dd1c24               fstp qword ptr [esp]
// 008ebfcd  ffd0                 call eax
// 008ebfcf  db8678070000         fild dword ptr [esi + 0x778]
// 008ebfd5  83ec08               sub esp, 8
// 008ebfd8  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebfde  dc352891a600         fdiv qword ptr [0xa69128]
// 008ebfe4  dd1c24               fstp qword ptr [esp]
// 008ebfe7  e8d4ecffff           call 0x8eacc0
// 008ebfec  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008ebff2  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ebff6  3b8124010000         cmp eax, dword ptr [ecx + 0x124]
// 008ebffc  7408                 je 0x8ec006
// 008ebffe  6a00                 push 0
// 008ec000  50                   push eax
// 008ec001  e86a51f8ff           call 0x871170
// 008ec006  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ec00a  51                   push ecx
// 008ec00b  8bce                 mov ecx, esi
// 008ec00d  e8aee2ffff           call 0x8ea2c0
// 008ec012  5f                   pop edi
// 008ec013  5e                   pop esi
// 008ec014  33c0                 xor eax, eax
// 008ec016  5b                   pop ebx
// 008ec017  8be5                 mov esp, ebp
// 008ec019  5d                   pop ebp
// 008ec01a  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateColor@CXTColorPageCustom@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp