// roc 2009-12 0085ed50  unit: CXTSplitterWnd  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ed50
//
// 0085ed50  56                   push esi
// 0085ed51  8bf1                 mov esi, ecx
// 0085ed53  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0085ed5a  751a                 jne 0x85ed76
// 0085ed5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085ed60  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085ed64  8b542408             mov edx, dword ptr [esp + 8]
// 0085ed68  50                   push eax
// 0085ed69  51                   push ecx
// 0085ed6a  52                   push edx
// 0085ed6b  8bce                 mov ecx, esi
// 0085ed6d  e8a47e0c00           call 0x926c16
// 0085ed72  5e                   pop esi
// 0085ed73  c20c00               ret 0xc
// 0085ed76  ff1528cc9800         call dword ptr [0x98cc28]
// 0085ed7c  50                   push eax
// 0085ed7d  e8a84df9ff           call 0x7f3b2a
// 0085ed82  3bc6                 cmp eax, esi
// 0085ed84  740e                 je 0x85ed94
// 0085ed86  8b06                 mov eax, dword ptr [esi]
// 0085ed88  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 0085ed8e  6a00                 push 0
// 0085ed90  8bce                 mov ecx, esi
// 0085ed92  ffd2                 call edx
// 0085ed94  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 0085ed9b  0f84e1010000         je 0x85ef82
// 0085eda1  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0085eda7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085edab  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 0085edb1  53                   push ebx
// 0085edb2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0085edb6  03d8                 add ebx, eax
// 0085edb8  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0085edbe  03d1                 add edx, ecx
// 0085edc0  3bd0                 cmp edx, eax
// 0085edc2  57                   push edi
// 0085edc3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0085edc7  89542418             mov dword ptr [esp + 0x18], edx
// 0085edcb  7c0a                 jl 0x85edd7
// 0085edcd  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085edd3  3bd0                 cmp edx, eax
// 0085edd5  7e06                 jle 0x85eddd
// 0085edd7  8bd0                 mov edx, eax
// 0085edd9  89542418             mov dword ptr [esp + 0x18], edx
// 0085eddd  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0085ede3  3bd8                 cmp ebx, eax
// 0085ede5  7c0a                 jl 0x85edf1
// 0085ede7  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0085eded  3bd8                 cmp ebx, eax
// 0085edef  7e06                 jle 0x85edf7
// 0085edf1  8bd8                 mov ebx, eax
// 0085edf3  895c2414             mov dword ptr [esp + 0x14], ebx
// 0085edf7  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0085edfd  83f801               cmp eax, 1
// 0085ee00  0f84d5000000         je 0x85eedb
// 0085ee06  83f865               cmp eax, 0x65
// 0085ee09  7c09                 jl 0x85ee14
// 0085ee0b  83f873               cmp eax, 0x73
// 0085ee0e  0f8ec7000000         jle 0x85eedb
// 0085ee14  83f802               cmp eax, 2
// 0085ee17  0f8498000000         je 0x85eeb5
// 0085ee1d  3dc9000000           cmp eax, 0xc9
// 0085ee22  7c0b                 jl 0x85ee2f
// 0085ee24  3dd7000000           cmp eax, 0xd7
// 0085ee29  0f8e86000000         jle 0x85eeb5
// 0085ee2f  83f803               cmp eax, 3
// 0085ee32  7416                 je 0x85ee4a
// 0085ee34  3d2d010000           cmp eax, 0x12d
// 0085ee39  0f8cd8000000         jl 0x85ef17
// 0085ee3f  3d0d020000           cmp eax, 0x20d
// 0085ee44  0f8fcd000000         jg 0x85ef17
// 0085ee4a  8b1d6ccc9800         mov ebx, dword ptr [0x98cc6c]
// 0085ee50  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 0085ee56  7430                 je 0x85ee88
// 0085ee58  8b06                 mov eax, dword ptr [esi]
// 0085ee5a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0085ee60  8dbeb8000000         lea edi, [esi + 0xb8]
// 0085ee66  57                   push edi
// 0085ee67  8bce                 mov ecx, esi
// 0085ee69  ffd2                 call edx
// 0085ee6b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085ee6f  2b86bc000000         sub eax, dword ptr [esi + 0xbc]
// 0085ee75  50                   push eax
// 0085ee76  6a00                 push 0
// 0085ee78  57                   push edi
// 0085ee79  ffd3                 call ebx
// 0085ee7b  8b16                 mov edx, dword ptr [esi]
// 0085ee7d  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085ee83  57                   push edi
// 0085ee84  8bce                 mov ecx, esi
// 0085ee86  ffd0                 call eax
// 0085ee88  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085ee8c  398ec8000000         cmp dword ptr [esi + 0xc8], ecx
// 0085ee92  8dbec8000000         lea edi, [esi + 0xc8]
// 0085ee98  747d                 je 0x85ef17
// 0085ee9a  8b16                 mov edx, dword ptr [esi]
// 0085ee9c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085eea2  57                   push edi
// 0085eea3  8bce                 mov ecx, esi
// 0085eea5  ffd0                 call eax
// 0085eea7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085eeab  2b0f                 sub ecx, dword ptr [edi]
// 0085eead  6a00                 push 0
// 0085eeaf  51                   push ecx
// 0085eeb0  57                   push edi
// 0085eeb1  ffd3                 call ebx
// 0085eeb3  eb55                 jmp 0x85ef0a
// 0085eeb5  399eb8000000         cmp dword ptr [esi + 0xb8], ebx
// 0085eebb  8dbeb8000000         lea edi, [esi + 0xb8]
// 0085eec1  7454                 je 0x85ef17
// 0085eec3  8b16                 mov edx, dword ptr [esi]
// 0085eec5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085eecb  57                   push edi
// 0085eecc  8bce                 mov ecx, esi
// 0085eece  ffd0                 call eax
// 0085eed0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085eed4  2b0f                 sub ecx, dword ptr [edi]
// 0085eed6  6a00                 push 0
// 0085eed8  51                   push ecx
// 0085eed9  eb28                 jmp 0x85ef03
// 0085eedb  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 0085eee1  7434                 je 0x85ef17
// 0085eee3  8b16                 mov edx, dword ptr [esi]
// 0085eee5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085eeeb  8dbeb8000000         lea edi, [esi + 0xb8]
// 0085eef1  57                   push edi
// 0085eef2  8bce                 mov ecx, esi
// 0085eef4  ffd0                 call eax
// 0085eef6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085eefa  2b8ebc000000         sub ecx, dword ptr [esi + 0xbc]
// 0085ef00  51                   push ecx
// 0085ef01  6a00                 push 0
// 0085ef03  57                   push edi
// 0085ef04  ff156ccc9800         call dword ptr [0x98cc6c]
// 0085ef0a  8b16                 mov edx, dword ptr [esi]
// 0085ef0c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085ef12  57                   push edi
// 0085ef13  8bce                 mov ecx, esi
// 0085ef15  ffd0                 call eax
// 0085ef17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085ef1b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085ef1f  51                   push ecx
// 0085ef20  52                   push edx
// 0085ef21  6a01                 push 1
// 0085ef23  8bce                 mov ecx, esi
// 0085ef25  e8f6fdffff           call 0x85ed20
// 0085ef2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085ef2e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085ef32  50                   push eax
// 0085ef33  51                   push ecx
// 0085ef34  6a01                 push 1
// 0085ef36  8bce                 mov ecx, esi
// 0085ef38  e8d37c0c00           call 0x926c10
// 0085ef3d  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 0085ef43  5f                   pop edi
// 0085ef44  5b                   pop ebx
// 0085ef45  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 0085ef49  750c                 jne 0x85ef57
// 0085ef4b  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0085ef51  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0085ef55  744e                 je 0x85efa5
// 0085ef57  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ef5a  6880010000           push 0x180
// 0085ef5f  6a00                 push 0
// 0085ef61  6a00                 push 0
// 0085ef63  51                   push ecx
// 0085ef64  ff151ccb9800         call dword ptr [0x98cb1c]
// 0085ef6a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085ef6e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085ef72  89960c010000         mov dword ptr [esi + 0x10c], edx
// 0085ef78  898610010000         mov dword ptr [esi + 0x110], eax
// 0085ef7e  5e                   pop esi
// 0085ef7f  c20c00               ret 0xc
// 0085ef82  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085ef86  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085ef8a  8b16                 mov edx, dword ptr [esi]
// 0085ef8c  8b9290010000         mov edx, dword ptr [edx + 0x190]
// 0085ef92  50                   push eax
// 0085ef93  51                   push ecx
// 0085ef94  8bce                 mov ecx, esi
// 0085ef96  ffd2                 call edx
// 0085ef98  8b16                 mov edx, dword ptr [esi]
// 0085ef9a  50                   push eax
// 0085ef9b  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0085efa1  8bce                 mov ecx, esi
// 0085efa3  ffd0                 call eax
// 0085efa5  5e                   pop esi
// 0085efa6  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1