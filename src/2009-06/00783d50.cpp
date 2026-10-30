// roc 2009-06 00783d50  unit: CXTSplitterWnd  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783d50
//
// 00783d50  56                   push esi
// 00783d51  8bf1                 mov esi, ecx
// 00783d53  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00783d5a  751a                 jne 0x783d76
// 00783d5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00783d60  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00783d64  8b542408             mov edx, dword ptr [esp + 8]
// 00783d68  50                   push eax
// 00783d69  51                   push ecx
// 00783d6a  52                   push edx
// 00783d6b  8bce                 mov ecx, esi
// 00783d6d  e838890c00           call 0x84c6aa
// 00783d72  5e                   pop esi
// 00783d73  c20c00               ret 0xc
// 00783d76  ff153cee8900         call dword ptr [0x89ee3c]
// 00783d7c  50                   push eax
// 00783d7d  e8804ff9ff           call 0x718d02
// 00783d82  3bc6                 cmp eax, esi
// 00783d84  740e                 je 0x783d94
// 00783d86  8b06                 mov eax, dword ptr [esi]
// 00783d88  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00783d8e  6a00                 push 0
// 00783d90  8bce                 mov ecx, esi
// 00783d92  ffd2                 call edx
// 00783d94  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00783d9b  0f84e1010000         je 0x783f82
// 00783da1  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00783da7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00783dab  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 00783db1  53                   push ebx
// 00783db2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00783db6  03d8                 add ebx, eax
// 00783db8  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00783dbe  03d1                 add edx, ecx
// 00783dc0  3bd0                 cmp edx, eax
// 00783dc2  57                   push edi
// 00783dc3  895c2414             mov dword ptr [esp + 0x14], ebx
// 00783dc7  89542418             mov dword ptr [esp + 0x18], edx
// 00783dcb  7c0a                 jl 0x783dd7
// 00783dcd  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00783dd3  3bd0                 cmp edx, eax
// 00783dd5  7e06                 jle 0x783ddd
// 00783dd7  8bd0                 mov edx, eax
// 00783dd9  89542418             mov dword ptr [esp + 0x18], edx
// 00783ddd  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00783de3  3bd8                 cmp ebx, eax
// 00783de5  7c0a                 jl 0x783df1
// 00783de7  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00783ded  3bd8                 cmp ebx, eax
// 00783def  7e06                 jle 0x783df7
// 00783df1  8bd8                 mov ebx, eax
// 00783df3  895c2414             mov dword ptr [esp + 0x14], ebx
// 00783df7  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00783dfd  83f801               cmp eax, 1
// 00783e00  0f84d5000000         je 0x783edb
// 00783e06  83f865               cmp eax, 0x65
// 00783e09  7c09                 jl 0x783e14
// 00783e0b  83f873               cmp eax, 0x73
// 00783e0e  0f8ec7000000         jle 0x783edb
// 00783e14  83f802               cmp eax, 2
// 00783e17  0f8498000000         je 0x783eb5
// 00783e1d  3dc9000000           cmp eax, 0xc9
// 00783e22  7c0b                 jl 0x783e2f
// 00783e24  3dd7000000           cmp eax, 0xd7
// 00783e29  0f8e86000000         jle 0x783eb5
// 00783e2f  83f803               cmp eax, 3
// 00783e32  7416                 je 0x783e4a
// 00783e34  3d2d010000           cmp eax, 0x12d
// 00783e39  0f8cd8000000         jl 0x783f17
// 00783e3f  3d0d020000           cmp eax, 0x20d
// 00783e44  0f8fcd000000         jg 0x783f17
// 00783e4a  8b1df8ed8900         mov ebx, dword ptr [0x89edf8]
// 00783e50  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00783e56  7430                 je 0x783e88
// 00783e58  8b06                 mov eax, dword ptr [esi]
// 00783e5a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00783e60  8dbeb8000000         lea edi, [esi + 0xb8]
// 00783e66  57                   push edi
// 00783e67  8bce                 mov ecx, esi
// 00783e69  ffd2                 call edx
// 00783e6b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00783e6f  2b86bc000000         sub eax, dword ptr [esi + 0xbc]
// 00783e75  50                   push eax
// 00783e76  6a00                 push 0
// 00783e78  57                   push edi
// 00783e79  ffd3                 call ebx
// 00783e7b  8b16                 mov edx, dword ptr [esi]
// 00783e7d  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00783e83  57                   push edi
// 00783e84  8bce                 mov ecx, esi
// 00783e86  ffd0                 call eax
// 00783e88  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00783e8c  398ec8000000         cmp dword ptr [esi + 0xc8], ecx
// 00783e92  8dbec8000000         lea edi, [esi + 0xc8]
// 00783e98  747d                 je 0x783f17
// 00783e9a  8b16                 mov edx, dword ptr [esi]
// 00783e9c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00783ea2  57                   push edi
// 00783ea3  8bce                 mov ecx, esi
// 00783ea5  ffd0                 call eax
// 00783ea7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00783eab  2b0f                 sub ecx, dword ptr [edi]
// 00783ead  6a00                 push 0
// 00783eaf  51                   push ecx
// 00783eb0  57                   push edi
// 00783eb1  ffd3                 call ebx
// 00783eb3  eb55                 jmp 0x783f0a
// 00783eb5  399eb8000000         cmp dword ptr [esi + 0xb8], ebx
// 00783ebb  8dbeb8000000         lea edi, [esi + 0xb8]
// 00783ec1  7454                 je 0x783f17
// 00783ec3  8b16                 mov edx, dword ptr [esi]
// 00783ec5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00783ecb  57                   push edi
// 00783ecc  8bce                 mov ecx, esi
// 00783ece  ffd0                 call eax
// 00783ed0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00783ed4  2b0f                 sub ecx, dword ptr [edi]
// 00783ed6  6a00                 push 0
// 00783ed8  51                   push ecx
// 00783ed9  eb28                 jmp 0x783f03
// 00783edb  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00783ee1  7434                 je 0x783f17
// 00783ee3  8b16                 mov edx, dword ptr [esi]
// 00783ee5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00783eeb  8dbeb8000000         lea edi, [esi + 0xb8]
// 00783ef1  57                   push edi
// 00783ef2  8bce                 mov ecx, esi
// 00783ef4  ffd0                 call eax
// 00783ef6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00783efa  2b8ebc000000         sub ecx, dword ptr [esi + 0xbc]
// 00783f00  51                   push ecx
// 00783f01  6a00                 push 0
// 00783f03  57                   push edi
// 00783f04  ff15f8ed8900         call dword ptr [0x89edf8]
// 00783f0a  8b16                 mov edx, dword ptr [esi]
// 00783f0c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00783f12  57                   push edi
// 00783f13  8bce                 mov ecx, esi
// 00783f15  ffd0                 call eax
// 00783f17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00783f1b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00783f1f  51                   push ecx
// 00783f20  52                   push edx
// 00783f21  6a01                 push 1
// 00783f23  8bce                 mov ecx, esi
// 00783f25  e8f6fdffff           call 0x783d20
// 00783f2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00783f2e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00783f32  50                   push eax
// 00783f33  51                   push ecx
// 00783f34  6a01                 push 1
// 00783f36  8bce                 mov ecx, esi
// 00783f38  e867870c00           call 0x84c6a4
// 00783f3d  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 00783f43  5f                   pop edi
// 00783f44  5b                   pop ebx
// 00783f45  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 00783f49  750c                 jne 0x783f57
// 00783f4b  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00783f51  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00783f55  744e                 je 0x783fa5
// 00783f57  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00783f5a  6880010000           push 0x180
// 00783f5f  6a00                 push 0
// 00783f61  6a00                 push 0
// 00783f63  51                   push ecx
// 00783f64  ff15e8ee8900         call dword ptr [0x89eee8]
// 00783f6a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00783f6e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00783f72  89960c010000         mov dword ptr [esi + 0x10c], edx
// 00783f78  898610010000         mov dword ptr [esi + 0x110], eax
// 00783f7e  5e                   pop esi
// 00783f7f  c20c00               ret 0xc
// 00783f82  8b442410             mov eax, dword ptr [esp + 0x10]
// 00783f86  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00783f8a  8b16                 mov edx, dword ptr [esi]
// 00783f8c  8b9290010000         mov edx, dword ptr [edx + 0x190]
// 00783f92  50                   push eax
// 00783f93  51                   push ecx
// 00783f94  8bce                 mov ecx, esi
// 00783f96  ffd2                 call edx
// 00783f98  8b16                 mov edx, dword ptr [esi]
// 00783f9a  50                   push eax
// 00783f9b  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 00783fa1  8bce                 mov ecx, esi
// 00783fa3  ffd0                 call eax
// 00783fa5  5e                   pop esi
// 00783fa6  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1