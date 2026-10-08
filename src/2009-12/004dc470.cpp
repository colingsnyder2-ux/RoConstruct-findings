// roc 2009-12 004dc470  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc470
//
// 004dc470  56                   push esi
// 004dc471  57                   push edi
// 004dc472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004dc476  6840675f00           push 0x5f6740
// 004dc47b  6a04                 push 4
// 004dc47d  6a10                 push 0x10
// 004dc47f  8bf1                 mov esi, ecx
// 004dc481  57                   push edi
// 004dc482  56                   push esi
// 004dc483  e838fafeff           call 0x4cbec0
// 004dc488  8d4e40               lea ecx, [esi + 0x40]
// 004dc48b  c70100000000         mov dword ptr [ecx], 0
// 004dc491  8b4740               mov eax, dword ptr [edi + 0x40]
// 004dc494  50                   push eax
// 004dc495  e8d6f6f6ff           call 0x44bb70
// 004dc49a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004dc49d  5f                   pop edi
// 004dc49e  894e44               mov dword ptr [esi + 0x44], ecx
// 004dc4a1  8bc6                 mov eax, esi
// 004dc4a3  5e                   pop esi
// 004dc4a4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Arg@ArgList@GPUProgram@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
