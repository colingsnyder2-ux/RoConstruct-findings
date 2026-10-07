// roc 2007-08 0047d0d0  unit: G3D::Win32Window  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d0d0
//
// 0047d0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0047d0d4  53                   push ebx
// 0047d0d5  55                   push ebp
// 0047d0d6  56                   push esi
// 0047d0d7  8bf1                 mov esi, ecx
// 0047d0d9  8b5e04               mov ebx, dword ptr [esi + 4]
// 0047d0dc  894604               mov dword ptr [esi + 4], eax
// 0047d0df  f605acd88b0001       test byte ptr [0x8bd8ac], 1
// 0047d0e6  7514                 jne 0x47d0fc
// 0047d0e8  830dacd88b0001       or dword ptr [0x8bd8ac], 1
// 0047d0ef  bd0a000000           mov ebp, 0xa
// 0047d0f4  892da8d88b00         mov dword ptr [0x8bd8a8], ebp
// 0047d0fa  eb06                 jmp 0x47d102
// 0047d0fc  8b2da8d88b00         mov ebp, dword ptr [0x8bd8a8]
// 0047d102  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047d105  57                   push edi
// 0047d106  8b7e04               mov edi, dword ptr [esi + 4]
// 0047d109  3bf9                 cmp edi, ecx
// 0047d10b  7e77                 jle 0x47d184
// 0047d10d  85c9                 test ecx, ecx
// 0047d10f  7509                 jne 0x47d11a
// 0047d111  894608               mov dword ptr [esi + 8], eax
// 0047d114  53                   push ebx
// 0047d115  e98e000000           jmp 0x47d1a8
// 0047d11a  3bfd                 cmp edi, ebp
// 0047d11c  7d09                 jge 0x47d127
// 0047d11e  896e08               mov dword ptr [esi + 8], ebp
// 0047d121  53                   push ebx
// 0047d122  e981000000           jmp 0x47d1a8
// 0047d127  d905387b7900         fld dword ptr [0x797b38]
// 0047d12d  8bc1                 mov eax, ecx
// 0047d12f  8d0440               lea eax, [eax + eax*2]
// 0047d132  d95c2418             fstp dword ptr [esp + 0x18]
// 0047d136  03c0                 add eax, eax
// 0047d138  03c0                 add eax, eax
// 0047d13a  3d801a0600           cmp eax, 0x61a80
// 0047d13f  7608                 jbe 0x47d149
// 0047d141  d905347b7900         fld dword ptr [0x797b34]
// 0047d147  eb0d                 jmp 0x47d156
// 0047d149  3d00fa0000           cmp eax, 0xfa00
// 0047d14e  760a                 jbe 0x47d15a
// 0047d150  d90588797900         fld dword ptr [0x797988]
// 0047d156  d95c2418             fstp dword ptr [esp + 0x18]
// 0047d15a  8be9                 mov ebp, ecx
// 0047d15c  896c2414             mov dword ptr [esp + 0x14], ebp
// 0047d160  db442414             fild dword ptr [esp + 0x14]
// 0047d164  d84c2418             fmul dword ptr [esp + 0x18]
// 0047d168  e8f33b1b00           call 0x630d60
// 0047d16d  2bc5                 sub eax, ebp
// 0047d16f  03c7                 add eax, edi
// 0047d171  894608               mov dword ptr [esi + 8], eax
// 0047d174  8b0da8d88b00         mov ecx, dword ptr [0x8bd8a8]
// 0047d17a  3bc1                 cmp eax, ecx
// 0047d17c  7d03                 jge 0x47d181
// 0047d17e  894e08               mov dword ptr [esi + 8], ecx
// 0047d181  53                   push ebx
// 0047d182  eb24                 jmp 0x47d1a8
// 0047d184  b856555555           mov eax, 0x55555556
// 0047d189  f7e9                 imul ecx
// 0047d18b  8bc2                 mov eax, edx
// 0047d18d  c1e81f               shr eax, 0x1f
// 0047d190  03c2                 add eax, edx
// 0047d192  3bf8                 cmp edi, eax
// 0047d194  7f19                 jg 0x47d1af
// 0047d196  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047d19b  7412                 je 0x47d1af
// 0047d19d  3bfd                 cmp edi, ebp
// 0047d19f  7e0e                 jle 0x47d1af
// 0047d1a1  3bfb                 cmp edi, ebx
// 0047d1a3  7c02                 jl 0x47d1a7
// 0047d1a5  8bfb                 mov edi, ebx
// 0047d1a7  57                   push edi
// 0047d1a8  8bce                 mov ecx, esi
// 0047d1aa  e851f0ffff           call 0x47c200
// 0047d1af  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0047d1b2  8bd3                 mov edx, ebx
// 0047d1b4  5f                   pop edi
// 0047d1b5  7d2b                 jge 0x47d1e2
// 0047d1b7  8d0c5b               lea ecx, [ebx + ebx*2]
// 0047d1ba  03c9                 add ecx, ecx
// 0047d1bc  03c9                 add ecx, ecx
// 0047d1be  8bff                 mov edi, edi
// 0047d1c0  8b06                 mov eax, dword ptr [esi]
// 0047d1c2  03c1                 add eax, ecx
// 0047d1c4  7411                 je 0x47d1d7
// 0047d1c6  c70000000000         mov dword ptr [eax], 0
// 0047d1cc  c7400400000000       mov dword ptr [eax + 4], 0
// 0047d1d3  c6400800             mov byte ptr [eax + 8], 0
// 0047d1d7  83c201               add edx, 1
// 0047d1da  83c10c               add ecx, 0xc
// 0047d1dd  3b5604               cmp edx, dword ptr [esi + 4]
// 0047d1e0  7cde                 jl 0x47d1c0
// 0047d1e2  5e                   pop esi
// 0047d1e3  5d                   pop ebp
// 0047d1e4  5b                   pop ebx
// 0047d1e5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?resize@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
