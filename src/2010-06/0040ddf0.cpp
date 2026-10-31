// roc 2010-06 0040ddf0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040ddf0
//
// 0040ddf0  55                   push ebp
// 0040ddf1  8bec                 mov ebp, esp
// 0040ddf3  6aff                 push -1
// 0040ddf5  6830e29700           push 0x97e230
// 0040ddfa  64a100000000         mov eax, dword ptr fs:[0]
// 0040de00  50                   push eax
// 0040de01  64892500000000       mov dword ptr fs:[0], esp
// 0040de08  83ec0c               sub esp, 0xc
// 0040de0b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040de0f  53                   push ebx
// 0040de10  56                   push esi
// 0040de11  57                   push edi
// 0040de12  8bf1                 mov esi, ecx
// 0040de14  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040de17  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040de1a  0f85cb000000         jne 0x40deeb
// 0040de20  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040de23  8bc3                 mov eax, ebx
// 0040de25  2b4508               sub eax, dword ptr [ebp + 8]
// 0040de28  33c9                 xor ecx, ecx
// 0040de2a  c1f803               sar eax, 3
// 0040de2d  ba08000000           mov edx, 8
// 0040de32  f7e2                 mul edx
// 0040de34  0f90c1               seto cl
// 0040de37  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040de3e  f7d9                 neg ecx
// 0040de40  0bc8                 or ecx, eax
// 0040de42  51                   push ecx
// 0040de43  e83a9e3900           call 0x7a7c82
// 0040de48  83c404               add esp, 4
// 0040de4b  894608               mov dword ptr [esi + 8], eax
// 0040de4e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040de55  eb1b                 jmp 0x40de72
// 0040de57  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040de5a  e81d9e3900           call 0x7a7c7c
// 0040de5f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040de66  b86cde4000           mov eax, 0x40de6c
// 0040de6b  c3                   ret 
// 0040de6c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040de6f  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040de72  8b4608               mov eax, dword ptr [esi + 8]
// 0040de75  894610               mov dword ptr [esi + 0x10], eax
// 0040de78  85c0                 test eax, eax
// 0040de7a  7518                 jne 0x40de94
// 0040de7c  b80e000780           mov eax, 0x8007000e
// 0040de81  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040de84  64890d00000000       mov dword ptr fs:[0], ecx
// 0040de8b  5f                   pop edi
// 0040de8c  5e                   pop esi
// 0040de8d  5b                   pop ebx
// 0040de8e  8be5                 mov esp, ebp
// 0040de90  5d                   pop ebp
// 0040de91  c21000               ret 0x10
// 0040de94  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040de97  3bfb                 cmp edi, ebx
// 0040de99  7436                 je 0x40ded1
// 0040de9b  eb03                 jmp 0x40dea0
// 0040de9d  8d4900               lea ecx, [ecx]
// 0040dea0  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040dea3  85c0                 test eax, eax
// 0040dea5  743a                 je 0x40dee1
// 0040dea7  85ff                 test edi, edi
// 0040dea9  7436                 je 0x40dee1
// 0040deab  8b0f                 mov ecx, dword ptr [edi]
// 0040dead  8908                 mov dword ptr [eax], ecx
// 0040deaf  8b5704               mov edx, dword ptr [edi + 4]
// 0040deb2  895004               mov dword ptr [eax + 4], edx
// 0040deb5  8bc1                 mov eax, ecx
// 0040deb7  85c0                 test eax, eax
// 0040deb9  7408                 je 0x40dec3
// 0040debb  8b08                 mov ecx, dword ptr [eax]
// 0040debd  8b5104               mov edx, dword ptr [ecx + 4]
// 0040dec0  50                   push eax
// 0040dec1  ffd2                 call edx
// 0040dec3  83461008             add dword ptr [esi + 0x10], 8
// 0040dec7  83c708               add edi, 8
// 0040deca  3bfb                 cmp edi, ebx
// 0040decc  75d2                 jne 0x40dea0
// 0040dece  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040ded1  8b4608               mov eax, dword ptr [esi + 8]
// 0040ded4  2bdf                 sub ebx, edi
// 0040ded6  c1fb03               sar ebx, 3
// 0040ded9  8d0cd8               lea ecx, [eax + ebx*8]
// 0040dedc  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040dedf  eb16                 jmp 0x40def7
// 0040dee1  6805400080           push 0x80004005
// 0040dee6  e8e54cffff           call 0x402bd0
// 0040deeb  8b5508               mov edx, dword ptr [ebp + 8]
// 0040deee  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040def1  895608               mov dword ptr [esi + 8], edx
// 0040def4  89460c               mov dword ptr [esi + 0xc], eax
// 0040def7  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040defa  397e04               cmp dword ptr [esi + 4], edi
// 0040defd  741e                 je 0x40df1d
// 0040deff  85ff                 test edi, edi
// 0040df01  7408                 je 0x40df0b
// 0040df03  8b0f                 mov ecx, dword ptr [edi]
// 0040df05  8b5104               mov edx, dword ptr [ecx + 4]
// 0040df08  57                   push edi
// 0040df09  ffd2                 call edx
// 0040df0b  8b4604               mov eax, dword ptr [esi + 4]
// 0040df0e  85c0                 test eax, eax
// 0040df10  7408                 je 0x40df1a
// 0040df12  8b08                 mov ecx, dword ptr [eax]
// 0040df14  8b5108               mov edx, dword ptr [ecx + 8]
// 0040df17  50                   push eax
// 0040df18  ffd2                 call edx
// 0040df1a  897e04               mov dword ptr [esi + 4], edi
// 0040df1d  8b4608               mov eax, dword ptr [esi + 8]
// 0040df20  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040df23  894610               mov dword ptr [esi + 0x10], eax
// 0040df26  894e14               mov dword ptr [esi + 0x14], ecx
// 0040df29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040df2c  5f                   pop edi
// 0040df2d  5e                   pop esi
// 0040df2e  33c0                 xor eax, eax
// 0040df30  64890d00000000       mov dword ptr fs:[0], ecx
// 0040df37  5b                   pop ebx
// 0040df38  8be5                 mov esp, ebp
// 0040df3a  5d                   pop ebp
// 0040df3b  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnections@@$1?IID_IEnumConnections@@3U_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@QAEJPAUtagCONNECTDATA@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_comenuminitnative_65941067da5b003c.cpp