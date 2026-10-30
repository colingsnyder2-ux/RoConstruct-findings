// roc 2010-06 007e6fc0  unit: CXTTreeBase  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e6fc0
//
// 007e6fc0  83ec20               sub esp, 0x20
// 007e6fc3  57                   push edi
// 007e6fc4  8bf9                 mov edi, ecx
// 007e6fc6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e6fc9  e8a20ffcff           call 0x7a7f70
// 007e6fce  8bcf                 mov ecx, edi
// 007e6fd0  e89be9ffff           call 0x7e5970
// 007e6fd5  84c0                 test al, al
// 007e6fd7  0f849c000000         je 0x7e7079
// 007e6fdd  837f1000             cmp dword ptr [edi + 0x10], 0
// 007e6fe1  0f8492000000         je 0x7e7079
// 007e6fe7  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e6fea  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e6fed  56                   push esi
// 007e6fee  6a00                 push 0
// 007e6ff0  6a00                 push 0
// 007e6ff2  680f110000           push 0x110f
// 007e6ff7  50                   push eax
// 007e6ff8  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e6ffe  50                   push eax
// 007e6fff  e8660cfcff           call 0x7a7c6a
// 007e7004  8bf0                 mov esi, eax
// 007e7006  85f6                 test esi, esi
// 007e7008  746e                 je 0x7e7078
// 007e700a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007e700d  51                   push ecx
// 007e700e  ff1528bc9e00         call dword ptr [0x9ebc28]
// 007e7014  85c0                 test eax, eax
// 007e7016  7460                 je 0x7e7078
// 007e7018  8b4620               mov eax, dword ptr [esi + 0x20]
// 007e701b  8d542418             lea edx, [esp + 0x18]
// 007e701f  52                   push edx
// 007e7020  50                   push eax
// 007e7021  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 007e7027  8b5710               mov edx, dword ptr [edi + 0x10]
// 007e702a  6a01                 push 1
// 007e702c  8d4c240c             lea ecx, [esp + 0xc]
// 007e7030  51                   push ecx
// 007e7031  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007e7034  52                   push edx
// 007e7035  e8fc12fcff           call 0x7a8336
// 007e703a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007e703e  8b542420             mov edx, dword ptr [esp + 0x20]
// 007e7042  2b542418             sub edx, dword ptr [esp + 0x18]
// 007e7046  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e704a  83e903               sub ecx, 3
// 007e704d  03d1                 add edx, ecx
// 007e704f  894c2408             mov dword ptr [esp + 8], ecx
// 007e7053  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e7057  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007e705b  48                   dec eax
// 007e705c  03c8                 add ecx, eax
// 007e705e  89542410             mov dword ptr [esp + 0x10], edx
// 007e7062  6a01                 push 1
// 007e7064  8d54240c             lea edx, [esp + 0xc]
// 007e7068  894c2418             mov dword ptr [esp + 0x18], ecx
// 007e706c  52                   push edx
// 007e706d  8bce                 mov ecx, esi
// 007e706f  89442414             mov dword ptr [esp + 0x14], eax
// 007e7073  e8887ec8ff           call 0x46ef00
// 007e7078  5e                   pop esi
// 007e7079  5f                   pop edi
// 007e707a  83c420               add esp, 0x20
// 007e707d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTTreeBase@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp