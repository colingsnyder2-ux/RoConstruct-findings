// roc 2010-06 00893220  unit: CXTColorPageCustom  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893220
//
// 00893220  55                   push ebp
// 00893221  8bec                 mov ebp, esp
// 00893223  83e4c0               and esp, 0xffffffc0
// 00893226  83ec34               sub esp, 0x34
// 00893229  8b4508               mov eax, dword ptr [ebp + 8]
// 0089322c  53                   push ebx
// 0089322d  56                   push esi
// 0089322e  8bf1                 mov esi, ecx
// 00893230  89442434             mov dword ptr [esp + 0x34], eax
// 00893234  8d8688000000         lea eax, [esi + 0x88]
// 0089323a  57                   push edi
// 0089323b  85c0                 test eax, eax
// 0089323d  7403                 je 0x893242
// 0089323f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00893242  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00893245  dd058076a000         fld qword ptr [0xa07680]
// 0089324b  3bf8                 cmp edi, eax
// 0089324d  0f8591000000         jne 0x8932e4
// 00893253  dd86e8000000         fld qword ptr [esi + 0xe8]
// 00893259  d8c9                 fmul st(1)
// 0089325b  e8d05bf1ff           call 0x7a8e30
// 00893260  dd86f0000000         fld qword ptr [esi + 0xf0]
// 00893266  d8c9                 fmul st(1)
// 00893268  89442438             mov dword ptr [esp + 0x38], eax
// 0089326c  89867c070000         mov dword ptr [esi + 0x77c], eax
// 00893272  e8b95bf1ff           call 0x7a8e30
// 00893277  db442438             fild dword ptr [esp + 0x38]
// 0089327b  83ec18               sub esp, 0x18
// 0089327e  89442454             mov dword ptr [esp + 0x54], eax
// 00893282  d8f1                 fdiv st(1)
// 00893284  898674070000         mov dword ptr [esi + 0x774], eax
// 0089328a  dd5c2410             fstp qword ptr [esp + 0x10]
// 0089328e  db8678070000         fild dword ptr [esi + 0x778]
// 00893294  d8f1                 fdiv st(1)
// 00893296  dd5c2408             fstp qword ptr [esp + 8]
// 0089329a  da7c2454             fidivr dword ptr [esp + 0x54]
// 0089329e  dd1c24               fstp qword ptr [esp]
// 008932a1  e8cae3ffff           call 0x891670
// 008932a6  db867c070000         fild dword ptr [esi + 0x77c]
// 008932ac  dd058076a000         fld qword ptr [0xa07680]
// 008932b2  83c408               add esp, 8
// 008932b5  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008932bb  8d8e08010000         lea ecx, [esi + 0x108]
// 008932c1  dcf9                 fdiv st(1), st(0)
// 008932c3  89442448             mov dword ptr [esp + 0x48], eax
// 008932c7  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008932cd  d9c9                 fxch st(1)
// 008932cf  dd5c2408             fstp qword ptr [esp + 8]
// 008932d3  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008932d9  dd1c24               fstp qword ptr [esp]
// 008932dc  ffd0                 call eax
// 008932de  dd058076a000         fld qword ptr [0xa07680]
// 008932e4  8d8608010000         lea eax, [esi + 0x108]
// 008932ea  85c0                 test eax, eax
// 008932ec  7403                 je 0x8932f1
// 008932ee  8b4020               mov eax, dword ptr [eax + 0x20]
// 008932f1  3bf8                 cmp edi, eax
// 008932f3  7547                 jne 0x89333c
// 008932f5  dd8660010000         fld qword ptr [esi + 0x160]
// 008932fb  d8c9                 fmul st(1)
// 008932fd  e82e5bf1ff           call 0x7a8e30
// 00893302  db867c070000         fild dword ptr [esi + 0x77c]
// 00893308  83ec18               sub esp, 0x18
// 0089330b  89442454             mov dword ptr [esp + 0x54], eax
// 0089330f  d8f1                 fdiv st(1)
// 00893311  898678070000         mov dword ptr [esi + 0x778], eax
// 00893317  dd5c2410             fstp qword ptr [esp + 0x10]
// 0089331b  db442454             fild dword ptr [esp + 0x54]
// 0089331f  d8f1                 fdiv st(1)
// 00893321  dd5c2408             fstp qword ptr [esp + 8]
// 00893325  dabe74070000         fidivr dword ptr [esi + 0x774]
// 0089332b  dd1c24               fstp qword ptr [esp]
// 0089332e  e83de3ffff           call 0x891670
// 00893333  83c418               add esp, 0x18
// 00893336  89442438             mov dword ptr [esp + 0x38], eax
// 0089333a  eb02                 jmp 0x89333e
// 0089333c  ddd8                 fstp st(0)
// 0089333e  85ff                 test edi, edi
// 00893340  0f8596000000         jne 0x8933dc
// 00893346  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089334a  8dbe74070000         lea edi, [esi + 0x774]
// 00893350  57                   push edi
// 00893351  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00893357  53                   push ebx
// 00893358  8d8678070000         lea eax, [esi + 0x778]
// 0089335e  50                   push eax
// 0089335f  51                   push ecx
// 00893360  8bce                 mov ecx, esi
// 00893362  e889e3ffff           call 0x8916f0
// 00893367  db03                 fild dword ptr [ebx]
// 00893369  dd058076a000         fld qword ptr [0xa07680]
// 0089336f  83ec10               sub esp, 0x10
// 00893372  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00893378  dcf9                 fdiv st(1), st(0)
// 0089337a  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00893380  8d8e88000000         lea ecx, [esi + 0x88]
// 00893386  d9c9                 fxch st(1)
// 00893388  dd5c2408             fstp qword ptr [esp + 8]
// 0089338c  da3f                 fidivr dword ptr [edi]
// 0089338e  dd1c24               fstp qword ptr [esp]
// 00893391  ffd0                 call eax
// 00893393  db03                 fild dword ptr [ebx]
// 00893395  dd058076a000         fld qword ptr [0xa07680]
// 0089339b  83ec10               sub esp, 0x10
// 0089339e  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 008933a4  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008933aa  dcf9                 fdiv st(1), st(0)
// 008933ac  8d8e08010000         lea ecx, [esi + 0x108]
// 008933b2  d9c9                 fxch st(1)
// 008933b4  dd5c2408             fstp qword ptr [esp + 8]
// 008933b8  da3f                 fidivr dword ptr [edi]
// 008933ba  dd1c24               fstp qword ptr [esp]
// 008933bd  ffd0                 call eax
// 008933bf  db8678070000         fild dword ptr [esi + 0x778]
// 008933c5  83ec08               sub esp, 8
// 008933c8  8d8e08010000         lea ecx, [esi + 0x108]
// 008933ce  dc358076a000         fdiv qword ptr [0xa07680]
// 008933d4  dd1c24               fstp qword ptr [esp]
// 008933d7  e8d4ecffff           call 0x8920b0
// 008933dc  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008933e2  8b442438             mov eax, dword ptr [esp + 0x38]
// 008933e6  3b8124010000         cmp eax, dword ptr [ecx + 0x124]
// 008933ec  7408                 je 0x8933f6
// 008933ee  6a00                 push 0
// 008933f0  50                   push eax
// 008933f1  e8da04f8ff           call 0x8138d0
// 008933f6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008933fa  51                   push ecx
// 008933fb  8bce                 mov ecx, esi
// 008933fd  e8aee2ffff           call 0x8916b0
// 00893402  5f                   pop edi
// 00893403  5e                   pop esi
// 00893404  33c0                 xor eax, eax
// 00893406  5b                   pop ebx
// 00893407  8be5                 mov esp, ebp
// 00893409  5d                   pop ebp
// 0089340a  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateColor@CXTColorPageCustom@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp