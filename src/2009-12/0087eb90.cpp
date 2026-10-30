// roc 2009-12 0087eb90  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087eb90
//
// 0087eb90  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 0087eb95  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087eb99  56                   push esi
// 0087eb9a  57                   push edi
// 0087eb9b  8bf1                 mov esi, ecx
// 0087eb9d  7549                 jne 0x87ebe8
// 0087eb9f  85c0                 test eax, eax
// 0087eba1  7545                 jne 0x87ebe8
// 0087eba3  39442420             cmp dword ptr [esp + 0x20], eax
// 0087eba7  750a                 jne 0x87ebb3
// 0087eba9  39442424             cmp dword ptr [esp + 0x24], eax
// 0087ebad  0f8426010000         je 0x87ecd9
// 0087ebb3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087ebb7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ebbb  6a0d                 push 0xd
// 0087ebbd  6a0d                 push 0xd
// 0087ebbf  83ec10               sub esp, 0x10
// 0087ebc2  8bc4                 mov eax, esp
// 0087ebc4  8908                 mov dword ptr [eax], ecx
// 0087ebc6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087ebca  895004               mov dword ptr [eax + 4], edx
// 0087ebcd  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087ebd1  894808               mov dword ptr [eax + 8], ecx
// 0087ebd4  89500c               mov dword ptr [eax + 0xc], edx
// 0087ebd7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087ebdb  50                   push eax
// 0087ebdc  8bce                 mov ecx, esi
// 0087ebde  e87dfbf7ff           call 0x7fe760
// 0087ebe3  5f                   pop edi
// 0087ebe4  5e                   pop esi
// 0087ebe5  c23000               ret 0x30
// 0087ebe8  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087ebed  7577                 jne 0x87ec66
// 0087ebef  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087ebf3  85c0                 test eax, eax
// 0087ebf5  742c                 je 0x87ec23
// 0087ebf7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087ebfb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ebff  6a14                 push 0x14
// 0087ec01  6a10                 push 0x10
// 0087ec03  83ec10               sub esp, 0x10
// 0087ec06  8bc4                 mov eax, esp
// 0087ec08  8908                 mov dword ptr [eax], ecx
// 0087ec0a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087ec0e  895004               mov dword ptr [eax + 4], edx
// 0087ec11  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087ec15  894808               mov dword ptr [eax + 8], ecx
// 0087ec18  57                   push edi
// 0087ec19  8bce                 mov ecx, esi
// 0087ec1b  89500c               mov dword ptr [eax + 0xc], edx
// 0087ec1e  e81decf7ff           call 0x7fd840
// 0087ec23  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087ec27  83f802               cmp eax, 2
// 0087ec2a  7409                 je 0x87ec35
// 0087ec2c  83f803               cmp eax, 3
// 0087ec2f  0f85a4000000         jne 0x87ecd9
// 0087ec35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087ec39  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ec3d  6a14                 push 0x14
// 0087ec3f  6a10                 push 0x10
// 0087ec41  83ec10               sub esp, 0x10
// 0087ec44  8bc4                 mov eax, esp
// 0087ec46  8908                 mov dword ptr [eax], ecx
// 0087ec48  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087ec4c  895004               mov dword ptr [eax + 4], edx
// 0087ec4f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087ec53  894808               mov dword ptr [eax + 8], ecx
// 0087ec56  57                   push edi
// 0087ec57  8bce                 mov ecx, esi
// 0087ec59  89500c               mov dword ptr [eax + 0xc], edx
// 0087ec5c  e8dfebf7ff           call 0x7fd840
// 0087ec61  5f                   pop edi
// 0087ec62  5e                   pop esi
// 0087ec63  c23000               ret 0x30
// 0087ec66  85c0                 test eax, eax
// 0087ec68  741f                 je 0x87ec89
// 0087ec6a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0087ec6f  7538                 jne 0x87eca9
// 0087ec71  837c242400           cmp dword ptr [esp + 0x24], 0
// 0087ec76  7531                 jne 0x87eca9
// 0087ec78  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087ec7c  8d442410             lea eax, [esp + 0x10]
// 0087ec80  50                   push eax
// 0087ec81  57                   push edi
// 0087ec82  e8b9ebffff           call 0x87d840
// 0087ec87  ebac                 jmp 0x87ec35
// 0087ec89  837c243000           cmp dword ptr [esp + 0x30], 0
// 0087ec8e  7519                 jne 0x87eca9
// 0087ec90  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087ec94  83f802               cmp eax, 2
// 0087ec97  7410                 je 0x87eca9
// 0087ec99  83f803               cmp eax, 3
// 0087ec9c  740b                 je 0x87eca9
// 0087ec9e  837c242000           cmp dword ptr [esp + 0x20], 0
// 0087eca3  7439                 je 0x87ecde
// 0087eca5  85c0                 test eax, eax
// 0087eca7  7439                 je 0x87ece2
// 0087eca9  6a14                 push 0x14
// 0087ecab  6a10                 push 0x10
// 0087ecad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087ecb1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087ecb5  83ec10               sub esp, 0x10
// 0087ecb8  8bc4                 mov eax, esp
// 0087ecba  8908                 mov dword ptr [eax], ecx
// 0087ecbc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087ecc0  895004               mov dword ptr [eax + 4], edx
// 0087ecc3  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087ecc7  894808               mov dword ptr [eax + 8], ecx
// 0087ecca  89500c               mov dword ptr [eax + 0xc], edx
// 0087eccd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087ecd1  50                   push eax
// 0087ecd2  8bce                 mov ecx, esi
// 0087ecd4  e867ebf7ff           call 0x7fd840
// 0087ecd9  5f                   pop edi
// 0087ecda  5e                   pop esi
// 0087ecdb  c23000               ret 0x30
// 0087ecde  85c0                 test eax, eax
// 0087ece0  74f7                 je 0x87ecd9
// 0087ece2  6a10                 push 0x10
// 0087ece4  6a14                 push 0x14
// 0087ece6  ebc5                 jmp 0x87ecad
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
