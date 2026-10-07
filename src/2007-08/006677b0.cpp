// roc 2007-08 006677b0  unit: CRobloxTreeCtrl  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006677b0
//
// 006677b0  56                   push esi
// 006677b1  8bf1                 mov esi, ecx
// 006677b3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006677b7  57                   push edi
// 006677b8  7539                 jne 0x6677f3
// 006677ba  8b4618               mov eax, dword ptr [esi + 0x18]
// 006677bd  6a50                 push 0x50
// 006677bf  50                   push eax
// 006677c0  8d4e14               lea ecx, [esi + 0x14]
// 006677c3  51                   push ecx
// 006677c4  e8d78efcff           call 0x6306a0
// 006677c9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006677cc  8d1489               lea edx, [ecx + ecx*4]
// 006677cf  83c004               add eax, 4
// 006677d2  c1e204               shl edx, 4
// 006677d5  83c1ff               add ecx, -1
// 006677d8  8d4410b0             lea eax, [eax + edx - 0x50]
// 006677dc  7815                 js 0x6677f3
// 006677de  8bff                 mov edi, edi
// 006677e0  8b5610               mov edx, dword ptr [esi + 0x10]
// 006677e3  895048               mov dword ptr [eax + 0x48], edx
// 006677e6  894610               mov dword ptr [esi + 0x10], eax
// 006677e9  83e901               sub ecx, 1
// 006677ec  83e850               sub eax, 0x50
// 006677ef  85c9                 test ecx, ecx
// 006677f1  7ded                 jge 0x6677e0
// 006677f3  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006677f6  85ff                 test edi, edi
// 006677f8  7505                 jne 0x6677ff
// 006677fa  e82187fcff           call 0x62ff20
// 006677ff  53                   push ebx
// 00667800  8b5f48               mov ebx, dword ptr [edi + 0x48]
// 00667803  6a50                 push 0x50
// 00667805  6a00                 push 0
// 00667807  57                   push edi
// 00667808  e87f93fcff           call 0x630b8c
// 0066780d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00667811  895f48               mov dword ptr [edi + 0x48], ebx
// 00667814  8b4610               mov eax, dword ptr [esi + 0x10]
// 00667817  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0066781a  83460c01             add dword ptr [esi + 0xc], 1
// 0066781e  894e10               mov dword ptr [esi + 0x10], ecx
// 00667821  8d4704               lea eax, [edi + 4]
// 00667824  6a3c                 push 0x3c
// 00667826  83c9ff               or ecx, 0xffffffff
// 00667829  8917                 mov dword ptr [edi], edx
// 0066782b  6a00                 push 0
// 0066782d  50                   push eax
// 0066782e  89483c               mov dword ptr [eax + 0x3c], ecx
// 00667831  894840               mov dword ptr [eax + 0x40], ecx
// 00667834  e85393fcff           call 0x630b8c
// 00667839  83c418               add esp, 0x18
// 0066783c  5b                   pop ebx
// 0066783d  8bc7                 mov eax, edi
// 0066783f  5f                   pop edi
// 00667840  5e                   pop esi
// 00667841  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?NewAssoc@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IAEPAVCAssoc@1@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
