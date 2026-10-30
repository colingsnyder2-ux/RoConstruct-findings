// roc 2012-06 00a64210  unit: CXTColorPageCustom  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64210
//
// 00a64210  55                   push ebp
// 00a64211  8bec                 mov ebp, esp
// 00a64213  83e4c0               and esp, 0xffffffc0
// 00a64216  83ec34               sub esp, 0x34
// 00a64219  8b4508               mov eax, dword ptr [ebp + 8]
// 00a6421c  53                   push ebx
// 00a6421d  56                   push esi
// 00a6421e  8bf1                 mov esi, ecx
// 00a64220  89442434             mov dword ptr [esp + 0x34], eax
// 00a64224  8d8688000000         lea eax, [esi + 0x88]
// 00a6422a  57                   push edi
// 00a6422b  85c0                 test eax, eax
// 00a6422d  7403                 je 0xa64232
// 00a6422f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a64232  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00a64235  dd05383bb500         fld qword ptr [0xb53b38]
// 00a6423b  3bf8                 cmp edi, eax
// 00a6423d  0f8591000000         jne 0xa642d4
// 00a64243  dd86e8000000         fld qword ptr [esi + 0xe8]
// 00a64249  d8c9                 fmul st(1)
// 00a6424b  e860f3f1ff           call 0x9835b0
// 00a64250  dd86f0000000         fld qword ptr [esi + 0xf0]
// 00a64256  d8c9                 fmul st(1)
// 00a64258  89442438             mov dword ptr [esp + 0x38], eax
// 00a6425c  89867c070000         mov dword ptr [esi + 0x77c], eax
// 00a64262  e849f3f1ff           call 0x9835b0
// 00a64267  db442438             fild dword ptr [esp + 0x38]
// 00a6426b  83ec18               sub esp, 0x18
// 00a6426e  89442454             mov dword ptr [esp + 0x54], eax
// 00a64272  d8f1                 fdiv st(1)
// 00a64274  898674070000         mov dword ptr [esi + 0x774], eax
// 00a6427a  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a6427e  db8678070000         fild dword ptr [esi + 0x778]
// 00a64284  d8f1                 fdiv st(1)
// 00a64286  dd5c2408             fstp qword ptr [esp + 8]
// 00a6428a  da7c2454             fidivr dword ptr [esp + 0x54]
// 00a6428e  dd1c24               fstp qword ptr [esp]
// 00a64291  e8cae3ffff           call 0xa62660
// 00a64296  db867c070000         fild dword ptr [esi + 0x77c]
// 00a6429c  dd05383bb500         fld qword ptr [0xb53b38]
// 00a642a2  83c408               add esp, 8
// 00a642a5  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00a642ab  8d8e08010000         lea ecx, [esi + 0x108]
// 00a642b1  dcf9                 fdiv st(1), st(0)
// 00a642b3  89442448             mov dword ptr [esp + 0x48], eax
// 00a642b7  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a642bd  d9c9                 fxch st(1)
// 00a642bf  dd5c2408             fstp qword ptr [esp + 8]
// 00a642c3  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a642c9  dd1c24               fstp qword ptr [esp]
// 00a642cc  ffd0                 call eax
// 00a642ce  dd05383bb500         fld qword ptr [0xb53b38]
// 00a642d4  8d8608010000         lea eax, [esi + 0x108]
// 00a642da  85c0                 test eax, eax
// 00a642dc  7403                 je 0xa642e1
// 00a642de  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a642e1  3bf8                 cmp edi, eax
// 00a642e3  7547                 jne 0xa6432c
// 00a642e5  dd8660010000         fld qword ptr [esi + 0x160]
// 00a642eb  d8c9                 fmul st(1)
// 00a642ed  e8bef2f1ff           call 0x9835b0
// 00a642f2  db867c070000         fild dword ptr [esi + 0x77c]
// 00a642f8  83ec18               sub esp, 0x18
// 00a642fb  89442454             mov dword ptr [esp + 0x54], eax
// 00a642ff  d8f1                 fdiv st(1)
// 00a64301  898678070000         mov dword ptr [esi + 0x778], eax
// 00a64307  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a6430b  db442454             fild dword ptr [esp + 0x54]
// 00a6430f  d8f1                 fdiv st(1)
// 00a64311  dd5c2408             fstp qword ptr [esp + 8]
// 00a64315  dabe74070000         fidivr dword ptr [esi + 0x774]
// 00a6431b  dd1c24               fstp qword ptr [esp]
// 00a6431e  e83de3ffff           call 0xa62660
// 00a64323  83c418               add esp, 0x18
// 00a64326  89442438             mov dword ptr [esp + 0x38], eax
// 00a6432a  eb02                 jmp 0xa6432e
// 00a6432c  ddd8                 fstp st(0)
// 00a6432e  85ff                 test edi, edi
// 00a64330  0f8596000000         jne 0xa643cc
// 00a64336  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a6433a  8dbe74070000         lea edi, [esi + 0x774]
// 00a64340  57                   push edi
// 00a64341  8d9e7c070000         lea ebx, [esi + 0x77c]
// 00a64347  53                   push ebx
// 00a64348  8d8678070000         lea eax, [esi + 0x778]
// 00a6434e  50                   push eax
// 00a6434f  51                   push ecx
// 00a64350  8bce                 mov ecx, esi
// 00a64352  e889e3ffff           call 0xa626e0
// 00a64357  db03                 fild dword ptr [ebx]
// 00a64359  dd05383bb500         fld qword ptr [0xb53b38]
// 00a6435f  83ec10               sub esp, 0x10
// 00a64362  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00a64368  dcf9                 fdiv st(1), st(0)
// 00a6436a  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a64370  8d8e88000000         lea ecx, [esi + 0x88]
// 00a64376  d9c9                 fxch st(1)
// 00a64378  dd5c2408             fstp qword ptr [esp + 8]
// 00a6437c  da3f                 fidivr dword ptr [edi]
// 00a6437e  dd1c24               fstp qword ptr [esp]
// 00a64381  ffd0                 call eax
// 00a64383  db03                 fild dword ptr [ebx]
// 00a64385  dd05383bb500         fld qword ptr [0xb53b38]
// 00a6438b  83ec10               sub esp, 0x10
// 00a6438e  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 00a64394  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a6439a  dcf9                 fdiv st(1), st(0)
// 00a6439c  8d8e08010000         lea ecx, [esi + 0x108]
// 00a643a2  d9c9                 fxch st(1)
// 00a643a4  dd5c2408             fstp qword ptr [esp + 8]
// 00a643a8  da3f                 fidivr dword ptr [edi]
// 00a643aa  dd1c24               fstp qword ptr [esp]
// 00a643ad  ffd0                 call eax
// 00a643af  db8678070000         fild dword ptr [esi + 0x778]
// 00a643b5  83ec08               sub esp, 8
// 00a643b8  8d8e08010000         lea ecx, [esi + 0x108]
// 00a643be  dc35383bb500         fdiv qword ptr [0xb53b38]
// 00a643c4  dd1c24               fstp qword ptr [esp]
// 00a643c7  e8d4ecffff           call 0xa630a0
// 00a643cc  8b8e80070000         mov ecx, dword ptr [esi + 0x780]
// 00a643d2  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a643d6  3b8124010000         cmp eax, dword ptr [ecx + 0x124]
// 00a643dc  7408                 je 0xa643e6
// 00a643de  6a00                 push 0
// 00a643e0  50                   push eax
// 00a643e1  e8ba52f8ff           call 0x9e96a0
// 00a643e6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a643ea  51                   push ecx
// 00a643eb  8bce                 mov ecx, esi
// 00a643ed  e8aee2ffff           call 0xa626a0
// 00a643f2  5f                   pop edi
// 00a643f3  5e                   pop esi
// 00a643f4  33c0                 xor eax, eax
// 00a643f6  5b                   pop ebx
// 00a643f7  8be5                 mov esp, ebp
// 00a643f9  5d                   pop ebp
// 00a643fa  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateColor@CXTColorPageCustom@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp