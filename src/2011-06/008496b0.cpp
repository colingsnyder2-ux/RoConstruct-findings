// from server: 100% by auto
// roc 2011-06 008496b0  unit: CRobloxTreeCtrl  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008496b0
//
// 008496b0  56                   push esi
// 008496b1  8bf1                 mov esi, ecx
// 008496b3  837e1000             cmp dword ptr [esi + 0x10], 0
// 008496b7  57                   push edi
// 008496b8  7537                 jne 0x8496f1
// 008496ba  8b4618               mov eax, dword ptr [esi + 0x18]
// 008496bd  6a50                 push 0x50
// 008496bf  50                   push eax
// 008496c0  8d4e14               lea ecx, [esi + 0x14]
// 008496c3  51                   push ecx
// 008496c4  e82315fcff           call 0x80abec
// 008496c9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008496cc  8d1489               lea edx, [ecx + ecx*4]
// 008496cf  83c004               add eax, 4
// 008496d2  c1e204               shl edx, 4
// 008496d5  83c1ff               add ecx, -1
// 008496d8  8d4410b0             lea eax, [eax + edx - 0x50]
// 008496dc  7813                 js 0x8496f1
// 008496de  8bff                 mov edi, edi
// 008496e0  8b5610               mov edx, dword ptr [esi + 0x10]
// 008496e3  895048               mov dword ptr [eax + 0x48], edx
// 008496e6  894610               mov dword ptr [esi + 0x10], eax
// 008496e9  49                   dec ecx
// 008496ea  83e850               sub eax, 0x50
// 008496ed  85c9                 test ecx, ecx
// 008496ef  7def                 jge 0x8496e0
// 008496f1  8b7e10               mov edi, dword ptr [esi + 0x10]
// 008496f4  85ff                 test edi, edi
// 008496f6  7505                 jne 0x8496fd
// 008496f8  e80d0cfcff           call 0x80a30a
// 008496fd  53                   push ebx
// 008496fe  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 00849701  6a50                 push 0x50
// 00849703  6a00                 push 0
// 00849705  57                   push edi
// 00849706  e8d91bfcff           call 0x80b2e4
// 0084970b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084970f  895f48               mov dword ptr [edi + 0x48], ebx
// 00849712  8b4610               mov eax, dword ptr [esi + 0x10]
// 00849715  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00849718  ff460c               inc dword ptr [esi + 0xc]
// 0084971b  894e10               mov dword ptr [esi + 0x10], ecx
// 0084971e  8d4704               lea eax, [edi + 4]
// 00849721  6a3c                 push 0x3c
// 00849723  83c9ff               or ecx, 0xffffffff
// 00849726  8917                 mov dword ptr [edi], edx
// 00849728  6a00                 push 0
// 0084972a  50                   push eax
// 0084972b  89483c               mov dword ptr [eax + 0x3c], ecx
// 0084972e  894840               mov dword ptr [eax + 0x40], ecx
// 00849731  e8ae1bfcff           call 0x80b2e4
// 00849736  83c418               add esp, 0x18
// 00849739  5b                   pop ebx
// 0084973a  8bc7                 mov eax, edi
// 0084973c  5f                   pop edi
// 0084973d  5e                   pop esi
// 0084973e  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?NewAssoc@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@IAEPAVCAssoc@1@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
