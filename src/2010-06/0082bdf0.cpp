// roc 2010-06 0082bdf0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082bdf0
//
// 0082bdf0  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 0082bdf5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082bdf9  56                   push esi
// 0082bdfa  57                   push edi
// 0082bdfb  8bf1                 mov esi, ecx
// 0082bdfd  7549                 jne 0x82be48
// 0082bdff  85c0                 test eax, eax
// 0082be01  7545                 jne 0x82be48
// 0082be03  39442420             cmp dword ptr [esp + 0x20], eax
// 0082be07  750a                 jne 0x82be13
// 0082be09  39442424             cmp dword ptr [esp + 0x24], eax
// 0082be0d  0f8426010000         je 0x82bf39
// 0082be13  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082be17  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082be1b  6a0d                 push 0xd
// 0082be1d  6a0d                 push 0xd
// 0082be1f  83ec10               sub esp, 0x10
// 0082be22  8bc4                 mov eax, esp
// 0082be24  8908                 mov dword ptr [eax], ecx
// 0082be26  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082be2a  895004               mov dword ptr [eax + 4], edx
// 0082be2d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082be31  894808               mov dword ptr [eax + 8], ecx
// 0082be34  89500c               mov dword ptr [eax + 0xc], edx
// 0082be37  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082be3b  50                   push eax
// 0082be3c  8bce                 mov ecx, esi
// 0082be3e  e82d24f8ff           call 0x7ae270
// 0082be43  5f                   pop edi
// 0082be44  5e                   pop esi
// 0082be45  c23000               ret 0x30
// 0082be48  837c242800           cmp dword ptr [esp + 0x28], 0
// 0082be4d  7577                 jne 0x82bec6
// 0082be4f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082be53  85c0                 test eax, eax
// 0082be55  742c                 je 0x82be83
// 0082be57  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082be5b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082be5f  6a14                 push 0x14
// 0082be61  6a10                 push 0x10
// 0082be63  83ec10               sub esp, 0x10
// 0082be66  8bc4                 mov eax, esp
// 0082be68  8908                 mov dword ptr [eax], ecx
// 0082be6a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082be6e  895004               mov dword ptr [eax + 4], edx
// 0082be71  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082be75  894808               mov dword ptr [eax + 8], ecx
// 0082be78  57                   push edi
// 0082be79  8bce                 mov ecx, esi
// 0082be7b  89500c               mov dword ptr [eax + 0xc], edx
// 0082be7e  e88d14f8ff           call 0x7ad310
// 0082be83  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082be87  83f802               cmp eax, 2
// 0082be8a  7409                 je 0x82be95
// 0082be8c  83f803               cmp eax, 3
// 0082be8f  0f85a4000000         jne 0x82bf39
// 0082be95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082be99  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082be9d  6a14                 push 0x14
// 0082be9f  6a10                 push 0x10
// 0082bea1  83ec10               sub esp, 0x10
// 0082bea4  8bc4                 mov eax, esp
// 0082bea6  8908                 mov dword ptr [eax], ecx
// 0082bea8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082beac  895004               mov dword ptr [eax + 4], edx
// 0082beaf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082beb3  894808               mov dword ptr [eax + 8], ecx
// 0082beb6  57                   push edi
// 0082beb7  8bce                 mov ecx, esi
// 0082beb9  89500c               mov dword ptr [eax + 0xc], edx
// 0082bebc  e84f14f8ff           call 0x7ad310
// 0082bec1  5f                   pop edi
// 0082bec2  5e                   pop esi
// 0082bec3  c23000               ret 0x30
// 0082bec6  85c0                 test eax, eax
// 0082bec8  741f                 je 0x82bee9
// 0082beca  837c242000           cmp dword ptr [esp + 0x20], 0
// 0082becf  7538                 jne 0x82bf09
// 0082bed1  837c242400           cmp dword ptr [esp + 0x24], 0
// 0082bed6  7531                 jne 0x82bf09
// 0082bed8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082bedc  8d442410             lea eax, [esp + 0x10]
// 0082bee0  50                   push eax
// 0082bee1  57                   push edi
// 0082bee2  e8b9ebffff           call 0x82aaa0
// 0082bee7  ebac                 jmp 0x82be95
// 0082bee9  837c243000           cmp dword ptr [esp + 0x30], 0
// 0082beee  7519                 jne 0x82bf09
// 0082bef0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082bef4  83f802               cmp eax, 2
// 0082bef7  7410                 je 0x82bf09
// 0082bef9  83f803               cmp eax, 3
// 0082befc  740b                 je 0x82bf09
// 0082befe  837c242000           cmp dword ptr [esp + 0x20], 0
// 0082bf03  7439                 je 0x82bf3e
// 0082bf05  85c0                 test eax, eax
// 0082bf07  7439                 je 0x82bf42
// 0082bf09  6a14                 push 0x14
// 0082bf0b  6a10                 push 0x10
// 0082bf0d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082bf11  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082bf15  83ec10               sub esp, 0x10
// 0082bf18  8bc4                 mov eax, esp
// 0082bf1a  8908                 mov dword ptr [eax], ecx
// 0082bf1c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082bf20  895004               mov dword ptr [eax + 4], edx
// 0082bf23  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082bf27  894808               mov dword ptr [eax + 8], ecx
// 0082bf2a  89500c               mov dword ptr [eax + 0xc], edx
// 0082bf2d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0082bf31  50                   push eax
// 0082bf32  8bce                 mov ecx, esi
// 0082bf34  e8d713f8ff           call 0x7ad310
// 0082bf39  5f                   pop edi
// 0082bf3a  5e                   pop esi
// 0082bf3b  c23000               ret 0x30
// 0082bf3e  85c0                 test eax, eax
// 0082bf40  74f7                 je 0x82bf39
// 0082bf42  6a10                 push 0x10
// 0082bf44  6a14                 push 0x14
// 0082bf46  ebc5                 jmp 0x82bf0d
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
