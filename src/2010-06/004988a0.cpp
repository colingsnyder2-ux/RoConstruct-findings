// roc 2010-06 004988a0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004988a0
//
// 004988a0  56                   push esi
// 004988a1  57                   push edi
// 004988a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004988a6  68a00a4900           push 0x490aa0
// 004988ab  6a04                 push 4
// 004988ad  6a10                 push 0x10
// 004988af  8bf1                 mov esi, ecx
// 004988b1  57                   push edi
// 004988b2  56                   push esi
// 004988b3  e8a89effff           call 0x492760
// 004988b8  8d4e40               lea ecx, [esi + 0x40]
// 004988bb  c70100000000         mov dword ptr [ecx], 0
// 004988c1  8b4740               mov eax, dword ptr [edi + 0x40]
// 004988c4  50                   push eax
// 004988c5  e856e4feff           call 0x486d20
// 004988ca  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004988cd  5f                   pop edi
// 004988ce  894e44               mov dword ptr [esi + 0x44], ecx
// 004988d1  8bc6                 mov eax, esi
// 004988d3  5e                   pop esi
// 004988d4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
