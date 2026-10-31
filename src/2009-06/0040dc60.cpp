// roc 2009-06 0040dc60  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040dc60
//
// 0040dc60  55                   push ebp
// 0040dc61  8bec                 mov ebp, esp
// 0040dc63  6aff                 push -1
// 0040dc65  68e0d38400           push 0x84d3e0
// 0040dc6a  64a100000000         mov eax, dword ptr fs:[0]
// 0040dc70  50                   push eax
// 0040dc71  64892500000000       mov dword ptr fs:[0], esp
// 0040dc78  83ec0c               sub esp, 0xc
// 0040dc7b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040dc7f  53                   push ebx
// 0040dc80  56                   push esi
// 0040dc81  57                   push edi
// 0040dc82  8bf1                 mov esi, ecx
// 0040dc84  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040dc87  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040dc8a  0f85cb000000         jne 0x40dd5b
// 0040dc90  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040dc93  8bc3                 mov eax, ebx
// 0040dc95  2b4508               sub eax, dword ptr [ebp + 8]
// 0040dc98  33c9                 xor ecx, ecx
// 0040dc9a  c1f803               sar eax, 3
// 0040dc9d  ba08000000           mov edx, 8
// 0040dca2  f7e2                 mul edx
// 0040dca4  0f90c1               seto cl
// 0040dca7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040dcae  f7d9                 neg ecx
// 0040dcb0  0bc8                 or ecx, eax
// 0040dcb2  51                   push ecx
// 0040dcb3  e862b03000           call 0x718d1a
// 0040dcb8  83c404               add esp, 4
// 0040dcbb  894608               mov dword ptr [esi + 8], eax
// 0040dcbe  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040dcc5  eb1b                 jmp 0x40dce2
// 0040dcc7  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040dcca  e845b03000           call 0x718d14
// 0040dccf  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040dcd6  b8dcdc4000           mov eax, 0x40dcdc
// 0040dcdb  c3                   ret 
// 0040dcdc  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040dcdf  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040dce2  8b4608               mov eax, dword ptr [esi + 8]
// 0040dce5  894610               mov dword ptr [esi + 0x10], eax
// 0040dce8  85c0                 test eax, eax
// 0040dcea  7518                 jne 0x40dd04
// 0040dcec  b80e000780           mov eax, 0x8007000e
// 0040dcf1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040dcf4  64890d00000000       mov dword ptr fs:[0], ecx
// 0040dcfb  5f                   pop edi
// 0040dcfc  5e                   pop esi
// 0040dcfd  5b                   pop ebx
// 0040dcfe  8be5                 mov esp, ebp
// 0040dd00  5d                   pop ebp
// 0040dd01  c21000               ret 0x10
// 0040dd04  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040dd07  3bfb                 cmp edi, ebx
// 0040dd09  7436                 je 0x40dd41
// 0040dd0b  eb03                 jmp 0x40dd10
// 0040dd0d  8d4900               lea ecx, [ecx]
// 0040dd10  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040dd13  85c0                 test eax, eax
// 0040dd15  743a                 je 0x40dd51
// 0040dd17  85ff                 test edi, edi
// 0040dd19  7436                 je 0x40dd51
// 0040dd1b  8b0f                 mov ecx, dword ptr [edi]
// 0040dd1d  8908                 mov dword ptr [eax], ecx
// 0040dd1f  8b5704               mov edx, dword ptr [edi + 4]
// 0040dd22  895004               mov dword ptr [eax + 4], edx
// 0040dd25  8bc1                 mov eax, ecx
// 0040dd27  85c0                 test eax, eax
// 0040dd29  7408                 je 0x40dd33
// 0040dd2b  8b08                 mov ecx, dword ptr [eax]
// 0040dd2d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040dd30  50                   push eax
// 0040dd31  ffd2                 call edx
// 0040dd33  83461008             add dword ptr [esi + 0x10], 8
// 0040dd37  83c708               add edi, 8
// 0040dd3a  3bfb                 cmp edi, ebx
// 0040dd3c  75d2                 jne 0x40dd10
// 0040dd3e  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040dd41  8b4608               mov eax, dword ptr [esi + 8]
// 0040dd44  2bdf                 sub ebx, edi
// 0040dd46  c1fb03               sar ebx, 3
// 0040dd49  8d0cd8               lea ecx, [eax + ebx*8]
// 0040dd4c  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040dd4f  eb16                 jmp 0x40dd67
// 0040dd51  6805400080           push 0x80004005
// 0040dd56  e85551ffff           call 0x402eb0
// 0040dd5b  8b5508               mov edx, dword ptr [ebp + 8]
// 0040dd5e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040dd61  895608               mov dword ptr [esi + 8], edx
// 0040dd64  89460c               mov dword ptr [esi + 0xc], eax
// 0040dd67  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040dd6a  397e04               cmp dword ptr [esi + 4], edi
// 0040dd6d  741e                 je 0x40dd8d
// 0040dd6f  85ff                 test edi, edi
// 0040dd71  7408                 je 0x40dd7b
// 0040dd73  8b0f                 mov ecx, dword ptr [edi]
// 0040dd75  8b5104               mov edx, dword ptr [ecx + 4]
// 0040dd78  57                   push edi
// 0040dd79  ffd2                 call edx
// 0040dd7b  8b4604               mov eax, dword ptr [esi + 4]
// 0040dd7e  85c0                 test eax, eax
// 0040dd80  7408                 je 0x40dd8a
// 0040dd82  8b08                 mov ecx, dword ptr [eax]
// 0040dd84  8b5108               mov edx, dword ptr [ecx + 8]
// 0040dd87  50                   push eax
// 0040dd88  ffd2                 call edx
// 0040dd8a  897e04               mov dword ptr [esi + 4], edi
// 0040dd8d  8b4608               mov eax, dword ptr [esi + 8]
// 0040dd90  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040dd93  894610               mov dword ptr [esi + 0x10], eax
// 0040dd96  894e14               mov dword ptr [esi + 0x14], ecx
// 0040dd99  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040dd9c  5f                   pop edi
// 0040dd9d  5e                   pop esi
// 0040dd9e  33c0                 xor eax, eax
// 0040dda0  64890d00000000       mov dword ptr fs:[0], ecx
// 0040dda7  5b                   pop ebx
// 0040dda8  8be5                 mov esp, ebp
// 0040ddaa  5d                   pop ebp
// 0040ddab  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnections@@$1?IID_IEnumConnections@@3U_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@QAEJPAUtagCONNECTDATA@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_comenuminitnative_65941067da5b003c.cpp