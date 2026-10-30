// roc 2009-12 008ded20  unit: CXTColorPageCustom  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ded20
//
// 008ded20  55                   push ebp
// 008ded21  8bec                 mov ebp, esp
// 008ded23  83e4c0               and esp, 0xffffffc0
// 008ded26  83ec34               sub esp, 0x34
// 008ded29  53                   push ebx
// 008ded2a  56                   push esi
// 008ded2b  8bf1                 mov esi, ecx
// 008ded2d  8b8680070000         mov eax, dword ptr [esi + 0x780]
// 008ded33  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 008ded39  57                   push edi
// 008ded3a  8dbe74070000         lea edi, [esi + 0x774]
// 008ded40  57                   push edi
// 008ded41  8d9e7c070000         lea ebx, [esi + 0x77c]
// 008ded47  53                   push ebx
// 008ded48  8d8e78070000         lea ecx, [esi + 0x778]
// 008ded4e  51                   push ecx
// 008ded4f  50                   push eax
// 008ded50  8bce                 mov ecx, esi
// 008ded52  8944244c             mov dword ptr [esp + 0x4c], eax
// 008ded56  e845e7ffff           call 0x8dd4a0
// 008ded5b  db03                 fild dword ptr [ebx]
// 008ded5d  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008ded63  83ec10               sub esp, 0x10
// 008ded66  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008ded6c  dcf9                 fdiv st(1), st(0)
// 008ded6e  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ded74  8d8e88000000         lea ecx, [esi + 0x88]
// 008ded7a  d9c9                 fxch st(1)
// 008ded7c  dd5c2408             fstp qword ptr [esp + 8]
// 008ded80  da3f                 fidivr dword ptr [edi]
// 008ded82  dd1c24               fstp qword ptr [esp]
// 008ded85  ffd0                 call eax
// 008ded87  db03                 fild dword ptr [ebx]
// 008ded89  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008ded8f  83ec10               sub esp, 0x10
// 008ded92  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008ded98  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ded9e  dcf9                 fdiv st(1), st(0)
// 008deda0  8d8e08010000         lea ecx, [esi + 0x108]
// 008deda6  d9c9                 fxch st(1)
// 008deda8  dd5c2408             fstp qword ptr [esp + 8]
// 008dedac  da3f                 fidivr dword ptr [edi]
// 008dedae  dd1c24               fstp qword ptr [esp]
// 008dedb1  ffd0                 call eax
// 008dedb3  db8678070000         fild dword ptr [esi + 0x778]
// 008dedb9  83ec08               sub esp, 8
// 008dedbc  8d8e08010000         lea ecx, [esi + 0x108]
// 008dedc2  dc35e0689a00         fdiv qword ptr [0x9a68e0]
// 008dedc8  dd1c24               fstp qword ptr [esp]
// 008dedcb  e8c0f0ffff           call 0x8dde90
// 008dedd0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008dedd4  51                   push ecx
// 008dedd5  8bce                 mov ecx, esi
// 008dedd7  e884e6ffff           call 0x8dd460
// 008deddc  8bce                 mov ecx, esi
// 008dedde  e8af7a0400           call 0x926892
// 008dede3  5f                   pop edi
// 008dede4  5e                   pop esi
// 008dede5  5b                   pop ebx
// 008dede6  8be5                 mov esp, ebp
// 008dede8  5d                   pop ebp
// 008dede9  c3                   ret 
// copied from an identical function in another client (function ?OnSetActive@CXTColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp