// roc 2009-12 004d70e0  unit: G3D::Win32Window  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d70e0
//
// 004d70e0  8b442404             mov eax, dword ptr [esp + 4]
// 004d70e4  53                   push ebx
// 004d70e5  55                   push ebp
// 004d70e6  56                   push esi
// 004d70e7  8bf1                 mov esi, ecx
// 004d70e9  57                   push edi
// 004d70ea  8b7e04               mov edi, dword ptr [esi + 4]
// 004d70ed  894604               mov dword ptr [esi + 4], eax
// 004d70f0  f605d4d8b70001       test byte ptr [0xb7d8d4], 1
// 004d70f7  7514                 jne 0x4d710d
// 004d70f9  830dd4d8b70001       or dword ptr [0xb7d8d4], 1
// 004d7100  bd0a000000           mov ebp, 0xa
// 004d7105  892dd0d8b700         mov dword ptr [0xb7d8d0], ebp
// 004d710b  eb06                 jmp 0x4d7113
// 004d710d  8b2dd0d8b700         mov ebp, dword ptr [0xb7d8d0]
// 004d7113  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d7116  8b5608               mov edx, dword ptr [esi + 8]
// 004d7119  33db                 xor ebx, ebx
// 004d711b  3bca                 cmp ecx, edx
// 004d711d  7e6e                 jle 0x4d718d
// 004d711f  3bd3                 cmp edx, ebx
// 004d7121  7509                 jne 0x4d712c
// 004d7123  894608               mov dword ptr [esi + 8], eax
// 004d7126  57                   push edi
// 004d7127  e984000000           jmp 0x4d71b0
// 004d712c  3bcd                 cmp ecx, ebp
// 004d712e  7d06                 jge 0x4d7136
// 004d7130  896e08               mov dword ptr [esi + 8], ebp
// 004d7133  57                   push edi
// 004d7134  eb7a                 jmp 0x4d71b0
// 004d7136  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d713e  8bc2                 mov eax, edx
// 004d7140  8d0440               lea eax, [eax + eax*2]
// 004d7143  03c0                 add eax, eax
// 004d7145  03c0                 add eax, eax
// 004d7147  3d801a0600           cmp eax, 0x61a80
// 004d714c  760a                 jbe 0x4d7158
// 004d714e  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d7156  eb0f                 jmp 0x4d7167
// 004d7158  3d00fa0000           cmp eax, 0xfa00
// 004d715d  7608                 jbe 0x4d7167
// 004d715f  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d7167  8bc2                 mov eax, edx
// 004d7169  f30f2ac8             cvtsi2ss xmm1, eax
// 004d716d  f30f59c8             mulss xmm1, xmm0
// 004d7171  f30f2cd1             cvttss2si edx, xmm1
// 004d7175  2bd0                 sub edx, eax
// 004d7177  8d040a               lea eax, [edx + ecx]
// 004d717a  894608               mov dword ptr [esi + 8], eax
// 004d717d  8b0dd0d8b700         mov ecx, dword ptr [0xb7d8d0]
// 004d7183  3bc1                 cmp eax, ecx
// 004d7185  7d03                 jge 0x4d718a
// 004d7187  894e08               mov dword ptr [esi + 8], ecx
// 004d718a  57                   push edi
// 004d718b  eb23                 jmp 0x4d71b0
// 004d718d  b856555555           mov eax, 0x55555556
// 004d7192  f7ea                 imul edx
// 004d7194  8bc2                 mov eax, edx
// 004d7196  c1e81f               shr eax, 0x1f
// 004d7199  03c2                 add eax, edx
// 004d719b  3bc8                 cmp ecx, eax
// 004d719d  7f18                 jg 0x4d71b7
// 004d719f  385c2418             cmp byte ptr [esp + 0x18], bl
// 004d71a3  7412                 je 0x4d71b7
// 004d71a5  3bcd                 cmp ecx, ebp
// 004d71a7  7e0e                 jle 0x4d71b7
// 004d71a9  3bcf                 cmp ecx, edi
// 004d71ab  7c02                 jl 0x4d71af
// 004d71ad  8bcf                 mov ecx, edi
// 004d71af  51                   push ecx
// 004d71b0  8bce                 mov ecx, esi
// 004d71b2  e8893c2e00           call 0x7bae40
// 004d71b7  3b7e04               cmp edi, dword ptr [esi + 4]
// 004d71ba  8bd7                 mov edx, edi
// 004d71bc  7d1e                 jge 0x4d71dc
// 004d71be  8d0c7f               lea ecx, [edi + edi*2]
// 004d71c1  03c9                 add ecx, ecx
// 004d71c3  03c9                 add ecx, ecx
// 004d71c5  8b06                 mov eax, dword ptr [esi]
// 004d71c7  03c1                 add eax, ecx
// 004d71c9  7408                 je 0x4d71d3
// 004d71cb  8918                 mov dword ptr [eax], ebx
// 004d71cd  895804               mov dword ptr [eax + 4], ebx
// 004d71d0  885808               mov byte ptr [eax + 8], bl
// 004d71d3  42                   inc edx
// 004d71d4  83c10c               add ecx, 0xc
// 004d71d7  3b5604               cmp edx, dword ptr [esi + 4]
// 004d71da  7ce9                 jl 0x4d71c5
// 004d71dc  5f                   pop edi
// 004d71dd  5e                   pop esi
// 004d71de  5d                   pop ebp
// 004d71df  5b                   pop ebx
// 004d71e0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?resize@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
