// roc 2008-06 004d56e0  unit: seg_004d0000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d56e0
//
// 004d56e0  53                   push ebx
// 004d56e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d56e5  56                   push esi
// 004d56e6  8bf1                 mov esi, ecx
// 004d56e8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d56eb  8bc1                 mov eax, ecx
// 004d56ed  c1e803               shr eax, 3
// 004d56f0  8d0cd9               lea ecx, [ecx + ebx*8]
// 004d56f3  8d14dd00000000       lea edx, [ebx*8]
// 004d56fa  83e03f               and eax, 0x3f
// 004d56fd  57                   push edi
// 004d56fe  894e18               mov dword ptr [esi + 0x18], ecx
// 004d5701  3bca                 cmp ecx, edx
// 004d5703  7303                 jae 0x4d5708
// 004d5705  ff461c               inc dword ptr [esi + 0x1c]
// 004d5708  8bcb                 mov ecx, ebx
// 004d570a  c1e91d               shr ecx, 0x1d
// 004d570d  014e1c               add dword ptr [esi + 0x1c], ecx
// 004d5710  8d1418               lea edx, [eax + ebx]
// 004d5713  83fa3f               cmp edx, 0x3f
// 004d5716  765b                 jbe 0x4d5773
// 004d5718  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d571c  55                   push ebp
// 004d571d  bf40000000           mov edi, 0x40
// 004d5722  2bf8                 sub edi, eax
// 004d5724  57                   push edi
// 004d5725  51                   push ecx
// 004d5726  8d543020             lea edx, [eax + esi + 0x20]
// 004d572a  52                   push edx
// 004d572b  e8b0c01c00           call 0x6a17e0
// 004d5730  83c40c               add esp, 0xc
// 004d5733  8d4e20               lea ecx, [esi + 0x20]
// 004d5736  51                   push ecx
// 004d5737  8d4604               lea eax, [esi + 4]
// 004d573a  50                   push eax
// 004d573b  8bce                 mov ecx, esi
// 004d573d  e8ceebffff           call 0x4d4310
// 004d5742  8d6f3f               lea ebp, [edi + 0x3f]
// 004d5745  3beb                 cmp ebp, ebx
// 004d5747  7325                 jae 0x4d576e
// 004d5749  8da42400000000       lea esp, [esp]
// 004d5750  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d5754  8d442ac1             lea eax, [edx + ebp - 0x3f]
// 004d5758  50                   push eax
// 004d5759  8d4604               lea eax, [esi + 4]
// 004d575c  50                   push eax
// 004d575d  8bce                 mov ecx, esi
// 004d575f  e8acebffff           call 0x4d4310
// 004d5764  83c540               add ebp, 0x40
// 004d5767  83c740               add edi, 0x40
// 004d576a  3beb                 cmp ebp, ebx
// 004d576c  72e2                 jb 0x4d5750
// 004d576e  33c0                 xor eax, eax
// 004d5770  5d                   pop ebp
// 004d5771  eb02                 jmp 0x4d5775
// 004d5773  33ff                 xor edi, edi
// 004d5775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5779  2bdf                 sub ebx, edi
// 004d577b  53                   push ebx
// 004d577c  03f9                 add edi, ecx
// 004d577e  8d543020             lea edx, [eax + esi + 0x20]
// 004d5782  57                   push edi
// 004d5783  52                   push edx
// 004d5784  e857c01c00           call 0x6a17e0
// 004d5789  83c40c               add esp, 0xc
// 004d578c  5f                   pop edi
// 004d578d  5e                   pop esi
// 004d578e  5b                   pop ebx
// 004d578f  c20800               ret 8
// library rbx2016-raknet/SHA1.cpp (function ?Update@CSHA1@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
