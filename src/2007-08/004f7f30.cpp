// from server: 100% by auto
// roc 2007-08 004f7f30  unit: G3D::Sphere  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7f30
//
// 004f7f30  8b442404             mov eax, dword ptr [esp + 4]
// 004f7f34  53                   push ebx
// 004f7f35  55                   push ebp
// 004f7f36  56                   push esi
// 004f7f37  8bf1                 mov esi, ecx
// 004f7f39  8b6e04               mov ebp, dword ptr [esi + 4]
// 004f7f3c  b901000000           mov ecx, 1
// 004f7f41  894604               mov dword ptr [esi + 4], eax
// 004f7f44  840d04fc8b00         test byte ptr [0x8bfc04], cl
// 004f7f4a  57                   push edi
// 004f7f4b  7513                 jne 0x4f7f60
// 004f7f4d  090d04fc8b00         or dword ptr [0x8bfc04], ecx
// 004f7f53  bb0a000000           mov ebx, 0xa
// 004f7f58  891d00fc8b00         mov dword ptr [0x8bfc00], ebx
// 004f7f5e  eb06                 jmp 0x4f7f66
// 004f7f60  8b1d00fc8b00         mov ebx, dword ptr [0x8bfc00]
// 004f7f66  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f7f69  8b7e04               mov edi, dword ptr [esi + 4]
// 004f7f6c  3bf9                 cmp edi, ecx
// 004f7f6e  0f8e92000000         jle 0x4f8006
// 004f7f74  85c9                 test ecx, ecx
// 004f7f76  7512                 jne 0x4f7f8a
// 004f7f78  55                   push ebp
// 004f7f79  8bce                 mov ecx, esi
// 004f7f7b  894608               mov dword ptr [esi + 8], eax
// 004f7f7e  e87d170a00           call 0x599700
// 004f7f83  5f                   pop edi
// 004f7f84  5e                   pop esi
// 004f7f85  5d                   pop ebp
// 004f7f86  5b                   pop ebx
// 004f7f87  c20800               ret 8
// 004f7f8a  3bfb                 cmp edi, ebx
// 004f7f8c  7d12                 jge 0x4f7fa0
// 004f7f8e  55                   push ebp
// 004f7f8f  8bce                 mov ecx, esi
// 004f7f91  895e08               mov dword ptr [esi + 8], ebx
// 004f7f94  e867170a00           call 0x599700
// 004f7f99  5f                   pop edi
// 004f7f9a  5e                   pop esi
// 004f7f9b  5d                   pop ebp
// 004f7f9c  5b                   pop ebx
// 004f7f9d  c20800               ret 8
// 004f7fa0  d905387b7900         fld dword ptr [0x797b38]
// 004f7fa6  8bc1                 mov eax, ecx
// 004f7fa8  03c0                 add eax, eax
// 004f7faa  d95c2418             fstp dword ptr [esp + 0x18]
// 004f7fae  03c0                 add eax, eax
// 004f7fb0  3d801a0600           cmp eax, 0x61a80
// 004f7fb5  7608                 jbe 0x4f7fbf
// 004f7fb7  d905347b7900         fld dword ptr [0x797b34]
// 004f7fbd  eb0d                 jmp 0x4f7fcc
// 004f7fbf  3d00fa0000           cmp eax, 0xfa00
// 004f7fc4  760a                 jbe 0x4f7fd0
// 004f7fc6  d90588797900         fld dword ptr [0x797988]
// 004f7fcc  d95c2418             fstp dword ptr [esp + 0x18]
// 004f7fd0  8bd9                 mov ebx, ecx
// 004f7fd2  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f7fd6  db442414             fild dword ptr [esp + 0x14]
// 004f7fda  d84c2418             fmul dword ptr [esp + 0x18]
// 004f7fde  e87d8d1300           call 0x630d60
// 004f7fe3  2bc3                 sub eax, ebx
// 004f7fe5  03c7                 add eax, edi
// 004f7fe7  894608               mov dword ptr [esi + 8], eax
// 004f7fea  8b0d00fc8b00         mov ecx, dword ptr [0x8bfc00]
// 004f7ff0  3bc1                 cmp eax, ecx
// 004f7ff2  7d03                 jge 0x4f7ff7
// 004f7ff4  894e08               mov dword ptr [esi + 8], ecx
// 004f7ff7  55                   push ebp
// 004f7ff8  8bce                 mov ecx, esi
// 004f7ffa  e801170a00           call 0x599700
// 004f7fff  5f                   pop edi
// 004f8000  5e                   pop esi
// 004f8001  5d                   pop ebp
// 004f8002  5b                   pop ebx
// 004f8003  c20800               ret 8
// 004f8006  b856555555           mov eax, 0x55555556
// 004f800b  f7e9                 imul ecx
// 004f800d  8bc2                 mov eax, edx
// 004f800f  c1e81f               shr eax, 0x1f
// 004f8012  03c2                 add eax, edx
// 004f8014  3bf8                 cmp edi, eax
// 004f8016  7f19                 jg 0x4f8031
// 004f8018  807c241800           cmp byte ptr [esp + 0x18], 0
// 004f801d  7412                 je 0x4f8031
// 004f801f  3bfb                 cmp edi, ebx
// 004f8021  7e0e                 jle 0x4f8031
// 004f8023  3bfd                 cmp edi, ebp
// 004f8025  7c02                 jl 0x4f8029
// 004f8027  8bfd                 mov edi, ebp
// 004f8029  57                   push edi
// 004f802a  8bce                 mov ecx, esi
// 004f802c  e8cf160a00           call 0x599700
// 004f8031  5f                   pop edi
// 004f8032  5e                   pop esi
// 004f8033  5d                   pop ebp
// 004f8034  5b                   pop ebx
// 004f8035  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
