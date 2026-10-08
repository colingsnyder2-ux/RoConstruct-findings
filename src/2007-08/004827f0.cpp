// from server: 100% by auto
// roc 2007-08 004827f0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004827f0
//
// 004827f0  56                   push esi
// 004827f1  57                   push edi
// 004827f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004827f6  6860304700           push 0x473060
// 004827fb  6a04                 push 4
// 004827fd  6a10                 push 0x10
// 004827ff  8bf1                 mov esi, ecx
// 00482801  57                   push edi
// 00482802  56                   push esi
// 00482803  e82827ffff           call 0x474f30
// 00482808  8d4e40               lea ecx, [esi + 0x40]
// 0048280b  c70100000000         mov dword ptr [ecx], 0
// 00482811  8b4740               mov eax, dword ptr [edi + 0x40]
// 00482814  50                   push eax
// 00482815  e85627ffff           call 0x474f70
// 0048281a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0048281d  5f                   pop edi
// 0048281e  894e44               mov dword ptr [esi + 0x44], ecx
// 00482821  8bc6                 mov eax, esi
// 00482823  5e                   pop esi
// 00482824  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
