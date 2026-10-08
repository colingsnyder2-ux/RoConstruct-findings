// from server: 100% by auto
// roc 2007-08 0047cfc0  unit: G3D::Win32Window  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047cfc0
//
// 0047cfc0  8b442404             mov eax, dword ptr [esp + 4]
// 0047cfc4  53                   push ebx
// 0047cfc5  55                   push ebp
// 0047cfc6  56                   push esi
// 0047cfc7  8bf1                 mov esi, ecx
// 0047cfc9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047cfcc  b901000000           mov ecx, 1
// 0047cfd1  894604               mov dword ptr [esi + 4], eax
// 0047cfd4  840da4d88b00         test byte ptr [0x8bd8a4], cl
// 0047cfda  57                   push edi
// 0047cfdb  7513                 jne 0x47cff0
// 0047cfdd  090da4d88b00         or dword ptr [0x8bd8a4], ecx
// 0047cfe3  bb0a000000           mov ebx, 0xa
// 0047cfe8  891da0d88b00         mov dword ptr [0x8bd8a0], ebx
// 0047cfee  eb06                 jmp 0x47cff6
// 0047cff0  8b1da0d88b00         mov ebx, dword ptr [0x8bd8a0]
// 0047cff6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cff9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047cffc  3bf9                 cmp edi, ecx
// 0047cffe  0f8e92000000         jle 0x47d096
// 0047d004  85c9                 test ecx, ecx
// 0047d006  7512                 jne 0x47d01a
// 0047d008  55                   push ebp
// 0047d009  8bce                 mov ecx, esi
// 0047d00b  894608               mov dword ptr [esi + 8], eax
// 0047d00e  e8edc61100           call 0x599700
// 0047d013  5f                   pop edi
// 0047d014  5e                   pop esi
// 0047d015  5d                   pop ebp
// 0047d016  5b                   pop ebx
// 0047d017  c20800               ret 8
// 0047d01a  3bfb                 cmp edi, ebx
// 0047d01c  7d12                 jge 0x47d030
// 0047d01e  55                   push ebp
// 0047d01f  8bce                 mov ecx, esi
// 0047d021  895e08               mov dword ptr [esi + 8], ebx
// 0047d024  e8d7c61100           call 0x599700
// 0047d029  5f                   pop edi
// 0047d02a  5e                   pop esi
// 0047d02b  5d                   pop ebp
// 0047d02c  5b                   pop ebx
// 0047d02d  c20800               ret 8
// 0047d030  d905387b7900         fld dword ptr [0x797b38]
// 0047d036  8bc1                 mov eax, ecx
// 0047d038  03c0                 add eax, eax
// 0047d03a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047d03e  03c0                 add eax, eax
// 0047d040  3d801a0600           cmp eax, 0x61a80
// 0047d045  7608                 jbe 0x47d04f
// 0047d047  d905347b7900         fld dword ptr [0x797b34]
// 0047d04d  eb0d                 jmp 0x47d05c
// 0047d04f  3d00fa0000           cmp eax, 0xfa00
// 0047d054  760a                 jbe 0x47d060
// 0047d056  d90588797900         fld dword ptr [0x797988]
// 0047d05c  d95c2418             fstp dword ptr [esp + 0x18]
// 0047d060  8bd9                 mov ebx, ecx
// 0047d062  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047d066  db442414             fild dword ptr [esp + 0x14]
// 0047d06a  d84c2418             fmul dword ptr [esp + 0x18]
// 0047d06e  e8ed3c1b00           call 0x630d60
// 0047d073  2bc3                 sub eax, ebx
// 0047d075  03c7                 add eax, edi
// 0047d077  894608               mov dword ptr [esi + 8], eax
// 0047d07a  8b0da0d88b00         mov ecx, dword ptr [0x8bd8a0]
// 0047d080  3bc1                 cmp eax, ecx
// 0047d082  7d03                 jge 0x47d087
// 0047d084  894e08               mov dword ptr [esi + 8], ecx
// 0047d087  55                   push ebp
// 0047d088  8bce                 mov ecx, esi
// 0047d08a  e871c61100           call 0x599700
// 0047d08f  5f                   pop edi
// 0047d090  5e                   pop esi
// 0047d091  5d                   pop ebp
// 0047d092  5b                   pop ebx
// 0047d093  c20800               ret 8
// 0047d096  b856555555           mov eax, 0x55555556
// 0047d09b  f7e9                 imul ecx
// 0047d09d  8bc2                 mov eax, edx
// 0047d09f  c1e81f               shr eax, 0x1f
// 0047d0a2  03c2                 add eax, edx
// 0047d0a4  3bf8                 cmp edi, eax
// 0047d0a6  7f19                 jg 0x47d0c1
// 0047d0a8  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047d0ad  7412                 je 0x47d0c1
// 0047d0af  3bfb                 cmp edi, ebx
// 0047d0b1  7e0e                 jle 0x47d0c1
// 0047d0b3  3bfd                 cmp edi, ebp
// 0047d0b5  7c02                 jl 0x47d0b9
// 0047d0b7  8bfd                 mov edi, ebp
// 0047d0b9  57                   push edi
// 0047d0ba  8bce                 mov ecx, esi
// 0047d0bc  e83fc61100           call 0x599700
// 0047d0c1  5f                   pop edi
// 0047d0c2  5e                   pop esi
// 0047d0c3  5d                   pop ebp
// 0047d0c4  5b                   pop ebx
// 0047d0c5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
