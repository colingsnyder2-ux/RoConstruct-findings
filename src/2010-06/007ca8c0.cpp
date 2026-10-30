// roc 2010-06 007ca8c0  unit: MyXTPCommandBars  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ca8c0
//
// 007ca8c0  6aff                 push -1
// 007ca8c2  68b8039b00           push 0x9b03b8
// 007ca8c7  64a100000000         mov eax, dword ptr fs:[0]
// 007ca8cd  50                   push eax
// 007ca8ce  83ec14               sub esp, 0x14
// 007ca8d1  56                   push esi
// 007ca8d2  57                   push edi
// 007ca8d3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007ca8d8  33c4                 xor eax, esp
// 007ca8da  50                   push eax
// 007ca8db  8d442420             lea eax, [esp + 0x20]
// 007ca8df  64a300000000         mov dword ptr fs:[0], eax
// 007ca8e5  8b442430             mov eax, dword ptr [esp + 0x30]
// 007ca8e9  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 007ca8ef  85f6                 test esi, esi
// 007ca8f1  746c                 je 0x7ca95f
// 007ca8f3  6aff                 push -1
// 007ca8f5  50                   push eax
// 007ca8f6  8bce                 mov ecx, esi
// 007ca8f8  e833af0700           call 0x845830
// 007ca8fd  8bf8                 mov edi, eax
// 007ca8ff  83ffff               cmp edi, -1
// 007ca902  745b                 je 0x7ca95f
// 007ca904  8d4c240c             lea ecx, [esp + 0xc]
// 007ca908  e8e3deffff           call 0x7c87f0
// 007ca90d  8d44240c             lea eax, [esp + 0xc]
// 007ca911  50                   push eax
// 007ca912  57                   push edi
// 007ca913  8bce                 mov ecx, esi
// 007ca915  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007ca91d  e81ebf0700           call 0x846840
// 007ca922  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ca926  33f6                 xor esi, esi
// 007ca928  85c0                 test eax, eax
// 007ca92a  7e22                 jle 0x7ca94e
// 007ca92c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007ca930  85f6                 test esi, esi
// 007ca932  7c3f                 jl 0x7ca973
// 007ca934  3bf0                 cmp esi, eax
// 007ca936  7d3b                 jge 0x7ca973
// 007ca938  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ca93c  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007ca93f  57                   push edi
// 007ca940  e84bdcffff           call 0x7c8590
// 007ca945  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ca949  46                   inc esi
// 007ca94a  3bf0                 cmp esi, eax
// 007ca94c  7ce2                 jl 0x7ca930
// 007ca94e  8d4c240c             lea ecx, [esp + 0xc]
// 007ca952  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 007ca95a  e8b1deffff           call 0x7c8810
// 007ca95f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ca963  64890d00000000       mov dword ptr fs:[0], ecx
// 007ca96a  59                   pop ecx
// 007ca96b  5f                   pop edi
// 007ca96c  5e                   pop esi
// 007ca96d  83c420               add esp, 0x20
// 007ca970  c20800               ret 8
// 007ca973  e8d4d2fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetHiddenControls@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp