// roc 2008-06 004855c0  unit: G3D::Shader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004855c0
//
// 004855c0  6aff                 push -1
// 004855c2  685d557c00           push 0x7c555d
// 004855c7  64a100000000         mov eax, dword ptr fs:[0]
// 004855cd  50                   push eax
// 004855ce  64892500000000       mov dword ptr fs:[0], esp
// 004855d5  51                   push ecx
// 004855d6  56                   push esi
// 004855d7  8bf1                 mov esi, ecx
// 004855d9  89742404             mov dword ptr [esp + 4], esi
// 004855dd  807e6000             cmp byte ptr [esi + 0x60], 0
// 004855e1  c744241003000000     mov dword ptr [esp + 0x10], 3
// 004855e9  750a                 jne 0x4855f5
// 004855eb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004855ee  50                   push eax
// 004855ef  ff1514f99600         call dword ptr [0x96f914]
// 004855f5  8d4e68               lea ecx, [esi + 0x68]
// 004855f8  c644241002           mov byte ptr [esp + 0x10], 2
// 004855fd  ff1568248000         call dword ptr [0x802468]
// 00485603  8d4e44               lea ecx, [esi + 0x44]
// 00485606  c644241001           mov byte ptr [esp + 0x10], 1
// 0048560b  ff1568248000         call dword ptr [0x802468]
// 00485611  8d4e1c               lea ecx, [esi + 0x1c]
// 00485614  c644241000           mov byte ptr [esp + 0x10], 0
// 00485619  ff1568248000         call dword ptr [0x802468]
// 0048561f  8bce                 mov ecx, esi
// 00485621  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00485629  ff1568248000         call dword ptr [0x802468]
// 0048562f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00485633  5e                   pop esi
// 00485634  64890d00000000       mov dword ptr fs:[0], ecx
// 0048563b  83c410               add esp, 0x10
// 0048563e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1GPUShader@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
