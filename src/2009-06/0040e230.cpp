// roc 2009-06 0040e230  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e230
//
// 0040e230  55                   push ebp
// 0040e231  8bec                 mov ebp, esp
// 0040e233  6aff                 push -1
// 0040e235  6870d48400           push 0x84d470
// 0040e23a  64a100000000         mov eax, dword ptr fs:[0]
// 0040e240  50                   push eax
// 0040e241  64892500000000       mov dword ptr fs:[0], esp
// 0040e248  83ec0c               sub esp, 0xc
// 0040e24b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040e24f  53                   push ebx
// 0040e250  56                   push esi
// 0040e251  57                   push edi
// 0040e252  8bf1                 mov esi, ecx
// 0040e254  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040e257  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040e25a  0f85c3000000         jne 0x40e323
// 0040e260  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040e263  8bc3                 mov eax, ebx
// 0040e265  2b4508               sub eax, dword ptr [ebp + 8]
// 0040e268  33c9                 xor ecx, ecx
// 0040e26a  c1f802               sar eax, 2
// 0040e26d  ba04000000           mov edx, 4
// 0040e272  f7e2                 mul edx
// 0040e274  0f90c1               seto cl
// 0040e277  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040e27e  f7d9                 neg ecx
// 0040e280  0bc8                 or ecx, eax
// 0040e282  51                   push ecx
// 0040e283  e892aa3000           call 0x718d1a
// 0040e288  83c404               add esp, 4
// 0040e28b  894608               mov dword ptr [esi + 8], eax
// 0040e28e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040e295  eb1b                 jmp 0x40e2b2
// 0040e297  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040e29a  e875aa3000           call 0x718d14
// 0040e29f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040e2a6  b8ace24000           mov eax, 0x40e2ac
// 0040e2ab  c3                   ret 
// 0040e2ac  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040e2af  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040e2b2  8b4608               mov eax, dword ptr [esi + 8]
// 0040e2b5  894610               mov dword ptr [esi + 0x10], eax
// 0040e2b8  85c0                 test eax, eax
// 0040e2ba  7518                 jne 0x40e2d4
// 0040e2bc  b80e000780           mov eax, 0x8007000e
// 0040e2c1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e2c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e2cb  5f                   pop edi
// 0040e2cc  5e                   pop esi
// 0040e2cd  5b                   pop ebx
// 0040e2ce  8be5                 mov esp, ebp
// 0040e2d0  5d                   pop ebp
// 0040e2d1  c21000               ret 0x10
// 0040e2d4  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e2d7  3bfb                 cmp edi, ebx
// 0040e2d9  742e                 je 0x40e309
// 0040e2db  eb03                 jmp 0x40e2e0
// 0040e2dd  8d4900               lea ecx, [ecx]
// 0040e2e0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0040e2e3  85c9                 test ecx, ecx
// 0040e2e5  7432                 je 0x40e319
// 0040e2e7  85ff                 test edi, edi
// 0040e2e9  742e                 je 0x40e319
// 0040e2eb  8b07                 mov eax, dword ptr [edi]
// 0040e2ed  8901                 mov dword ptr [ecx], eax
// 0040e2ef  85c0                 test eax, eax
// 0040e2f1  7408                 je 0x40e2fb
// 0040e2f3  8b08                 mov ecx, dword ptr [eax]
// 0040e2f5  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e2f8  50                   push eax
// 0040e2f9  ffd2                 call edx
// 0040e2fb  83461004             add dword ptr [esi + 0x10], 4
// 0040e2ff  83c704               add edi, 4
// 0040e302  3bfb                 cmp edi, ebx
// 0040e304  75da                 jne 0x40e2e0
// 0040e306  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040e309  8b4608               mov eax, dword ptr [esi + 8]
// 0040e30c  2bdf                 sub ebx, edi
// 0040e30e  c1fb02               sar ebx, 2
// 0040e311  8d0c98               lea ecx, [eax + ebx*4]
// 0040e314  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040e317  eb16                 jmp 0x40e32f
// 0040e319  6805400080           push 0x80004005
// 0040e31e  e88d4bffff           call 0x402eb0
// 0040e323  8b5508               mov edx, dword ptr [ebp + 8]
// 0040e326  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040e329  895608               mov dword ptr [esi + 8], edx
// 0040e32c  89460c               mov dword ptr [esi + 0xc], eax
// 0040e32f  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040e332  397e04               cmp dword ptr [esi + 4], edi
// 0040e335  741e                 je 0x40e355
// 0040e337  85ff                 test edi, edi
// 0040e339  7408                 je 0x40e343
// 0040e33b  8b0f                 mov ecx, dword ptr [edi]
// 0040e33d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040e340  57                   push edi
// 0040e341  ffd2                 call edx
// 0040e343  8b4604               mov eax, dword ptr [esi + 4]
// 0040e346  85c0                 test eax, eax
// 0040e348  7408                 je 0x40e352
// 0040e34a  8b08                 mov ecx, dword ptr [eax]
// 0040e34c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040e34f  50                   push eax
// 0040e350  ffd2                 call edx
// 0040e352  897e04               mov dword ptr [esi + 4], edi
// 0040e355  8b4608               mov eax, dword ptr [esi + 8]
// 0040e358  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040e35b  894610               mov dword ptr [esi + 0x10], eax
// 0040e35e  894e14               mov dword ptr [esi + 0x14], ecx
// 0040e361  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040e364  5f                   pop edi
// 0040e365  5e                   pop esi
// 0040e366  33c0                 xor eax, eax
// 0040e368  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e36f  5b                   pop ebx
// 0040e370  8be5                 mov esp, ebp
// 0040e372  5d                   pop ebp
// 0040e373  c21000               ret 0x10
// copied from an identical function in another client (function ?Init@?$CComEnumImpl@UIEnumConnectionPoints@@$1?_GUID_b196b285_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BPAUIConnectionPoint@@V?$_CopyInterface@UIConnectionPoint@@@ATL@@@ATL@@QAEJPAPAUIConnectionPoint@@0PAUIUnknown@@W4CComEnumFlags@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp