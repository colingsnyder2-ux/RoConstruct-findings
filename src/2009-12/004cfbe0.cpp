// roc 2009-12 004cfbe0  unit: G3D::PBVTextureFormat::?$Table  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cfbe0
//
// 004cfbe0  6aff                 push -1
// 004cfbe2  680c319300           push 0x93310c
// 004cfbe7  64a100000000         mov eax, dword ptr fs:[0]
// 004cfbed  50                   push eax
// 004cfbee  64892500000000       mov dword ptr fs:[0], esp
// 004cfbf5  83ec08               sub esp, 8
// 004cfbf8  53                   push ebx
// 004cfbf9  55                   push ebp
// 004cfbfa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004cfbfe  56                   push esi
// 004cfbff  8bf1                 mov esi, ecx
// 004cfc01  8b4604               mov eax, dword ptr [esi + 4]
// 004cfc04  3be8                 cmp ebp, eax
// 004cfc06  57                   push edi
// 004cfc07  89742414             mov dword ptr [esp + 0x14], esi
// 004cfc0b  89442410             mov dword ptr [esp + 0x10], eax
// 004cfc0f  896e04               mov dword ptr [esi + 4], ebp
// 004cfc12  7d24                 jge 0x4cfc38
// 004cfc14  8bfd                 mov edi, ebp
// 004cfc16  8bd8                 mov ebx, eax
// 004cfc18  69ff60070000         imul edi, edi, 0x760
// 004cfc1e  2bdd                 sub ebx, ebp
// 004cfc20  8b0e                 mov ecx, dword ptr [esi]
// 004cfc22  03cf                 add ecx, edi
// 004cfc24  e817dcffff           call 0x4cd840
// 004cfc29  81c760070000         add edi, 0x760
// 004cfc2f  83eb01               sub ebx, 1
// 004cfc32  75ec                 jne 0x4cfc20
// 004cfc34  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cfc38  f60594d0b70001       test byte ptr [0xb7d094], 1
// 004cfc3f  7514                 jne 0x4cfc55
// 004cfc41  830d94d0b70001       or dword ptr [0xb7d094], 1
// 004cfc48  bf0a000000           mov edi, 0xa
// 004cfc4d  893d90d0b700         mov dword ptr [0xb7d090], edi
// 004cfc53  eb06                 jmp 0x4cfc5b
// 004cfc55  8b3d90d0b700         mov edi, dword ptr [0xb7d090]
// 004cfc5b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfc5e  8b5608               mov edx, dword ptr [esi + 8]
// 004cfc61  33db                 xor ebx, ebx
// 004cfc63  3bca                 cmp ecx, edx
// 004cfc65  7e74                 jle 0x4cfcdb
// 004cfc67  3bd3                 cmp edx, ebx
// 004cfc69  7509                 jne 0x4cfc74
// 004cfc6b  896e08               mov dword ptr [esi + 8], ebp
// 004cfc6e  50                   push eax
// 004cfc6f  e98e000000           jmp 0x4cfd02
// 004cfc74  3bcf                 cmp ecx, edi
// 004cfc76  7d09                 jge 0x4cfc81
// 004cfc78  897e08               mov dword ptr [esi + 8], edi
// 004cfc7b  50                   push eax
// 004cfc7c  e981000000           jmp 0x4cfd02
// 004cfc81  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004cfc89  8bc2                 mov eax, edx
// 004cfc8b  69c060070000         imul eax, eax, 0x760
// 004cfc91  3d801a0600           cmp eax, 0x61a80
// 004cfc96  760a                 jbe 0x4cfca2
// 004cfc98  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004cfca0  eb0f                 jmp 0x4cfcb1
// 004cfca2  3d00fa0000           cmp eax, 0xfa00
// 004cfca7  7608                 jbe 0x4cfcb1
// 004cfca9  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004cfcb1  8bc2                 mov eax, edx
// 004cfcb3  f30f2ac8             cvtsi2ss xmm1, eax
// 004cfcb7  f30f59c8             mulss xmm1, xmm0
// 004cfcbb  f30f2cd1             cvttss2si edx, xmm1
// 004cfcbf  2bd0                 sub edx, eax
// 004cfcc1  8d040a               lea eax, [edx + ecx]
// 004cfcc4  894608               mov dword ptr [esi + 8], eax
// 004cfcc7  8b0d90d0b700         mov ecx, dword ptr [0xb7d090]
// 004cfccd  3bc1                 cmp eax, ecx
// 004cfccf  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cfcd3  7d03                 jge 0x4cfcd8
// 004cfcd5  894e08               mov dword ptr [esi + 8], ecx
// 004cfcd8  50                   push eax
// 004cfcd9  eb27                 jmp 0x4cfd02
// 004cfcdb  b856555555           mov eax, 0x55555556
// 004cfce0  f7ea                 imul edx
// 004cfce2  8bc2                 mov eax, edx
// 004cfce4  c1e81f               shr eax, 0x1f
// 004cfce7  03c2                 add eax, edx
// 004cfce9  3bc8                 cmp ecx, eax
// 004cfceb  7f1c                 jg 0x4cfd09
// 004cfced  385c242c             cmp byte ptr [esp + 0x2c], bl
// 004cfcf1  7416                 je 0x4cfd09
// 004cfcf3  3bcf                 cmp ecx, edi
// 004cfcf5  7e12                 jle 0x4cfd09
// 004cfcf7  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cfcfb  3bc8                 cmp ecx, eax
// 004cfcfd  7c02                 jl 0x4cfd01
// 004cfcff  8bc8                 mov ecx, eax
// 004cfd01  51                   push ecx
// 004cfd02  8bce                 mov ecx, esi
// 004cfd04  e8c7f6ffff           call 0x4cf3d0
// 004cfd09  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cfd0d  3b7e04               cmp edi, dword ptr [esi + 4]
// 004cfd10  897c242c             mov dword ptr [esp + 0x2c], edi
// 004cfd14  7d37                 jge 0x4cfd4d
// 004cfd16  83cdff               or ebp, 0xffffffff
// 004cfd19  8da42400000000       lea esp, [esp]
// 004cfd20  8bcf                 mov ecx, edi
// 004cfd22  69c960070000         imul ecx, ecx, 0x760
// 004cfd28  030e                 add ecx, dword ptr [esi]
// 004cfd2a  894c2428             mov dword ptr [esp + 0x28], ecx
// 004cfd2e  895c2420             mov dword ptr [esp + 0x20], ebx
// 004cfd32  740b                 je 0x4cfd3f
// 004cfd34  6a08                 push 8
// 004cfd36  6a01                 push 1
// 004cfd38  6a01                 push 1
// 004cfd3a  e881ddffff           call 0x4cdac0
// 004cfd3f  47                   inc edi
// 004cfd40  3b7e04               cmp edi, dword ptr [esi + 4]
// 004cfd43  896c2420             mov dword ptr [esp + 0x20], ebp
// 004cfd47  897c242c             mov dword ptr [esp + 0x2c], edi
// 004cfd4b  7cd3                 jl 0x4cfd20
// 004cfd4d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cfd51  5f                   pop edi
// 004cfd52  5e                   pop esi
// 004cfd53  5d                   pop ebp
// 004cfd54  5b                   pop ebx
// 004cfd55  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfd5c  83c414               add esp, 0x14
// 004cfd5f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?resize@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
