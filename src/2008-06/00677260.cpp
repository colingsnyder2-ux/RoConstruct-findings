// roc 2008-06 00677260  unit: RBX::AdornG3D  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677260
//
// 00677260  83ec2c               sub esp, 0x2c
// 00677263  f60520f0960001       test byte ptr [0x96f020], 1
// 0067726a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067726e  d9400c               fld dword ptr [eax + 0xc]
// 00677271  d944243c             fld dword ptr [esp + 0x3c]
// 00677275  dcc9                 fmul st(1), st(0)
// 00677277  d905ac9b8100         fld dword ptr [0x819bac]
// 0067727d  dcca                 fmul st(2), st(0)
// 0067727f  d94004               fld dword ptr [eax + 4]
// 00677282  deca                 fmulp st(2)
// 00677284  dec9                 fmulp st(1)
// 00677286  d91c24               fstp dword ptr [esp]
// 00677289  d9ee                 fldz 
// 0067728b  d9542404             fst dword ptr [esp + 4]
// 0067728f  d95c2408             fstp dword ptr [esp + 8]
// 00677293  7514                 jne 0x6772a9
// 00677295  a1ac248000           mov eax, dword ptr [0x8024ac]
// 0067729a  830d20f0960001       or dword ptr [0x96f020], 1
// 006772a1  dd00                 fld qword ptr [eax]
// 006772a3  dd1d18f09600         fstp qword ptr [0x96f018]
// 006772a9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006772ad  68d8f69700           push 0x97f6d8
// 006772b2  51                   push ecx
// 006772b3  83ec08               sub esp, 8
// 006772b6  dd1c24               fstp qword ptr [esp]
// 006772b9  8d542410             lea edx, [esp + 0x10]
// 006772bd  52                   push edx
// 006772be  681c389700           push 0x97381c
// 006772c3  8d4c2424             lea ecx, [esp + 0x24]
// 006772c7  e814edeaff           call 0x525fe0
// 006772cc  50                   push eax
// 006772cd  8b442440             mov eax, dword ptr [esp + 0x40]
// 006772d1  8d4810               lea ecx, [eax + 0x10]
// 006772d4  51                   push ecx
// 006772d5  83c004               add eax, 4
// 006772d8  50                   push eax
// 006772d9  e872471400           call 0x7bba50
// 006772de  dc1d18f09600         fcomp qword ptr [0x96f018]
// 006772e4  83c414               add esp, 0x14
// 006772e7  dfe0                 fnstsw ax
// 006772e9  f6c444               test ah, 0x44
// 006772ec  7b09                 jnp 0x6772f7
// 006772ee  b801000000           mov eax, 1
// 006772f3  83c42c               add esp, 0x2c
// 006772f6  c3                   ret 
// 006772f7  33c0                 xor eax, eax
// 006772f9  83c42c               add esp, 0x2c
// 006772fc  c3                   ret 
// library openrbx-client/Rendering\AppDraw\HitTest.cpp (function ?hitTestCylinder@HitTest@RBX@@CA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/HitTest.cpp
