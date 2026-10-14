// roc 2008-06 006770f0  unit: RBX::AdornG3D  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006770f0
//
// 006770f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006770f4  56                   push esi
// 006770f5  8b742408             mov esi, dword ptr [esp + 8]
// 006770f9  57                   push edi
// 006770fa  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006770fe  50                   push eax
// 006770ff  57                   push edi
// 00677100  56                   push esi
// 00677101  e8aaffffff           call 0x6770b0
// 00677106  83c40c               add esp, 0xc
// 00677109  833e02               cmp dword ptr [esi], 2
// 0067710c  752e                 jne 0x67713c
// 0067710e  8b17                 mov edx, dword ptr [edi]
// 00677110  8b5238               mov edx, dword ptr [edx + 0x38]
// 00677113  8d4638               lea eax, [esi + 0x38]
// 00677116  50                   push eax
// 00677117  8bcf                 mov ecx, edi
// 00677119  ffd2                 call edx
// 0067711b  d94604               fld dword ptr [esi + 4]
// 0067711e  d9460c               fld dword ptr [esi + 0xc]
// 00677121  57                   push edi
// 00677122  83ec08               sub esp, 8
// 00677125  d9c9                 fxch st(1)
// 00677127  d95c2404             fstp dword ptr [esp + 4]
// 0067712b  d80dac9b8100         fmul dword ptr [0x819bac]
// 00677131  d91c24               fstp dword ptr [esp]
// 00677134  e8e7f9ffff           call 0x676b20
// 00677139  83c40c               add esp, 0xc
// 0067713c  5f                   pop edi
// 0067713d  5e                   pop esi
// 0067713e  c3                   ret 
// library openrbx-client/Rendering\AppDraw\Draw.cpp (function ?partAdorn@Draw@RBX@@SAXABVPart@2@PAVAdorn@2@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/Draw.cpp
