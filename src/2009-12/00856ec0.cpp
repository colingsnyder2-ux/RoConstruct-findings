// roc 2009-12 00856ec0  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856ec0
//
// 00856ec0  56                   push esi
// 00856ec1  8bf1                 mov esi, ecx
// 00856ec3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00856ec7  85c9                 test ecx, ecx
// 00856ec9  7472                 je 0x856f3d
// 00856ecb  57                   push edi
// 00856ecc  e8af95eeff           call 0x740480
// 00856ed1  50                   push eax
// 00856ed2  e853ccf9ff           call 0x7f3b2a
// 00856ed7  8bf8                 mov edi, eax
// 00856ed9  85ff                 test edi, edi
// 00856edb  745f                 je 0x856f3c
// 00856edd  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00856ee3  57                   push edi
// 00856ee4  e847f3ffff           call 0x856230
// 00856ee9  ff15eccb9800         call dword ptr [0x98cbec]
// 00856eef  50                   push eax
// 00856ef0  e835ccf9ff           call 0x7f3b2a
// 00856ef5  8bf0                 mov esi, eax
// 00856ef7  85f6                 test esi, esi
// 00856ef9  743a                 je 0x856f35
// 00856efb  837e2000             cmp dword ptr [esi + 0x20], 0
// 00856eff  7434                 je 0x856f35
// 00856f01  3bf7                 cmp esi, edi
// 00856f03  7437                 je 0x856f3c
// 00856f05  56                   push esi
// 00856f06  8bcf                 mov ecx, edi
// 00856f08  e893e8ffff           call 0x8557a0
// 00856f0d  85c0                 test eax, eax
// 00856f0f  752b                 jne 0x856f3c
// 00856f11  8bce                 mov ecx, esi
// 00856f13  e8c8f3faff           call 0x8062e0
// 00856f18  85c0                 test eax, eax
// 00856f1a  7419                 je 0x856f35
// 00856f1c  83782000             cmp dword ptr [eax + 0x20], 0
// 00856f20  7413                 je 0x856f35
// 00856f22  8bce                 mov ecx, esi
// 00856f24  e8b7f3faff           call 0x8062e0
// 00856f29  50                   push eax
// 00856f2a  8bcf                 mov ecx, edi
// 00856f2c  e86fe8ffff           call 0x8557a0
// 00856f31  85c0                 test eax, eax
// 00856f33  7507                 jne 0x856f3c
// 00856f35  8bcf                 mov ecx, edi
// 00856f37  e8c6ccf9ff           call 0x7f3c02
// 00856f3c  5f                   pop edi
// 00856f3d  5e                   pop esi
// 00856f3e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
