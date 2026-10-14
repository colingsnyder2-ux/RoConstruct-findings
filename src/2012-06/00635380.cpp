// roc 2012-06 00635380  unit: G3D::LineSegment  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00635380
//
// 00635380  56                   push esi
// 00635381  57                   push edi
// 00635382  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00635386  d907                 fld dword ptr [edi]
// 00635388  83ec08               sub esp, 8
// 0063538b  d8057027b600         fadd dword ptr [0xb62770]
// 00635391  8bf1                 mov esi, ecx
// 00635393  dd1c24               fstp qword ptr [esp]
// 00635396  e89be73400           call 0x983b36
// 0063539b  e810e23400           call 0x9835b0
// 006353a0  668906               mov word ptr [esi], ax
// 006353a3  d94704               fld dword ptr [edi + 4]
// 006353a6  d8057027b600         fadd dword ptr [0xb62770]
// 006353ac  dd1c24               fstp qword ptr [esp]
// 006353af  e882e73400           call 0x983b36
// 006353b4  e8f7e13400           call 0x9835b0
// 006353b9  66894602             mov word ptr [esi + 2], ax
// 006353bd  d94708               fld dword ptr [edi + 8]
// 006353c0  d8057027b600         fadd dword ptr [0xb62770]
// 006353c6  dd1c24               fstp qword ptr [esp]
// 006353c9  e868e73400           call 0x983b36
// 006353ce  83c408               add esp, 8
// 006353d1  e8dae13400           call 0x9835b0
// 006353d6  66894604             mov word ptr [esi + 4], ax
// 006353da  5f                   pop edi
// 006353db  8bc6                 mov eax, esi
// 006353dd  5e                   pop esi
// 006353de  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3int16.cpp
