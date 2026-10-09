// roc 2007-03 006537f0  unit: seg_00650000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006537f0
//
// 006537f0  56                   push esi
// 006537f1  8bf1                 mov esi, ecx
// 006537f3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006537f7  57                   push edi
// 006537f8  7539                 jne 0x653833
// 006537fa  8b4618               mov eax, dword ptr [esi + 0x18]
// 006537fd  6a50                 push 0x50
// 006537ff  50                   push eax
// 00653800  8d4e14               lea ecx, [esi + 0x14]
// 00653803  51                   push ecx
// 00653804  e8ef720e00           call 0x73aaf8
// 00653809  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0065380c  8d1489               lea edx, [ecx + ecx*4]
// 0065380f  83c004               add eax, 4
// 00653812  c1e204               shl edx, 4
// 00653815  83c1ff               add ecx, -1
// 00653818  8d4410b0             lea eax, [eax + edx - 0x50]
// 0065381c  7815                 js 0x653833
// 0065381e  8bff                 mov edi, edi
// 00653820  8b5610               mov edx, dword ptr [esi + 0x10]
// 00653823  895048               mov dword ptr [eax + 0x48], edx
// 00653826  894610               mov dword ptr [esi + 0x10], eax
// 00653829  83e901               sub ecx, 1
// 0065382c  83e850               sub eax, 0x50
// 0065382f  85c9                 test ecx, ecx
// 00653831  7ded                 jge 0x653820
// 00653833  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00653836  85ff                 test edi, edi
// 00653838  7505                 jne 0x65383f
// 0065383a  e86fabfcff           call 0x61e3ae
// 0065383f  53                   push ebx
// 00653840  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 00653843  6a50                 push 0x50
// 00653845  6a00                 push 0
// 00653847  57                   push edi
// 00653848  e8cfb7fcff           call 0x61f01c
// 0065384d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00653851  895f48               mov dword ptr [edi + 0x48], ebx
// 00653854  8b4610               mov eax, dword ptr [esi + 0x10]
// 00653857  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0065385a  83460c01             add dword ptr [esi + 0xc], 1
// 0065385e  894e10               mov dword ptr [esi + 0x10], ecx
// 00653861  8d4704               lea eax, [edi + 4]
// 00653864  6a3c                 push 0x3c
// 00653866  83c9ff               or ecx, 0xffffffff
// 00653869  8917                 mov dword ptr [edi], edx
// 0065386b  6a00                 push 0
// 0065386d  50                   push eax
// 0065386e  89483c               mov dword ptr [eax + 0x3c], ecx
// 00653871  894840               mov dword ptr [eax + 0x40], ecx
// 00653874  e8a3b7fcff           call 0x61f01c
// 00653879  83c418               add esp, 0x18
// 0065387c  5b                   pop ebx
// 0065387d  8bc7                 mov eax, edi
// 0065387f  5f                   pop edi
// 00653880  5e                   pop esi
// 00653881  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?NewAssoc@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IAEPAVCAssoc@1@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
