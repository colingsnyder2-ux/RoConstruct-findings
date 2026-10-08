// roc 2007-03 00480850  unit: seg_00480000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480850
//
// 00480850  6aff                 push -1
// 00480852  6801807400           push 0x748001
// 00480857  64a100000000         mov eax, dword ptr fs:[0]
// 0048085d  50                   push eax
// 0048085e  51                   push ecx
// 0048085f  56                   push esi
// 00480860  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00480865  33c4                 xor eax, esp
// 00480867  50                   push eax
// 00480868  8d44240c             lea eax, [esp + 0xc]
// 0048086c  64a300000000         mov dword ptr fs:[0], eax
// 00480872  8bf1                 mov esi, ecx
// 00480874  89742408             mov dword ptr [esp + 8], esi
// 00480878  ff1584e77700         call dword ptr [0x77e784]
// 0048087e  8d4e1c               lea ecx, [esi + 0x1c]
// 00480881  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00480889  ff1584e77700         call dword ptr [0x77e784]
// 0048088f  8d4e44               lea ecx, [esi + 0x44]
// 00480892  c644241401           mov byte ptr [esp + 0x14], 1
// 00480897  ff1584e77700         call dword ptr [0x77e784]
// 0048089d  8d4e68               lea ecx, [esi + 0x68]
// 004808a0  c644241402           mov byte ptr [esp + 0x14], 2
// 004808a5  ff1584e77700         call dword ptr [0x77e784]
// 004808ab  8bc6                 mov eax, esi
// 004808ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004808b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004808b8  59                   pop ecx
// 004808b9  5e                   pop esi
// 004808ba  83c410               add esp, 0x10
// 004808bd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
