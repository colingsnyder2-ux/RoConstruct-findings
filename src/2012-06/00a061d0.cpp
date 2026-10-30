// roc 2012-06 00a061d0  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a061d0
//
// 00a061d0  83ec60               sub esp, 0x60
// 00a061d3  53                   push ebx
// 00a061d4  55                   push ebp
// 00a061d5  56                   push esi
// 00a061d6  8b742474             mov esi, dword ptr [esp + 0x74]
// 00a061da  57                   push edi
// 00a061db  8bd9                 mov ebx, ecx
// 00a061dd  56                   push esi
// 00a061de  8d4c2424             lea ecx, [esp + 0x24]
// 00a061e2  e8b9effcff           call 0x9d51a0
// 00a061e7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a061eb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a061ef  8bc1                 mov eax, ecx
// 00a061f1  2bc2                 sub eax, edx
// 00a061f3  89442478             mov dword ptr [esp + 0x78], eax
// 00a061f7  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00a061fd  85c0                 test eax, eax
// 00a061ff  7e3a                 jle 0xa0623b
// 00a06201  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a06205  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a06209  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a0620d  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00a06213  89542430             mov dword ptr [esp + 0x30], edx
// 00a06217  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0621b  48                   dec eax
// 00a0621c  3bc1                 cmp eax, ecx
// 00a0621e  89542434             mov dword ptr [esp + 0x34], edx
// 00a06222  7c02                 jl 0xa06226
// 00a06224  8bc1                 mov eax, ecx
// 00a06226  8d542430             lea edx, [esp + 0x30]
// 00a0622a  52                   push edx
// 00a0622b  50                   push eax
// 00a0622c  8bce                 mov ecx, esi
// 00a0622e  e83d1ffeff           call 0x9e8170
// 00a06233  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a06237  89442478             mov dword ptr [esp + 0x78], eax
// 00a0623b  68a0c1c100           push 0xc1c1a0
// 00a06240  8bcb                 mov ecx, ebx
// 00a06242  e829160000           call 0xa07870
// 00a06247  8bf0                 mov esi, eax
// 00a06249  85f6                 test esi, esi
// 00a0624b  0f84af010000         je 0xa06400
// 00a06251  8bce                 mov ecx, esi
// 00a06253  e818f90500           call 0xa65b70
// 00a06258  8bce                 mov ecx, esi
// 00a0625a  8bf8                 mov edi, eax
// 00a0625c  e82ff90500           call 0xa65b90
// 00a06261  8be8                 mov ebp, eax
// 00a06263  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a06267  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a0626b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a0626f  897c2444             mov dword ptr [esp + 0x44], edi
// 00a06273  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00a06277  89442440             mov dword ptr [esp + 0x40], eax
// 00a0627b  8d4438fd             lea eax, [eax + edi - 3]
// 00a0627f  89442448             mov dword ptr [esp + 0x48], eax
// 00a06283  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a06287  83ec10               sub esp, 0x10
// 00a0628a  33ff                 xor edi, edi
// 00a0628c  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a06290  8bc4                 mov eax, esp
// 00a06292  8938                 mov dword ptr [eax], edi
// 00a06294  897804               mov dword ptr [eax + 4], edi
// 00a06297  897808               mov dword ptr [eax + 8], edi
// 00a0629a  89780c               mov dword ptr [eax + 0xc], edi
// 00a0629d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00a062a4  83ec10               sub esp, 0x10
// 00a062a7  8bc4                 mov eax, esp
// 00a062a9  33c9                 xor ecx, ecx
// 00a062ab  8908                 mov dword ptr [eax], ecx
// 00a062ad  33d2                 xor edx, edx
// 00a062af  895004               mov dword ptr [eax + 4], edx
// 00a062b2  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a062b6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a062ba  89542434             mov dword ptr [esp + 0x34], edx
// 00a062be  8d542460             lea edx, [esp + 0x60]
// 00a062c2  896808               mov dword ptr [eax + 8], ebp
// 00a062c5  52                   push edx
// 00a062c6  89480c               mov dword ptr [eax + 0xc], ecx
// 00a062c9  57                   push edi
// 00a062ca  8bce                 mov ecx, esi
// 00a062cc  896c2440             mov dword ptr [esp + 0x40], ebp
// 00a062d0  e8ebf00500           call 0xa653c0
// 00a062d5  688cc1c100           push 0xc1c18c
// 00a062da  8bcb                 mov ecx, ebx
// 00a062dc  e88f150000           call 0xa07870
// 00a062e1  8bf0                 mov esi, eax
// 00a062e3  8bce                 mov ecx, esi
// 00a062e5  e886f80500           call 0xa65b70
// 00a062ea  8bce                 mov ecx, esi
// 00a062ec  8be8                 mov ebp, eax
// 00a062ee  e89df80500           call 0xa65b90
// 00a062f3  55                   push ebp
// 00a062f4  8b2d6c3bb200         mov ebp, dword ptr [0xb23b6c]
// 00a062fa  50                   push eax
// 00a062fb  6a00                 push 0
// 00a062fd  6a00                 push 0
// 00a062ff  8d442420             lea eax, [esp + 0x20]
// 00a06303  50                   push eax
// 00a06304  ffd5                 call ebp
// 00a06306  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0630a  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a0630e  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a06312  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a06316  8bd1                 mov edx, ecx
// 00a06318  2b542410             sub edx, dword ptr [esp + 0x10]
// 00a0631c  89442450             mov dword ptr [esp + 0x50], eax
// 00a06320  03d0                 add edx, eax
// 00a06322  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a06326  83ec10               sub esp, 0x10
// 00a06329  89542468             mov dword ptr [esp + 0x68], edx
// 00a0632d  33d2                 xor edx, edx
// 00a0632f  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a06333  8bc4                 mov eax, esp
// 00a06335  8910                 mov dword ptr [eax], edx
// 00a06337  895004               mov dword ptr [eax + 4], edx
// 00a0633a  895008               mov dword ptr [eax + 8], edx
// 00a0633d  89500c               mov dword ptr [eax + 0xc], edx
// 00a06340  83ec10               sub esp, 0x10
// 00a06343  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a06347  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a0634b  8bc4                 mov eax, esp
// 00a0634d  8910                 mov dword ptr [eax], edx
// 00a0634f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a06353  895004               mov dword ptr [eax + 4], edx
// 00a06356  894808               mov dword ptr [eax + 8], ecx
// 00a06359  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0635d  8d542470             lea edx, [esp + 0x70]
// 00a06361  52                   push edx
// 00a06362  89480c               mov dword ptr [eax + 0xc], ecx
// 00a06365  57                   push edi
// 00a06366  8bce                 mov ecx, esi
// 00a06368  e853f00500           call 0xa653c0
// 00a0636d  687cc1c100           push 0xc1c17c
// 00a06372  8bcb                 mov ecx, ebx
// 00a06374  e8f7140000           call 0xa07870
// 00a06379  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0637d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a06381  8bf0                 mov esi, eax
// 00a06383  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a06387  89442460             mov dword ptr [esp + 0x60], eax
// 00a0638b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a0638f  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a06393  8bce                 mov ecx, esi
// 00a06395  89542468             mov dword ptr [esp + 0x68], edx
// 00a06399  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a0639d  e8cef70500           call 0xa65b70
// 00a063a2  8bce                 mov ecx, esi
// 00a063a4  8bd8                 mov ebx, eax
// 00a063a6  e8e5f70500           call 0xa65b90
// 00a063ab  53                   push ebx
// 00a063ac  50                   push eax
// 00a063ad  6a00                 push 0
// 00a063af  6a00                 push 0
// 00a063b1  8d4c2420             lea ecx, [esp + 0x20]
// 00a063b5  51                   push ecx
// 00a063b6  ffd5                 call ebp
// 00a063b8  83ec10               sub esp, 0x10
// 00a063bb  8bc4                 mov eax, esp
// 00a063bd  33c9                 xor ecx, ecx
// 00a063bf  8908                 mov dword ptr [eax], ecx
// 00a063c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a063c5  33d2                 xor edx, edx
// 00a063c7  895004               mov dword ptr [eax + 4], edx
// 00a063ca  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a063ce  33db                 xor ebx, ebx
// 00a063d0  895808               mov dword ptr [eax + 8], ebx
// 00a063d3  83ec10               sub esp, 0x10
// 00a063d6  33ed                 xor ebp, ebp
// 00a063d8  89680c               mov dword ptr [eax + 0xc], ebp
// 00a063db  8bc4                 mov eax, esp
// 00a063dd  8910                 mov dword ptr [eax], edx
// 00a063df  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a063e3  894804               mov dword ptr [eax + 4], ecx
// 00a063e6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a063ea  895008               mov dword ptr [eax + 8], edx
// 00a063ed  8d942480000000       lea edx, [esp + 0x80]
// 00a063f4  52                   push edx
// 00a063f5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a063f8  57                   push edi
// 00a063f9  8bce                 mov ecx, esi
// 00a063fb  e8c0ef0500           call 0xa653c0
// 00a06400  5f                   pop edi
// 00a06401  5e                   pop esi
// 00a06402  5d                   pop ebp
// 00a06403  5b                   pop ebx
// 00a06404  83c460               add esp, 0x60
// 00a06407  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
