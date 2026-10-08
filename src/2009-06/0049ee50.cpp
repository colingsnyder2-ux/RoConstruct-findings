// roc 2009-06 0049ee50  unit: G3D::VARArea  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ee50
//
// 0049ee50  8b442404             mov eax, dword ptr [esp + 4]
// 0049ee54  83ec30               sub esp, 0x30
// 0049ee57  53                   push ebx
// 0049ee58  55                   push ebp
// 0049ee59  8be9                 mov ebp, ecx
// 0049ee5b  ff4578               inc dword ptr [ebp + 0x78]
// 0049ee5e  56                   push esi
// 0049ee5f  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 0049ee66  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 0049ee6c  57                   push edi
// 0049ee6d  8bf0                 mov esi, eax
// 0049ee6f  b909000000           mov ecx, 9
// 0049ee74  8bfb                 mov edi, ebx
// 0049ee76  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049ee78  d94024               fld dword ptr [eax + 0x24]
// 0049ee7b  d95b24               fstp dword ptr [ebx + 0x24]
// 0049ee7e  d94028               fld dword ptr [eax + 0x28]
// 0049ee81  d95b28               fstp dword ptr [ebx + 0x28]
// 0049ee84  d9402c               fld dword ptr [eax + 0x2c]
// 0049ee87  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0049ee8a  6800170000           push 0x1700
// 0049ee8f  ff1544eb8900         call dword ptr [0x89eb44]
// 0049ee95  53                   push ebx
// 0049ee96  8d442414             lea eax, [esp + 0x14]
// 0049ee9a  50                   push eax
// 0049ee9b  8d8d08080000         lea ecx, [ebp + 0x808]
// 0049eea1  e8caeeffff           call 0x49dd70
// 0049eea6  50                   push eax
// 0049eea7  e894e40000           call 0x4ad340
// 0049eeac  83c404               add esp, 4
// 0049eeaf  ff4570               inc dword ptr [ebp + 0x70]
// 0049eeb2  5f                   pop edi
// 0049eeb3  5e                   pop esi
// 0049eeb4  5d                   pop ebp
// 0049eeb5  5b                   pop ebx
// 0049eeb6  83c430               add esp, 0x30
// 0049eeb9  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
