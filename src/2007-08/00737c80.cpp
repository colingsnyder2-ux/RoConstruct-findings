// roc 2007-08 00737c80  unit: G3D::GFont  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00737c80
//
// 00737c80  55                   push ebp
// 00737c81  8bec                 mov ebp, esp
// 00737c83  83e4f8               and esp, 0xfffffff8
// 00737c86  83ec2c               sub esp, 0x2c
// 00737c89  53                   push ebx
// 00737c8a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00737c8d  56                   push esi
// 00737c8e  57                   push edi
// 00737c8f  8d7310               lea esi, [ebx + 0x10]
// 00737c92  50                   push eax
// 00737c93  83c304               add ebx, 4
// 00737c96  53                   push ebx
// 00737c97  8d7c2430             lea edi, [esp + 0x30]
// 00737c9b  8bc6                 mov eax, esi
// 00737c9d  e87ef3ffff           call 0x737020
// 00737ca2  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00737ca5  83c408               add esp, 8
// 00737ca8  33d2                 xor edx, edx
// 00737caa  33ff                 xor edi, edi
// 00737cac  85c0                 test eax, eax
// 00737cae  8901                 mov dword ptr [ecx], eax
// 00737cb0  0f8e82000000         jle 0x737d38
// 00737cb6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00737cb9  d9ee                 fldz 
// 00737cbb  83c108               add ecx, 8
// 00737cbe  dc54fc28             fcom qword ptr [esp + edi*8 + 0x28]
// 00737cc2  dfe0                 fnstsw ax
// 00737cc4  f6c441               test ah, 0x41
// 00737cc7  7a63                 jp 0x737d2c
// 00737cc9  dd44fc28             fld qword ptr [esp + edi*8 + 0x28]
// 00737ccd  83c201               add edx, 1
// 00737cd0  d95c240c             fstp dword ptr [esp + 0xc]
// 00737cd4  83c10c               add ecx, 0xc
// 00737cd7  d906                 fld dword ptr [esi]
// 00737cd9  d944240c             fld dword ptr [esp + 0xc]
// 00737cdd  d9c0                 fld st(0)
// 00737cdf  deca                 fmulp st(2)
// 00737ce1  d9c9                 fxch st(1)
// 00737ce3  d95c2410             fstp dword ptr [esp + 0x10]
// 00737ce7  d94604               fld dword ptr [esi + 4]
// 00737cea  d8c9                 fmul st(1)
// 00737cec  d95c2414             fstp dword ptr [esp + 0x14]
// 00737cf0  d84e08               fmul dword ptr [esi + 8]
// 00737cf3  d95c2418             fstp dword ptr [esp + 0x18]
// 00737cf7  d903                 fld dword ptr [ebx]
// 00737cf9  d8442410             fadd dword ptr [esp + 0x10]
// 00737cfd  d95c241c             fstp dword ptr [esp + 0x1c]
// 00737d01  d94304               fld dword ptr [ebx + 4]
// 00737d04  d8442414             fadd dword ptr [esp + 0x14]
// 00737d08  d95c2420             fstp dword ptr [esp + 0x20]
// 00737d0c  d94308               fld dword ptr [ebx + 8]
// 00737d0f  d8442418             fadd dword ptr [esp + 0x18]
// 00737d13  d95c2424             fstp dword ptr [esp + 0x24]
// 00737d17  d944241c             fld dword ptr [esp + 0x1c]
// 00737d1b  d959ec               fstp dword ptr [ecx - 0x14]
// 00737d1e  d9442420             fld dword ptr [esp + 0x20]
// 00737d22  d959f0               fstp dword ptr [ecx - 0x10]
// 00737d25  d9442424             fld dword ptr [esp + 0x24]
// 00737d29  d959f4               fstp dword ptr [ecx - 0xc]
// 00737d2c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00737d2f  83c701               add edi, 1
// 00737d32  3b38                 cmp edi, dword ptr [eax]
// 00737d34  7c88                 jl 0x737cbe
// 00737d36  ddd8                 fstp st(0)
// 00737d38  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00737d3b  5f                   pop edi
// 00737d3c  33c0                 xor eax, eax
// 00737d3e  85d2                 test edx, edx
// 00737d40  5e                   pop esi
// 00737d41  8911                 mov dword ptr [ecx], edx
// 00737d43  0f9fc0               setg al
// 00737d46  5b                   pop ebx
// 00737d47  8be5                 mov esp, ebp
// 00737d49  5d                   pop ebp
// 00737d4a  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?findRayCapsuleIntersection@G3D@@YA_NABVRay@1@ABVCapsule@1@AAHQAVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
