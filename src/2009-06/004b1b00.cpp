// from server: 100% by auto
// roc 2009-06 004b1b00  unit: G3D::Shader  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b1b00
//
// 004b1b00  6aff                 push -1
// 004b1b02  68a9838500           push 0x8583a9
// 004b1b07  64a100000000         mov eax, dword ptr fs:[0]
// 004b1b0d  50                   push eax
// 004b1b0e  64892500000000       mov dword ptr fs:[0], esp
// 004b1b15  51                   push ecx
// 004b1b16  56                   push esi
// 004b1b17  8bf1                 mov esi, ecx
// 004b1b19  89742404             mov dword ptr [esp + 4], esi
// 004b1b1d  c706b4418c00         mov dword ptr [esi], 0x8c41b4
// 004b1b23  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 004b1b29  50                   push eax
// 004b1b2a  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004b1b32  ff1574d2a300         call dword ptr [0xa3d274]
// 004b1b38  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 004b1b3e  c7869c010000b41f8c00 mov dword ptr [esi + 0x19c], 0x8c1fb4
// 004b1b48  c644241007           mov byte ptr [esp + 0x10], 7
// 004b1b4d  c701bc0c8c00         mov dword ptr [ecx], 0x8c0cbc
// 004b1b53  e8e85dffff           call 0x4a7940
// 004b1b58  8d8e90010000         lea ecx, [esi + 0x190]
// 004b1b5e  c644241006           mov byte ptr [esp + 0x10], 6
// 004b1b63  e8e8dfffff           call 0x4afb50
// 004b1b68  8d8e70010000         lea ecx, [esi + 0x170]
// 004b1b6e  c644241005           mov byte ptr [esp + 0x10], 5
// 004b1b73  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1b79  8d8e54010000         lea ecx, [esi + 0x154]
// 004b1b7f  c644241004           mov byte ptr [esp + 0x10], 4
// 004b1b84  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1b8a  8d8e38010000         lea ecx, [esi + 0x138]
// 004b1b90  c644241003           mov byte ptr [esp + 0x10], 3
// 004b1b95  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1b9b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 004b1ba1  c644241002           mov byte ptr [esp + 0x10], 2
// 004b1ba6  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1bac  8d8e90000000         lea ecx, [esi + 0x90]
// 004b1bb2  c644241001           mov byte ptr [esp + 0x10], 1
// 004b1bb7  e8f4d8ffff           call 0x4af4b0
// 004b1bbc  8d4e0c               lea ecx, [esi + 0xc]
// 004b1bbf  c644241000           mov byte ptr [esp + 0x10], 0
// 004b1bc4  e8e7d8ffff           call 0x4af4b0
// 004b1bc9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1bcd  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 004b1bd3  5e                   pop esi
// 004b1bd4  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1bdb  83c410               add esp, 0x10
// 004b1bde  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
