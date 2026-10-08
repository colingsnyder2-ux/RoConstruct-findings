// from server: 100% by auto
// roc 2007-08 00508b00  unit: G3D::GCamera  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508b00
//
// 00508b00  8b442404             mov eax, dword ptr [esp + 4]
// 00508b04  53                   push ebx
// 00508b05  55                   push ebp
// 00508b06  56                   push esi
// 00508b07  8bf1                 mov esi, ecx
// 00508b09  8b6e04               mov ebp, dword ptr [esi + 4]
// 00508b0c  b901000000           mov ecx, 1
// 00508b11  894604               mov dword ptr [esi + 4], eax
// 00508b14  840db0098c00         test byte ptr [0x8c09b0], cl
// 00508b1a  57                   push edi
// 00508b1b  7513                 jne 0x508b30
// 00508b1d  090db0098c00         or dword ptr [0x8c09b0], ecx
// 00508b23  bb20000000           mov ebx, 0x20
// 00508b28  891dac098c00         mov dword ptr [0x8c09ac], ebx
// 00508b2e  eb06                 jmp 0x508b36
// 00508b30  8b1dac098c00         mov ebx, dword ptr [0x8c09ac]
// 00508b36  8b4e08               mov ecx, dword ptr [esi + 8]
// 00508b39  8b7e04               mov edi, dword ptr [esi + 4]
// 00508b3c  3bf9                 cmp edi, ecx
// 00508b3e  0f8e8e000000         jle 0x508bd2
// 00508b44  85c9                 test ecx, ecx
// 00508b46  7512                 jne 0x508b5a
// 00508b48  55                   push ebp
// 00508b49  8bce                 mov ecx, esi
// 00508b4b  894608               mov dword ptr [esi + 8], eax
// 00508b4e  e85dffffff           call 0x508ab0
// 00508b53  5f                   pop edi
// 00508b54  5e                   pop esi
// 00508b55  5d                   pop ebp
// 00508b56  5b                   pop ebx
// 00508b57  c20800               ret 8
// 00508b5a  3bfb                 cmp edi, ebx
// 00508b5c  7d12                 jge 0x508b70
// 00508b5e  55                   push ebp
// 00508b5f  8bce                 mov ecx, esi
// 00508b61  895e08               mov dword ptr [esi + 8], ebx
// 00508b64  e847ffffff           call 0x508ab0
// 00508b69  5f                   pop edi
// 00508b6a  5e                   pop esi
// 00508b6b  5d                   pop ebp
// 00508b6c  5b                   pop ebx
// 00508b6d  c20800               ret 8
// 00508b70  d905387b7900         fld dword ptr [0x797b38]
// 00508b76  8bc1                 mov eax, ecx
// 00508b78  3d801a0600           cmp eax, 0x61a80
// 00508b7d  d95c2418             fstp dword ptr [esp + 0x18]
// 00508b81  7608                 jbe 0x508b8b
// 00508b83  d905347b7900         fld dword ptr [0x797b34]
// 00508b89  eb0d                 jmp 0x508b98
// 00508b8b  3d00fa0000           cmp eax, 0xfa00
// 00508b90  760a                 jbe 0x508b9c
// 00508b92  d90588797900         fld dword ptr [0x797988]
// 00508b98  d95c2418             fstp dword ptr [esp + 0x18]
// 00508b9c  8bd8                 mov ebx, eax
// 00508b9e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00508ba2  db442414             fild dword ptr [esp + 0x14]
// 00508ba6  d84c2418             fmul dword ptr [esp + 0x18]
// 00508baa  e8b1811200           call 0x630d60
// 00508baf  2bc3                 sub eax, ebx
// 00508bb1  03c7                 add eax, edi
// 00508bb3  894608               mov dword ptr [esi + 8], eax
// 00508bb6  8b0dac098c00         mov ecx, dword ptr [0x8c09ac]
// 00508bbc  3bc1                 cmp eax, ecx
// 00508bbe  7d03                 jge 0x508bc3
// 00508bc0  894e08               mov dword ptr [esi + 8], ecx
// 00508bc3  55                   push ebp
// 00508bc4  8bce                 mov ecx, esi
// 00508bc6  e8e5feffff           call 0x508ab0
// 00508bcb  5f                   pop edi
// 00508bcc  5e                   pop esi
// 00508bcd  5d                   pop ebp
// 00508bce  5b                   pop ebx
// 00508bcf  c20800               ret 8
// 00508bd2  b856555555           mov eax, 0x55555556
// 00508bd7  f7e9                 imul ecx
// 00508bd9  8bc2                 mov eax, edx
// 00508bdb  c1e81f               shr eax, 0x1f
// 00508bde  03c2                 add eax, edx
// 00508be0  3bf8                 cmp edi, eax
// 00508be2  7f19                 jg 0x508bfd
// 00508be4  807c241800           cmp byte ptr [esp + 0x18], 0
// 00508be9  7412                 je 0x508bfd
// 00508beb  3bfb                 cmp edi, ebx
// 00508bed  7e0e                 jle 0x508bfd
// 00508bef  3bfd                 cmp edi, ebp
// 00508bf1  7c02                 jl 0x508bf5
// 00508bf3  8bfd                 mov edi, ebp
// 00508bf5  57                   push edi
// 00508bf6  8bce                 mov ecx, esi
// 00508bf8  e8b3feffff           call 0x508ab0
// 00508bfd  5f                   pop edi
// 00508bfe  5e                   pop esi
// 00508bff  5d                   pop ebp
// 00508c00  5b                   pop ebx
// 00508c01  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@E@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
