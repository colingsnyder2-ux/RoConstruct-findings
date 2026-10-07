// roc 2010-06 0049aa60  unit: G3D::Shader  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049aa60
//
// 0049aa60  6aff                 push -1
// 0049aa62  6809719800           push 0x987109
// 0049aa67  64a100000000         mov eax, dword ptr fs:[0]
// 0049aa6d  50                   push eax
// 0049aa6e  64892500000000       mov dword ptr fs:[0], esp
// 0049aa75  51                   push ecx
// 0049aa76  56                   push esi
// 0049aa77  8bf1                 mov esi, ecx
// 0049aa79  89742404             mov dword ptr [esp + 4], esi
// 0049aa7d  c7065c77a100         mov dword ptr [esi], 0xa1775c
// 0049aa83  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0049aa89  50                   push eax
// 0049aa8a  c744241408000000     mov dword ptr [esp + 0x14], 8
// 0049aa92  ff15b43ac000         call dword ptr [0xc03ab4]
// 0049aa98  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 0049aa9e  c7869c0100006c50a100 mov dword ptr [esi + 0x19c], 0xa1506c
// 0049aaa8  c644241007           mov byte ptr [esp + 0x10], 7
// 0049aaad  c701f43ca100         mov dword ptr [ecx], 0xa13cf4
// 0049aab3  e8582fffff           call 0x48da10
// 0049aab8  8d8e90010000         lea ecx, [esi + 0x190]
// 0049aabe  c644241006           mov byte ptr [esp + 0x10], 6
// 0049aac3  e838e0ffff           call 0x498b00
// 0049aac8  8d8e70010000         lea ecx, [esi + 0x170]
// 0049aace  c644241005           mov byte ptr [esp + 0x10], 5
// 0049aad3  ff1500a49e00         call dword ptr [0x9ea400]
// 0049aad9  8d8e54010000         lea ecx, [esi + 0x154]
// 0049aadf  c644241004           mov byte ptr [esp + 0x10], 4
// 0049aae4  ff1500a49e00         call dword ptr [0x9ea400]
// 0049aaea  8d8e38010000         lea ecx, [esi + 0x138]
// 0049aaf0  c644241003           mov byte ptr [esp + 0x10], 3
// 0049aaf5  ff1500a49e00         call dword ptr [0x9ea400]
// 0049aafb  8d8e1c010000         lea ecx, [esi + 0x11c]
// 0049ab01  c644241002           mov byte ptr [esp + 0x10], 2
// 0049ab06  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ab0c  8d8e90000000         lea ecx, [esi + 0x90]
// 0049ab12  c644241001           mov byte ptr [esp + 0x10], 1
// 0049ab17  e804d9ffff           call 0x498420
// 0049ab1c  8d4e0c               lea ecx, [esi + 0xc]
// 0049ab1f  c644241000           mov byte ptr [esp + 0x10], 0
// 0049ab24  e8f7d8ffff           call 0x498420
// 0049ab29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049ab2d  c7065032a100         mov dword ptr [esi], 0xa13250
// 0049ab33  5e                   pop esi
// 0049ab34  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ab3b  83c410               add esp, 0x10
// 0049ab3e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
