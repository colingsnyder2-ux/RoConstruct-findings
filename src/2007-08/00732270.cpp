// from server: 100% by auto
// roc 2007-08 00732270  unit: seg_00730000  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00732270
//
// 00732270  d9ee                 fldz 
// 00732272  83ec10               sub esp, 0x10
// 00732275  83792400             cmp dword ptr [ecx + 0x24], 0
// 00732279  56                   push esi
// 0073227a  742f                 je 0x7322ab
// 0073227c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00732280  ddd8                 fstp st(0)
// 00732282  d944241c             fld dword ptr [esp + 0x1c]
// 00732286  8d442404             lea eax, [esp + 4]
// 0073228a  d95c2404             fstp dword ptr [esp + 4]
// 0073228e  50                   push eax
// 0073228f  d9442424             fld dword ptr [esp + 0x24]
// 00732293  8bce                 mov ecx, esi
// 00732295  d95c240c             fstp dword ptr [esp + 0xc]
// 00732299  d9442428             fld dword ptr [esp + 0x28]
// 0073229d  d95c2410             fstp dword ptr [esp + 0x10]
// 007322a1  e83a28d4ff           call 0x474ae0
// 007322a6  e9cf000000           jmp 0x73237a
// 007322ab  803d63cf8b0000       cmp byte ptr [0x8bcf63], 0
// 007322b2  0f8596000000         jne 0x73234e
// 007322b8  d9c0                 fld st(0)
// 007322ba  d9442428             fld dword ptr [esp + 0x28]
// 007322be  dde1                 fucom st(1)
// 007322c0  dfe0                 fnstsw ax
// 007322c2  ddd9                 fstp st(1)
// 007322c4  f6c444               test ah, 0x44
// 007322c7  dd0550147a00         fld qword ptr [0x7a1450]
// 007322cd  d9e8                 fld1 
// 007322cf  7a16                 jp 0x7322e7
// 007322d1  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007322d4  db4264               fild dword ptr [edx + 0x64]
// 007322d7  d8fa                 fdivr st(2)
// 007322d9  dec3                 faddp st(3)
// 007322db  d9ca                 fxch st(2)
// 007322dd  d95c2428             fstp dword ptr [esp + 0x28]
// 007322e1  d9442428             fld dword ptr [esp + 0x28]
// 007322e5  eb23                 jmp 0x73230a
// 007322e7  d9c0                 fld st(0)
// 007322e9  ddeb                 fucomp st(3)
// 007322eb  dfe0                 fnstsw ax
// 007322ed  f6c444               test ah, 0x44
// 007322f0  7a16                 jp 0x732308
// 007322f2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007322f5  db4064               fild dword ptr [eax + 0x64]
// 007322f8  d8fa                 fdivr st(2)
// 007322fa  deeb                 fsubp st(3)
// 007322fc  d9ca                 fxch st(2)
// 007322fe  d95c2428             fstp dword ptr [esp + 0x28]
// 00732302  d9442428             fld dword ptr [esp + 0x28]
// 00732306  eb02                 jmp 0x73230a
// 00732308  d9ca                 fxch st(2)
// 0073230a  d944242c             fld dword ptr [esp + 0x2c]
// 0073230e  dde4                 fucom st(4)
// 00732310  dfe0                 fnstsw ax
// 00732312  dddc                 fstp st(4)
// 00732314  f6c444               test ah, 0x44
// 00732317  7a16                 jp 0x73232f
// 00732319  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0073231c  ddda                 fstp st(2)
// 0073231e  da7168               fidiv dword ptr [ecx + 0x68]
// 00732321  dec2                 faddp st(2)
// 00732323  d9c9                 fxch st(1)
// 00732325  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732329  d944242c             fld dword ptr [esp + 0x2c]
// 0073232d  eb2f                 jmp 0x73235e
// 0073232f  d9ca                 fxch st(2)
// 00732331  ddeb                 fucomp st(3)
// 00732333  dfe0                 fnstsw ax
// 00732335  f6c444               test ah, 0x44
// 00732338  7a20                 jp 0x73235a
// 0073233a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0073233d  da7268               fidiv dword ptr [edx + 0x68]
// 00732340  deea                 fsubp st(2)
// 00732342  d9c9                 fxch st(1)
// 00732344  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732348  d944242c             fld dword ptr [esp + 0x2c]
// 0073234c  eb10                 jmp 0x73235e
// 0073234e  ddd8                 fstp st(0)
// 00732350  d944242c             fld dword ptr [esp + 0x2c]
// 00732354  d9442428             fld dword ptr [esp + 0x28]
// 00732358  eb02                 jmp 0x73235c
// 0073235a  ddd8                 fstp st(0)
// 0073235c  d9c9                 fxch st(1)
// 0073235e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00732362  d9c9                 fxch st(1)
// 00732364  8d442404             lea eax, [esp + 4]
// 00732368  d95c2404             fstp dword ptr [esp + 4]
// 0073236c  50                   push eax
// 0073236d  6a00                 push 0
// 0073236f  d95c2410             fstp dword ptr [esp + 0x10]
// 00732373  8bce                 mov ecx, esi
// 00732375  e81628d4ff           call 0x474b90
// 0073237a  d944241c             fld dword ptr [esp + 0x1c]
// 0073237e  8d4c2404             lea ecx, [esp + 4]
// 00732382  d95c2404             fstp dword ptr [esp + 4]
// 00732386  51                   push ecx
// 00732387  d9442424             fld dword ptr [esp + 0x24]
// 0073238b  8bce                 mov ecx, esi
// 0073238d  d95c240c             fstp dword ptr [esp + 0xc]
// 00732391  d9442428             fld dword ptr [esp + 0x28]
// 00732395  d95c2410             fstp dword ptr [esp + 0x10]
// 00732399  d9ee                 fldz 
// 0073239b  d95c2414             fstp dword ptr [esp + 0x14]
// 0073239f  e86c28d4ff           call 0x474c10
// 007323a4  5e                   pop esi
// 007323a5  83c410               add esp, 0x10
// 007323a8  c21800               ret 0x18
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?vertex@Sky@G3D@@ABEXPAVRenderDevice@2@MMMMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
