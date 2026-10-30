// roc 2009-12 008167f0  unit: MyXTPCommandBars  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008167f0
//
// 008167f0  6aff                 push -1
// 008167f2  68f8a59500           push 0x95a5f8
// 008167f7  64a100000000         mov eax, dword ptr fs:[0]
// 008167fd  50                   push eax
// 008167fe  83ec14               sub esp, 0x14
// 00816801  56                   push esi
// 00816802  57                   push edi
// 00816803  a10052b600           mov eax, dword ptr [0xb65200]
// 00816808  33c4                 xor eax, esp
// 0081680a  50                   push eax
// 0081680b  8d442420             lea eax, [esp + 0x20]
// 0081680f  64a300000000         mov dword ptr fs:[0], eax
// 00816815  8b442430             mov eax, dword ptr [esp + 0x30]
// 00816819  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0081681f  85f6                 test esi, esi
// 00816821  746c                 je 0x81688f
// 00816823  6aff                 push -1
// 00816825  50                   push eax
// 00816826  8bce                 mov ecx, esi
// 00816828  e823ae0700           call 0x891650
// 0081682d  8bf8                 mov edi, eax
// 0081682f  83ffff               cmp edi, -1
// 00816832  745b                 je 0x81688f
// 00816834  8d4c240c             lea ecx, [esp + 0xc]
// 00816838  e8e3deffff           call 0x814720
// 0081683d  8d44240c             lea eax, [esp + 0xc]
// 00816841  50                   push eax
// 00816842  57                   push edi
// 00816843  8bce                 mov ecx, esi
// 00816845  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0081684d  e80ebe0700           call 0x892660
// 00816852  8b442414             mov eax, dword ptr [esp + 0x14]
// 00816856  33f6                 xor esi, esi
// 00816858  85c0                 test eax, eax
// 0081685a  7e22                 jle 0x81687e
// 0081685c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00816860  85f6                 test esi, esi
// 00816862  7c3f                 jl 0x8168a3
// 00816864  3bf0                 cmp esi, eax
// 00816866  7d3b                 jge 0x8168a3
// 00816868  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081686c  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0081686f  57                   push edi
// 00816870  e83bdcffff           call 0x8144b0
// 00816875  8b442414             mov eax, dword ptr [esp + 0x14]
// 00816879  46                   inc esi
// 0081687a  3bf0                 cmp esi, eax
// 0081687c  7ce2                 jl 0x816860
// 0081687e  8d4c240c             lea ecx, [esp + 0xc]
// 00816882  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0081688a  e8b1deffff           call 0x814740
// 0081688f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00816893  64890d00000000       mov dword ptr fs:[0], ecx
// 0081689a  59                   pop ecx
// 0081689b  5f                   pop edi
// 0081689c  5e                   pop esi
// 0081689d  83c420               add esp, 0x20
// 008168a0  c20800               ret 8
// 008168a3  e864d2fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetHiddenControls@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp