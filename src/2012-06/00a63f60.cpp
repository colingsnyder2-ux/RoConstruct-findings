// roc 2012-06 00a63f60  unit: CXTColorPageCustom  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63f60
//
// 00a63f60  55                   push ebp
// 00a63f61  8bec                 mov ebp, esp
// 00a63f63  83e4c0               and esp, 0xffffffc0
// 00a63f66  83ec34               sub esp, 0x34
// 00a63f69  53                   push ebx
// 00a63f6a  56                   push esi
// 00a63f6b  8bf1                 mov esi, ecx
// 00a63f6d  8b8680070000         mov eax, dword ptr [esi + 0x780]
// 00a63f73  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 00a63f79  57                   push edi
// 00a63f7a  8dbe74070000         lea edi, [esi + 0x774]
// 00a63f80  57                   push edi
// 00a63f81  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00a63f87  53                   push ebx
// 00a63f88  8d8e78070000         lea ecx, [esi + 0x778]
// 00a63f8e  51                   push ecx
// 00a63f8f  50                   push eax
// 00a63f90  8bce                 mov ecx, esi
// 00a63f92  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a63f96  e845e7ffff           call 0xa626e0
// 00a63f9b  db03                 fild dword ptr [ebx]
// 00a63f9d  dd05383bb500         fld qword ptr [0xb53b38]
// 00a63fa3  83ec10               sub esp, 0x10
// 00a63fa6  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00a63fac  dcf9                 fdiv st(1), st(0)
// 00a63fae  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a63fb4  8d8e88000000         lea ecx, [esi + 0x88]
// 00a63fba  d9c9                 fxch st(1)
// 00a63fbc  dd5c2408             fstp qword ptr [esp + 8]
// 00a63fc0  da3f                 fidivr dword ptr [edi]
// 00a63fc2  dd1c24               fstp qword ptr [esp]
// 00a63fc5  ffd0                 call eax
// 00a63fc7  db03                 fild dword ptr [ebx]
// 00a63fc9  dd05383bb500         fld qword ptr [0xb53b38]
// 00a63fcf  83ec10               sub esp, 0x10
// 00a63fd2  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00a63fd8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a63fde  dcf9                 fdiv st(1), st(0)
// 00a63fe0  8d8e08010000         lea ecx, [esi + 0x108]
// 00a63fe6  d9c9                 fxch st(1)
// 00a63fe8  dd5c2408             fstp qword ptr [esp + 8]
// 00a63fec  da3f                 fidivr dword ptr [edi]
// 00a63fee  dd1c24               fstp qword ptr [esp]
// 00a63ff1  ffd0                 call eax
// 00a63ff3  db8678070000         fild dword ptr [esi + 0x778]
// 00a63ff9  83ec08               sub esp, 8
// 00a63ffc  8d8e08010000         lea ecx, [esi + 0x108]
// 00a64002  dc35383bb500         fdiv qword ptr [0xb53b38]
// 00a64008  dd1c24               fstp qword ptr [esp]
// 00a6400b  e890f0ffff           call 0xa630a0
// 00a64010  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a64014  51                   push ecx
// 00a64015  8bce                 mov ecx, esi
// 00a64017  e884e6ffff           call 0xa626a0
// 00a6401c  8bce                 mov ecx, esi
// 00a6401e  e86b5d0300           call 0xa99d8e
// 00a64023  5f                   pop edi
// 00a64024  5e                   pop esi
// 00a64025  5b                   pop ebx
// 00a64026  8be5                 mov esp, ebp
// 00a64028  5d                   pop ebp
// 00a64029  c3                   ret 
// copied from an identical function in another client (function ?OnSetActive@CXTColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp