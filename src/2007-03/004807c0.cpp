// roc 2007-03 004807c0  unit: seg_00480000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004807c0
//
// 004807c0  6aff                 push -1
// 004807c2  68bd7f7400           push 0x747fbd
// 004807c7  64a100000000         mov eax, dword ptr fs:[0]
// 004807cd  50                   push eax
// 004807ce  51                   push ecx
// 004807cf  56                   push esi
// 004807d0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004807d5  33c4                 xor eax, esp
// 004807d7  50                   push eax
// 004807d8  8d44240c             lea eax, [esp + 0xc]
// 004807dc  64a300000000         mov dword ptr fs:[0], eax
// 004807e2  8bf1                 mov esi, ecx
// 004807e4  89742408             mov dword ptr [esp + 8], esi
// 004807e8  807e6000             cmp byte ptr [esi + 0x60], 0
// 004807ec  c744241403000000     mov dword ptr [esp + 0x14], 3
// 004807f4  750a                 jne 0x480800
// 004807f6  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004807f9  50                   push eax
// 004807fa  ff15b8808b00         call dword ptr [0x8b80b8]
// 00480800  8d4e68               lea ecx, [esi + 0x68]
// 00480803  c644241402           mov byte ptr [esp + 0x14], 2
// 00480808  ff158ce77700         call dword ptr [0x77e78c]
// 0048080e  8d4e44               lea ecx, [esi + 0x44]
// 00480811  c644241401           mov byte ptr [esp + 0x14], 1
// 00480816  ff158ce77700         call dword ptr [0x77e78c]
// 0048081c  8d4e1c               lea ecx, [esi + 0x1c]
// 0048081f  c644241400           mov byte ptr [esp + 0x14], 0
// 00480824  ff158ce77700         call dword ptr [0x77e78c]
// 0048082a  8bce                 mov ecx, esi
// 0048082c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00480834  ff158ce77700         call dword ptr [0x77e78c]
// 0048083a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048083e  64890d00000000       mov dword ptr fs:[0], ecx
// 00480845  59                   pop ecx
// 00480846  5e                   pop esi
// 00480847  83c410               add esp, 0x10
// 0048084a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
