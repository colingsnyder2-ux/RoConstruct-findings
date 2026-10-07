// roc 2007-08 00482310  unit: G3D::Shader  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482310
//
// 00482310  6aff                 push -1
// 00482312  68ad5e7400           push 0x745ead
// 00482317  64a100000000         mov eax, dword ptr fs:[0]
// 0048231d  50                   push eax
// 0048231e  51                   push ecx
// 0048231f  56                   push esi
// 00482320  a188518b00           mov eax, dword ptr [0x8b5188]
// 00482325  33c4                 xor eax, esp
// 00482327  50                   push eax
// 00482328  8d44240c             lea eax, [esp + 0xc]
// 0048232c  64a300000000         mov dword ptr fs:[0], eax
// 00482332  8bf1                 mov esi, ecx
// 00482334  89742408             mov dword ptr [esp + 8], esi
// 00482338  807e6000             cmp byte ptr [esi + 0x60], 0
// 0048233c  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00482344  750a                 jne 0x482350
// 00482346  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00482349  50                   push eax
// 0048234a  ff1500da8b00         call dword ptr [0x8bda00]
// 00482350  8d4e68               lea ecx, [esi + 0x68]
// 00482353  c644241402           mov byte ptr [esp + 0x14], 2
// 00482358  ff15ace67700         call dword ptr [0x77e6ac]
// 0048235e  8d4e44               lea ecx, [esi + 0x44]
// 00482361  c644241401           mov byte ptr [esp + 0x14], 1
// 00482366  ff15ace67700         call dword ptr [0x77e6ac]
// 0048236c  8d4e1c               lea ecx, [esi + 0x1c]
// 0048236f  c644241400           mov byte ptr [esp + 0x14], 0
// 00482374  ff15ace67700         call dword ptr [0x77e6ac]
// 0048237a  8bce                 mov ecx, esi
// 0048237c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00482384  ff15ace67700         call dword ptr [0x77e6ac]
// 0048238a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048238e  64890d00000000       mov dword ptr fs:[0], ecx
// 00482395  59                   pop ecx
// 00482396  5e                   pop esi
// 00482397  83c410               add esp, 0x10
// 0048239a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
