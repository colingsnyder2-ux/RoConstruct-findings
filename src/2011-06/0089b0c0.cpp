// roc 2011-06 0089b0c0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089b0c0
//
// 0089b0c0  53                   push ebx
// 0089b0c1  55                   push ebp
// 0089b0c2  56                   push esi
// 0089b0c3  8bf1                 mov esi, ecx
// 0089b0c5  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0089b0c9  57                   push edi
// 0089b0ca  7462                 je 0x89b12e
// 0089b0cc  8d8e38010000         lea ecx, [esi + 0x138]
// 0089b0d2  e8f921feff           call 0x87d2d0
// 0089b0d7  85c0                 test eax, eax
// 0089b0d9  7453                 je 0x89b12e
// 0089b0db  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089b0df  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089b0e3  8b542434             mov edx, dword ptr [esp + 0x34]
// 0089b0e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089b0eb  50                   push eax
// 0089b0ec  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089b0f0  51                   push ecx
// 0089b0f1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089b0f5  52                   push edx
// 0089b0f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089b0fa  50                   push eax
// 0089b0fb  51                   push ecx
// 0089b0fc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089b100  83ec10               sub esp, 0x10
// 0089b103  8bc4                 mov eax, esp
// 0089b105  8910                 mov dword ptr [eax], edx
// 0089b107  8b542448             mov edx, dword ptr [esp + 0x48]
// 0089b10b  894804               mov dword ptr [eax + 4], ecx
// 0089b10e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089b112  895008               mov dword ptr [eax + 8], edx
// 0089b115  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089b119  52                   push edx
// 0089b11a  89480c               mov dword ptr [eax + 0xc], ecx
// 0089b11d  57                   push edi
// 0089b11e  8bce                 mov ecx, esi
// 0089b120  e8fb81f7ff           call 0x813320
// 0089b125  8bc7                 mov eax, edi
// 0089b127  5f                   pop edi
// 0089b128  5e                   pop esi
// 0089b129  5d                   pop ebp
// 0089b12a  5b                   pop ebx
// 0089b12b  c22c00               ret 0x2c
// 0089b12e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0089b133  0f84df000000         je 0x89b218
// 0089b139  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0089b13d  85db                 test ebx, ebx
// 0089b13f  750e                 jne 0x89b14f
// 0089b141  6a33                 push 0x33
// 0089b143  8bce                 mov ecx, esi
// 0089b145  e86644f7ff           call 0x80f5b0
// 0089b14a  50                   push eax
// 0089b14b  6a23                 push 0x23
// 0089b14d  eb44                 jmp 0x89b193
// 0089b14f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089b153  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089b157  85d2                 test edx, edx
// 0089b159  740b                 je 0x89b166
// 0089b15b  85c9                 test ecx, ecx
// 0089b15d  7413                 je 0x89b172
// 0089b15f  b821000000           mov eax, 0x21
// 0089b164  eb11                 jmp 0x89b177
// 0089b166  85c9                 test ecx, ecx
// 0089b168  7508                 jne 0x89b172
// 0089b16a  8d4105               lea eax, [ecx + 5]
// 0089b16d  8d7934               lea edi, [ecx + 0x34]
// 0089b170  eb17                 jmp 0x89b189
// 0089b172  b81f000000           mov eax, 0x1f
// 0089b177  85d2                 test edx, edx
// 0089b179  7509                 jne 0x89b184
// 0089b17b  85c9                 test ecx, ecx
// 0089b17d  7505                 jne 0x89b184
// 0089b17f  8d7a34               lea edi, [edx + 0x34]
// 0089b182  eb05                 jmp 0x89b189
// 0089b184  bf20000000           mov edi, 0x20
// 0089b189  50                   push eax
// 0089b18a  8bce                 mov ecx, esi
// 0089b18c  e81f44f7ff           call 0x80f5b0
// 0089b191  50                   push eax
// 0089b192  57                   push edi
// 0089b193  8bce                 mov ecx, esi
// 0089b195  e81644f7ff           call 0x80f5b0
// 0089b19a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089b19e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0089b1a2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0089b1a6  50                   push eax
// 0089b1a7  83ec10               sub esp, 0x10
// 0089b1aa  8bc4                 mov eax, esp
// 0089b1ac  8908                 mov dword ptr [eax], ecx
// 0089b1ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089b1b2  895004               mov dword ptr [eax + 4], edx
// 0089b1b5  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089b1b9  894808               mov dword ptr [eax + 8], ecx
// 0089b1bc  55                   push ebp
// 0089b1bd  8bce                 mov ecx, esi
// 0089b1bf  89500c               mov dword ptr [eax + 0xc], edx
// 0089b1c2  e899acf7ff           call 0x815e60
// 0089b1c7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089b1cb  85c0                 test eax, eax
// 0089b1cd  7449                 je 0x89b218
// 0089b1cf  85db                 test ebx, ebx
// 0089b1d1  740a                 je 0x89b1dd
// 0089b1d3  83f802               cmp eax, 2
// 0089b1d6  b812000000           mov eax, 0x12
// 0089b1db  7505                 jne 0x89b1e2
// 0089b1dd  b823000000           mov eax, 0x23
// 0089b1e2  50                   push eax
// 0089b1e3  8bce                 mov ecx, esi
// 0089b1e5  e8c643f7ff           call 0x80f5b0
// 0089b1ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089b1ee  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089b1f2  50                   push eax
// 0089b1f3  50                   push eax
// 0089b1f4  83ec10               sub esp, 0x10
// 0089b1f7  8bc4                 mov eax, esp
// 0089b1f9  8d5104               lea edx, [ecx + 4]
// 0089b1fc  8910                 mov dword ptr [eax], edx
// 0089b1fe  8d5f04               lea ebx, [edi + 4]
// 0089b201  83c109               add ecx, 9
// 0089b204  895804               mov dword ptr [eax + 4], ebx
// 0089b207  894808               mov dword ptr [eax + 8], ecx
// 0089b20a  83c709               add edi, 9
// 0089b20d  55                   push ebp
// 0089b20e  8bce                 mov ecx, esi
// 0089b210  89780c               mov dword ptr [eax + 0xc], edi
// 0089b213  e848acf7ff           call 0x815e60
// 0089b218  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b21c  5f                   pop edi
// 0089b21d  5e                   pop esi
// 0089b21e  5d                   pop ebp
// 0089b21f  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0089b226  c7000d000000         mov dword ptr [eax], 0xd
// 0089b22c  5b                   pop ebx
// 0089b22d  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
