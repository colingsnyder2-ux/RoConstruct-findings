// roc 2009-06 004af930  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004af930
//
// 004af930  56                   push esi
// 004af931  57                   push edi
// 004af932  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004af936  6830594800           push 0x485930
// 004af93b  6a04                 push 4
// 004af93d  6a10                 push 0x10
// 004af93f  8bf1                 mov esi, ecx
// 004af941  57                   push edi
// 004af942  56                   push esi
// 004af943  e8d8fefeff           call 0x49f820
// 004af948  8d4e40               lea ecx, [esi + 0x40]
// 004af94b  c70100000000         mov dword ptr [ecx], 0
// 004af951  8b4740               mov eax, dword ptr [edi + 0x40]
// 004af954  50                   push eax
// 004af955  e806fffeff           call 0x49f860
// 004af95a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004af95d  5f                   pop edi
// 004af95e  894e44               mov dword ptr [esi + 0x44], ecx
// 004af961  8bc6                 mov eax, esi
// 004af963  5e                   pop esi
// 004af964  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
