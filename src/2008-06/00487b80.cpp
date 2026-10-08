// from server: 100% by auto
// roc 2008-06 00487b80  unit: G3D::Shader  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00487b80
//
// 00487b80  6aff                 push -1
// 00487b82  6819597c00           push 0x7c5919
// 00487b87  64a100000000         mov eax, dword ptr fs:[0]
// 00487b8d  50                   push eax
// 00487b8e  64892500000000       mov dword ptr fs:[0], esp
// 00487b95  51                   push ecx
// 00487b96  56                   push esi
// 00487b97  8bf1                 mov esi, ecx
// 00487b99  89742404             mov dword ptr [esp + 4], esi
// 00487b9d  c70614128200         mov dword ptr [esi], 0x821214
// 00487ba3  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00487ba9  50                   push eax
// 00487baa  c744241408000000     mov dword ptr [esp + 0x14], 8
// 00487bb2  ff1514f99600         call dword ptr [0x96f914]
// 00487bb8  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 00487bbe  c7869c01000094e18100 mov dword ptr [esi + 0x19c], 0x81e194
// 00487bc8  c644241007           mov byte ptr [esp + 0x10], 7
// 00487bcd  c7011cce8100         mov dword ptr [ecx], 0x81ce1c
// 00487bd3  e8b89afeff           call 0x471690
// 00487bd8  8d8e90010000         lea ecx, [esi + 0x190]
// 00487bde  c644241006           mov byte ptr [esp + 0x10], 6
// 00487be3  e8b8e0ffff           call 0x485ca0
// 00487be8  8d8e70010000         lea ecx, [esi + 0x170]
// 00487bee  c644241005           mov byte ptr [esp + 0x10], 5
// 00487bf3  ff1568248000         call dword ptr [0x802468]
// 00487bf9  8d8e54010000         lea ecx, [esi + 0x154]
// 00487bff  c644241004           mov byte ptr [esp + 0x10], 4
// 00487c04  ff1568248000         call dword ptr [0x802468]
// 00487c0a  8d8e38010000         lea ecx, [esi + 0x138]
// 00487c10  c644241003           mov byte ptr [esp + 0x10], 3
// 00487c15  ff1568248000         call dword ptr [0x802468]
// 00487c1b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00487c21  c644241002           mov byte ptr [esp + 0x10], 2
// 00487c26  ff1568248000         call dword ptr [0x802468]
// 00487c2c  8d8e90000000         lea ecx, [esi + 0x90]
// 00487c32  c644241001           mov byte ptr [esp + 0x10], 1
// 00487c37  e884d9ffff           call 0x4855c0
// 00487c3c  8d4e0c               lea ecx, [esi + 0xc]
// 00487c3f  c644241000           mov byte ptr [esp + 0x10], 0
// 00487c44  e877d9ffff           call 0x4855c0
// 00487c49  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00487c4d  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00487c53  5e                   pop esi
// 00487c54  64890d00000000       mov dword ptr fs:[0], ecx
// 00487c5b  83c410               add esp, 0x10
// 00487c5e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
