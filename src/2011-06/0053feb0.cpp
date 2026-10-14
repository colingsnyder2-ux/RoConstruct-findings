// roc 2011-06 0053feb0  unit: G3D::MemoryManager  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053feb0
//
// 0053feb0  56                   push esi
// 0053feb1  57                   push edi
// 0053feb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0053feb6  d907                 fld dword ptr [edi]
// 0053feb8  83ec08               sub esp, 8
// 0053febb  d805685ba700         fadd dword ptr [0xa75b68]
// 0053fec1  8bf1                 mov esi, ecx
// 0053fec3  dd1c24               fstp qword ptr [esp]
// 0053fec6  e83bba2c00           call 0x80b906
// 0053fecb  e860b62c00           call 0x80b530
// 0053fed0  668906               mov word ptr [esi], ax
// 0053fed3  d94704               fld dword ptr [edi + 4]
// 0053fed6  d805685ba700         fadd dword ptr [0xa75b68]
// 0053fedc  dd1c24               fstp qword ptr [esp]
// 0053fedf  e822ba2c00           call 0x80b906
// 0053fee4  83c408               add esp, 8
// 0053fee7  e844b62c00           call 0x80b530
// 0053feec  66894602             mov word ptr [esi + 2], ax
// 0053fef0  5f                   pop edi
// 0053fef1  8bc6                 mov eax, esi
// 0053fef3  5e                   pop esi
// 0053fef4  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2int16.cpp
