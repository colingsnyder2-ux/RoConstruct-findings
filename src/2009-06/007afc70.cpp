// roc 2009-06 007afc70  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007afc70
//
// 007afc70  53                   push ebx
// 007afc71  55                   push ebp
// 007afc72  56                   push esi
// 007afc73  8bf1                 mov esi, ecx
// 007afc75  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 007afc79  57                   push edi
// 007afc7a  7462                 je 0x7afcde
// 007afc7c  8d8e38010000         lea ecx, [esi + 0x138]
// 007afc82  e8190ffeff           call 0x790ba0
// 007afc87  85c0                 test eax, eax
// 007afc89  7453                 je 0x7afcde
// 007afc8b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007afc8f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007afc93  8b542434             mov edx, dword ptr [esp + 0x34]
// 007afc97  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007afc9b  50                   push eax
// 007afc9c  8b442434             mov eax, dword ptr [esp + 0x34]
// 007afca0  51                   push ecx
// 007afca1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007afca5  52                   push edx
// 007afca6  8b542428             mov edx, dword ptr [esp + 0x28]
// 007afcaa  50                   push eax
// 007afcab  51                   push ecx
// 007afcac  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007afcb0  83ec10               sub esp, 0x10
// 007afcb3  8bc4                 mov eax, esp
// 007afcb5  8910                 mov dword ptr [eax], edx
// 007afcb7  8b542448             mov edx, dword ptr [esp + 0x48]
// 007afcbb  894804               mov dword ptr [eax + 4], ecx
// 007afcbe  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007afcc2  895008               mov dword ptr [eax + 8], edx
// 007afcc5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007afcc9  52                   push edx
// 007afcca  89480c               mov dword ptr [eax + 0xc], ecx
// 007afccd  57                   push edi
// 007afcce  8bce                 mov ecx, esi
// 007afcd0  e8bb67f7ff           call 0x726490
// 007afcd5  8bc7                 mov eax, edi
// 007afcd7  5f                   pop edi
// 007afcd8  5e                   pop esi
// 007afcd9  5d                   pop ebp
// 007afcda  5b                   pop ebx
// 007afcdb  c22c00               ret 0x2c
// 007afcde  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007afce3  0f84df000000         je 0x7afdc8
// 007afce9  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 007afced  85db                 test ebx, ebx
// 007afcef  750e                 jne 0x7afcff
// 007afcf1  6a33                 push 0x33
// 007afcf3  8bce                 mov ecx, esi
// 007afcf5  e8862af7ff           call 0x722780
// 007afcfa  50                   push eax
// 007afcfb  6a23                 push 0x23
// 007afcfd  eb44                 jmp 0x7afd43
// 007afcff  8b542430             mov edx, dword ptr [esp + 0x30]
// 007afd03  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007afd07  85d2                 test edx, edx
// 007afd09  740b                 je 0x7afd16
// 007afd0b  85c9                 test ecx, ecx
// 007afd0d  7413                 je 0x7afd22
// 007afd0f  b821000000           mov eax, 0x21
// 007afd14  eb11                 jmp 0x7afd27
// 007afd16  85c9                 test ecx, ecx
// 007afd18  7508                 jne 0x7afd22
// 007afd1a  8d4105               lea eax, [ecx + 5]
// 007afd1d  8d7934               lea edi, [ecx + 0x34]
// 007afd20  eb17                 jmp 0x7afd39
// 007afd22  b81f000000           mov eax, 0x1f
// 007afd27  85d2                 test edx, edx
// 007afd29  7509                 jne 0x7afd34
// 007afd2b  85c9                 test ecx, ecx
// 007afd2d  7505                 jne 0x7afd34
// 007afd2f  8d7a34               lea edi, [edx + 0x34]
// 007afd32  eb05                 jmp 0x7afd39
// 007afd34  bf20000000           mov edi, 0x20
// 007afd39  50                   push eax
// 007afd3a  8bce                 mov ecx, esi
// 007afd3c  e83f2af7ff           call 0x722780
// 007afd41  50                   push eax
// 007afd42  57                   push edi
// 007afd43  8bce                 mov ecx, esi
// 007afd45  e8362af7ff           call 0x722780
// 007afd4a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007afd4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 007afd52  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007afd56  50                   push eax
// 007afd57  83ec10               sub esp, 0x10
// 007afd5a  8bc4                 mov eax, esp
// 007afd5c  8908                 mov dword ptr [eax], ecx
// 007afd5e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007afd62  895004               mov dword ptr [eax + 4], edx
// 007afd65  8b542440             mov edx, dword ptr [esp + 0x40]
// 007afd69  894808               mov dword ptr [eax + 8], ecx
// 007afd6c  55                   push ebp
// 007afd6d  8bce                 mov ecx, esi
// 007afd6f  89500c               mov dword ptr [eax + 0xc], edx
// 007afd72  e82992f7ff           call 0x728fa0
// 007afd77  8b442438             mov eax, dword ptr [esp + 0x38]
// 007afd7b  85c0                 test eax, eax
// 007afd7d  7449                 je 0x7afdc8
// 007afd7f  85db                 test ebx, ebx
// 007afd81  740a                 je 0x7afd8d
// 007afd83  83f802               cmp eax, 2
// 007afd86  b812000000           mov eax, 0x12
// 007afd8b  7505                 jne 0x7afd92
// 007afd8d  b823000000           mov eax, 0x23
// 007afd92  50                   push eax
// 007afd93  8bce                 mov ecx, esi
// 007afd95  e8e629f7ff           call 0x722780
// 007afd9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007afd9e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007afda2  50                   push eax
// 007afda3  50                   push eax
// 007afda4  83ec10               sub esp, 0x10
// 007afda7  8bc4                 mov eax, esp
// 007afda9  8d5104               lea edx, [ecx + 4]
// 007afdac  8910                 mov dword ptr [eax], edx
// 007afdae  8d5f04               lea ebx, [edi + 4]
// 007afdb1  83c109               add ecx, 9
// 007afdb4  895804               mov dword ptr [eax + 4], ebx
// 007afdb7  894808               mov dword ptr [eax + 8], ecx
// 007afdba  83c709               add edi, 9
// 007afdbd  55                   push ebp
// 007afdbe  8bce                 mov ecx, esi
// 007afdc0  89780c               mov dword ptr [eax + 0xc], edi
// 007afdc3  e8d891f7ff           call 0x728fa0
// 007afdc8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007afdcc  5f                   pop edi
// 007afdcd  5e                   pop esi
// 007afdce  5d                   pop ebp
// 007afdcf  c740040d000000       mov dword ptr [eax + 4], 0xd
// 007afdd6  c7000d000000         mov dword ptr [eax], 0xd
// 007afddc  5b                   pop ebx
// 007afddd  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
