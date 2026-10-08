// roc 2012-06 00a136c0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a136c0
//
// 00a136c0  53                   push ebx
// 00a136c1  55                   push ebp
// 00a136c2  56                   push esi
// 00a136c3  8bf1                 mov esi, ecx
// 00a136c5  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00a136c9  57                   push edi
// 00a136ca  7462                 je 0xa1372e
// 00a136cc  8d8e38010000         lea ecx, [esi + 0x138]
// 00a136d2  e89921feff           call 0x9f5870
// 00a136d7  85c0                 test eax, eax
// 00a136d9  7453                 je 0xa1372e
// 00a136db  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a136df  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a136e3  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a136e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a136eb  50                   push eax
// 00a136ec  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a136f0  51                   push ecx
// 00a136f1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a136f5  52                   push edx
// 00a136f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a136fa  50                   push eax
// 00a136fb  51                   push ecx
// 00a136fc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a13700  83ec10               sub esp, 0x10
// 00a13703  8bc4                 mov eax, esp
// 00a13705  8910                 mov dword ptr [eax], edx
// 00a13707  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a1370b  894804               mov dword ptr [eax + 4], ecx
// 00a1370e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a13712  895008               mov dword ptr [eax + 8], edx
// 00a13715  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a13719  52                   push edx
// 00a1371a  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1371d  57                   push edi
// 00a1371e  8bce                 mov ecx, esi
// 00a13720  e8eb7ef7ff           call 0x98b610
// 00a13725  8bc7                 mov eax, edi
// 00a13727  5f                   pop edi
// 00a13728  5e                   pop esi
// 00a13729  5d                   pop ebp
// 00a1372a  5b                   pop ebx
// 00a1372b  c22c00               ret 0x2c
// 00a1372e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00a13733  0f84df000000         je 0xa13818
// 00a13739  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00a1373d  85db                 test ebx, ebx
// 00a1373f  750e                 jne 0xa1374f
// 00a13741  6a33                 push 0x33
// 00a13743  8bce                 mov ecx, esi
// 00a13745  e84641f7ff           call 0x987890
// 00a1374a  50                   push eax
// 00a1374b  6a23                 push 0x23
// 00a1374d  eb44                 jmp 0xa13793
// 00a1374f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a13753  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a13757  85d2                 test edx, edx
// 00a13759  740b                 je 0xa13766
// 00a1375b  85c9                 test ecx, ecx
// 00a1375d  7413                 je 0xa13772
// 00a1375f  b821000000           mov eax, 0x21
// 00a13764  eb11                 jmp 0xa13777
// 00a13766  85c9                 test ecx, ecx
// 00a13768  7508                 jne 0xa13772
// 00a1376a  8d4105               lea eax, [ecx + 5]
// 00a1376d  8d7934               lea edi, [ecx + 0x34]
// 00a13770  eb17                 jmp 0xa13789
// 00a13772  b81f000000           mov eax, 0x1f
// 00a13777  85d2                 test edx, edx
// 00a13779  7509                 jne 0xa13784
// 00a1377b  85c9                 test ecx, ecx
// 00a1377d  7505                 jne 0xa13784
// 00a1377f  8d7a34               lea edi, [edx + 0x34]
// 00a13782  eb05                 jmp 0xa13789
// 00a13784  bf20000000           mov edi, 0x20
// 00a13789  50                   push eax
// 00a1378a  8bce                 mov ecx, esi
// 00a1378c  e8ff40f7ff           call 0x987890
// 00a13791  50                   push eax
// 00a13792  57                   push edi
// 00a13793  8bce                 mov ecx, esi
// 00a13795  e8f640f7ff           call 0x987890
// 00a1379a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a1379e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a137a2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a137a6  50                   push eax
// 00a137a7  83ec10               sub esp, 0x10
// 00a137aa  8bc4                 mov eax, esp
// 00a137ac  8908                 mov dword ptr [eax], ecx
// 00a137ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a137b2  895004               mov dword ptr [eax + 4], edx
// 00a137b5  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a137b9  894808               mov dword ptr [eax + 8], ecx
// 00a137bc  55                   push ebp
// 00a137bd  8bce                 mov ecx, esi
// 00a137bf  89500c               mov dword ptr [eax + 0xc], edx
// 00a137c2  e859a9f7ff           call 0x98e120
// 00a137c7  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a137cb  85c0                 test eax, eax
// 00a137cd  7449                 je 0xa13818
// 00a137cf  85db                 test ebx, ebx
// 00a137d1  740a                 je 0xa137dd
// 00a137d3  83f802               cmp eax, 2
// 00a137d6  b812000000           mov eax, 0x12
// 00a137db  7505                 jne 0xa137e2
// 00a137dd  b823000000           mov eax, 0x23
// 00a137e2  50                   push eax
// 00a137e3  8bce                 mov ecx, esi
// 00a137e5  e8a640f7ff           call 0x987890
// 00a137ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a137ee  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a137f2  50                   push eax
// 00a137f3  50                   push eax
// 00a137f4  83ec10               sub esp, 0x10
// 00a137f7  8bc4                 mov eax, esp
// 00a137f9  8d5104               lea edx, [ecx + 4]
// 00a137fc  8910                 mov dword ptr [eax], edx
// 00a137fe  8d5f04               lea ebx, [edi + 4]
// 00a13801  83c109               add ecx, 9
// 00a13804  895804               mov dword ptr [eax + 4], ebx
// 00a13807  894808               mov dword ptr [eax + 8], ecx
// 00a1380a  83c709               add edi, 9
// 00a1380d  55                   push ebp
// 00a1380e  8bce                 mov ecx, esi
// 00a13810  89780c               mov dword ptr [eax + 0xc], edi
// 00a13813  e808a9f7ff           call 0x98e120
// 00a13818  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a1381c  5f                   pop edi
// 00a1381d  5e                   pop esi
// 00a1381e  5d                   pop ebp
// 00a1381f  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00a13826  c7000d000000         mov dword ptr [eax], 0xd
// 00a1382c  5b                   pop ebx
// 00a1382d  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
