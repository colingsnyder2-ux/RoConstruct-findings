// roc 2007-03 0073a2f0  unit: seg_00730000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0073a2f0
//
// 0073a2f0  55                   push ebp
// 0073a2f1  8bec                 mov ebp, esp
// 0073a2f3  83e4f8               and esp, 0xfffffff8
// 0073a2f6  83ec2c               sub esp, 0x2c
// 0073a2f9  53                   push ebx
// 0073a2fa  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0073a2fd  56                   push esi
// 0073a2fe  57                   push edi
// 0073a2ff  8d7310               lea esi, [ebx + 0x10]
// 0073a302  50                   push eax
// 0073a303  83c304               add ebx, 4
// 0073a306  53                   push ebx
// 0073a307  8d7c2430             lea edi, [esp + 0x30]
// 0073a30b  8bc6                 mov eax, esi
// 0073a30d  e87ef3ffff           call 0x739690
// 0073a312  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0073a315  83c408               add esp, 8
// 0073a318  33d2                 xor edx, edx
// 0073a31a  33ff                 xor edi, edi
// 0073a31c  85c0                 test eax, eax
// 0073a31e  8901                 mov dword ptr [ecx], eax
// 0073a320  0f8e82000000         jle 0x73a3a8
// 0073a326  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0073a329  d9ee                 fldz 
// 0073a32b  83c108               add ecx, 8
// 0073a32e  dc54fc28             fcom qword ptr [esp + edi*8 + 0x28]
// 0073a332  dfe0                 fnstsw ax
// 0073a334  f6c441               test ah, 0x41
// 0073a337  7a63                 jp 0x73a39c
// 0073a339  dd44fc28             fld qword ptr [esp + edi*8 + 0x28]
// 0073a33d  83c201               add edx, 1
// 0073a340  d95c240c             fstp dword ptr [esp + 0xc]
// 0073a344  83c10c               add ecx, 0xc
// 0073a347  d906                 fld dword ptr [esi]
// 0073a349  d944240c             fld dword ptr [esp + 0xc]
// 0073a34d  d9c0                 fld st(0)
// 0073a34f  deca                 fmulp st(2)
// 0073a351  d9c9                 fxch st(1)
// 0073a353  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a357  d94604               fld dword ptr [esi + 4]
// 0073a35a  d8c9                 fmul st(1)
// 0073a35c  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a360  d84e08               fmul dword ptr [esi + 8]
// 0073a363  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a367  d903                 fld dword ptr [ebx]
// 0073a369  d8442410             fadd dword ptr [esp + 0x10]
// 0073a36d  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a371  d94304               fld dword ptr [ebx + 4]
// 0073a374  d8442414             fadd dword ptr [esp + 0x14]
// 0073a378  d95c2420             fstp dword ptr [esp + 0x20]
// 0073a37c  d94308               fld dword ptr [ebx + 8]
// 0073a37f  d8442418             fadd dword ptr [esp + 0x18]
// 0073a383  d95c2424             fstp dword ptr [esp + 0x24]
// 0073a387  d944241c             fld dword ptr [esp + 0x1c]
// 0073a38b  d959ec               fstp dword ptr [ecx - 0x14]
// 0073a38e  d9442420             fld dword ptr [esp + 0x20]
// 0073a392  d959f0               fstp dword ptr [ecx - 0x10]
// 0073a395  d9442424             fld dword ptr [esp + 0x24]
// 0073a399  d959f4               fstp dword ptr [ecx - 0xc]
// 0073a39c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0073a39f  83c701               add edi, 1
// 0073a3a2  3b38                 cmp edi, dword ptr [eax]
// 0073a3a4  7c88                 jl 0x73a32e
// 0073a3a6  ddd8                 fstp st(0)
// 0073a3a8  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0073a3ab  5f                   pop edi
// 0073a3ac  33c0                 xor eax, eax
// 0073a3ae  85d2                 test edx, edx
// 0073a3b0  5e                   pop esi
// 0073a3b1  8911                 mov dword ptr [ecx], edx
// 0073a3b3  0f9fc0               setg al
// 0073a3b6  5b                   pop ebx
// 0073a3b7  8be5                 mov esp, ebp
// 0073a3b9  5d                   pop ebp
// 0073a3ba  c3                   ret 
// library rbxgs-g3d/G3Dcpp\CollisionDetection.cpp (function ?findRayCapsuleIntersection@G3D@@YA_NABVRay@1@ABVCapsule@1@AAHQAVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CollisionDetection.cpp
