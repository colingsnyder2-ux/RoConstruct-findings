// roc 2008-06 00485a40  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485a40
//
// 00485a40  56                   push esi
// 00485a41  57                   push edi
// 00485a42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00485a46  6850654700           push 0x476550
// 00485a4b  6a04                 push 4
// 00485a4d  6a10                 push 0x10
// 00485a4f  8bf1                 mov esi, ecx
// 00485a51  57                   push edi
// 00485a52  56                   push esi
// 00485a53  e89827ffff           call 0x4781f0
// 00485a58  8d4e40               lea ecx, [esi + 0x40]
// 00485a5b  c70100000000         mov dword ptr [ecx], 0
// 00485a61  8b4740               mov eax, dword ptr [edi + 0x40]
// 00485a64  50                   push eax
// 00485a65  e836351100           call 0x598fa0
// 00485a6a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00485a6d  5f                   pop edi
// 00485a6e  894e44               mov dword ptr [esi + 0x44], ecx
// 00485a71  8bc6                 mov eax, esi
// 00485a73  5e                   pop esi
// 00485a74  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
