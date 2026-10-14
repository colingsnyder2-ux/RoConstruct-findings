// roc 2012-06 0062b760  unit: G3D::MemoryManager  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062b760
//
// 0062b760  56                   push esi
// 0062b761  57                   push edi
// 0062b762  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062b766  d907                 fld dword ptr [edi]
// 0062b768  83ec08               sub esp, 8
// 0062b76b  d8057027b600         fadd dword ptr [0xb62770]
// 0062b771  8bf1                 mov esi, ecx
// 0062b773  dd1c24               fstp qword ptr [esp]
// 0062b776  e8bb833500           call 0x983b36
// 0062b77b  e8307e3500           call 0x9835b0
// 0062b780  668906               mov word ptr [esi], ax
// 0062b783  d94704               fld dword ptr [edi + 4]
// 0062b786  d8057027b600         fadd dword ptr [0xb62770]
// 0062b78c  dd1c24               fstp qword ptr [esp]
// 0062b78f  e8a2833500           call 0x983b36
// 0062b794  83c408               add esp, 8
// 0062b797  e8147e3500           call 0x9835b0
// 0062b79c  66894602             mov word ptr [esi + 2], ax
// 0062b7a0  5f                   pop edi
// 0062b7a1  8bc6                 mov eax, esi
// 0062b7a3  5e                   pop esi
// 0062b7a4  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2int16.cpp
