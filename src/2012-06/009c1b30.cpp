// roc 2012-06 009c1b30  unit: CRobloxTreeCtrl  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1b30
//
// 009c1b30  56                   push esi
// 009c1b31  8bf1                 mov esi, ecx
// 009c1b33  837e1000             cmp dword ptr [esi + 0x10], 0
// 009c1b37  57                   push edi
// 009c1b38  7537                 jne 0x9c1b71
// 009c1b3a  8b4618               mov eax, dword ptr [esi + 0x18]
// 009c1b3d  6a50                 push 0x50
// 009c1b3f  50                   push eax
// 009c1b40  8d4e14               lea ecx, [esi + 0x14]
// 009c1b43  51                   push ecx
// 009c1b44  e82911fcff           call 0x982c72
// 009c1b49  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009c1b4c  8d1489               lea edx, [ecx + ecx*4]
// 009c1b4f  83c004               add eax, 4
// 009c1b52  c1e204               shl edx, 4
// 009c1b55  83c1ff               add ecx, -1
// 009c1b58  8d4410b0             lea eax, [eax + edx - 0x50]
// 009c1b5c  7813                 js 0x9c1b71
// 009c1b5e  8bff                 mov edi, edi
// 009c1b60  8b5610               mov edx, dword ptr [esi + 0x10]
// 009c1b63  895048               mov dword ptr [eax + 0x48], edx
// 009c1b66  894610               mov dword ptr [esi + 0x10], eax
// 009c1b69  49                   dec ecx
// 009c1b6a  83e850               sub eax, 0x50
// 009c1b6d  85c9                 test ecx, ecx
// 009c1b6f  7def                 jge 0x9c1b60
// 009c1b71  8b7e10               mov edi, dword ptr [esi + 0x10]
// 009c1b74  85ff                 test edi, edi
// 009c1b76  7505                 jne 0x9c1b7d
// 009c1b78  e84308fcff           call 0x9823c0
// 009c1b7d  53                   push ebx
// 009c1b7e  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 009c1b81  6a50                 push 0x50
// 009c1b83  6a00                 push 0
// 009c1b85  57                   push edi
// 009c1b86  e8e917fcff           call 0x983374
// 009c1b8b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009c1b8f  895f48               mov dword ptr [edi + 0x48], ebx
// 009c1b92  8b4610               mov eax, dword ptr [esi + 0x10]
// 009c1b95  8b4848               mov ecx, dword ptr [eax + 0x48]
// 009c1b98  ff460c               inc dword ptr [esi + 0xc]
// 009c1b9b  894e10               mov dword ptr [esi + 0x10], ecx
// 009c1b9e  8d4704               lea eax, [edi + 4]
// 009c1ba1  6a3c                 push 0x3c
// 009c1ba3  83c9ff               or ecx, 0xffffffff
// 009c1ba6  8917                 mov dword ptr [edi], edx
// 009c1ba8  6a00                 push 0
// 009c1baa  50                   push eax
// 009c1bab  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c1bae  894840               mov dword ptr [eax + 0x40], ecx
// 009c1bb1  e8be17fcff           call 0x983374
// 009c1bb6  83c418               add esp, 0x18
// 009c1bb9  5b                   pop ebx
// 009c1bba  8bc7                 mov eax, edi
// 009c1bbc  5f                   pop edi
// 009c1bbd  5e                   pop esi
// 009c1bbe  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?NewAssoc@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@IAEPAVCAssoc@1@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
