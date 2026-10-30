// roc 2012-06 009e12f0  unit: CXTPTabClientWnd  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e12f0
//
// 009e12f0  51                   push ecx
// 009e12f1  56                   push esi
// 009e12f2  57                   push edi
// 009e12f3  8bf1                 mov esi, ecx
// 009e12f5  33ff                 xor edi, edi
// 009e12f7  39be94000000         cmp dword ptr [esi + 0x94], edi
// 009e12fd  0f84c1010000         je 0x9e14c4
// 009e1303  8b06                 mov eax, dword ptr [esi]
// 009e1305  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 009e130b  ffd2                 call edx
// 009e130d  3bc7                 cmp eax, edi
// 009e130f  0f84af010000         je 0x9e14c4
// 009e1315  53                   push ebx
// 009e1316  8bc8                 mov ecx, eax
// 009e1318  e84315fcff           call 0x9a2860
// 009e131d  8b10                 mov edx, dword ptr [eax]
// 009e131f  8bc8                 mov ecx, eax
// 009e1321  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 009e1327  ffd0                 call eax
// 009e1329  8bd8                 mov ebx, eax
// 009e132b  895c240c             mov dword ptr [esp + 0xc], ebx
// 009e132f  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 009e1335  0f8488010000         je 0x9e14c3
// 009e133b  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1341  89793c               mov dword ptr [ecx + 0x3c], edi
// 009e1344  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e134a  897a38               mov dword ptr [edx + 0x38], edi
// 009e134d  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e1353  55                   push ebp
// 009e1354  8b2d6c3bb200         mov ebp, dword ptr [0xb23b6c]
// 009e135a  57                   push edi
// 009e135b  897834               mov dword ptr [eax + 0x34], edi
// 009e135e  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1364  57                   push edi
// 009e1365  897920               mov dword ptr [ecx + 0x20], edi
// 009e1368  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e136e  57                   push edi
// 009e136f  57                   push edi
// 009e1370  83c260               add edx, 0x60
// 009e1373  52                   push edx
// 009e1374  ffd5                 call ebp
// 009e1376  8d43ff               lea eax, [ebx - 1]
// 009e1379  8d5f01               lea ebx, [edi + 1]
// 009e137c  83f805               cmp eax, 5
// 009e137f  0f871f010000         ja 0x9e14a4
// 009e1385  ff2485c8149e00       jmp dword ptr [eax*4 + 0x9e14c8]
// 009e138c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1392  6a05                 push 5
// 009e1394  e8b7f30600           call 0xa50750
// 009e1399  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e139f  89583c               mov dword ptr [eax + 0x3c], ebx
// 009e13a2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e13a8  895938               mov dword ptr [ecx + 0x38], ebx
// 009e13ab  e900010000           jmp 0x9e14b0
// 009e13b0  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e13b6  897a30               mov dword ptr [edx + 0x30], edi
// 009e13b9  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e13bf  895834               mov dword ptr [eax + 0x34], ebx
// 009e13c2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e13c8  895920               mov dword ptr [ecx + 0x20], ebx
// 009e13cb  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e13d1  6a03                 push 3
// 009e13d3  e878f30600           call 0xa50750
// 009e13d8  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e13de  6a20                 push 0x20
// 009e13e0  e87bd70600           call 0xa4eb60
// 009e13e5  e9c6000000           jmp 0x9e14b0
// 009e13ea  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e13f0  897a30               mov dword ptr [edx + 0x30], edi
// 009e13f3  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e13f9  897834               mov dword ptr [eax + 0x34], edi
// 009e13fc  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1402  895920               mov dword ptr [ecx + 0x20], ebx
// 009e1405  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e140b  6a0a                 push 0xa
// 009e140d  e83ef30600           call 0xa50750
// 009e1412  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e1418  53                   push ebx
// 009e1419  6a03                 push 3
// 009e141b  6a02                 push 2
// 009e141d  6a03                 push 3
// 009e141f  83c260               add edx, 0x60
// 009e1422  52                   push edx
// 009e1423  ffd5                 call ebp
// 009e1425  e986000000           jmp 0x9e14b0
// 009e142a  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e1430  897830               mov dword ptr [eax + 0x30], edi
// 009e1433  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1439  895934               mov dword ptr [ecx + 0x34], ebx
// 009e143c  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e1442  895a20               mov dword ptr [edx + 0x20], ebx
// 009e1445  6a03                 push 3
// 009e1447  eb5c                 jmp 0x9e14a5
// 009e1449  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e144f  57                   push edi
// 009e1450  e8fbf20600           call 0xa50750
// 009e1455  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e145b  6a08                 push 8
// 009e145d  e8fed60600           call 0xa4eb60
// 009e1462  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e1468  895820               mov dword ptr [eax + 0x20], ebx
// 009e146b  eb43                 jmp 0x9e14b0
// 009e146d  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e1473  89593c               mov dword ptr [ecx + 0x3c], ebx
// 009e1476  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e147c  895a38               mov dword ptr [edx + 0x38], ebx
// 009e147f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009e1485  895830               mov dword ptr [eax + 0x30], ebx
// 009e1488  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e148e  6a03                 push 3
// 009e1490  e8bbf20600           call 0xa50750
// 009e1495  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e149b  6a10                 push 0x10
// 009e149d  e8bed60600           call 0xa4eb60
// 009e14a2  eb0c                 jmp 0x9e14b0
// 009e14a4  57                   push edi
// 009e14a5  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 009e14ab  e8a0f20600           call 0xa50750
// 009e14b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e14b4  898e90000000         mov dword ptr [esi + 0x90], ecx
// 009e14ba  53                   push ebx
// 009e14bb  8bce                 mov ecx, esi
// 009e14bd  e81ef3ffff           call 0x9e07e0
// 009e14c2  5d                   pop ebp
// 009e14c3  5b                   pop ebx
// 009e14c4  5f                   pop edi
// 009e14c5  5e                   pop esi
// 009e14c6  59                   pop ecx
// 009e14c7  c3                   ret 
// 009e14c8  8c13                 mov word ptr [ebx], ss
// 009e14ca  9e                   sahf 
// 009e14cb  002a                 add byte ptr [edx], ch
// 009e14cd  149e                 adc al, 0x9e
// 009e14cf  004914               add byte ptr [ecx + 0x14], cl
// 009e14d2  9e                   sahf 
// 009e14d3  006d14               add byte ptr [ebp + 0x14], ch
// 009e14d6  9e                   sahf 
// 009e14d7  00b0139e00ea         add byte ptr [eax - 0x15ff61ed], dh
// copied from an identical function in another client (function ?CheckCommandBarsTheme@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp