// roc 2007-08 0047c990  unit: G3D::Win32Window  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c990
//
// 0047c990  8b442404             mov eax, dword ptr [esp + 4]
// 0047c994  53                   push ebx
// 0047c995  55                   push ebp
// 0047c996  56                   push esi
// 0047c997  8bf1                 mov esi, ecx
// 0047c999  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047c99c  b901000000           mov ecx, 1
// 0047c9a1  894604               mov dword ptr [esi + 4], eax
// 0047c9a4  840d88d88b00         test byte ptr [0x8bd888], cl
// 0047c9aa  57                   push edi
// 0047c9ab  7513                 jne 0x47c9c0
// 0047c9ad  090d88d88b00         or dword ptr [0x8bd888], ecx
// 0047c9b3  bb20000000           mov ebx, 0x20
// 0047c9b8  891d84d88b00         mov dword ptr [0x8bd884], ebx
// 0047c9be  eb06                 jmp 0x47c9c6
// 0047c9c0  8b1d84d88b00         mov ebx, dword ptr [0x8bd884]
// 0047c9c6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c9c9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047c9cc  3bf9                 cmp edi, ecx
// 0047c9ce  0f8e8e000000         jle 0x47ca62
// 0047c9d4  85c9                 test ecx, ecx
// 0047c9d6  7512                 jne 0x47c9ea
// 0047c9d8  55                   push ebp
// 0047c9d9  8bce                 mov ecx, esi
// 0047c9db  894608               mov dword ptr [esi + 8], eax
// 0047c9de  e8cdc00800           call 0x508ab0
// 0047c9e3  5f                   pop edi
// 0047c9e4  5e                   pop esi
// 0047c9e5  5d                   pop ebp
// 0047c9e6  5b                   pop ebx
// 0047c9e7  c20800               ret 8
// 0047c9ea  3bfb                 cmp edi, ebx
// 0047c9ec  7d12                 jge 0x47ca00
// 0047c9ee  55                   push ebp
// 0047c9ef  8bce                 mov ecx, esi
// 0047c9f1  895e08               mov dword ptr [esi + 8], ebx
// 0047c9f4  e8b7c00800           call 0x508ab0
// 0047c9f9  5f                   pop edi
// 0047c9fa  5e                   pop esi
// 0047c9fb  5d                   pop ebp
// 0047c9fc  5b                   pop ebx
// 0047c9fd  c20800               ret 8
// 0047ca00  d905387b7900         fld dword ptr [0x797b38]
// 0047ca06  8bc1                 mov eax, ecx
// 0047ca08  3d801a0600           cmp eax, 0x61a80
// 0047ca0d  d95c2418             fstp dword ptr [esp + 0x18]
// 0047ca11  7608                 jbe 0x47ca1b
// 0047ca13  d905347b7900         fld dword ptr [0x797b34]
// 0047ca19  eb0d                 jmp 0x47ca28
// 0047ca1b  3d00fa0000           cmp eax, 0xfa00
// 0047ca20  760a                 jbe 0x47ca2c
// 0047ca22  d90588797900         fld dword ptr [0x797988]
// 0047ca28  d95c2418             fstp dword ptr [esp + 0x18]
// 0047ca2c  8bd8                 mov ebx, eax
// 0047ca2e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047ca32  db442414             fild dword ptr [esp + 0x14]
// 0047ca36  d84c2418             fmul dword ptr [esp + 0x18]
// 0047ca3a  e821431b00           call 0x630d60
// 0047ca3f  2bc3                 sub eax, ebx
// 0047ca41  03c7                 add eax, edi
// 0047ca43  894608               mov dword ptr [esi + 8], eax
// 0047ca46  8b0d84d88b00         mov ecx, dword ptr [0x8bd884]
// 0047ca4c  3bc1                 cmp eax, ecx
// 0047ca4e  7d03                 jge 0x47ca53
// 0047ca50  894e08               mov dword ptr [esi + 8], ecx
// 0047ca53  55                   push ebp
// 0047ca54  8bce                 mov ecx, esi
// 0047ca56  e855c00800           call 0x508ab0
// 0047ca5b  5f                   pop edi
// 0047ca5c  5e                   pop esi
// 0047ca5d  5d                   pop ebp
// 0047ca5e  5b                   pop ebx
// 0047ca5f  c20800               ret 8
// 0047ca62  b856555555           mov eax, 0x55555556
// 0047ca67  f7e9                 imul ecx
// 0047ca69  8bc2                 mov eax, edx
// 0047ca6b  c1e81f               shr eax, 0x1f
// 0047ca6e  03c2                 add eax, edx
// 0047ca70  3bf8                 cmp edi, eax
// 0047ca72  7f19                 jg 0x47ca8d
// 0047ca74  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047ca79  7412                 je 0x47ca8d
// 0047ca7b  3bfb                 cmp edi, ebx
// 0047ca7d  7e0e                 jle 0x47ca8d
// 0047ca7f  3bfd                 cmp edi, ebp
// 0047ca81  7c02                 jl 0x47ca85
// 0047ca83  8bfd                 mov edi, ebp
// 0047ca85  57                   push edi
// 0047ca86  8bce                 mov ecx, esi
// 0047ca88  e823c00800           call 0x508ab0
// 0047ca8d  5f                   pop edi
// 0047ca8e  5e                   pop esi
// 0047ca8f  5d                   pop ebp
// 0047ca90  5b                   pop ebx
// 0047ca91  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@E@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
