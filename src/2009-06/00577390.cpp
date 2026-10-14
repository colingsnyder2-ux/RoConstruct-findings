// roc 2009-06 00577390  unit: G3D::LineSegment  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577390
//
// 00577390  55                   push ebp
// 00577391  8bec                 mov ebp, esp
// 00577393  83e4f8               and esp, 0xfffffff8
// 00577396  83ec14               sub esp, 0x14
// 00577399  53                   push ebx
// 0057739a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0057739d  56                   push esi
// 0057739e  57                   push edi
// 0057739f  8d7310               lea esi, [ebx + 0x10]
// 005773a2  50                   push eax
// 005773a3  83c304               add ebx, 4
// 005773a6  53                   push ebx
// 005773a7  8d7c2418             lea edi, [esp + 0x18]
// 005773ab  e8b0f6ffff           call 0x576a60
// 005773b0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005773b3  83c408               add esp, 8
// 005773b6  33d2                 xor edx, edx
// 005773b8  33ff                 xor edi, edi
// 005773ba  8901                 mov dword ptr [ecx], eax
// 005773bc  85c0                 test eax, eax
// 005773be  7e4a                 jle 0x57740a
// 005773c0  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005773c3  d9ee                 fldz 
// 005773c5  83c108               add ecx, 8
// 005773c8  dc54fc10             fcom qword ptr [esp + edi*8 + 0x10]
// 005773cc  dfe0                 fnstsw ax
// 005773ce  f6c441               test ah, 0x41
// 005773d1  7a2d                 jp 0x577400
// 005773d3  dd44fc10             fld qword ptr [esp + edi*8 + 0x10]
// 005773d7  42                   inc edx
// 005773d8  d906                 fld dword ptr [esi]
// 005773da  83c10c               add ecx, 0xc
// 005773dd  d8c9                 fmul st(1)
// 005773df  d94604               fld dword ptr [esi + 4]
// 005773e2  d8ca                 fmul st(2)
// 005773e4  d94608               fld dword ptr [esi + 8]
// 005773e7  decb                 fmulp st(3)
// 005773e9  d903                 fld dword ptr [ebx]
// 005773eb  dec2                 faddp st(2)
// 005773ed  d84304               fadd dword ptr [ebx + 4]
// 005773f0  d94308               fld dword ptr [ebx + 8]
// 005773f3  dec3                 faddp st(3)
// 005773f5  d9c9                 fxch st(1)
// 005773f7  d959ec               fstp dword ptr [ecx - 0x14]
// 005773fa  d959f0               fstp dword ptr [ecx - 0x10]
// 005773fd  d959f4               fstp dword ptr [ecx - 0xc]
// 00577400  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00577403  47                   inc edi
// 00577404  3b38                 cmp edi, dword ptr [eax]
// 00577406  7cc0                 jl 0x5773c8
// 00577408  ddd8                 fstp st(0)
// 0057740a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057740d  5f                   pop edi
// 0057740e  33c0                 xor eax, eax
// 00577410  85d2                 test edx, edx
// 00577412  5e                   pop esi
// 00577413  8911                 mov dword ptr [ecx], edx
// 00577415  0f9fc0               setg al
// 00577418  5b                   pop ebx
// 00577419  8be5                 mov esp, ebp
// 0057741b  5d                   pop ebp
// 0057741c  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?findRayCapsuleIntersection@G3D@@YA_NABVRay@1@ABVCapsule@1@AAHQAVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
