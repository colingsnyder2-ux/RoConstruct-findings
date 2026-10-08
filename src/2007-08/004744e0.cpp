// roc 2007-08 004744e0  unit: G3D::VARArea  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004744e0
//
// 004744e0  8b442404             mov eax, dword ptr [esp + 4]
// 004744e4  83ec30               sub esp, 0x30
// 004744e7  53                   push ebx
// 004744e8  55                   push ebp
// 004744e9  8be9                 mov ebp, ecx
// 004744eb  83457801             add dword ptr [ebp + 0x78], 1
// 004744ef  56                   push esi
// 004744f0  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004744f7  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 004744fd  57                   push edi
// 004744fe  8bf0                 mov esi, eax
// 00474500  b909000000           mov ecx, 9
// 00474505  8bfb                 mov edi, ebx
// 00474507  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474509  d94024               fld dword ptr [eax + 0x24]
// 0047450c  d95b24               fstp dword ptr [ebx + 0x24]
// 0047450f  d94028               fld dword ptr [eax + 0x28]
// 00474512  d95b28               fstp dword ptr [ebx + 0x28]
// 00474515  d9402c               fld dword ptr [eax + 0x2c]
// 00474518  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047451b  6800170000           push 0x1700
// 00474520  ff1564eb7700         call dword ptr [0x77eb64]
// 00474526  53                   push ebx
// 00474527  8d442414             lea eax, [esp + 0x14]
// 0047452b  50                   push eax
// 0047452c  8d8d08080000         lea ecx, [ebp + 0x808]
// 00474532  e8c9ecffff           call 0x473200
// 00474537  50                   push eax
// 00474538  e8b3bb0000           call 0x4800f0
// 0047453d  83c404               add esp, 4
// 00474540  83457001             add dword ptr [ebp + 0x70], 1
// 00474544  5f                   pop edi
// 00474545  5e                   pop esi
// 00474546  5d                   pop ebp
// 00474547  5b                   pop ebx
// 00474548  83c430               add esp, 0x30
// 0047454b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
