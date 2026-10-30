// roc 2010-06 00892f70  unit: CXTColorPageCustom  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00892f70
//
// 00892f70  55                   push ebp
// 00892f71  8bec                 mov ebp, esp
// 00892f73  83e4c0               and esp, 0xffffffc0
// 00892f76  83ec34               sub esp, 0x34
// 00892f79  53                   push ebx
// 00892f7a  56                   push esi
// 00892f7b  8bf1                 mov esi, ecx
// 00892f7d  8b8680070000         mov eax, dword ptr [esi + 0x780]
// 00892f83  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 00892f89  57                   push edi
// 00892f8a  8dbe74070000         lea edi, [esi + 0x774]
// 00892f90  57                   push edi
// 00892f91  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00892f97  53                   push ebx
// 00892f98  8d8e78070000         lea ecx, [esi + 0x778]
// 00892f9e  51                   push ecx
// 00892f9f  50                   push eax
// 00892fa0  8bce                 mov ecx, esi
// 00892fa2  8944244c             mov dword ptr [esp + 0x4c], eax
// 00892fa6  e845e7ffff           call 0x8916f0
// 00892fab  db03                 fild dword ptr [ebx]
// 00892fad  dd058076a000         fld qword ptr [0xa07680]
// 00892fb3  83ec10               sub esp, 0x10
// 00892fb6  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00892fbc  dcf9                 fdiv st(1), st(0)
// 00892fbe  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00892fc4  8d8e88000000         lea ecx, [esi + 0x88]
// 00892fca  d9c9                 fxch st(1)
// 00892fcc  dd5c2408             fstp qword ptr [esp + 8]
// 00892fd0  da3f                 fidivr dword ptr [edi]
// 00892fd2  dd1c24               fstp qword ptr [esp]
// 00892fd5  ffd0                 call eax
// 00892fd7  db03                 fild dword ptr [ebx]
// 00892fd9  dd058076a000         fld qword ptr [0xa07680]
// 00892fdf  83ec10               sub esp, 0x10
// 00892fe2  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00892fe8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00892fee  dcf9                 fdiv st(1), st(0)
// 00892ff0  8d8e08010000         lea ecx, [esi + 0x108]
// 00892ff6  d9c9                 fxch st(1)
// 00892ff8  dd5c2408             fstp qword ptr [esp + 8]
// 00892ffc  da3f                 fidivr dword ptr [edi]
// 00892ffe  dd1c24               fstp qword ptr [esp]
// 00893001  ffd0                 call eax
// 00893003  db8678070000         fild dword ptr [esi + 0x778]
// 00893009  83ec08               sub esp, 8
// 0089300c  8d8e08010000         lea ecx, [esi + 0x108]
// 00893012  dc358076a000         fdiv qword ptr [0xa07680]
// 00893018  dd1c24               fstp qword ptr [esp]
// 0089301b  e890f0ffff           call 0x8920b0
// 00893020  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00893024  51                   push ecx
// 00893025  8bce                 mov ecx, esi
// 00893027  e884e6ffff           call 0x8916b0
// 0089302c  8bce                 mov ecx, esi
// 0089302e  e89ba10e00           call 0x97d1ce
// 00893033  5f                   pop edi
// 00893034  5e                   pop esi
// 00893035  5b                   pop ebx
// 00893036  8be5                 mov esp, ebp
// 00893038  5d                   pop ebp
// 00893039  c3                   ret 
// copied from an identical function in another client (function ?OnSetActive@CXTColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp