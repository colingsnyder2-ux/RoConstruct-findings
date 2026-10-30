// roc 2009-06 008044e0  unit: CXTColorPageCustom  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008044e0
//
// 008044e0  55                   push ebp
// 008044e1  8bec                 mov ebp, esp
// 008044e3  83e4c0               and esp, 0xffffffc0
// 008044e6  83ec34               sub esp, 0x34
// 008044e9  8b4508               mov eax, dword ptr [ebp + 8]
// 008044ec  53                   push ebx
// 008044ed  56                   push esi
// 008044ee  8bf1                 mov esi, ecx
// 008044f0  89442434             mov dword ptr [esp + 0x34], eax
// 008044f4  8d8688000000         lea eax, [esi + 0x88]
// 008044fa  57                   push edi
// 008044fb  85c0                 test eax, eax
// 008044fd  7403                 je 0x804502
// 008044ff  8b4020               mov eax, dword ptr [eax + 0x20]
// 00804502  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00804505  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0080450b  3bf8                 cmp edi, eax
// 0080450d  0f8591000000         jne 0x8045a4
// 00804513  dd86e8000000         fld qword ptr [esi + 0xe8]
// 00804519  d8c9                 fmul st(1)
// 0080451b  e8a059f1ff           call 0x719ec0
// 00804520  dd86f0000000         fld qword ptr [esi + 0xf0]
// 00804526  d8c9                 fmul st(1)
// 00804528  89442438             mov dword ptr [esp + 0x38], eax
// 0080452c  89867c070000         mov dword ptr [esi + 0x77c], eax
// 00804532  e88959f1ff           call 0x719ec0
// 00804537  db442438             fild dword ptr [esp + 0x38]
// 0080453b  83ec18               sub esp, 0x18
// 0080453e  89442454             mov dword ptr [esp + 0x54], eax
// 00804542  d8f1                 fdiv st(1)
// 00804544  898674070000         mov dword ptr [esi + 0x774], eax
// 0080454a  dd5c2410             fstp qword ptr [esp + 0x10]
// 0080454e  db8678070000         fild dword ptr [esi + 0x778]
// 00804554  d8f1                 fdiv st(1)
// 00804556  dd5c2408             fstp qword ptr [esp + 8]
// 0080455a  da7c2454             fidivr dword ptr [esp + 0x54]
// 0080455e  dd1c24               fstp qword ptr [esp]
// 00804561  e8cae3ffff           call 0x802930
// 00804566  db867c070000         fild dword ptr [esi + 0x77c]
// 0080456c  dd05703b8b00         fld qword ptr [0x8b3b70]
// 00804572  83c408               add esp, 8
// 00804575  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 0080457b  8d8e08010000         lea ecx, [esi + 0x108]
// 00804581  dcf9                 fdiv st(1), st(0)
// 00804583  89442448             mov dword ptr [esp + 0x48], eax
// 00804587  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0080458d  d9c9                 fxch st(1)
// 0080458f  dd5c2408             fstp qword ptr [esp + 8]
// 00804593  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00804599  dd1c24               fstp qword ptr [esp]
// 0080459c  ffd0                 call eax
// 0080459e  dd05703b8b00         fld qword ptr [0x8b3b70]
// 008045a4  8d8608010000         lea eax, [esi + 0x108]
// 008045aa  85c0                 test eax, eax
// 008045ac  7403                 je 0x8045b1
// 008045ae  8b4020               mov eax, dword ptr [eax + 0x20]
// 008045b1  3bf8                 cmp edi, eax
// 008045b3  7547                 jne 0x8045fc
// 008045b5  dd8660010000         fld qword ptr [esi + 0x160]
// 008045bb  d8c9                 fmul st(1)
// 008045bd  e8fe58f1ff           call 0x719ec0
// 008045c2  db867c070000         fild dword ptr [esi + 0x77c]
// 008045c8  83ec18               sub esp, 0x18
// 008045cb  89442454             mov dword ptr [esp + 0x54], eax
// 008045cf  d8f1                 fdiv st(1)
// 008045d1  898678070000         mov dword ptr [esi + 0x778], eax
// 008045d7  dd5c2410             fstp qword ptr [esp + 0x10]
// 008045db  db442454             fild dword ptr [esp + 0x54]
// 008045df  d8f1                 fdiv st(1)
// 008045e1  dd5c2408             fstp qword ptr [esp + 8]
// 008045e5  dabe74070000         fidivr dword ptr [esi + 0x774]
// 008045eb  dd1c24               fstp qword ptr [esp]
// 008045ee  e83de3ffff           call 0x802930
// 008045f3  83c418               add esp, 0x18
// 008045f6  89442438             mov dword ptr [esp + 0x38], eax
// 008045fa  eb02                 jmp 0x8045fe
// 008045fc  ddd8                 fstp st(0)
// 008045fe  85ff                 test edi, edi
// 00804600  0f8596000000         jne 0x80469c
// 00804606  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080460a  8dbe74070000         lea edi, [esi + 0x774]
// 00804610  57                   push edi
// 00804611  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00804617  53                   push ebx
// 00804618  8d8678070000         lea eax, [esi + 0x778]
// 0080461e  50                   push eax
// 0080461f  51                   push ecx
// 00804620  8bce                 mov ecx, esi
// 00804622  e889e3ffff           call 0x8029b0
// 00804627  db03                 fild dword ptr [ebx]
// 00804629  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0080462f  83ec10               sub esp, 0x10
// 00804632  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00804638  dcf9                 fdiv st(1), st(0)
// 0080463a  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00804640  8d8e88000000         lea ecx, [esi + 0x88]
// 00804646  d9c9                 fxch st(1)
// 00804648  dd5c2408             fstp qword ptr [esp + 8]
// 0080464c  da3f                 fidivr dword ptr [edi]
// 0080464e  dd1c24               fstp qword ptr [esp]
// 00804651  ffd0                 call eax
// 00804653  db03                 fild dword ptr [ebx]
// 00804655  dd05703b8b00         fld qword ptr [0x8b3b70]
// 0080465b  83ec10               sub esp, 0x10
// 0080465e  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00804664  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0080466a  dcf9                 fdiv st(1), st(0)
// 0080466c  8d8e08010000         lea ecx, [esi + 0x108]
// 00804672  d9c9                 fxch st(1)
// 00804674  dd5c2408             fstp qword ptr [esp + 8]
// 00804678  da3f                 fidivr dword ptr [edi]
// 0080467a  dd1c24               fstp qword ptr [esp]
// 0080467d  ffd0                 call eax
// 0080467f  db8678070000         fild dword ptr [esi + 0x778]
// 00804685  83ec08               sub esp, 8
// 00804688  8d8e08010000         lea ecx, [esi + 0x108]
// 0080468e  dc35703b8b00         fdiv qword ptr [0x8b3b70]
// 00804694  dd1c24               fstp qword ptr [esp]
// 00804697  e804edffff           call 0x8033a0
// 0080469c  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 008046a2  8b442438             mov eax, dword ptr [esp + 0x38]
// 008046a6  3b8124010000         cmp eax, dword ptr [ecx + 0x124]
// 008046ac  7408                 je 0x8046b6
// 008046ae  6a00                 push 0
// 008046b0  50                   push eax
// 008046b1  e81a02f8ff           call 0x7848d0
// 008046b6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008046ba  51                   push ecx
// 008046bb  8bce                 mov ecx, esi
// 008046bd  e8aee2ffff           call 0x802970
// 008046c2  5f                   pop edi
// 008046c3  5e                   pop esi
// 008046c4  33c0                 xor eax, eax
// 008046c6  5b                   pop ebx
// 008046c7  8be5                 mov esp, ebp
// 008046c9  5d                   pop ebp
// 008046ca  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateColor@CXTColorPageCustom@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp