// roc 2007-03 004745e0  unit: seg_00470000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004745e0
//
// 004745e0  8b442404             mov eax, dword ptr [esp + 4]
// 004745e4  83ec30               sub esp, 0x30
// 004745e7  53                   push ebx
// 004745e8  55                   push ebp
// 004745e9  8be9                 mov ebp, ecx
// 004745eb  83457801             add dword ptr [ebp + 0x78], 1
// 004745ef  56                   push esi
// 004745f0  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004745f7  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 004745fd  57                   push edi
// 004745fe  8bf0                 mov esi, eax
// 00474600  b909000000           mov ecx, 9
// 00474605  8bfb                 mov edi, ebx
// 00474607  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474609  d94024               fld dword ptr [eax + 0x24]
// 0047460c  d95b24               fstp dword ptr [ebx + 0x24]
// 0047460f  d94028               fld dword ptr [eax + 0x28]
// 00474612  d95b28               fstp dword ptr [ebx + 0x28]
// 00474615  d9402c               fld dword ptr [eax + 0x2c]
// 00474618  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047461b  6800170000           push 0x1700
// 00474620  ff152ceb7700         call dword ptr [0x77eb2c]
// 00474626  53                   push ebx
// 00474627  8d442414             lea eax, [esp + 0x14]
// 0047462b  50                   push eax
// 0047462c  8d8d08080000         lea ecx, [ebp + 0x808]
// 00474632  e8b9ecffff           call 0x4732f0
// 00474637  50                   push eax
// 00474638  e8639f0000           call 0x47e5a0
// 0047463d  83c404               add esp, 4
// 00474640  83457001             add dword ptr [ebp + 0x70], 1
// 00474644  5f                   pop edi
// 00474645  5e                   pop esi
// 00474646  5d                   pop ebp
// 00474647  5b                   pop ebx
// 00474648  83c430               add esp, 0x30
// 0047464b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
