// roc 2010-06 0080ae40  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080ae40
//
// 0080ae40  56                   push esi
// 0080ae41  8bf1                 mov esi, ecx
// 0080ae43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080ae47  85c9                 test ecx, ecx
// 0080ae49  7472                 je 0x80aebd
// 0080ae4b  57                   push edi
// 0080ae4c  e89f52ebff           call 0x6c00f0
// 0080ae51  50                   push eax
// 0080ae52  e813cef9ff           call 0x7a7c6a
// 0080ae57  8bf8                 mov edi, eax
// 0080ae59  85ff                 test edi, edi
// 0080ae5b  745f                 je 0x80aebc
// 0080ae5d  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0080ae63  57                   push edi
// 0080ae64  e8f7f2ffff           call 0x80a160
// 0080ae69  ff1580ba9e00         call dword ptr [0x9eba80]
// 0080ae6f  50                   push eax
// 0080ae70  e8f5cdf9ff           call 0x7a7c6a
// 0080ae75  8bf0                 mov esi, eax
// 0080ae77  85f6                 test esi, esi
// 0080ae79  743a                 je 0x80aeb5
// 0080ae7b  837e2000             cmp dword ptr [esi + 0x20], 0
// 0080ae7f  7434                 je 0x80aeb5
// 0080ae81  3bf7                 cmp esi, edi
// 0080ae83  7437                 je 0x80aebc
// 0080ae85  56                   push esi
// 0080ae86  8bcf                 mov ecx, edi
// 0080ae88  e843e8ffff           call 0x8096d0
// 0080ae8d  85c0                 test eax, eax
// 0080ae8f  752b                 jne 0x80aebc
// 0080ae91  8bce                 mov ecx, esi
// 0080ae93  e8b8f5faff           call 0x7ba450
// 0080ae98  85c0                 test eax, eax
// 0080ae9a  7419                 je 0x80aeb5
// 0080ae9c  83782000             cmp dword ptr [eax + 0x20], 0
// 0080aea0  7413                 je 0x80aeb5
// 0080aea2  8bce                 mov ecx, esi
// 0080aea4  e8a7f5faff           call 0x7ba450
// 0080aea9  50                   push eax
// 0080aeaa  8bcf                 mov ecx, edi
// 0080aeac  e81fe8ffff           call 0x8096d0
// 0080aeb1  85c0                 test eax, eax
// 0080aeb3  7507                 jne 0x80aebc
// 0080aeb5  8bcf                 mov ecx, edi
// 0080aeb7  e886cef9ff           call 0x7a7d42
// 0080aebc  5f                   pop edi
// 0080aebd  5e                   pop esi
// 0080aebe  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
