// roc 2011-06 00888e90  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888e90
//
// 00888e90  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 00888e95  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888e99  56                   push esi
// 00888e9a  57                   push edi
// 00888e9b  8bf1                 mov esi, ecx
// 00888e9d  7549                 jne 0x888ee8
// 00888e9f  85c0                 test eax, eax
// 00888ea1  7545                 jne 0x888ee8
// 00888ea3  39442420             cmp dword ptr [esp + 0x20], eax
// 00888ea7  750a                 jne 0x888eb3
// 00888ea9  39442424             cmp dword ptr [esp + 0x24], eax
// 00888ead  0f8426010000         je 0x888fd9
// 00888eb3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888eb7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00888ebb  6a0d                 push 0xd
// 00888ebd  6a0d                 push 0xd
// 00888ebf  83ec10               sub esp, 0x10
// 00888ec2  8bc4                 mov eax, esp
// 00888ec4  8908                 mov dword ptr [eax], ecx
// 00888ec6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888eca  895004               mov dword ptr [eax + 4], edx
// 00888ecd  8b542434             mov edx, dword ptr [esp + 0x34]
// 00888ed1  894808               mov dword ptr [eax + 8], ecx
// 00888ed4  89500c               mov dword ptr [eax + 0xc], edx
// 00888ed7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888edb  50                   push eax
// 00888edc  8bce                 mov ecx, esi
// 00888ede  e89d77f8ff           call 0x810680
// 00888ee3  5f                   pop edi
// 00888ee4  5e                   pop esi
// 00888ee5  c23000               ret 0x30
// 00888ee8  837c242800           cmp dword ptr [esp + 0x28], 0
// 00888eed  7577                 jne 0x888f66
// 00888eef  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00888ef3  85c0                 test eax, eax
// 00888ef5  742c                 je 0x888f23
// 00888ef7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888efb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00888eff  6a14                 push 0x14
// 00888f01  6a10                 push 0x10
// 00888f03  83ec10               sub esp, 0x10
// 00888f06  8bc4                 mov eax, esp
// 00888f08  8908                 mov dword ptr [eax], ecx
// 00888f0a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888f0e  895004               mov dword ptr [eax + 4], edx
// 00888f11  8b542434             mov edx, dword ptr [esp + 0x34]
// 00888f15  894808               mov dword ptr [eax + 8], ecx
// 00888f18  57                   push edi
// 00888f19  8bce                 mov ecx, esi
// 00888f1b  89500c               mov dword ptr [eax + 0xc], edx
// 00888f1e  e88d68f8ff           call 0x80f7b0
// 00888f23  8b442420             mov eax, dword ptr [esp + 0x20]
// 00888f27  83f802               cmp eax, 2
// 00888f2a  7409                 je 0x888f35
// 00888f2c  83f803               cmp eax, 3
// 00888f2f  0f85a4000000         jne 0x888fd9
// 00888f35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888f39  8b542414             mov edx, dword ptr [esp + 0x14]
// 00888f3d  6a14                 push 0x14
// 00888f3f  6a10                 push 0x10
// 00888f41  83ec10               sub esp, 0x10
// 00888f44  8bc4                 mov eax, esp
// 00888f46  8908                 mov dword ptr [eax], ecx
// 00888f48  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888f4c  895004               mov dword ptr [eax + 4], edx
// 00888f4f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00888f53  894808               mov dword ptr [eax + 8], ecx
// 00888f56  57                   push edi
// 00888f57  8bce                 mov ecx, esi
// 00888f59  89500c               mov dword ptr [eax + 0xc], edx
// 00888f5c  e84f68f8ff           call 0x80f7b0
// 00888f61  5f                   pop edi
// 00888f62  5e                   pop esi
// 00888f63  c23000               ret 0x30
// 00888f66  85c0                 test eax, eax
// 00888f68  741f                 je 0x888f89
// 00888f6a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00888f6f  7538                 jne 0x888fa9
// 00888f71  837c242400           cmp dword ptr [esp + 0x24], 0
// 00888f76  7531                 jne 0x888fa9
// 00888f78  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00888f7c  8d442410             lea eax, [esp + 0x10]
// 00888f80  50                   push eax
// 00888f81  57                   push edi
// 00888f82  e8b9ebffff           call 0x887b40
// 00888f87  ebac                 jmp 0x888f35
// 00888f89  837c243000           cmp dword ptr [esp + 0x30], 0
// 00888f8e  7519                 jne 0x888fa9
// 00888f90  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888f94  83f802               cmp eax, 2
// 00888f97  7410                 je 0x888fa9
// 00888f99  83f803               cmp eax, 3
// 00888f9c  740b                 je 0x888fa9
// 00888f9e  837c242000           cmp dword ptr [esp + 0x20], 0
// 00888fa3  7439                 je 0x888fde
// 00888fa5  85c0                 test eax, eax
// 00888fa7  7439                 je 0x888fe2
// 00888fa9  6a14                 push 0x14
// 00888fab  6a10                 push 0x10
// 00888fad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00888fb1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00888fb5  83ec10               sub esp, 0x10
// 00888fb8  8bc4                 mov eax, esp
// 00888fba  8908                 mov dword ptr [eax], ecx
// 00888fbc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00888fc0  895004               mov dword ptr [eax + 4], edx
// 00888fc3  8b542434             mov edx, dword ptr [esp + 0x34]
// 00888fc7  894808               mov dword ptr [eax + 8], ecx
// 00888fca  89500c               mov dword ptr [eax + 0xc], edx
// 00888fcd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888fd1  50                   push eax
// 00888fd2  8bce                 mov ecx, esi
// 00888fd4  e8d767f8ff           call 0x80f7b0
// 00888fd9  5f                   pop edi
// 00888fda  5e                   pop esi
// 00888fdb  c23000               ret 0x30
// 00888fde  85c0                 test eax, eax
// 00888fe0  74f7                 je 0x888fd9
// 00888fe2  6a10                 push 0x10
// 00888fe4  6a14                 push 0x14
// 00888fe6  ebc5                 jmp 0x888fad
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
