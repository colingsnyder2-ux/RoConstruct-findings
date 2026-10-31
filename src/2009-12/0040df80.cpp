// roc 2009-12 0040df80  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040df80
//
// 0040df80  55                   push ebp
// 0040df81  8bec                 mov ebp, esp
// 0040df83  6aff                 push -1
// 0040df85  68d0799200           push 0x9279d0
// 0040df8a  64a100000000         mov eax, dword ptr fs:[0]
// 0040df90  50                   push eax
// 0040df91  64892500000000       mov dword ptr fs:[0], esp
// 0040df98  83ec0c               sub esp, 0xc
// 0040df9b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040df9f  53                   push ebx
// 0040dfa0  56                   push esi
// 0040dfa1  57                   push edi
// 0040dfa2  8bf1                 mov esi, ecx
// 0040dfa4  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040dfa7  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040dfaa  0f85c3000000         jne 0x40e073
// 0040dfb0  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040dfb3  8bc3                 mov eax, ebx
// 0040dfb5  2b4508               sub eax, dword ptr [ebp + 8]
// 0040dfb8  33c9                 xor ecx, ecx
// 0040dfba  c1f802               sar eax, 2
// 0040dfbd  ba04000000           mov edx, 4
// 0040dfc2  f7e2                 mul edx
// 0040dfc4  0f90c1               seto cl
// 0040dfc7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040dfce  f7d9                 neg ecx
// 0040dfd0  0bc8                 or ecx, eax
// 0040dfd2  51                   push ecx
// 0040dfd3  e86a5b3e00           call 0x7f3b42
// 0040dfd8  83c404               add esp, 4
// 0040dfdb  894608               mov dword ptr [esi + 8], eax
// 0040dfde  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040dfe5  eb1b                 jmp 0x40e002
// 0040dfe7  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040dfea  e84d5b3e00           call 0x7f3b3c
// 0040dfef  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040dff6  b8fcdf4000           mov eax, 0x40dffc
// 0040dffb  c3                   ret 
// 0040dffc  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040dfff  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040e002  8b4608               mov eax, dword ptr [esi + 8]
// 0040e005  894610               mov dword ptr [esi + 0x10], eax
// 0040e008  85c0                 test eax, eax
// 0040e00a  7518                 jne 0x40e024
// 0040e00c  b80e000780           mov eax, 0x8007000e
// 0040e011  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e014  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e01b  5f                   pop edi
// 0040e01c  5e                   pop esi
// 0040e01d  5b                   pop ebx
// 0040e01e  8be5                 mov esp, ebp
// 0040e020  5d                   pop ebp
// 0040e021  c21000               ret 0x10
// 0040e024  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e027  3bfb                 cmp edi, ebx
// 0040e029  742e                 je 0x40e059
// 0040e02b  eb03                 jmp 0x40e030
// 0040e02d  8d4900               lea ecx, [ecx]
// 0040e030  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0040e033  85c9                 test ecx, ecx
// 0040e035  7432                 je 0x40e069
// 0040e037  85ff                 test edi, edi
// 0040e039  742e                 je 0x40e069
// 0040e03b  8b07                 mov eax, dword ptr [edi]
// 0040e03d  8901                 mov dword ptr [ecx], eax
// 0040e03f  85c0                 test eax, eax
// 0040e041  7408                 je 0x40e04b
// 0040e043  8b08                 mov ecx, dword ptr [eax]
// 0040e045  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e048  50                   push eax
// 0040e049  ffd2                 call edx
// 0040e04b  83461004             add dword ptr [esi + 0x10], 4
// 0040e04f  83c704               add edi, 4
// 0040e052  3bfb                 cmp edi, ebx
// 0040e054  75da                 jne 0x40e030
// 0040e056  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e059  8b4608               mov eax, dword ptr [esi + 8]
// 0040e05c  2bdf                 sub ebx, edi
// 0040e05e  c1fb02               sar ebx, 2
// 0040e061  8d0c98               lea ecx, [eax + ebx*4]
// 0040e064  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040e067  eb16                 jmp 0x40e07f
// 0040e069  6805400080           push 0x80004005
// 0040e06e  e80d4bffff           call 0x402b80
// 0040e073  8b5508               mov edx, dword ptr [ebp + 8]
// 0040e076  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040e079  895608               mov dword ptr [esi + 8], edx
// 0040e07c  89460c               mov dword ptr [esi + 0xc], eax
// 0040e07f  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040e082  397e04               cmp dword ptr [esi + 4], edi
// 0040e085  741e                 je 0x40e0a5
// 0040e087  85ff                 test edi, edi
// 0040e089  7408                 je 0x40e093
// 0040e08b  8b0f                 mov ecx, dword ptr [edi]
// 0040e08d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e090  57                   push edi
// 0040e091  ffd2                 call edx
// 0040e093  8b4604               mov eax, dword ptr [esi + 4]
// 0040e096  85c0                 test eax, eax
// 0040e098  7408                 je 0x40e0a2
// 0040e09a  8b08                 mov ecx, dword ptr [eax]
// 0040e09c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040e09f  50                   push eax
// 0040e0a0  ffd2                 call edx
// 0040e0a2  897e04               mov dword ptr [esi + 4], edi
// 0040e0a5  8b4608               mov eax, dword ptr [esi + 8]
// 0040e0a8  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040e0ab  894610               mov dword ptr [esi + 0x10], eax
// 0040e0ae  894e14               mov dword ptr [esi + 0x14], ecx
// 0040e0b1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e0b4  5f                   pop edi
// 0040e0b5  5e                   pop esi
// 0040e0b6  33c0                 xor eax, eax
// 0040e0b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e0bf  5b                   pop ebx
// 0040e0c0  8be5                 mov esp, ebp
// 0040e0c2  5d                   pop ebp
// 0040e0c3  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnectionPoints@@$1?_GUID_b196b285_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BPAUIConnectionPoint@@V?$_CopyInterface@UIConnectionPoint@@@ATL@@@ATL@@QAEJPAPAUIConnectionPoint@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp