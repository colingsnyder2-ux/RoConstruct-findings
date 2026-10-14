// roc 2009-06 0049f910  unit: G3D::VARArea  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f910
//
// 0049f910  83ec24               sub esp, 0x24
// 0049f913  53                   push ebx
// 0049f914  55                   push ebp
// 0049f915  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0049f919  56                   push esi
// 0049f91a  8bd9                 mov ebx, ecx
// 0049f91c  57                   push edi
// 0049f91d  8bcd                 mov ecx, ebp
// 0049f91f  e88cffffff           call 0x49f8b0
// 0049f924  8d442410             lea eax, [esp + 0x10]
// 0049f928  50                   push eax
// 0049f929  8bcb                 mov ecx, ebx
// 0049f92b  e850850d00           call 0x577e80
// 0049f930  8bf0                 mov esi, eax
// 0049f932  b909000000           mov ecx, 9
// 0049f937  8bfd                 mov edi, ebp
// 0049f939  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049f93b  8d4c2410             lea ecx, [esp + 0x10]
// 0049f93f  51                   push ecx
// 0049f940  8bcd                 mov ecx, ebp
// 0049f942  e879840d00           call 0x577dc0
// 0049f947  5f                   pop edi
// 0049f948  d94008               fld dword ptr [eax + 8]
// 0049f94b  5e                   pop esi
// 0049f94c  d84b2c               fmul dword ptr [ebx + 0x2c]
// 0049f94f  d94004               fld dword ptr [eax + 4]
// 0049f952  d84b28               fmul dword ptr [ebx + 0x28]
// 0049f955  dec1                 faddp st(1)
// 0049f957  d94324               fld dword ptr [ebx + 0x24]
// 0049f95a  d808                 fmul dword ptr [eax]
// 0049f95c  dec1                 faddp st(1)
// 0049f95e  d94014               fld dword ptr [eax + 0x14]
// 0049f961  d84b2c               fmul dword ptr [ebx + 0x2c]
// 0049f964  d9400c               fld dword ptr [eax + 0xc]
// 0049f967  d84b24               fmul dword ptr [ebx + 0x24]
// 0049f96a  dec1                 faddp st(1)
// 0049f96c  d94010               fld dword ptr [eax + 0x10]
// 0049f96f  d84b28               fmul dword ptr [ebx + 0x28]
// 0049f972  dec1                 faddp st(1)
// 0049f974  d94020               fld dword ptr [eax + 0x20]
// 0049f977  d84b2c               fmul dword ptr [ebx + 0x2c]
// 0049f97a  d94018               fld dword ptr [eax + 0x18]
// 0049f97d  d84b24               fmul dword ptr [ebx + 0x24]
// 0049f980  dec1                 faddp st(1)
// 0049f982  d9401c               fld dword ptr [eax + 0x1c]
// 0049f985  8bc5                 mov eax, ebp
// 0049f987  d84b28               fmul dword ptr [ebx + 0x28]
// 0049f98a  dec1                 faddp st(1)
// 0049f98c  d9ca                 fxch st(2)
// 0049f98e  d95d24               fstp dword ptr [ebp + 0x24]
// 0049f991  d95d28               fstp dword ptr [ebp + 0x28]
// 0049f994  d95d2c               fstp dword ptr [ebp + 0x2c]
// 0049f997  5d                   pop ebp
// 0049f998  5b                   pop ebx
// 0049f999  83c424               add esp, 0x24
// 0049f99c  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?inverse@CoordinateFrame@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp
