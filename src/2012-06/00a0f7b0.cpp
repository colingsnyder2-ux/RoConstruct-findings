// roc 2012-06 00a0f7b0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0f7b0
//
// 00a0f7b0  51                   push ecx
// 00a0f7b1  56                   push esi
// 00a0f7b2  8bf1                 mov esi, ecx
// 00a0f7b4  57                   push edi
// 00a0f7b5  8dbe78040000         lea edi, [esi + 0x478]
// 00a0f7bb  8bcf                 mov ecx, edi
// 00a0f7bd  e8ae60feff           call 0x9f5870
// 00a0f7c2  85c0                 test eax, eax
// 00a0f7c4  753c                 jne 0xa0f802
// 00a0f7c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a0f7ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0f7ce  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0f7d2  50                   push eax
// 00a0f7d3  51                   push ecx
// 00a0f7d4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0f7d8  83ec10               sub esp, 0x10
// 00a0f7db  8bc4                 mov eax, esp
// 00a0f7dd  8910                 mov dword ptr [eax], edx
// 00a0f7df  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a0f7e3  894804               mov dword ptr [eax + 4], ecx
// 00a0f7e6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0f7ea  895008               mov dword ptr [eax + 8], edx
// 00a0f7ed  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a0f7f1  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0f7f4  52                   push edx
// 00a0f7f5  8bce                 mov ecx, esi
// 00a0f7f7  e834fbfeff           call 0x9ff330
// 00a0f7fc  5f                   pop edi
// 00a0f7fd  5e                   pop esi
// 00a0f7fe  59                   pop ecx
// 00a0f7ff  c21c00               ret 0x1c
// 00a0f802  6a10                 push 0x10
// 00a0f804  8bce                 mov ecx, esi
// 00a0f806  e88580f7ff           call 0x987890
// 00a0f80b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0f80f  f7d9                 neg ecx
// 00a0f811  1bc9                 sbb ecx, ecx
// 00a0f813  89442408             mov dword ptr [esp + 8], eax
// 00a0f817  8d442408             lea eax, [esp + 8]
// 00a0f81b  50                   push eax
// 00a0f81c  83e1fd               and ecx, 0xfffffffd
// 00a0f81f  68d90e0000           push 0xed9
// 00a0f824  83c104               add ecx, 4
// 00a0f827  51                   push ecx
// 00a0f828  6a01                 push 1
// 00a0f82a  8bcf                 mov ecx, edi
// 00a0f82c  e8df5efeff           call 0x9f5710
// 00a0f831  8b442408             mov eax, dword ptr [esp + 8]
// 00a0f835  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0f839  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0f83d  50                   push eax
// 00a0f83e  50                   push eax
// 00a0f83f  83ec10               sub esp, 0x10
// 00a0f842  8bc4                 mov eax, esp
// 00a0f844  8910                 mov dword ptr [eax], edx
// 00a0f846  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a0f84a  894804               mov dword ptr [eax + 4], ecx
// 00a0f84d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0f851  895008               mov dword ptr [eax + 8], edx
// 00a0f854  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a0f858  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0f85b  52                   push edx
// 00a0f85c  8bce                 mov ecx, esi
// 00a0f85e  e82d82f7ff           call 0x987a90
// 00a0f863  5f                   pop edi
// 00a0f864  5e                   pop esi
// 00a0f865  59                   pop ecx
// 00a0f866  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
