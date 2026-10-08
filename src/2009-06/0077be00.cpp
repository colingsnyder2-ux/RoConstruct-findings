// roc 2009-06 0077be00  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077be00
//
// 0077be00  56                   push esi
// 0077be01  8bf1                 mov esi, ecx
// 0077be03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077be07  85c9                 test ecx, ecx
// 0077be09  7472                 je 0x77be7d
// 0077be0b  57                   push edi
// 0077be0c  e8bf57f3ff           call 0x6b15d0
// 0077be11  50                   push eax
// 0077be12  e8ebcef9ff           call 0x718d02
// 0077be17  8bf8                 mov edi, eax
// 0077be19  85ff                 test edi, edi
// 0077be1b  745f                 je 0x77be7c
// 0077be1d  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0077be23  57                   push edi
// 0077be24  e8a7f3ffff           call 0x77b1d0
// 0077be29  ff1578ee8900         call dword ptr [0x89ee78]
// 0077be2f  50                   push eax
// 0077be30  e8cdcef9ff           call 0x718d02
// 0077be35  8bf0                 mov esi, eax
// 0077be37  85f6                 test esi, esi
// 0077be39  743a                 je 0x77be75
// 0077be3b  837e2000             cmp dword ptr [esi + 0x20], 0
// 0077be3f  7434                 je 0x77be75
// 0077be41  3bf7                 cmp esi, edi
// 0077be43  7437                 je 0x77be7c
// 0077be45  56                   push esi
// 0077be46  8bcf                 mov ecx, edi
// 0077be48  e8d3e8ffff           call 0x77a720
// 0077be4d  85c0                 test eax, eax
// 0077be4f  752b                 jne 0x77be7c
// 0077be51  8bce                 mov ecx, esi
// 0077be53  e82833fbff           call 0x72f180
// 0077be58  85c0                 test eax, eax
// 0077be5a  7419                 je 0x77be75
// 0077be5c  83782000             cmp dword ptr [eax + 0x20], 0
// 0077be60  7413                 je 0x77be75
// 0077be62  8bce                 mov ecx, esi
// 0077be64  e81733fbff           call 0x72f180
// 0077be69  50                   push eax
// 0077be6a  8bcf                 mov ecx, edi
// 0077be6c  e8afe8ffff           call 0x77a720
// 0077be71  85c0                 test eax, eax
// 0077be73  7507                 jne 0x77be7c
// 0077be75  8bcf                 mov ecx, edi
// 0077be77  e85ecff9ff           call 0x718dda
// 0077be7c  5f                   pop edi
// 0077be7d  5e                   pop esi
// 0077be7e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
