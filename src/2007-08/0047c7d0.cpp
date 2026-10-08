// from server: 100% by auto
// roc 2007-08 0047c7d0  unit: G3D::Win32Window  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c7d0
//
// 0047c7d0  8b442404             mov eax, dword ptr [esp + 4]
// 0047c7d4  53                   push ebx
// 0047c7d5  55                   push ebp
// 0047c7d6  56                   push esi
// 0047c7d7  8bf1                 mov esi, ecx
// 0047c7d9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047c7dc  b901000000           mov ecx, 1
// 0047c7e1  894604               mov dword ptr [esi + 4], eax
// 0047c7e4  840d80d88b00         test byte ptr [0x8bd880], cl
// 0047c7ea  57                   push edi
// 0047c7eb  7513                 jne 0x47c800
// 0047c7ed  090d80d88b00         or dword ptr [0x8bd880], ecx
// 0047c7f3  bb0a000000           mov ebx, 0xa
// 0047c7f8  891d7cd88b00         mov dword ptr [0x8bd87c], ebx
// 0047c7fe  eb06                 jmp 0x47c806
// 0047c800  8b1d7cd88b00         mov ebx, dword ptr [0x8bd87c]
// 0047c806  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047c809  8b7e04               mov edi, dword ptr [esi + 4]
// 0047c80c  3bf9                 cmp edi, ecx
// 0047c80e  0f8e92000000         jle 0x47c8a6
// 0047c814  85c9                 test ecx, ecx
// 0047c816  7512                 jne 0x47c82a
// 0047c818  55                   push ebp
// 0047c819  8bce                 mov ecx, esi
// 0047c81b  894608               mov dword ptr [esi + 8], eax
// 0047c81e  e83df8ffff           call 0x47c060
// 0047c823  5f                   pop edi
// 0047c824  5e                   pop esi
// 0047c825  5d                   pop ebp
// 0047c826  5b                   pop ebx
// 0047c827  c20800               ret 8
// 0047c82a  3bfb                 cmp edi, ebx
// 0047c82c  7d12                 jge 0x47c840
// 0047c82e  55                   push ebp
// 0047c82f  8bce                 mov ecx, esi
// 0047c831  895e08               mov dword ptr [esi + 8], ebx
// 0047c834  e827f8ffff           call 0x47c060
// 0047c839  5f                   pop edi
// 0047c83a  5e                   pop esi
// 0047c83b  5d                   pop ebp
// 0047c83c  5b                   pop ebx
// 0047c83d  c20800               ret 8
// 0047c840  d905387b7900         fld dword ptr [0x797b38]
// 0047c846  8bc1                 mov eax, ecx
// 0047c848  03c0                 add eax, eax
// 0047c84a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047c84e  03c0                 add eax, eax
// 0047c850  3d801a0600           cmp eax, 0x61a80
// 0047c855  7608                 jbe 0x47c85f
// 0047c857  d905347b7900         fld dword ptr [0x797b34]
// 0047c85d  eb0d                 jmp 0x47c86c
// 0047c85f  3d00fa0000           cmp eax, 0xfa00
// 0047c864  760a                 jbe 0x47c870
// 0047c866  d90588797900         fld dword ptr [0x797988]
// 0047c86c  d95c2418             fstp dword ptr [esp + 0x18]
// 0047c870  8bd9                 mov ebx, ecx
// 0047c872  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047c876  db442414             fild dword ptr [esp + 0x14]
// 0047c87a  d84c2418             fmul dword ptr [esp + 0x18]
// 0047c87e  e8dd441b00           call 0x630d60
// 0047c883  2bc3                 sub eax, ebx
// 0047c885  03c7                 add eax, edi
// 0047c887  894608               mov dword ptr [esi + 8], eax
// 0047c88a  8b0d7cd88b00         mov ecx, dword ptr [0x8bd87c]
// 0047c890  3bc1                 cmp eax, ecx
// 0047c892  7d03                 jge 0x47c897
// 0047c894  894e08               mov dword ptr [esi + 8], ecx
// 0047c897  55                   push ebp
// 0047c898  8bce                 mov ecx, esi
// 0047c89a  e8c1f7ffff           call 0x47c060
// 0047c89f  5f                   pop edi
// 0047c8a0  5e                   pop esi
// 0047c8a1  5d                   pop ebp
// 0047c8a2  5b                   pop ebx
// 0047c8a3  c20800               ret 8
// 0047c8a6  b856555555           mov eax, 0x55555556
// 0047c8ab  f7e9                 imul ecx
// 0047c8ad  8bc2                 mov eax, edx
// 0047c8af  c1e81f               shr eax, 0x1f
// 0047c8b2  03c2                 add eax, edx
// 0047c8b4  3bf8                 cmp edi, eax
// 0047c8b6  7f19                 jg 0x47c8d1
// 0047c8b8  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047c8bd  7412                 je 0x47c8d1
// 0047c8bf  3bfb                 cmp edi, ebx
// 0047c8c1  7e0e                 jle 0x47c8d1
// 0047c8c3  3bfd                 cmp edi, ebp
// 0047c8c5  7c02                 jl 0x47c8c9
// 0047c8c7  8bfd                 mov edi, ebp
// 0047c8c9  57                   push edi
// 0047c8ca  8bce                 mov ecx, esi
// 0047c8cc  e88ff7ffff           call 0x47c060
// 0047c8d1  5f                   pop edi
// 0047c8d2  5e                   pop esi
// 0047c8d3  5d                   pop ebp
// 0047c8d4  5b                   pop ebx
// 0047c8d5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
