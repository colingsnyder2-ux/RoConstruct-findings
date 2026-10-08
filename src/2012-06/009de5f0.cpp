// roc 2012-06 009de5f0  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de5f0
//
// 009de5f0  56                   push esi
// 009de5f1  8bf1                 mov esi, ecx
// 009de5f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009de5f7  85c9                 test ecx, ecx
// 009de5f9  7472                 je 0x9de66d
// 009de5fb  57                   push edi
// 009de5fc  e8af5cfdff           call 0x9b42b0
// 009de601  50                   push eax
// 009de602  e85f40faff           call 0x982666
// 009de607  8bf8                 mov edi, eax
// 009de609  85ff                 test edi, edi
// 009de60b  745f                 je 0x9de66c
// 009de60d  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 009de613  57                   push edi
// 009de614  e827f4ffff           call 0x9dda40
// 009de619  ff15e83bb200         call dword ptr [0xb23be8]
// 009de61f  50                   push eax
// 009de620  e84140faff           call 0x982666
// 009de625  8bf0                 mov esi, eax
// 009de627  85f6                 test esi, esi
// 009de629  743a                 je 0x9de665
// 009de62b  837e2000             cmp dword ptr [esi + 0x20], 0
// 009de62f  7434                 je 0x9de665
// 009de631  3bf7                 cmp esi, edi
// 009de633  7437                 je 0x9de66c
// 009de635  56                   push esi
// 009de636  8bcf                 mov ecx, edi
// 009de638  e873e9ffff           call 0x9dcfb0
// 009de63d  85c0                 test eax, eax
// 009de63f  752b                 jne 0x9de66c
// 009de641  8bce                 mov ecx, esi
// 009de643  e84865fbff           call 0x994b90
// 009de648  85c0                 test eax, eax
// 009de64a  7419                 je 0x9de665
// 009de64c  83782000             cmp dword ptr [eax + 0x20], 0
// 009de650  7413                 je 0x9de665
// 009de652  8bce                 mov ecx, esi
// 009de654  e83765fbff           call 0x994b90
// 009de659  50                   push eax
// 009de65a  8bcf                 mov ecx, edi
// 009de65c  e84fe9ffff           call 0x9dcfb0
// 009de661  85c0                 test eax, eax
// 009de663  7507                 jne 0x9de66c
// 009de665  8bcf                 mov ecx, edi
// 009de667  e8383efaff           call 0x9824a4
// 009de66c  5f                   pop edi
// 009de66d  5e                   pop esi
// 009de66e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
