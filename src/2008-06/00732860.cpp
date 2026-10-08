// from server: 100% by auto
// roc 2008-06 00732860  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732860
//
// 00732860  83ec18               sub esp, 0x18
// 00732863  56                   push esi
// 00732864  57                   push edi
// 00732865  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00732869  8bf1                 mov esi, ecx
// 0073286b  85ff                 test edi, edi
// 0073286d  750d                 jne 0x73287c
// 0073286f  5f                   pop edi
// 00732870  b857000780           mov eax, 0x80070057
// 00732875  5e                   pop esi
// 00732876  83c418               add esp, 0x18
// 00732879  c20c00               ret 0xc
// 0073287c  33c0                 xor eax, eax
// 0073287e  668907               mov word ptr [edi], ax
// 00732881  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00732887  85c0                 test eax, eax
// 00732889  7406                 je 0x732891
// 0073288b  83782000             cmp dword ptr [eax + 0x20], 0
// 0073288f  750d                 jne 0x73289e
// 00732891  5f                   pop edi
// 00732892  b801000000           mov eax, 1
// 00732897  5e                   pop esi
// 00732898  83c418               add esp, 0x18
// 0073289b  c20c00               ret 0xc
// 0073289e  53                   push ebx
// 0073289f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007328a3  55                   push ebp
// 007328a4  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007328a8  50                   push eax
// 007328a9  8d4c241c             lea ecx, [esp + 0x1c]
// 007328ad  e81e52fcff           call 0x6f7ad0
// 007328b2  55                   push ebp
// 007328b3  53                   push ebx
// 007328b4  50                   push eax
// 007328b5  ff152c2d8000         call dword ptr [0x802d2c]
// 007328bb  85c0                 test eax, eax
// 007328bd  746d                 je 0x73292c
// 007328bf  b903000000           mov ecx, 3
// 007328c4  66890f               mov word ptr [edi], cx
// 007328c7  c7470800000000       mov dword ptr [edi + 8], 0
// 007328ce  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007328d4  8d542410             lea edx, [esp + 0x10]
// 007328d8  895c2410             mov dword ptr [esp + 0x10], ebx
// 007328dc  896c2414             mov dword ptr [esp + 0x14], ebp
// 007328e0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007328e3  52                   push edx
// 007328e4  51                   push ecx
// 007328e5  ff15a02d8000         call dword ptr [0x802da0]
// 007328eb  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007328f1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 007328f7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007328fd  89542418             mov dword ptr [esp + 0x18], edx
// 00732901  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 00732907  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073290b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073290f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00732913  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00732917  50                   push eax
// 00732918  89542428             mov dword ptr [esp + 0x28], edx
// 0073291c  51                   push ecx
// 0073291d  8d542420             lea edx, [esp + 0x20]
// 00732921  52                   push edx
// 00732922  ff152c2d8000         call dword ptr [0x802d2c]
// 00732928  85c0                 test eax, eax
// 0073292a  750f                 jne 0x73293b
// 0073292c  5d                   pop ebp
// 0073292d  5b                   pop ebx
// 0073292e  5f                   pop edi
// 0073292f  b801000000           mov eax, 1
// 00732934  5e                   pop esi
// 00732935  83c418               add esp, 0x18
// 00732938  c20c00               ret 0xc
// 0073293b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073293f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00732943  6a00                 push 0
// 00732945  50                   push eax
// 00732946  51                   push ecx
// 00732947  8d4ee0               lea ecx, [esi - 0x20]
// 0073294a  e801eaffff           call 0x731350
// 0073294f  83f8ff               cmp eax, -1
// 00732952  7404                 je 0x732958
// 00732954  40                   inc eax
// 00732955  894708               mov dword ptr [edi + 8], eax
// 00732958  5d                   pop ebp
// 00732959  5b                   pop ebx
// 0073295a  5f                   pop edi
// 0073295b  33c0                 xor eax, eax
// 0073295d  5e                   pop esi
// 0073295e  83c418               add esp, 0x18
// 00732961  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
