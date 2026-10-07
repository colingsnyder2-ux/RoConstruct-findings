// roc 2007-08 004823a0  unit: G3D::Shader  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004823a0
//
// 004823a0  6aff                 push -1
// 004823a2  68f15e7400           push 0x745ef1
// 004823a7  64a100000000         mov eax, dword ptr fs:[0]
// 004823ad  50                   push eax
// 004823ae  51                   push ecx
// 004823af  56                   push esi
// 004823b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004823b5  33c4                 xor eax, esp
// 004823b7  50                   push eax
// 004823b8  8d44240c             lea eax, [esp + 0xc]
// 004823bc  64a300000000         mov dword ptr fs:[0], eax
// 004823c2  8bf1                 mov esi, ecx
// 004823c4  89742408             mov dword ptr [esp + 8], esi
// 004823c8  ff15a4e67700         call dword ptr [0x77e6a4]
// 004823ce  8d4e1c               lea ecx, [esi + 0x1c]
// 004823d1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004823d9  ff15a4e67700         call dword ptr [0x77e6a4]
// 004823df  8d4e44               lea ecx, [esi + 0x44]
// 004823e2  c644241401           mov byte ptr [esp + 0x14], 1
// 004823e7  ff15a4e67700         call dword ptr [0x77e6a4]
// 004823ed  8d4e68               lea ecx, [esi + 0x68]
// 004823f0  c644241402           mov byte ptr [esp + 0x14], 2
// 004823f5  ff15a4e67700         call dword ptr [0x77e6a4]
// 004823fb  8bc6                 mov eax, esi
// 004823fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00482401  64890d00000000       mov dword ptr fs:[0], ecx
// 00482408  59                   pop ecx
// 00482409  5e                   pop esi
// 0048240a  83c410               add esp, 0x10
// 0048240d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??0GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
