// roc 2009-12 0040d9c0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d9c0
//
// 0040d9c0  55                   push ebp
// 0040d9c1  8bec                 mov ebp, esp
// 0040d9c3  6aff                 push -1
// 0040d9c5  6860799200           push 0x927960
// 0040d9ca  64a100000000         mov eax, dword ptr fs:[0]
// 0040d9d0  50                   push eax
// 0040d9d1  64892500000000       mov dword ptr fs:[0], esp
// 0040d9d8  83ec0c               sub esp, 0xc
// 0040d9db  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040d9df  53                   push ebx
// 0040d9e0  56                   push esi
// 0040d9e1  57                   push edi
// 0040d9e2  8bf1                 mov esi, ecx
// 0040d9e4  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040d9e7  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040d9ea  0f85cb000000         jne 0x40dabb
// 0040d9f0  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040d9f3  8bc3                 mov eax, ebx
// 0040d9f5  2b4508               sub eax, dword ptr [ebp + 8]
// 0040d9f8  33c9                 xor ecx, ecx
// 0040d9fa  c1f803               sar eax, 3
// 0040d9fd  ba08000000           mov edx, 8
// 0040da02  f7e2                 mul edx
// 0040da04  0f90c1               seto cl
// 0040da07  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040da0e  f7d9                 neg ecx
// 0040da10  0bc8                 or ecx, eax
// 0040da12  51                   push ecx
// 0040da13  e82a613e00           call 0x7f3b42
// 0040da18  83c404               add esp, 4
// 0040da1b  894608               mov dword ptr [esi + 8], eax
// 0040da1e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040da25  eb1b                 jmp 0x40da42
// 0040da27  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040da2a  e80d613e00           call 0x7f3b3c
// 0040da2f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040da36  b83cda4000           mov eax, 0x40da3c
// 0040da3b  c3                   ret 
// 0040da3c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040da3f  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040da42  8b4608               mov eax, dword ptr [esi + 8]
// 0040da45  894610               mov dword ptr [esi + 0x10], eax
// 0040da48  85c0                 test eax, eax
// 0040da4a  7518                 jne 0x40da64
// 0040da4c  b80e000780           mov eax, 0x8007000e
// 0040da51  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040da54  64890d00000000       mov dword ptr fs:[0], ecx
// 0040da5b  5f                   pop edi
// 0040da5c  5e                   pop esi
// 0040da5d  5b                   pop ebx
// 0040da5e  8be5                 mov esp, ebp
// 0040da60  5d                   pop ebp
// 0040da61  c21000               ret 0x10
// 0040da64  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040da67  3bfb                 cmp edi, ebx
// 0040da69  7436                 je 0x40daa1
// 0040da6b  eb03                 jmp 0x40da70
// 0040da6d  8d4900               lea ecx, [ecx]
// 0040da70  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040da73  85c0                 test eax, eax
// 0040da75  743a                 je 0x40dab1
// 0040da77  85ff                 test edi, edi
// 0040da79  7436                 je 0x40dab1
// 0040da7b  8b0f                 mov ecx, dword ptr [edi]
// 0040da7d  8908                 mov dword ptr [eax], ecx
// 0040da7f  8b5704               mov edx, dword ptr [edi + 4]
// 0040da82  895004               mov dword ptr [eax + 4], edx
// 0040da85  8bc1                 mov eax, ecx
// 0040da87  85c0                 test eax, eax
// 0040da89  7408                 je 0x40da93
// 0040da8b  8b08                 mov ecx, dword ptr [eax]
// 0040da8d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040da90  50                   push eax
// 0040da91  ffd2                 call edx
// 0040da93  83461008             add dword ptr [esi + 0x10], 8
// 0040da97  83c708               add edi, 8
// 0040da9a  3bfb                 cmp edi, ebx
// 0040da9c  75d2                 jne 0x40da70
// 0040da9e  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040daa1  8b4608               mov eax, dword ptr [esi + 8]
// 0040daa4  2bdf                 sub ebx, edi
// 0040daa6  c1fb03               sar ebx, 3
// 0040daa9  8d0cd8               lea ecx, [eax + ebx*8]
// 0040daac  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040daaf  eb16                 jmp 0x40dac7
// 0040dab1  6805400080           push 0x80004005
// 0040dab6  e8c550ffff           call 0x402b80
// 0040dabb  8b5508               mov edx, dword ptr [ebp + 8]
// 0040dabe  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040dac1  895608               mov dword ptr [esi + 8], edx
// 0040dac4  89460c               mov dword ptr [esi + 0xc], eax
// 0040dac7  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040daca  397e04               cmp dword ptr [esi + 4], edi
// 0040dacd  741e                 je 0x40daed
// 0040dacf  85ff                 test edi, edi
// 0040dad1  7408                 je 0x40dadb
// 0040dad3  8b0f                 mov ecx, dword ptr [edi]
// 0040dad5  8b5104               mov edx, dword ptr [ecx + 4]
// 0040dad8  57                   push edi
// 0040dad9  ffd2                 call edx
// 0040dadb  8b4604               mov eax, dword ptr [esi + 4]
// 0040dade  85c0                 test eax, eax
// 0040dae0  7408                 je 0x40daea
// 0040dae2  8b08                 mov ecx, dword ptr [eax]
// 0040dae4  8b5108               mov edx, dword ptr [ecx + 8]
// 0040dae7  50                   push eax
// 0040dae8  ffd2                 call edx
// 0040daea  897e04               mov dword ptr [esi + 4], edi
// 0040daed  8b4608               mov eax, dword ptr [esi + 8]
// 0040daf0  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040daf3  894610               mov dword ptr [esi + 0x10], eax
// 0040daf6  894e14               mov dword ptr [esi + 0x14], ecx
// 0040daf9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040dafc  5f                   pop edi
// 0040dafd  5e                   pop esi
// 0040dafe  33c0                 xor eax, eax
// 0040db00  64890d00000000       mov dword ptr fs:[0], ecx
// 0040db07  5b                   pop ebx
// 0040db08  8be5                 mov esp, ebp
// 0040db0a  5d                   pop ebp
// 0040db0b  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnections@@$1?IID_IEnumConnections@@3U_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@QAEJPAUtagCONNECTDATA@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_comenuminitnative_65941067da5b003c.cpp