// roc 2011-06 008ebb80  unit: CXTColorPageCustom  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ebb80
//
// 008ebb80  55                   push ebp
// 008ebb81  8bec                 mov ebp, esp
// 008ebb83  83e4c0               and esp, 0xffffffc0
// 008ebb86  83ec34               sub esp, 0x34
// 008ebb89  53                   push ebx
// 008ebb8a  56                   push esi
// 008ebb8b  8bf1                 mov esi, ecx
// 008ebb8d  8b8680070000         mov eax, dword ptr [esi + 0x780]
// 008ebb93  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 008ebb99  57                   push edi
// 008ebb9a  8dbe74070000         lea edi, [esi + 0x774]
// 008ebba0  57                   push edi
// 008ebba1  8d9e7c070000         lea ebx, [esi + 0x77c]
// 008ebba7  53                   push ebx
// 008ebba8  8d8e78070000         lea ecx, [esi + 0x778]
// 008ebbae  51                   push ecx
// 008ebbaf  50                   push eax
// 008ebbb0  8bce                 mov ecx, esi
// 008ebbb2  8944244c             mov dword ptr [esp + 0x4c], eax
// 008ebbb6  e845e7ffff           call 0x8ea300
// 008ebbbb  db03                 fild dword ptr [ebx]
// 008ebbbd  dd052891a600         fld qword ptr [0xa69128]
// 008ebbc3  83ec10               sub esp, 0x10
// 008ebbc6  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008ebbcc  dcf9                 fdiv st(1), st(0)
// 008ebbce  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ebbd4  8d8e88000000         lea ecx, [esi + 0x88]
// 008ebbda  d9c9                 fxch st(1)
// 008ebbdc  dd5c2408             fstp qword ptr [esp + 8]
// 008ebbe0  da3f                 fidivr dword ptr [edi]
// 008ebbe2  dd1c24               fstp qword ptr [esp]
// 008ebbe5  ffd0                 call eax
// 008ebbe7  db03                 fild dword ptr [ebx]
// 008ebbe9  dd052891a600         fld qword ptr [0xa69128]
// 008ebbef  83ec10               sub esp, 0x10
// 008ebbf2  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008ebbf8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008ebbfe  dcf9                 fdiv st(1), st(0)
// 008ebc00  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebc06  d9c9                 fxch st(1)
// 008ebc08  dd5c2408             fstp qword ptr [esp + 8]
// 008ebc0c  da3f                 fidivr dword ptr [edi]
// 008ebc0e  dd1c24               fstp qword ptr [esp]
// 008ebc11  ffd0                 call eax
// 008ebc13  db8678070000         fild dword ptr [esi + 0x778]
// 008ebc19  83ec08               sub esp, 8
// 008ebc1c  8d8e08010000         lea ecx, [esi + 0x108]
// 008ebc22  dc352891a600         fdiv qword ptr [0xa69128]
// 008ebc28  dd1c24               fstp qword ptr [esp]
// 008ebc2b  e890f0ffff           call 0x8eacc0
// 008ebc30  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008ebc34  51                   push ecx
// 008ebc35  8bce                 mov ecx, esi
// 008ebc37  e884e6ffff           call 0x8ea2c0
// 008ebc3c  8bce                 mov ecx, esi
// 008ebc3e  e89d110e00           call 0x9ccde0
// 008ebc43  5f                   pop edi
// 008ebc44  5e                   pop esi
// 008ebc45  5b                   pop ebx
// 008ebc46  8be5                 mov esp, ebp
// 008ebc48  5d                   pop ebp
// 008ebc49  c3                   ret 
// copied from an identical function in another client (function ?OnSetActive@CXTColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp