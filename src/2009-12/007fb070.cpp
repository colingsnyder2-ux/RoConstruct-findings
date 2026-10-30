// roc 2009-12 007fb070  unit: CXTPControlComboBoxList  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb070
//
// 007fb070  6aff                 push -1
// 007fb072  6878ad9500           push 0x95ad78
// 007fb077  64a100000000         mov eax, dword ptr fs:[0]
// 007fb07d  50                   push eax
// 007fb07e  83ec24               sub esp, 0x24
// 007fb081  56                   push esi
// 007fb082  57                   push edi
// 007fb083  a10052b600           mov eax, dword ptr [0xb65200]
// 007fb088  33c4                 xor eax, esp
// 007fb08a  50                   push eax
// 007fb08b  8d442430             lea eax, [esp + 0x30]
// 007fb08f  64a300000000         mov dword ptr fs:[0], eax
// 007fb095  8bf1                 mov esi, ecx
// 007fb097  e8f4940000           call 0x804590
// 007fb09c  8bce                 mov ecx, esi
// 007fb09e  8bf8                 mov edi, eax
// 007fb0a0  e88b8dffff           call 0x7f3e30
// 007fb0a5  56                   push esi
// 007fb0a6  8d4c2420             lea ecx, [esp + 0x20]
// 007fb0aa  e8dbb31200           call 0x92648a
// 007fb0af  56                   push esi
// 007fb0b0  8d4c2410             lea ecx, [esp + 0x10]
// 007fb0b4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007fb0bc  e8af010500           call 0x84b270
// 007fb0c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fb0c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fb0c9  f7d8                 neg eax
// 007fb0cb  50                   push eax
// 007fb0cc  f7d9                 neg ecx
// 007fb0ce  51                   push ecx
// 007fb0cf  8d442414             lea eax, [esp + 0x14]
// 007fb0d3  50                   push eax
// 007fb0d4  ff156ccc9800         call dword ptr [0x98cc6c]
// 007fb0da  6a2b                 push 0x2b
// 007fb0dc  8bcf                 mov ecx, edi
// 007fb0de  e85d250000           call 0x7fd640
// 007fb0e3  50                   push eax
// 007fb0e4  6a2b                 push 0x2b
// 007fb0e6  8bcf                 mov ecx, edi
// 007fb0e8  e853250000           call 0x7fd640
// 007fb0ed  50                   push eax
// 007fb0ee  8d4c2414             lea ecx, [esp + 0x14]
// 007fb0f2  51                   push ecx
// 007fb0f3  8d4c2428             lea ecx, [esp + 0x28]
// 007fb0f7  e8fc94ffff           call 0x7f45f8
// 007fb0fc  6aff                 push -1
// 007fb0fe  6aff                 push -1
// 007fb100  8d542414             lea edx, [esp + 0x14]
// 007fb104  52                   push edx
// 007fb105  ff1558ca9800         call dword ptr [0x98ca58]
// 007fb10b  e8c0480300           call 0x82f9d0
// 007fb110  6a05                 push 5
// 007fb112  8bc8                 mov ecx, eax
// 007fb114  e8e73f0300           call 0x82f100
// 007fb119  8bf0                 mov esi, eax
// 007fb11b  e8b0480300           call 0x82f9d0
// 007fb120  6a05                 push 5
// 007fb122  8bc8                 mov ecx, eax
// 007fb124  e8d73f0300           call 0x82f100
// 007fb129  56                   push esi
// 007fb12a  50                   push eax
// 007fb12b  8d442414             lea eax, [esp + 0x14]
// 007fb12f  50                   push eax
// 007fb130  8d4c2428             lea ecx, [esp + 0x28]
// 007fb134  e8bf94ffff           call 0x7f45f8
// 007fb139  8d4c241c             lea ecx, [esp + 0x1c]
// 007fb13d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007fb145  e83ab31200           call 0x926484
// 007fb14a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fb14e  64890d00000000       mov dword ptr fs:[0], ecx
// 007fb155  59                   pop ecx
// 007fb156  5f                   pop edi
// 007fb157  5e                   pop esi
// 007fb158  83c430               add esp, 0x30
// 007fb15b  c3                   ret 
// copied from an identical function in another client (function ?OnNcPaint@CXTPControlComboBoxList@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp