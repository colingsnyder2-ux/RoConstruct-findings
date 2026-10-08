// from server: 100% by auto
// roc 2010-06 00522e60  unit: RBX::MeshGen  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522e60
//
// 00522e60  8b442404             mov eax, dword ptr [esp + 4]
// 00522e64  53                   push ebx
// 00522e65  56                   push esi
// 00522e66  8bf1                 mov esi, ecx
// 00522e68  57                   push edi
// 00522e69  8b7e04               mov edi, dword ptr [esi + 4]
// 00522e6c  894604               mov dword ptr [esi + 4], eax
// 00522e6f  f605c488c00001       test byte ptr [0xc088c4], 1
// 00522e76  7514                 jne 0x522e8c
// 00522e78  830dc488c00001       or dword ptr [0xc088c4], 1
// 00522e7f  bb0a000000           mov ebx, 0xa
// 00522e84  891dc088c000         mov dword ptr [0xc088c0], ebx
// 00522e8a  eb06                 jmp 0x522e92
// 00522e8c  8b1dc088c000         mov ebx, dword ptr [0xc088c0]
// 00522e92  8b4e04               mov ecx, dword ptr [esi + 4]
// 00522e95  8b5608               mov edx, dword ptr [esi + 8]
// 00522e98  3bca                 cmp ecx, edx
// 00522e9a  7e6e                 jle 0x522f0a
// 00522e9c  85d2                 test edx, edx
// 00522e9e  7509                 jne 0x522ea9
// 00522ea0  894608               mov dword ptr [esi + 8], eax
// 00522ea3  57                   push edi
// 00522ea4  e985000000           jmp 0x522f2e
// 00522ea9  3bcb                 cmp ecx, ebx
// 00522eab  7d06                 jge 0x522eb3
// 00522ead  895e08               mov dword ptr [esi + 8], ebx
// 00522eb0  57                   push edi
// 00522eb1  eb7b                 jmp 0x522f2e
// 00522eb3  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00522ebb  8bc2                 mov eax, edx
// 00522ebd  8d0440               lea eax, [eax + eax*2]
// 00522ec0  03c0                 add eax, eax
// 00522ec2  03c0                 add eax, eax
// 00522ec4  3d801a0600           cmp eax, 0x61a80
// 00522ec9  760a                 jbe 0x522ed5
// 00522ecb  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00522ed3  eb0f                 jmp 0x522ee4
// 00522ed5  3d00fa0000           cmp eax, 0xfa00
// 00522eda  7608                 jbe 0x522ee4
// 00522edc  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00522ee4  8bc2                 mov eax, edx
// 00522ee6  f30f2ac8             cvtsi2ss xmm1, eax
// 00522eea  f30f59c8             mulss xmm1, xmm0
// 00522eee  f30f2cd1             cvttss2si edx, xmm1
// 00522ef2  2bd0                 sub edx, eax
// 00522ef4  8d040a               lea eax, [edx + ecx]
// 00522ef7  894608               mov dword ptr [esi + 8], eax
// 00522efa  8b0dc088c000         mov ecx, dword ptr [0xc088c0]
// 00522f00  3bc1                 cmp eax, ecx
// 00522f02  7d03                 jge 0x522f07
// 00522f04  894e08               mov dword ptr [esi + 8], ecx
// 00522f07  57                   push edi
// 00522f08  eb24                 jmp 0x522f2e
// 00522f0a  b856555555           mov eax, 0x55555556
// 00522f0f  f7ea                 imul edx
// 00522f11  8bc2                 mov eax, edx
// 00522f13  c1e81f               shr eax, 0x1f
// 00522f16  03c2                 add eax, edx
// 00522f18  3bc8                 cmp ecx, eax
// 00522f1a  7f19                 jg 0x522f35
// 00522f1c  807c241400           cmp byte ptr [esp + 0x14], 0
// 00522f21  7412                 je 0x522f35
// 00522f23  3bcb                 cmp ecx, ebx
// 00522f25  7e0e                 jle 0x522f35
// 00522f27  3bcf                 cmp ecx, edi
// 00522f29  7c02                 jl 0x522f2d
// 00522f2b  8bcf                 mov ecx, edi
// 00522f2d  51                   push ecx
// 00522f2e  8bce                 mov ecx, esi
// 00522f30  e86bfbffff           call 0x522aa0
// 00522f35  3b7e04               cmp edi, dword ptr [esi + 4]
// 00522f38  8bd7                 mov edx, edi
// 00522f3a  7d27                 jge 0x522f63
// 00522f3c  0f57c0               xorps xmm0, xmm0
// 00522f3f  8d0c7f               lea ecx, [edi + edi*2]
// 00522f42  03c9                 add ecx, ecx
// 00522f44  03c9                 add ecx, ecx
// 00522f46  8b06                 mov eax, dword ptr [esi]
// 00522f48  03c1                 add eax, ecx
// 00522f4a  740e                 je 0x522f5a
// 00522f4c  f30f1100             movss dword ptr [eax], xmm0
// 00522f50  f30f114004           movss dword ptr [eax + 4], xmm0
// 00522f55  f30f114008           movss dword ptr [eax + 8], xmm0
// 00522f5a  42                   inc edx
// 00522f5b  83c10c               add ecx, 0xc
// 00522f5e  3b5604               cmp edx, dword ptr [esi + 4]
// 00522f61  7ce3                 jl 0x522f46
// 00522f63  5f                   pop edi
// 00522f64  5e                   pop esi
// 00522f65  5b                   pop ebx
// 00522f66  c20800               ret 8
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?resize@?$Array@VVector3@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
