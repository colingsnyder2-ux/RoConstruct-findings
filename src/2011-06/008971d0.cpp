// roc 2011-06 008971d0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008971d0
//
// 008971d0  51                   push ecx
// 008971d1  56                   push esi
// 008971d2  8bf1                 mov esi, ecx
// 008971d4  57                   push edi
// 008971d5  8dbe78040000         lea edi, [esi + 0x478]
// 008971db  8bcf                 mov ecx, edi
// 008971dd  e8ee60feff           call 0x87d2d0
// 008971e2  85c0                 test eax, eax
// 008971e4  753c                 jne 0x897222
// 008971e6  8b442428             mov eax, dword ptr [esp + 0x28]
// 008971ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008971ee  8b542414             mov edx, dword ptr [esp + 0x14]
// 008971f2  50                   push eax
// 008971f3  51                   push ecx
// 008971f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008971f8  83ec10               sub esp, 0x10
// 008971fb  8bc4                 mov eax, esp
// 008971fd  8910                 mov dword ptr [eax], edx
// 008971ff  8b542434             mov edx, dword ptr [esp + 0x34]
// 00897203  894804               mov dword ptr [eax + 4], ecx
// 00897206  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089720a  895008               mov dword ptr [eax + 8], edx
// 0089720d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00897211  89480c               mov dword ptr [eax + 0xc], ecx
// 00897214  52                   push edx
// 00897215  8bce                 mov ecx, esi
// 00897217  e854fbfeff           call 0x886d70
// 0089721c  5f                   pop edi
// 0089721d  5e                   pop esi
// 0089721e  59                   pop ecx
// 0089721f  c21c00               ret 0x1c
// 00897222  6a10                 push 0x10
// 00897224  8bce                 mov ecx, esi
// 00897226  e88583f7ff           call 0x80f5b0
// 0089722b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089722f  f7d9                 neg ecx
// 00897231  1bc9                 sbb ecx, ecx
// 00897233  89442408             mov dword ptr [esp + 8], eax
// 00897237  8d442408             lea eax, [esp + 8]
// 0089723b  50                   push eax
// 0089723c  83e1fd               and ecx, 0xfffffffd
// 0089723f  68d90e0000           push 0xed9
// 00897244  83c104               add ecx, 4
// 00897247  51                   push ecx
// 00897248  6a01                 push 1
// 0089724a  8bcf                 mov ecx, edi
// 0089724c  e81f5ffeff           call 0x87d170
// 00897251  8b442408             mov eax, dword ptr [esp + 8]
// 00897255  8b542414             mov edx, dword ptr [esp + 0x14]
// 00897259  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089725d  50                   push eax
// 0089725e  50                   push eax
// 0089725f  83ec10               sub esp, 0x10
// 00897262  8bc4                 mov eax, esp
// 00897264  8910                 mov dword ptr [eax], edx
// 00897266  8b542434             mov edx, dword ptr [esp + 0x34]
// 0089726a  894804               mov dword ptr [eax + 4], ecx
// 0089726d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00897271  895008               mov dword ptr [eax + 8], edx
// 00897274  8b542428             mov edx, dword ptr [esp + 0x28]
// 00897278  89480c               mov dword ptr [eax + 0xc], ecx
// 0089727b  52                   push edx
// 0089727c  8bce                 mov ecx, esi
// 0089727e  e82d85f7ff           call 0x80f7b0
// 00897283  5f                   pop edi
// 00897284  5e                   pop esi
// 00897285  59                   pop ecx
// 00897286  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
