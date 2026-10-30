// from server: 100% by auto
// roc 2008-06 006de550  unit: CRobloxTreeCtrl  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006de550
//
// 006de550  56                   push esi
// 006de551  8bf1                 mov esi, ecx
// 006de553  837e1000             cmp dword ptr [esi + 0x10], 0
// 006de557  57                   push edi
// 006de558  7537                 jne 0x6de591
// 006de55a  8b4618               mov eax, dword ptr [esi + 0x18]
// 006de55d  6a50                 push 0x50
// 006de55f  50                   push eax
// 006de560  8d4e14               lea ecx, [esi + 0x14]
// 006de563  51                   push ecx
// 006de564  e8d32bfcff           call 0x6a113c
// 006de569  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006de56c  8d1489               lea edx, [ecx + ecx*4]
// 006de56f  83c004               add eax, 4
// 006de572  c1e204               shl edx, 4
// 006de575  83c1ff               add ecx, -1
// 006de578  8d4410b0             lea eax, [eax + edx - 0x50]
// 006de57c  7813                 js 0x6de591
// 006de57e  8bff                 mov edi, edi
// 006de580  8b5610               mov edx, dword ptr [esi + 0x10]
// 006de583  895048               mov dword ptr [eax + 0x48], edx
// 006de586  894610               mov dword ptr [esi + 0x10], eax
// 006de589  49                   dec ecx
// 006de58a  83e850               sub eax, 0x50
// 006de58d  85c9                 test ecx, ecx
// 006de58f  7def                 jge 0x6de580
// 006de591  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006de594  85ff                 test edi, edi
// 006de596  7505                 jne 0x6de59d
// 006de598  e8a723fcff           call 0x6a0944
// 006de59d  53                   push ebx
// 006de59e  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 006de5a1  6a50                 push 0x50
// 006de5a3  6a00                 push 0
// 006de5a5  57                   push edi
// 006de5a6  e85931fcff           call 0x6a1704
// 006de5ab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006de5af  895f48               mov dword ptr [edi + 0x48], ebx
// 006de5b2  8b4610               mov eax, dword ptr [esi + 0x10]
// 006de5b5  8b4848               mov ecx, dword ptr [eax + 0x48]
// 006de5b8  ff460c               inc dword ptr [esi + 0xc]
// 006de5bb  894e10               mov dword ptr [esi + 0x10], ecx
// 006de5be  8d4704               lea eax, [edi + 4]
// 006de5c1  6a3c                 push 0x3c
// 006de5c3  83c9ff               or ecx, 0xffffffff
// 006de5c6  8917                 mov dword ptr [edi], edx
// 006de5c8  6a00                 push 0
// 006de5ca  50                   push eax
// 006de5cb  89483c               mov dword ptr [eax + 0x3c], ecx
// 006de5ce  894840               mov dword ptr [eax + 0x40], ecx
// 006de5d1  e82e31fcff           call 0x6a1704
// 006de5d6  83c418               add esp, 0x18
// 006de5d9  5b                   pop ebx
// 006de5da  8bc7                 mov eax, edi
// 006de5dc  5f                   pop edi
// 006de5dd  5e                   pop esi
// 006de5de  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?NewAssoc@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IAEPAVCAssoc@1@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
