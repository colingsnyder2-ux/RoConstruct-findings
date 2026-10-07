// roc 2007-08 00639330  unit: CXTPControlComboBoxList  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639330
//
// 00639330  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00639334  53                   push ebx
// 00639335  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00639339  56                   push esi
// 0063933a  8bf1                 mov esi, ecx
// 0063933c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00639340  50                   push eax
// 00639341  51                   push ecx
// 00639342  53                   push ebx
// 00639343  8bce                 mov ecx, esi
// 00639345  e8d6da0000           call 0x646e20
// 0063934a  85c0                 test eax, eax
// 0063934c  7505                 jne 0x639353
// 0063934e  5e                   pop esi
// 0063934f  5b                   pop ebx
// 00639350  c20c00               ret 0xc
// 00639353  85db                 test ebx, ebx
// 00639355  57                   push edi
// 00639356  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0063935c  756a                 jne 0x6393c8
// 0063935e  6a08                 push 8
// 00639360  8bcf                 mov ecx, edi
// 00639362  e839310000           call 0x63c4a0
// 00639367  6880226300           push 0x632280
// 0063936c  b914938c00           mov ecx, 0x8c9314
// 00639371  e8f4ef0f00           call 0x73836a
// 00639376  85c0                 test eax, eax
// 00639378  7505                 jne 0x63937f
// 0063937a  e8a16bffff           call 0x62ff20
// 0063937f  834004ff             add dword ptr [eax + 4], -1
// 00639383  6a00                 push 0
// 00639385  8bce                 mov ecx, esi
// 00639387  e8be6bffff           call 0x62ff4a
// 0063938c  8b16                 mov edx, dword ptr [esi]
// 0063938e  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00639394  8bce                 mov ecx, esi
// 00639396  ffd0                 call eax
// 00639398  85c0                 test eax, eax
// 0063939a  7417                 je 0x6393b3
// 0063939c  8b16                 mov edx, dword ptr [esi]
// 0063939e  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006393a4  6a00                 push 0
// 006393a6  6aff                 push -1
// 006393a8  8bce                 mov ecx, esi
// 006393aa  ffd0                 call eax
// 006393ac  8bc8                 mov ecx, eax
// 006393ae  e8bdc60000           call 0x645a70
// 006393b3  5f                   pop edi
// 006393b4  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 006393be  5e                   pop esi
// 006393bf  b801000000           mov eax, 1
// 006393c4  5b                   pop ebx
// 006393c5  c20c00               ret 0xc
// 006393c8  6880226300           push 0x632280
// 006393cd  b914938c00           mov ecx, 0x8c9314
// 006393d2  e893ef0f00           call 0x73836a
// 006393d7  85c0                 test eax, eax
// 006393d9  7505                 jne 0x6393e0
// 006393db  e8406bffff           call 0x62ff20
// 006393e0  83400401             add dword ptr [eax + 4], 1
// 006393e4  8bcf                 mov ecx, edi
// 006393e6  e805f4ffff           call 0x6387f0
// 006393eb  6a07                 push 7
// 006393ed  8bcf                 mov ecx, edi
// 006393ef  e8ac300000           call 0x63c4a0
// 006393f4  5f                   pop edi
// 006393f5  5e                   pop esi
// 006393f6  b801000000           mov eax, 1
// 006393fb  5b                   pop ebx
// 006393fc  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?SetTrackingMode@CXTPControlComboBoxList@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
