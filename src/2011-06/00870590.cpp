// roc 2011-06 00870590  unit: CXTSplitterWnd  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870590
//
// 00870590  56                   push esi
// 00870591  8bf1                 mov esi, ecx
// 00870593  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0087059a  751a                 jne 0x8705b6
// 0087059c  8b442410             mov eax, dword ptr [esp + 0x10]
// 008705a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008705a4  8b542408             mov edx, dword ptr [esp + 8]
// 008705a8  50                   push eax
// 008705a9  51                   push ecx
// 008705aa  52                   push edx
// 008705ab  8bce                 mov ecx, esi
// 008705ad  e84ec61500           call 0x9ccc00
// 008705b2  5e                   pop esi
// 008705b3  c20c00               ret 0xc
// 008705b6  ff15381ba400         call dword ptr [0xa41b38]
// 008705bc  50                   push eax
// 008705bd  e8669df9ff           call 0x80a328
// 008705c2  3bc6                 cmp eax, esi
// 008705c4  740e                 je 0x8705d4
// 008705c6  8b06                 mov eax, dword ptr [esi]
// 008705c8  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 008705ce  6a00                 push 0
// 008705d0  8bce                 mov ecx, esi
// 008705d2  ffd2                 call edx
// 008705d4  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008705db  0f84e1010000         je 0x8707c2
// 008705e1  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008705e7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008705eb  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 008705f1  53                   push ebx
// 008705f2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008705f6  03d8                 add ebx, eax
// 008705f8  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008705fe  03d1                 add edx, ecx
// 00870600  3bd0                 cmp edx, eax
// 00870602  57                   push edi
// 00870603  895c2414             mov dword ptr [esp + 0x14], ebx
// 00870607  89542418             mov dword ptr [esp + 0x18], edx
// 0087060b  7c0a                 jl 0x870617
// 0087060d  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00870613  3bd0                 cmp edx, eax
// 00870615  7e06                 jle 0x87061d
// 00870617  8bd0                 mov edx, eax
// 00870619  89542418             mov dword ptr [esp + 0x18], edx
// 0087061d  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00870623  3bd8                 cmp ebx, eax
// 00870625  7c0a                 jl 0x870631
// 00870627  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0087062d  3bd8                 cmp ebx, eax
// 0087062f  7e06                 jle 0x870637
// 00870631  8bd8                 mov ebx, eax
// 00870633  895c2414             mov dword ptr [esp + 0x14], ebx
// 00870637  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0087063d  83f801               cmp eax, 1
// 00870640  0f84d5000000         je 0x87071b
// 00870646  83f865               cmp eax, 0x65
// 00870649  7c09                 jl 0x870654
// 0087064b  83f873               cmp eax, 0x73
// 0087064e  0f8ec7000000         jle 0x87071b
// 00870654  83f802               cmp eax, 2
// 00870657  0f8498000000         je 0x8706f5
// 0087065d  3dc9000000           cmp eax, 0xc9
// 00870662  7c0b                 jl 0x87066f
// 00870664  3dd7000000           cmp eax, 0xd7
// 00870669  0f8e86000000         jle 0x8706f5
// 0087066f  83f803               cmp eax, 3
// 00870672  7416                 je 0x87068a
// 00870674  3d2d010000           cmp eax, 0x12d
// 00870679  0f8cd8000000         jl 0x870757
// 0087067f  3d0d020000           cmp eax, 0x20d
// 00870684  0f8fcd000000         jg 0x870757
// 0087068a  8b1d601ca400         mov ebx, dword ptr [0xa41c60]
// 00870690  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00870696  7430                 je 0x8706c8
// 00870698  8b06                 mov eax, dword ptr [esi]
// 0087069a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008706a0  8dbeb8000000         lea edi, [esi + 0xb8]
// 008706a6  57                   push edi
// 008706a7  8bce                 mov ecx, esi
// 008706a9  ffd2                 call edx
// 008706ab  8b442418             mov eax, dword ptr [esp + 0x18]
// 008706af  2b86bc000000         sub eax, dword ptr [esi + 0xbc]
// 008706b5  50                   push eax
// 008706b6  6a00                 push 0
// 008706b8  57                   push edi
// 008706b9  ffd3                 call ebx
// 008706bb  8b16                 mov edx, dword ptr [esi]
// 008706bd  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008706c3  57                   push edi
// 008706c4  8bce                 mov ecx, esi
// 008706c6  ffd0                 call eax
// 008706c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008706cc  398ec8000000         cmp dword ptr [esi + 0xc8], ecx
// 008706d2  8dbec8000000         lea edi, [esi + 0xc8]
// 008706d8  747d                 je 0x870757
// 008706da  8b16                 mov edx, dword ptr [esi]
// 008706dc  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008706e2  57                   push edi
// 008706e3  8bce                 mov ecx, esi
// 008706e5  ffd0                 call eax
// 008706e7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008706eb  2b0f                 sub ecx, dword ptr [edi]
// 008706ed  6a00                 push 0
// 008706ef  51                   push ecx
// 008706f0  57                   push edi
// 008706f1  ffd3                 call ebx
// 008706f3  eb55                 jmp 0x87074a
// 008706f5  399eb8000000         cmp dword ptr [esi + 0xb8], ebx
// 008706fb  8dbeb8000000         lea edi, [esi + 0xb8]
// 00870701  7454                 je 0x870757
// 00870703  8b16                 mov edx, dword ptr [esi]
// 00870705  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0087070b  57                   push edi
// 0087070c  8bce                 mov ecx, esi
// 0087070e  ffd0                 call eax
// 00870710  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00870714  2b0f                 sub ecx, dword ptr [edi]
// 00870716  6a00                 push 0
// 00870718  51                   push ecx
// 00870719  eb28                 jmp 0x870743
// 0087071b  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00870721  7434                 je 0x870757
// 00870723  8b16                 mov edx, dword ptr [esi]
// 00870725  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0087072b  8dbeb8000000         lea edi, [esi + 0xb8]
// 00870731  57                   push edi
// 00870732  8bce                 mov ecx, esi
// 00870734  ffd0                 call eax
// 00870736  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087073a  2b8ebc000000         sub ecx, dword ptr [esi + 0xbc]
// 00870740  51                   push ecx
// 00870741  6a00                 push 0
// 00870743  57                   push edi
// 00870744  ff15601ca400         call dword ptr [0xa41c60]
// 0087074a  8b16                 mov edx, dword ptr [esi]
// 0087074c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00870752  57                   push edi
// 00870753  8bce                 mov ecx, esi
// 00870755  ffd0                 call eax
// 00870757  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087075b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087075f  51                   push ecx
// 00870760  52                   push edx
// 00870761  6a01                 push 1
// 00870763  8bce                 mov ecx, esi
// 00870765  e8f6fdffff           call 0x870560
// 0087076a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087076e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00870772  50                   push eax
// 00870773  51                   push ecx
// 00870774  6a01                 push 1
// 00870776  8bce                 mov ecx, esi
// 00870778  e87dc41500           call 0x9ccbfa
// 0087077d  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 00870783  5f                   pop edi
// 00870784  5b                   pop ebx
// 00870785  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 00870789  750c                 jne 0x870797
// 0087078b  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00870791  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00870795  744e                 je 0x8707e5
// 00870797  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087079a  6880010000           push 0x180
// 0087079f  6a00                 push 0
// 008707a1  6a00                 push 0
// 008707a3  51                   push ecx
// 008707a4  ff15b41aa400         call dword ptr [0xa41ab4]
// 008707aa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008707ae  8b442410             mov eax, dword ptr [esp + 0x10]
// 008707b2  89960c010000         mov dword ptr [esi + 0x10c], edx
// 008707b8  898610010000         mov dword ptr [esi + 0x110], eax
// 008707be  5e                   pop esi
// 008707bf  c20c00               ret 0xc
// 008707c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008707c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008707ca  8b16                 mov edx, dword ptr [esi]
// 008707cc  8b9290010000         mov edx, dword ptr [edx + 0x190]
// 008707d2  50                   push eax
// 008707d3  51                   push ecx
// 008707d4  8bce                 mov ecx, esi
// 008707d6  ffd2                 call edx
// 008707d8  8b16                 mov edx, dword ptr [esi]
// 008707da  50                   push eax
// 008707db  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 008707e1  8bce                 mov ecx, esi
// 008707e3  ffd0                 call eax
// 008707e5  5e                   pop esi
// 008707e6  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1