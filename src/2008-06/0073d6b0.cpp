// from server: 100% by auto
// roc 2008-06 0073d6b0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073d6b0
//
// 0073d6b0  51                   push ecx
// 0073d6b1  56                   push esi
// 0073d6b2  8bf1                 mov esi, ecx
// 0073d6b4  57                   push edi
// 0073d6b5  8dbe78040000         lea edi, [esi + 0x478]
// 0073d6bb  8bcf                 mov ecx, edi
// 0073d6bd  e86eadfdff           call 0x718430
// 0073d6c2  85c0                 test eax, eax
// 0073d6c4  753c                 jne 0x73d702
// 0073d6c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073d6ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073d6ce  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073d6d2  50                   push eax
// 0073d6d3  51                   push ecx
// 0073d6d4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073d6d8  83ec10               sub esp, 0x10
// 0073d6db  8bc4                 mov eax, esp
// 0073d6dd  8910                 mov dword ptr [eax], edx
// 0073d6df  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073d6e3  894804               mov dword ptr [eax + 4], ecx
// 0073d6e6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073d6ea  895008               mov dword ptr [eax + 8], edx
// 0073d6ed  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073d6f1  89480c               mov dword ptr [eax + 0xc], ecx
// 0073d6f4  52                   push edx
// 0073d6f5  8bce                 mov ecx, esi
// 0073d6f7  e8645dffff           call 0x733460
// 0073d6fc  5f                   pop edi
// 0073d6fd  5e                   pop esi
// 0073d6fe  59                   pop ecx
// 0073d6ff  c21c00               ret 0x1c
// 0073d702  6a10                 push 0x10
// 0073d704  8bce                 mov ecx, esi
// 0073d706  e86509f7ff           call 0x6ae070
// 0073d70b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073d70f  f7d9                 neg ecx
// 0073d711  1bc9                 sbb ecx, ecx
// 0073d713  89442408             mov dword ptr [esp + 8], eax
// 0073d717  8d442408             lea eax, [esp + 8]
// 0073d71b  50                   push eax
// 0073d71c  83e1fd               and ecx, 0xfffffffd
// 0073d71f  68d90e0000           push 0xed9
// 0073d724  83c104               add ecx, 4
// 0073d727  51                   push ecx
// 0073d728  6a01                 push 1
// 0073d72a  8bcf                 mov ecx, edi
// 0073d72c  e8efaafdff           call 0x718220
// 0073d731  8b442408             mov eax, dword ptr [esp + 8]
// 0073d735  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073d739  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073d73d  50                   push eax
// 0073d73e  50                   push eax
// 0073d73f  83ec10               sub esp, 0x10
// 0073d742  8bc4                 mov eax, esp
// 0073d744  8910                 mov dword ptr [eax], edx
// 0073d746  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073d74a  894804               mov dword ptr [eax + 4], ecx
// 0073d74d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073d751  895008               mov dword ptr [eax + 8], edx
// 0073d754  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073d758  89480c               mov dword ptr [eax + 0xc], ecx
// 0073d75b  52                   push edx
// 0073d75c  8bce                 mov ecx, esi
// 0073d75e  e80d0bf7ff           call 0x6ae270
// 0073d763  5f                   pop edi
// 0073d764  5e                   pop esi
// 0073d765  59                   pop ecx
// 0073d766  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
