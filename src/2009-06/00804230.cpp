// roc 2009-06 00804230  unit: CXTColorPageCustom  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804230
//
// 00804230  55                   push ebp
// 00804231  8bec                 mov ebp, esp
// 00804233  83e4c0               and esp, 0xffffffc0
// 00804236  83ec34               sub esp, 0x34
// 00804239  53                   push ebx
// 0080423a  56                   push esi
// 0080423b  8bf1                 mov esi, ecx
// 0080423d  8b8680070000         mov eax, dword ptr [esi + 0x780]
// 00804243  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 00804249  57                   push edi
// 0080424a  8dbe74070000         lea edi, [esi + 0x774]
// 00804250  57                   push edi
// 00804251  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00804257  53                   push ebx
// 00804258  8d8e78070000         lea ecx, [esi + 0x778]
// 0080425e  51                   push ecx
// 0080425f  50                   push eax
// 00804260  8bce                 mov ecx, esi
// 00804262  8944244c             mov dword ptr [esp + 0x4c], eax
// 00804266  e845e7ffff           call 0x8029b0
// 0080426b  db03                 fild dword ptr [ebx]
// 0080426d  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00804273  83ec10               sub esp, 0x10
// 00804276  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0080427c  dcf9                 fdiv st(1), st(0)
// 0080427e  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00804284  8d8e88000000         lea ecx, [esi + 0x88]
// 0080428a  d9c9                 fxch st(1)
// 0080428c  dd5c2408             fstp qword ptr [esp + 8]
// 00804290  da3f                 fidivr dword ptr [edi]
// 00804292  dd1c24               fstp qword ptr [esp]
// 00804295  ffd0                 call eax
// 00804297  db03                 fild dword ptr [ebx]
// 00804299  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0080429f  83ec10               sub esp, 0x10
// 008042a2  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008042a8  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008042ae  dcf9                 fdiv st(1), st(0)
// 008042b0  8d8e08010000         lea ecx, [esi + 0x108]
// 008042b6  d9c9                 fxch st(1)
// 008042b8  dd5c2408             fstp qword ptr [esp + 8]
// 008042bc  da3f                 fidivr dword ptr [edi]
// 008042be  dd1c24               fstp qword ptr [esp]
// 008042c1  ffd0                 call eax
// 008042c3  db8678070000         fild dword ptr [esi + 0x778]
// 008042c9  83ec08               sub esp, 8
// 008042cc  8d8e08010000         lea ecx, [esi + 0x108]
// 008042d2  dc35703b8b00         fdiv qword ptr [0x8b3b70]
// 008042d8  dd1c24               fstp qword ptr [esp]
// 008042db  e8c0f0ffff           call 0x8033a0
// 008042e0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008042e4  51                   push ecx
// 008042e5  8bce                 mov ecx, esi
// 008042e7  e884e6ffff           call 0x802970
// 008042ec  8bce                 mov ecx, esi
// 008042ee  e833800400           call 0x84c326
// 008042f3  5f                   pop edi
// 008042f4  5e                   pop esi
// 008042f5  5b                   pop ebx
// 008042f6  8be5                 mov esp, ebp
// 008042f8  5d                   pop ebp
// 008042f9  c3                   ret 
// copied from an identical function in another client (function ?OnSetActive@CXTColorPageCustom@@MAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp