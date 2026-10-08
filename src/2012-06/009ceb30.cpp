// roc 2012-06 009ceb30  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ceb30
//
// 009ceb30  56                   push esi
// 009ceb31  8bf1                 mov esi, ecx
// 009ceb33  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 009ceb3a  57                   push edi
// 009ceb3b  0f8485000000         je 0x9cebc6
// 009ceb41  8b442414             mov eax, dword ptr [esp + 0x14]
// 009ceb45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ceb49  50                   push eax
// 009ceb4a  51                   push ecx
// 009ceb4b  8d96b4010000         lea edx, [esi + 0x1b4]
// 009ceb51  52                   push edx
// 009ceb52  ff15483bb200         call dword ptr [0xb23b48]
// 009ceb58  85c0                 test eax, eax
// 009ceb5a  746a                 je 0x9cebc6
// 009ceb5c  8bce                 mov ecx, esi
// 009ceb5e  e8bd41fcff           call 0x992d20
// 009ceb63  85c0                 test eax, eax
// 009ceb65  755f                 jne 0x9cebc6
// 009ceb67  e86638fbff           call 0x9823d2
// 009ceb6c  68867f0000           push 0x7f86
// 009ceb71  6a00                 push 0
// 009ceb73  ff159c3ab200         call dword ptr [0xb23a9c]
// 009ceb79  50                   push eax
// 009ceb7a  ff15783bb200         call dword ptr [0xb23b78]
// 009ceb80  68704e9800           push 0x984e70
// 009ceb85  b958a0e500           mov ecx, 0xe5a058
// 009ceb8a  e8efa90c00           call 0xa9957e
// 009ceb8f  8bf8                 mov edi, eax
// 009ceb91  85ff                 test edi, edi
// 009ceb93  7505                 jne 0x9ceb9a
// 009ceb95  e82638fbff           call 0x9823c0
// 009ceb9a  b801000000           mov eax, 1
// 009ceb9f  014704               add dword ptr [edi + 4], eax
// 009ceba2  8bce                 mov ecx, esi
// 009ceba4  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 009cebaa  e831edffff           call 0x9cd8e0
// 009cebaf  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 009cebb9  ff4f04               dec dword ptr [edi + 4]
// 009cebbc  e8bf9e0200           call 0x9f8a80
// 009cebc1  5f                   pop edi
// 009cebc2  5e                   pop esi
// 009cebc3  c20c00               ret 0xc
// 009cebc6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 009cebcd  7441                 je 0x9cec10
// 009cebcf  8d442410             lea eax, [esp + 0x10]
// 009cebd3  50                   push eax
// 009cebd4  8bce                 mov ecx, esi
// 009cebd6  e805efffff           call 0x9cdae0
// 009cebdb  85c0                 test eax, eax
// 009cebdd  7431                 je 0x9cec10
// 009cebdf  68704e9800           push 0x984e70
// 009cebe4  b958a0e500           mov ecx, 0xe5a058
// 009cebe9  e890a90c00           call 0xa9957e
// 009cebee  8bf8                 mov edi, eax
// 009cebf0  85ff                 test edi, edi
// 009cebf2  7505                 jne 0x9cebf9
// 009cebf4  e8c737fbff           call 0x9823c0
// 009cebf9  ff4704               inc dword ptr [edi + 4]
// 009cebfc  8bce                 mov ecx, esi
// 009cebfe  e85deaffff           call 0x9cd660
// 009cec03  ff4f04               dec dword ptr [edi + 4]
// 009cec06  e8759e0200           call 0x9f8a80
// 009cec0b  5f                   pop edi
// 009cec0c  5e                   pop esi
// 009cec0d  c20c00               ret 0xc
// 009cec10  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009cec14  8b542410             mov edx, dword ptr [esp + 0x10]
// 009cec18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009cec1c  51                   push ecx
// 009cec1d  52                   push edx
// 009cec1e  50                   push eax
// 009cec1f  8bce                 mov ecx, esi
// 009cec21  e87a72fcff           call 0x995ea0
// 009cec26  5f                   pop edi
// 009cec27  5e                   pop esi
// 009cec28  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
