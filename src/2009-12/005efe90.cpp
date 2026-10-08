// roc 2009-12 005efe90  unit: G3D::Log  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005efe90
//
// 005efe90  8b442404             mov eax, dword ptr [esp + 4]
// 005efe94  53                   push ebx
// 005efe95  55                   push ebp
// 005efe96  56                   push esi
// 005efe97  8bf1                 mov esi, ecx
// 005efe99  8b6e04               mov ebp, dword ptr [esi + 4]
// 005efe9c  894604               mov dword ptr [esi + 4], eax
// 005efe9f  f605603eb80001       test byte ptr [0xb83e60], 1
// 005efea6  57                   push edi
// 005efea7  7514                 jne 0x5efebd
// 005efea9  830d603eb80001       or dword ptr [0xb83e60], 1
// 005efeb0  bf0a000000           mov edi, 0xa
// 005efeb5  893d5c3eb800         mov dword ptr [0xb83e5c], edi
// 005efebb  eb06                 jmp 0x5efec3
// 005efebd  8b3d5c3eb800         mov edi, dword ptr [0xb83e5c]
// 005efec3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005efec6  8b5608               mov edx, dword ptr [esi + 8]
// 005efec9  33db                 xor ebx, ebx
// 005efecb  3bca                 cmp ecx, edx
// 005efecd  7e6b                 jle 0x5eff3a
// 005efecf  3bd3                 cmp edx, ebx
// 005efed1  7509                 jne 0x5efedc
// 005efed3  894608               mov dword ptr [esi + 8], eax
// 005efed6  55                   push ebp
// 005efed7  e981000000           jmp 0x5eff5d
// 005efedc  3bcf                 cmp ecx, edi
// 005efede  7d06                 jge 0x5efee6
// 005efee0  897e08               mov dword ptr [esi + 8], edi
// 005efee3  55                   push ebp
// 005efee4  eb77                 jmp 0x5eff5d
// 005efee6  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005efeee  8bc2                 mov eax, edx
// 005efef0  03c0                 add eax, eax
// 005efef2  03c0                 add eax, eax
// 005efef4  3d801a0600           cmp eax, 0x61a80
// 005efef9  760a                 jbe 0x5eff05
// 005efefb  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005eff03  eb0f                 jmp 0x5eff14
// 005eff05  3d00fa0000           cmp eax, 0xfa00
// 005eff0a  7608                 jbe 0x5eff14
// 005eff0c  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005eff14  8bc2                 mov eax, edx
// 005eff16  f30f2ac8             cvtsi2ss xmm1, eax
// 005eff1a  f30f59c8             mulss xmm1, xmm0
// 005eff1e  f30f2cd1             cvttss2si edx, xmm1
// 005eff22  2bd0                 sub edx, eax
// 005eff24  8d040a               lea eax, [edx + ecx]
// 005eff27  894608               mov dword ptr [esi + 8], eax
// 005eff2a  8b0d5c3eb800         mov ecx, dword ptr [0xb83e5c]
// 005eff30  3bc1                 cmp eax, ecx
// 005eff32  7d03                 jge 0x5eff37
// 005eff34  894e08               mov dword ptr [esi + 8], ecx
// 005eff37  55                   push ebp
// 005eff38  eb23                 jmp 0x5eff5d
// 005eff3a  b856555555           mov eax, 0x55555556
// 005eff3f  f7ea                 imul edx
// 005eff41  8bc2                 mov eax, edx
// 005eff43  c1e81f               shr eax, 0x1f
// 005eff46  03c2                 add eax, edx
// 005eff48  3bc8                 cmp ecx, eax
// 005eff4a  7f18                 jg 0x5eff64
// 005eff4c  385c2418             cmp byte ptr [esp + 0x18], bl
// 005eff50  7412                 je 0x5eff64
// 005eff52  3bcf                 cmp ecx, edi
// 005eff54  7e0e                 jle 0x5eff64
// 005eff56  3bcd                 cmp ecx, ebp
// 005eff58  7c02                 jl 0x5eff5c
// 005eff5a  8bcd                 mov ecx, ebp
// 005eff5c  51                   push ecx
// 005eff5d  8bce                 mov ecx, esi
// 005eff5f  e8ec600a00           call 0x696050
// 005eff64  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005eff67  8bcd                 mov ecx, ebp
// 005eff69  7d1f                 jge 0x5eff8a
// 005eff6b  eb03                 jmp 0x5eff70
// 005eff6d  8d4900               lea ecx, [ecx]
// 005eff70  8b16                 mov edx, dword ptr [esi]
// 005eff72  8d048a               lea eax, [edx + ecx*4]
// 005eff75  3bc3                 cmp eax, ebx
// 005eff77  740b                 je 0x5eff84
// 005eff79  8818                 mov byte ptr [eax], bl
// 005eff7b  885801               mov byte ptr [eax + 1], bl
// 005eff7e  885802               mov byte ptr [eax + 2], bl
// 005eff81  885803               mov byte ptr [eax + 3], bl
// 005eff84  41                   inc ecx
// 005eff85  3b4e04               cmp ecx, dword ptr [esi + 4]
// 005eff88  7ce6                 jl 0x5eff70
// 005eff8a  5f                   pop edi
// 005eff8b  5e                   pop esi
// 005eff8c  5d                   pop ebp
// 005eff8d  5b                   pop ebx
// 005eff8e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage_bmp.cpp (function ?resize@?$Array@VColor4uint8@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_bmp.cpp
