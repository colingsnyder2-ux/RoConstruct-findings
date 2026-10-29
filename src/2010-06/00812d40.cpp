// roc 2010-06 00812d40  unit: CXTSplitterWnd  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812d40
//
// 00812d40  56                   push esi
// 00812d41  8bf1                 mov esi, ecx
// 00812d43  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00812d4a  751a                 jne 0x812d66
// 00812d4c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812d50  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812d54  8b542408             mov edx, dword ptr [esp + 8]
// 00812d58  50                   push eax
// 00812d59  51                   push ecx
// 00812d5a  52                   push edx
// 00812d5b  8bce                 mov ecx, esi
// 00812d5d  e8f6a71600           call 0x97d558
// 00812d62  5e                   pop esi
// 00812d63  c20c00               ret 0xc
// 00812d66  ff1584bc9e00         call dword ptr [0x9ebc84]
// 00812d6c  50                   push eax
// 00812d6d  e8f84ef9ff           call 0x7a7c6a
// 00812d72  3bc6                 cmp eax, esi
// 00812d74  740e                 je 0x812d84
// 00812d76  8b06                 mov eax, dword ptr [esi]
// 00812d78  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00812d7e  6a00                 push 0
// 00812d80  8bce                 mov ecx, esi
// 00812d82  ffd2                 call edx
// 00812d84  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00812d8b  0f84e1010000         je 0x812f72
// 00812d91  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00812d97  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812d9b  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 00812da1  53                   push ebx
// 00812da2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00812da6  03d8                 add ebx, eax
// 00812da8  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00812dae  03d1                 add edx, ecx
// 00812db0  3bd0                 cmp edx, eax
// 00812db2  57                   push edi
// 00812db3  895c2414             mov dword ptr [esp + 0x14], ebx
// 00812db7  89542418             mov dword ptr [esp + 0x18], edx
// 00812dbb  7c0a                 jl 0x812dc7
// 00812dbd  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00812dc3  3bd0                 cmp edx, eax
// 00812dc5  7e06                 jle 0x812dcd
// 00812dc7  8bd0                 mov edx, eax
// 00812dc9  89542418             mov dword ptr [esp + 0x18], edx
// 00812dcd  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00812dd3  3bd8                 cmp ebx, eax
// 00812dd5  7c0a                 jl 0x812de1
// 00812dd7  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00812ddd  3bd8                 cmp ebx, eax
// 00812ddf  7e06                 jle 0x812de7
// 00812de1  8bd8                 mov ebx, eax
// 00812de3  895c2414             mov dword ptr [esp + 0x14], ebx
// 00812de7  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00812ded  83f801               cmp eax, 1
// 00812df0  0f84d5000000         je 0x812ecb
// 00812df6  83f865               cmp eax, 0x65
// 00812df9  7c09                 jl 0x812e04
// 00812dfb  83f873               cmp eax, 0x73
// 00812dfe  0f8ec7000000         jle 0x812ecb
// 00812e04  83f802               cmp eax, 2
// 00812e07  0f8498000000         je 0x812ea5
// 00812e0d  3dc9000000           cmp eax, 0xc9
// 00812e12  7c0b                 jl 0x812e1f
// 00812e14  3dd7000000           cmp eax, 0xd7
// 00812e19  0f8e86000000         jle 0x812ea5
// 00812e1f  83f803               cmp eax, 3
// 00812e22  7416                 je 0x812e3a
// 00812e24  3d2d010000           cmp eax, 0x12d
// 00812e29  0f8cd8000000         jl 0x812f07
// 00812e2f  3d0d020000           cmp eax, 0x20d
// 00812e34  0f8fcd000000         jg 0x812f07
// 00812e3a  8b1d40bc9e00         mov ebx, dword ptr [0x9ebc40]
// 00812e40  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00812e46  7430                 je 0x812e78
// 00812e48  8b06                 mov eax, dword ptr [esi]
// 00812e4a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00812e50  8dbeb8000000         lea edi, [esi + 0xb8]
// 00812e56  57                   push edi
// 00812e57  8bce                 mov ecx, esi
// 00812e59  ffd2                 call edx
// 00812e5b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00812e5f  2b86bc000000         sub eax, dword ptr [esi + 0xbc]
// 00812e65  50                   push eax
// 00812e66  6a00                 push 0
// 00812e68  57                   push edi
// 00812e69  ffd3                 call ebx
// 00812e6b  8b16                 mov edx, dword ptr [esi]
// 00812e6d  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00812e73  57                   push edi
// 00812e74  8bce                 mov ecx, esi
// 00812e76  ffd0                 call eax
// 00812e78  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812e7c  398ec8000000         cmp dword ptr [esi + 0xc8], ecx
// 00812e82  8dbec8000000         lea edi, [esi + 0xc8]
// 00812e88  747d                 je 0x812f07
// 00812e8a  8b16                 mov edx, dword ptr [esi]
// 00812e8c  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00812e92  57                   push edi
// 00812e93  8bce                 mov ecx, esi
// 00812e95  ffd0                 call eax
// 00812e97  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812e9b  2b0f                 sub ecx, dword ptr [edi]
// 00812e9d  6a00                 push 0
// 00812e9f  51                   push ecx
// 00812ea0  57                   push edi
// 00812ea1  ffd3                 call ebx
// 00812ea3  eb55                 jmp 0x812efa
// 00812ea5  399eb8000000         cmp dword ptr [esi + 0xb8], ebx
// 00812eab  8dbeb8000000         lea edi, [esi + 0xb8]
// 00812eb1  7454                 je 0x812f07
// 00812eb3  8b16                 mov edx, dword ptr [esi]
// 00812eb5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00812ebb  57                   push edi
// 00812ebc  8bce                 mov ecx, esi
// 00812ebe  ffd0                 call eax
// 00812ec0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812ec4  2b0f                 sub ecx, dword ptr [edi]
// 00812ec6  6a00                 push 0
// 00812ec8  51                   push ecx
// 00812ec9  eb28                 jmp 0x812ef3
// 00812ecb  3996bc000000         cmp dword ptr [esi + 0xbc], edx
// 00812ed1  7434                 je 0x812f07
// 00812ed3  8b16                 mov edx, dword ptr [esi]
// 00812ed5  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00812edb  8dbeb8000000         lea edi, [esi + 0xb8]
// 00812ee1  57                   push edi
// 00812ee2  8bce                 mov ecx, esi
// 00812ee4  ffd0                 call eax
// 00812ee6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00812eea  2b8ebc000000         sub ecx, dword ptr [esi + 0xbc]
// 00812ef0  51                   push ecx
// 00812ef1  6a00                 push 0
// 00812ef3  57                   push edi
// 00812ef4  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00812efa  8b16                 mov edx, dword ptr [esi]
// 00812efc  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00812f02  57                   push edi
// 00812f03  8bce                 mov ecx, esi
// 00812f05  ffd0                 call eax
// 00812f07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00812f0b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00812f0f  51                   push ecx
// 00812f10  52                   push edx
// 00812f11  6a01                 push 1
// 00812f13  8bce                 mov ecx, esi
// 00812f15  e8f6fdffff           call 0x812d10
// 00812f1a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00812f1e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00812f22  50                   push eax
// 00812f23  51                   push ecx
// 00812f24  6a01                 push 1
// 00812f26  8bce                 mov ecx, esi
// 00812f28  e825a61600           call 0x97d552
// 00812f2d  8b960c010000         mov edx, dword ptr [esi + 0x10c]
// 00812f33  5f                   pop edi
// 00812f34  5b                   pop ebx
// 00812f35  3b54240c             cmp edx, dword ptr [esp + 0xc]
// 00812f39  750c                 jne 0x812f47
// 00812f3b  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00812f41  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00812f45  744e                 je 0x812f95
// 00812f47  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00812f4a  6880010000           push 0x180
// 00812f4f  6a00                 push 0
// 00812f51  6a00                 push 0
// 00812f53  51                   push ecx
// 00812f54  ff15d4b99e00         call dword ptr [0x9eb9d4]
// 00812f5a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00812f5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812f62  89960c010000         mov dword ptr [esi + 0x10c], edx
// 00812f68  898610010000         mov dword ptr [esi + 0x110], eax
// 00812f6e  5e                   pop esi
// 00812f6f  c20c00               ret 0xc
// 00812f72  8b442410             mov eax, dword ptr [esp + 0x10]
// 00812f76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812f7a  8b16                 mov edx, dword ptr [esi]
// 00812f7c  8b9290010000         mov edx, dword ptr [edx + 0x190]
// 00812f82  50                   push eax
// 00812f83  51                   push ecx
// 00812f84  8bce                 mov ecx, esi
// 00812f86  ffd2                 call edx
// 00812f88  8b16                 mov edx, dword ptr [esi]
// 00812f8a  50                   push eax
// 00812f8b  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 00812f91  8bce                 mov ecx, esi
// 00812f93  ffd0                 call eax
// 00812f95  5e                   pop esi
// 00812f96  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTSplitterWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1