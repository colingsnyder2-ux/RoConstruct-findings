// roc 2010-06 00522aa0  unit: RBX::MeshGen  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522aa0
//
// 00522aa0  55                   push ebp
// 00522aa1  56                   push esi
// 00522aa2  57                   push edi
// 00522aa3  8bf9                 mov edi, ecx
// 00522aa5  8b4708               mov eax, dword ptr [edi + 8]
// 00522aa8  8b2f                 mov ebp, dword ptr [edi]
// 00522aaa  8d0440               lea eax, [eax + eax*2]
// 00522aad  03c0                 add eax, eax
// 00522aaf  03c0                 add eax, eax
// 00522ab1  6a10                 push 0x10
// 00522ab3  50                   push eax
// 00522ab4  e8e7ad0200           call 0x54d8a0
// 00522ab9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00522abd  8907                 mov dword ptr [edi], eax
// 00522abf  8b7f08               mov edi, dword ptr [edi + 8]
// 00522ac2  83c408               add esp, 8
// 00522ac5  3bcf                 cmp ecx, edi
// 00522ac7  7c02                 jl 0x522acb
// 00522ac9  8bcf                 mov ecx, edi
// 00522acb  8d0c49               lea ecx, [ecx + ecx*2]
// 00522ace  8d3c88               lea edi, [eax + ecx*4]
// 00522ad1  8bf0                 mov esi, eax
// 00522ad3  8bcd                 mov ecx, ebp
// 00522ad5  3bf7                 cmp esi, edi
// 00522ad7  0f83b1000000         jae 0x522b8e
// 00522add  8bd7                 mov edx, edi
// 00522adf  2bd0                 sub edx, eax
// 00522ae1  83c20b               add edx, 0xb
// 00522ae4  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00522ae9  f7ea                 imul edx
// 00522aeb  d1fa                 sar edx, 1
// 00522aed  8bc2                 mov eax, edx
// 00522aef  c1e81f               shr eax, 0x1f
// 00522af2  03c2                 add eax, edx
// 00522af4  83f804               cmp eax, 4
// 00522af7  7c71                 jl 0x522b6a
// 00522af9  53                   push ebx
// 00522afa  8d5fdc               lea ebx, [edi - 0x24]
// 00522afd  8d4614               lea eax, [esi + 0x14]
// 00522b00  85f6                 test esi, esi
// 00522b02  7410                 je 0x522b14
// 00522b04  d901                 fld dword ptr [ecx]
// 00522b06  d91e                 fstp dword ptr [esi]
// 00522b08  d94104               fld dword ptr [ecx + 4]
// 00522b0b  d958f0               fstp dword ptr [eax - 0x10]
// 00522b0e  d94108               fld dword ptr [ecx + 8]
// 00522b11  d958f4               fstp dword ptr [eax - 0xc]
// 00522b14  8d50f8               lea edx, [eax - 8]
// 00522b17  85d2                 test edx, edx
// 00522b19  7411                 je 0x522b2c
// 00522b1b  d9410c               fld dword ptr [ecx + 0xc]
// 00522b1e  d958f8               fstp dword ptr [eax - 8]
// 00522b21  d94110               fld dword ptr [ecx + 0x10]
// 00522b24  d958fc               fstp dword ptr [eax - 4]
// 00522b27  d94114               fld dword ptr [ecx + 0x14]
// 00522b2a  d918                 fstp dword ptr [eax]
// 00522b2c  8d5004               lea edx, [eax + 4]
// 00522b2f  85d2                 test edx, edx
// 00522b31  7411                 je 0x522b44
// 00522b33  d94118               fld dword ptr [ecx + 0x18]
// 00522b36  d91a                 fstp dword ptr [edx]
// 00522b38  d9411c               fld dword ptr [ecx + 0x1c]
// 00522b3b  d95808               fstp dword ptr [eax + 8]
// 00522b3e  d94120               fld dword ptr [ecx + 0x20]
// 00522b41  d9580c               fstp dword ptr [eax + 0xc]
// 00522b44  8d5010               lea edx, [eax + 0x10]
// 00522b47  85d2                 test edx, edx
// 00522b49  7411                 je 0x522b5c
// 00522b4b  d94124               fld dword ptr [ecx + 0x24]
// 00522b4e  d91a                 fstp dword ptr [edx]
// 00522b50  d94128               fld dword ptr [ecx + 0x28]
// 00522b53  d95814               fstp dword ptr [eax + 0x14]
// 00522b56  d9412c               fld dword ptr [ecx + 0x2c]
// 00522b59  d95818               fstp dword ptr [eax + 0x18]
// 00522b5c  83c630               add esi, 0x30
// 00522b5f  83c130               add ecx, 0x30
// 00522b62  83c030               add eax, 0x30
// 00522b65  3bf3                 cmp esi, ebx
// 00522b67  7c97                 jl 0x522b00
// 00522b69  5b                   pop ebx
// 00522b6a  3bf7                 cmp esi, edi
// 00522b6c  7320                 jae 0x522b8e
// 00522b6e  8bff                 mov edi, edi
// 00522b70  85f6                 test esi, esi
// 00522b72  7410                 je 0x522b84
// 00522b74  d901                 fld dword ptr [ecx]
// 00522b76  d91e                 fstp dword ptr [esi]
// 00522b78  d94104               fld dword ptr [ecx + 4]
// 00522b7b  d95e04               fstp dword ptr [esi + 4]
// 00522b7e  d94108               fld dword ptr [ecx + 8]
// 00522b81  d95e08               fstp dword ptr [esi + 8]
// 00522b84  83c60c               add esi, 0xc
// 00522b87  83c10c               add ecx, 0xc
// 00522b8a  3bf7                 cmp esi, edi
// 00522b8c  72e2                 jb 0x522b70
// 00522b8e  55                   push ebp
// 00522b8f  e82cae0200           call 0x54d9c0
// 00522b94  83c404               add esp, 4
// 00522b97  5f                   pop edi
// 00522b98  5e                   pop esi
// 00522b99  5d                   pop ebp
// 00522b9a  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
