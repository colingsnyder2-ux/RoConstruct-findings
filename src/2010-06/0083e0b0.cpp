// roc 2010-06 0083e0b0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083e0b0
//
// 0083e0b0  53                   push ebx
// 0083e0b1  55                   push ebp
// 0083e0b2  56                   push esi
// 0083e0b3  8bf1                 mov esi, ecx
// 0083e0b5  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0083e0b9  57                   push edi
// 0083e0ba  7462                 je 0x83e11e
// 0083e0bc  8d8e38010000         lea ecx, [esi + 0x138]
// 0083e0c2  e8f91afeff           call 0x81fbc0
// 0083e0c7  85c0                 test eax, eax
// 0083e0c9  7453                 je 0x83e11e
// 0083e0cb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0083e0cf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083e0d3  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083e0d7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083e0db  50                   push eax
// 0083e0dc  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083e0e0  51                   push ecx
// 0083e0e1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083e0e5  52                   push edx
// 0083e0e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0083e0ea  50                   push eax
// 0083e0eb  51                   push ecx
// 0083e0ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083e0f0  83ec10               sub esp, 0x10
// 0083e0f3  8bc4                 mov eax, esp
// 0083e0f5  8910                 mov dword ptr [eax], edx
// 0083e0f7  8b542448             mov edx, dword ptr [esp + 0x48]
// 0083e0fb  894804               mov dword ptr [eax + 4], ecx
// 0083e0fe  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0083e102  895008               mov dword ptr [eax + 8], edx
// 0083e105  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0083e109  52                   push edx
// 0083e10a  89480c               mov dword ptr [eax + 0xc], ecx
// 0083e10d  57                   push edi
// 0083e10e  8bce                 mov ecx, esi
// 0083e110  e8fb2df7ff           call 0x7b0f10
// 0083e115  8bc7                 mov eax, edi
// 0083e117  5f                   pop edi
// 0083e118  5e                   pop esi
// 0083e119  5d                   pop ebp
// 0083e11a  5b                   pop ebx
// 0083e11b  c22c00               ret 0x2c
// 0083e11e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0083e123  0f84df000000         je 0x83e208
// 0083e129  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0083e12d  85db                 test ebx, ebx
// 0083e12f  750e                 jne 0x83e13f
// 0083e131  6a33                 push 0x33
// 0083e133  8bce                 mov ecx, esi
// 0083e135  e8d6eff6ff           call 0x7ad110
// 0083e13a  50                   push eax
// 0083e13b  6a23                 push 0x23
// 0083e13d  eb44                 jmp 0x83e183
// 0083e13f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0083e143  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083e147  85d2                 test edx, edx
// 0083e149  740b                 je 0x83e156
// 0083e14b  85c9                 test ecx, ecx
// 0083e14d  7413                 je 0x83e162
// 0083e14f  b821000000           mov eax, 0x21
// 0083e154  eb11                 jmp 0x83e167
// 0083e156  85c9                 test ecx, ecx
// 0083e158  7508                 jne 0x83e162
// 0083e15a  8d4105               lea eax, [ecx + 5]
// 0083e15d  8d7934               lea edi, [ecx + 0x34]
// 0083e160  eb17                 jmp 0x83e179
// 0083e162  b81f000000           mov eax, 0x1f
// 0083e167  85d2                 test edx, edx
// 0083e169  7509                 jne 0x83e174
// 0083e16b  85c9                 test ecx, ecx
// 0083e16d  7505                 jne 0x83e174
// 0083e16f  8d7a34               lea edi, [edx + 0x34]
// 0083e172  eb05                 jmp 0x83e179
// 0083e174  bf20000000           mov edi, 0x20
// 0083e179  50                   push eax
// 0083e17a  8bce                 mov ecx, esi
// 0083e17c  e88feff6ff           call 0x7ad110
// 0083e181  50                   push eax
// 0083e182  57                   push edi
// 0083e183  8bce                 mov ecx, esi
// 0083e185  e886eff6ff           call 0x7ad110
// 0083e18a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083e18e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083e192  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0083e196  50                   push eax
// 0083e197  83ec10               sub esp, 0x10
// 0083e19a  8bc4                 mov eax, esp
// 0083e19c  8908                 mov dword ptr [eax], ecx
// 0083e19e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083e1a2  895004               mov dword ptr [eax + 4], edx
// 0083e1a5  8b542440             mov edx, dword ptr [esp + 0x40]
// 0083e1a9  894808               mov dword ptr [eax + 8], ecx
// 0083e1ac  55                   push ebp
// 0083e1ad  8bce                 mov ecx, esi
// 0083e1af  89500c               mov dword ptr [eax + 0xc], edx
// 0083e1b2  e86958f7ff           call 0x7b3a20
// 0083e1b7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0083e1bb  85c0                 test eax, eax
// 0083e1bd  7449                 je 0x83e208
// 0083e1bf  85db                 test ebx, ebx
// 0083e1c1  740a                 je 0x83e1cd
// 0083e1c3  83f802               cmp eax, 2
// 0083e1c6  b812000000           mov eax, 0x12
// 0083e1cb  7505                 jne 0x83e1d2
// 0083e1cd  b823000000           mov eax, 0x23
// 0083e1d2  50                   push eax
// 0083e1d3  8bce                 mov ecx, esi
// 0083e1d5  e836eff6ff           call 0x7ad110
// 0083e1da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083e1de  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083e1e2  50                   push eax
// 0083e1e3  50                   push eax
// 0083e1e4  83ec10               sub esp, 0x10
// 0083e1e7  8bc4                 mov eax, esp
// 0083e1e9  8d5104               lea edx, [ecx + 4]
// 0083e1ec  8910                 mov dword ptr [eax], edx
// 0083e1ee  8d5f04               lea ebx, [edi + 4]
// 0083e1f1  83c109               add ecx, 9
// 0083e1f4  895804               mov dword ptr [eax + 4], ebx
// 0083e1f7  894808               mov dword ptr [eax + 8], ecx
// 0083e1fa  83c709               add edi, 9
// 0083e1fd  55                   push ebp
// 0083e1fe  8bce                 mov ecx, esi
// 0083e200  89780c               mov dword ptr [eax + 0xc], edi
// 0083e203  e81858f7ff           call 0x7b3a20
// 0083e208  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083e20c  5f                   pop edi
// 0083e20d  5e                   pop esi
// 0083e20e  5d                   pop ebp
// 0083e20f  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0083e216  c7000d000000         mov dword ptr [eax], 0xd
// 0083e21c  5b                   pop ebx
// 0083e21d  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
