// roc 2012-06 00a01450  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01450
//
// 00a01450  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 00a01455  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a01459  56                   push esi
// 00a0145a  57                   push edi
// 00a0145b  8bf1                 mov esi, ecx
// 00a0145d  7549                 jne 0xa014a8
// 00a0145f  85c0                 test eax, eax
// 00a01461  7545                 jne 0xa014a8
// 00a01463  39442420             cmp dword ptr [esp + 0x20], eax
// 00a01467  750a                 jne 0xa01473
// 00a01469  39442424             cmp dword ptr [esp + 0x24], eax
// 00a0146d  0f8426010000         je 0xa01599
// 00a01473  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a01477  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0147b  6a0d                 push 0xd
// 00a0147d  6a0d                 push 0xd
// 00a0147f  83ec10               sub esp, 0x10
// 00a01482  8bc4                 mov eax, esp
// 00a01484  8908                 mov dword ptr [eax], ecx
// 00a01486  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0148a  895004               mov dword ptr [eax + 4], edx
// 00a0148d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a01491  894808               mov dword ptr [eax + 8], ecx
// 00a01494  89500c               mov dword ptr [eax + 0xc], edx
// 00a01497  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a0149b  50                   push eax
// 00a0149c  8bce                 mov ecx, esi
// 00a0149e  e8cd74f8ff           call 0x988970
// 00a014a3  5f                   pop edi
// 00a014a4  5e                   pop esi
// 00a014a5  c23000               ret 0x30
// 00a014a8  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a014ad  7577                 jne 0xa01526
// 00a014af  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a014b3  85c0                 test eax, eax
// 00a014b5  742c                 je 0xa014e3
// 00a014b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a014bb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a014bf  6a14                 push 0x14
// 00a014c1  6a10                 push 0x10
// 00a014c3  83ec10               sub esp, 0x10
// 00a014c6  8bc4                 mov eax, esp
// 00a014c8  8908                 mov dword ptr [eax], ecx
// 00a014ca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a014ce  895004               mov dword ptr [eax + 4], edx
// 00a014d1  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a014d5  894808               mov dword ptr [eax + 8], ecx
// 00a014d8  57                   push edi
// 00a014d9  8bce                 mov ecx, esi
// 00a014db  89500c               mov dword ptr [eax + 0xc], edx
// 00a014de  e8ad65f8ff           call 0x987a90
// 00a014e3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a014e7  83f802               cmp eax, 2
// 00a014ea  7409                 je 0xa014f5
// 00a014ec  83f803               cmp eax, 3
// 00a014ef  0f85a4000000         jne 0xa01599
// 00a014f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a014f9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a014fd  6a14                 push 0x14
// 00a014ff  6a10                 push 0x10
// 00a01501  83ec10               sub esp, 0x10
// 00a01504  8bc4                 mov eax, esp
// 00a01506  8908                 mov dword ptr [eax], ecx
// 00a01508  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0150c  895004               mov dword ptr [eax + 4], edx
// 00a0150f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a01513  894808               mov dword ptr [eax + 8], ecx
// 00a01516  57                   push edi
// 00a01517  8bce                 mov ecx, esi
// 00a01519  89500c               mov dword ptr [eax + 0xc], edx
// 00a0151c  e86f65f8ff           call 0x987a90
// 00a01521  5f                   pop edi
// 00a01522  5e                   pop esi
// 00a01523  c23000               ret 0x30
// 00a01526  85c0                 test eax, eax
// 00a01528  741f                 je 0xa01549
// 00a0152a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a0152f  7538                 jne 0xa01569
// 00a01531  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a01536  7531                 jne 0xa01569
// 00a01538  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a0153c  8d442410             lea eax, [esp + 0x10]
// 00a01540  50                   push eax
// 00a01541  57                   push edi
// 00a01542  e8b9ebffff           call 0xa00100
// 00a01547  ebac                 jmp 0xa014f5
// 00a01549  837c243000           cmp dword ptr [esp + 0x30], 0
// 00a0154e  7519                 jne 0xa01569
// 00a01550  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a01554  83f802               cmp eax, 2
// 00a01557  7410                 je 0xa01569
// 00a01559  83f803               cmp eax, 3
// 00a0155c  740b                 je 0xa01569
// 00a0155e  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a01563  7439                 je 0xa0159e
// 00a01565  85c0                 test eax, eax
// 00a01567  7439                 je 0xa015a2
// 00a01569  6a14                 push 0x14
// 00a0156b  6a10                 push 0x10
// 00a0156d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a01571  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a01575  83ec10               sub esp, 0x10
// 00a01578  8bc4                 mov eax, esp
// 00a0157a  8908                 mov dword ptr [eax], ecx
// 00a0157c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a01580  895004               mov dword ptr [eax + 4], edx
// 00a01583  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a01587  894808               mov dword ptr [eax + 8], ecx
// 00a0158a  89500c               mov dword ptr [eax + 0xc], edx
// 00a0158d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a01591  50                   push eax
// 00a01592  8bce                 mov ecx, esi
// 00a01594  e8f764f8ff           call 0x987a90
// 00a01599  5f                   pop edi
// 00a0159a  5e                   pop esi
// 00a0159b  c23000               ret 0x30
// 00a0159e  85c0                 test eax, eax
// 00a015a0  74f7                 je 0xa01599
// 00a015a2  6a10                 push 0x10
// 00a015a4  6a14                 push 0x14
// 00a015a6  ebc5                 jmp 0xa0156d
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
