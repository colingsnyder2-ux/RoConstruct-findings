// roc 2007-08 00732fa0  unit: seg_00730000  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00732fa0
//
// 00732fa0  83ec54               sub esp, 0x54
// 00732fa3  56                   push esi
// 00732fa4  8b742460             mov esi, dword ptr [esp + 0x60]
// 00732fa8  807e4c00             cmp byte ptr [esi + 0x4c], 0
// 00732fac  57                   push edi
// 00732fad  8bf9                 mov edi, ecx
// 00732faf  8d4650               lea eax, [esi + 0x50]
// 00732fb2  7503                 jne 0x732fb7
// 00732fb4  8d465c               lea eax, [esi + 0x5c]
// 00732fb7  d900                 fld dword ptr [eax]
// 00732fb9  d95c2414             fstp dword ptr [esp + 0x14]
// 00732fbd  d94004               fld dword ptr [eax + 4]
// 00732fc0  d95c2418             fstp dword ptr [esp + 0x18]
// 00732fc4  d94008               fld dword ptr [eax + 8]
// 00732fc7  b801000000           mov eax, 1
// 00732fcc  84058cd08b00         test byte ptr [0x8bd08c], al
// 00732fd2  d95c241c             fstp dword ptr [esp + 0x1c]
// 00732fd6  d9442414             fld dword ptr [esp + 0x14]
// 00732fda  d954242c             fst dword ptr [esp + 0x2c]
// 00732fde  d9442418             fld dword ptr [esp + 0x18]
// 00732fe2  d9542430             fst dword ptr [esp + 0x30]
// 00732fe6  d944241c             fld dword ptr [esp + 0x1c]
// 00732fea  d9542434             fst dword ptr [esp + 0x34]
// 00732fee  d9ee                 fldz 
// 00732ff0  d9542438             fst dword ptr [esp + 0x38]
// 00732ff4  751c                 jne 0x733012
// 00732ff6  09058cd08b00         or dword ptr [0x8bd08c], eax
// 00732ffc  d91580d08b00         fst dword ptr [0x8bd080]
// 00733002  d91d84d08b00         fstp dword ptr [0x8bd084]
// 00733008  d9e8                 fld1 
// 0073300a  d91d88d08b00         fstp dword ptr [0x8bd088]
// 00733010  eb02                 jmp 0x733014
// 00733012  ddd8                 fstp st(0)
// 00733014  d90588d08b00         fld dword ptr [0x8bd088]
// 0073301a  d9c0                 fld st(0)
// 0073301c  d8cb                 fmul st(3)
// 0073301e  d9c2                 fld st(2)
// 00733020  d90584d08b00         fld dword ptr [0x8bd084]
// 00733026  d9c0                 fld st(0)
// 00733028  deca                 fmulp st(2)
// 0073302a  d9ca                 fxch st(2)
// 0073302c  dee1                 fsubrp st(1)
// 0073302e  d95c2408             fstp dword ptr [esp + 8]
// 00733032  d90580d08b00         fld dword ptr [0x8bd080]
// 00733038  d9c0                 fld st(0)
// 0073303a  decc                 fmulp st(4)
// 0073303c  d9c5                 fld st(5)
// 0073303e  decb                 fmulp st(3)
// 00733040  d9cb                 fxch st(3)
// 00733042  dee2                 fsubrp st(2)
// 00733044  d9c9                 fxch st(1)
// 00733046  d95c240c             fstp dword ptr [esp + 0xc]
// 0073304a  decb                 fmulp st(3)
// 0073304c  dec9                 fmulp st(1)
// 0073304e  dee9                 fsubp st(1)
// 00733050  d95c2410             fstp dword ptr [esp + 0x10]
// 00733054  d944240c             fld dword ptr [esp + 0xc]
// 00733058  d9442408             fld dword ptr [esp + 8]
// 0073305c  d9442410             fld dword ptr [esp + 0x10]
// 00733060  d9c1                 fld st(1)
// 00733062  deca                 fmulp st(2)
// 00733064  d9c2                 fld st(2)
// 00733066  decb                 fmulp st(3)
// 00733068  d9c9                 fxch st(1)
// 0073306a  dec2                 faddp st(2)
// 0073306c  dcc8                 fmul st(0), st(0)
// 0073306e  dec1                 faddp st(1)
// 00733070  d95c2464             fstp dword ptr [esp + 0x64]
// 00733074  d9442464             fld dword ptr [esp + 0x64]
// 00733078  e88fddefff           call 0x630e0c
// 0073307d  d95c2464             fstp dword ptr [esp + 0x64]
// 00733081  d9442464             fld dword ptr [esp + 0x64]
// 00733085  d9e8                 fld1 
// 00733087  def1                 fdivrp st(1)
// 00733089  d95c2464             fstp dword ptr [esp + 0x64]
// 0073308d  d9442408             fld dword ptr [esp + 8]
// 00733091  d9442464             fld dword ptr [esp + 0x64]
// 00733095  d9c0                 fld st(0)
// 00733097  deca                 fmulp st(2)
// 00733099  d9c9                 fxch st(1)
// 0073309b  d95c2420             fstp dword ptr [esp + 0x20]
// 0073309f  d944240c             fld dword ptr [esp + 0xc]
// 007330a3  d8c9                 fmul st(1)
// 007330a5  d95c2424             fstp dword ptr [esp + 0x24]
// 007330a9  d84c2410             fmul dword ptr [esp + 0x10]
// 007330ad  d95c2428             fstp dword ptr [esp + 0x28]
// 007330b1  d9442420             fld dword ptr [esp + 0x20]
// 007330b5  d954244c             fst dword ptr [esp + 0x4c]
// 007330b9  d9442424             fld dword ptr [esp + 0x24]
// 007330bd  d9542450             fst dword ptr [esp + 0x50]
// 007330c1  d9442428             fld dword ptr [esp + 0x28]
// 007330c5  d9542454             fst dword ptr [esp + 0x54]
// 007330c9  d9ee                 fldz 
// 007330cb  d95c2458             fstp dword ptr [esp + 0x58]
// 007330cf  d9c0                 fld st(0)
// 007330d1  d9442418             fld dword ptr [esp + 0x18]
// 007330d5  d9c0                 fld st(0)
// 007330d7  deca                 fmulp st(2)
// 007330d9  d9c3                 fld st(3)
// 007330db  d944241c             fld dword ptr [esp + 0x1c]
// 007330df  d9c0                 fld st(0)
// 007330e1  deca                 fmulp st(2)
// 007330e3  d9cb                 fxch st(3)
// 007330e5  dee1                 fsubrp st(1)
// 007330e7  d95c2420             fstp dword ptr [esp + 0x20]
// 007330eb  d9c4                 fld st(4)
// 007330ed  deca                 fmulp st(2)
// 007330ef  d9442414             fld dword ptr [esp + 0x14]
// 007330f3  d9c0                 fld st(0)
// 007330f5  decc                 fmulp st(4)
// 007330f7  d9ca                 fxch st(2)
// 007330f9  dee3                 fsubrp st(3)
// 007330fb  d9ca                 fxch st(2)
// 007330fd  d95c2424             fstp dword ptr [esp + 0x24]
// 00733101  deca                 fmulp st(2)
// 00733103  51                   push ecx
// 00733104  8bcc                 mov ecx, esp
// 00733106  c70100000000         mov dword ptr [ecx], 0
// 0073310c  8b4728               mov eax, dword ptr [edi + 0x28]
// 0073310f  deca                 fmulp st(2)
// 00733111  89642468             mov dword ptr [esp + 0x68], esp
// 00733115  50                   push eax
// 00733116  dee1                 fsubrp st(1)
// 00733118  d95c2430             fstp dword ptr [esp + 0x30]
// 0073311c  d9442428             fld dword ptr [esp + 0x28]
// 00733120  d95c2444             fstp dword ptr [esp + 0x44]
// 00733124  d944242c             fld dword ptr [esp + 0x2c]
// 00733128  d95c2448             fstp dword ptr [esp + 0x48]
// 0073312c  d9442430             fld dword ptr [esp + 0x30]
// 00733130  d95c244c             fstp dword ptr [esp + 0x4c]
// 00733134  d9ee                 fldz 
// 00733136  d95c2450             fstp dword ptr [esp + 0x50]
// 0073313a  e8311ed4ff           call 0x474f70
// 0073313f  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00733143  6a00                 push 0
// 00733145  8bcf                 mov ecx, edi
// 00733147  e80431d4ff           call 0x476250
// 0073314c  6a02                 push 2
// 0073314e  6a02                 push 2
// 00733150  6a02                 push 2
// 00733152  8bcf                 mov ecx, edi
// 00733154  e81710d4ff           call 0x474170
// 00733159  d906                 fld dword ptr [esi]
// 0073315b  dd0510367900         fld qword ptr [0x793610]
// 00733161  dcc9                 fmul st(1), st(0)
// 00733163  d9c9                 fxch st(1)
// 00733165  d95c2408             fstp dword ptr [esp + 8]
// 00733169  d94604               fld dword ptr [esi + 4]
// 0073316c  d8c9                 fmul st(1)
// 0073316e  d95c240c             fstp dword ptr [esp + 0xc]
// 00733172  d84e08               fmul dword ptr [esi + 8]
// 00733175  d95c2410             fstp dword ptr [esp + 0x10]
// 00733179  d9ee                 fldz 
// 0073317b  d9442418             fld dword ptr [esp + 0x18]
// 0073317f  d8d1                 fcom st(1)
// 00733181  dfe0                 fnstsw ax
// 00733183  f6c405               test ah, 5
// 00733186  7a59                 jp 0x7331e1
// 00733188  dc05c8db7900         fadd qword ptr [0x79dbc8]
// 0073318e  dc0d685b7900         fmul qword ptr [0x795b68]
// 00733194  d95c2464             fstp dword ptr [esp + 0x64]
// 00733198  d95c2460             fstp dword ptr [esp + 0x60]
// 0073319c  d9442464             fld dword ptr [esp + 0x64]
// 007331a0  dc1de0fe7800         fcomp qword ptr [0x78fee0]
// 007331a6  dfe0                 fnstsw ax
// 007331a8  f6c441               test ah, 0x41
// 007331ab  8d442464             lea eax, [esp + 0x64]
// 007331af  7404                 je 0x7331b5
// 007331b1  8d442460             lea eax, [esp + 0x60]
// 007331b5  d900                 fld dword ptr [eax]
// 007331b7  d95c2464             fstp dword ptr [esp + 0x64]
// 007331bb  d9442408             fld dword ptr [esp + 8]
// 007331bf  d9442464             fld dword ptr [esp + 0x64]
// 007331c3  d9c0                 fld st(0)
// 007331c5  deca                 fmulp st(2)
// 007331c7  d9c9                 fxch st(1)
// 007331c9  d95c2408             fstp dword ptr [esp + 8]
// 007331cd  d944240c             fld dword ptr [esp + 0xc]
// 007331d1  d8c9                 fmul st(1)
// 007331d3  d95c240c             fstp dword ptr [esp + 0xc]
// 007331d7  d84c2410             fmul dword ptr [esp + 0x10]
// 007331db  d95c2410             fstp dword ptr [esp + 0x10]
// 007331df  eb04                 jmp 0x7331e5
// 007331e1  ddd8                 fstp st(0)
// 007331e3  ddd8                 fstp st(0)
// 007331e5  d9442408             fld dword ptr [esp + 8]
// 007331e9  83ec10               sub esp, 0x10
// 007331ec  8bc4                 mov eax, esp
// 007331ee  d918                 fstp dword ptr [eax]
// 007331f0  89642474             mov dword ptr [esp + 0x74], esp
// 007331f4  d944241c             fld dword ptr [esp + 0x1c]
// 007331f8  83ec08               sub esp, 8
// 007331fb  d95804               fstp dword ptr [eax + 4]
// 007331fe  8d4c2444             lea ecx, [esp + 0x44]
// 00733202  d9442428             fld dword ptr [esp + 0x28]
// 00733206  8d742454             lea esi, [esp + 0x54]
// 0073320a  d95808               fstp dword ptr [eax + 8]
// 0073320d  d9e8                 fld1 
// 0073320f  d9580c               fstp dword ptr [eax + 0xc]
// 00733212  dd05708b7e00         fld qword ptr [0x7e8b70]
// 00733218  dd1c24               fstp qword ptr [esp]
// 0073321b  51                   push ecx
// 0073321c  57                   push edi
// 0073321d  8d7c246c             lea edi, [esp + 0x6c]
// 00733221  e8aaecffff           call 0x731ed0
// 00733226  83c420               add esp, 0x20
// 00733229  5f                   pop edi
// 0073322a  5e                   pop esi
// 0073322b  83c454               add esp, 0x54
// 0073322e  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?drawSun@Sky@G3D@@AAEXPAVRenderDevice@2@ABVLightingParameters@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
