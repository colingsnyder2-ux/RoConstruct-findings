// roc 2008-06 00508b20  unit: G3D::Shader  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508b20
//
// 00508b20  803d1935970000       cmp byte ptr [0x973519], 0
// 00508b27  7528                 jne 0x508b51
// 00508b29  683c280400           push 0x4283c
// 00508b2e  e8ed7d1900           call 0x6a0920
// 00508b33  83c404               add esp, 4
// 00508b36  85c0                 test eax, eax
// 00508b38  7409                 je 0x508b43
// 00508b3a  8bc8                 mov ecx, eax
// 00508b3c  e81ff9ffff           call 0x508460
// 00508b41  eb02                 jmp 0x508b45
// 00508b43  33c0                 xor eax, eax
// 00508b45  a314359700           mov dword ptr [0x973514], eax
// 00508b4a  c6051935970001       mov byte ptr [0x973519], 1
// 00508b51  8b0d14359700         mov ecx, dword ptr [0x973514]
// 00508b57  56                   push esi
// 00508b58  8b742408             mov esi, dword ptr [esp + 8]
// 00508b5c  0faf74240c           imul esi, dword ptr [esp + 0xc]
// 00508b61  57                   push edi
// 00508b62  56                   push esi
// 00508b63  e838efffff           call 0x507aa0
// 00508b68  8bf8                 mov edi, eax
// 00508b6a  e8a1f5ffff           call 0x508110
// 00508b6f  803d0235970000       cmp byte ptr [0x973502], 0
// 00508b76  741f                 je 0x508b97
// 00508b78  e893f5ffff           call 0x508110
// 00508b7d  803d0135970000       cmp byte ptr [0x973501], 0
// 00508b84  7411                 je 0x508b97
// 00508b86  56                   push esi
// 00508b87  6a00                 push 0
// 00508b89  57                   push edi
// 00508b8a  e8b1edffff           call 0x507940
// 00508b8f  83c40c               add esp, 0xc
// 00508b92  8bc7                 mov eax, edi
// 00508b94  5f                   pop edi
// 00508b95  5e                   pop esi
// 00508b96  c3                   ret 
// 00508b97  56                   push esi
// 00508b98  6a00                 push 0
// 00508b9a  57                   push edi
// 00508b9b  e8648b1900           call 0x6a1704
// 00508ba0  83c40c               add esp, 0xc
// 00508ba3  8bc7                 mov eax, edi
// 00508ba5  5f                   pop edi
// 00508ba6  5e                   pop esi
// 00508ba7  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?calloc@System@G3D@@SAPAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
