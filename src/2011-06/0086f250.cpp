// roc 2011-06 0086f250  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f250
//
// 0086f250  83ec0c               sub esp, 0xc
// 0086f253  55                   push ebp
// 0086f254  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086f258  56                   push esi
// 0086f259  8bf1                 mov esi, ecx
// 0086f25b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0086f261  83f8ff               cmp eax, -1
// 0086f264  7412                 je 0x86f278
// 0086f266  3bc5                 cmp eax, ebp
// 0086f268  0f843b010000         je 0x86f3a9
// 0086f26e  8b06                 mov eax, dword ptr [esi]
// 0086f270  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0086f276  ffd2                 call edx
// 0086f278  8b06                 mov eax, dword ptr [esi]
// 0086f27a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 0086f280  8d4c240c             lea ecx, [esp + 0xc]
// 0086f284  51                   push ecx
// 0086f285  8d542414             lea edx, [esp + 0x14]
// 0086f289  52                   push edx
// 0086f28a  8bce                 mov ecx, esi
// 0086f28c  89aef4000000         mov dword ptr [esi + 0xf4], ebp
// 0086f292  ffd0                 call eax
// 0086f294  85c0                 test eax, eax
// 0086f296  742f                 je 0x86f2c7
// 0086f298  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086f29c  3bc5                 cmp eax, ebp
// 0086f29e  7527                 jne 0x86f2c7
// 0086f2a0  40                   inc eax
// 0086f2a1  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 0086f2a7  8944240c             mov dword ptr [esp + 0xc], eax
// 0086f2ab  7c06                 jl 0x86f2b3
// 0086f2ad  33c0                 xor eax, eax
// 0086f2af  8944240c             mov dword ptr [esp + 0xc], eax
// 0086f2b3  8b16                 mov edx, dword ptr [esi]
// 0086f2b5  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0086f2bb  6a00                 push 0
// 0086f2bd  50                   push eax
// 0086f2be  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086f2c2  50                   push eax
// 0086f2c3  8bce                 mov ecx, esi
// 0086f2c5  ffd2                 call edx
// 0086f2c7  53                   push ebx
// 0086f2c8  33db                 xor ebx, ebx
// 0086f2ca  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 0086f2d0  57                   push edi
// 0086f2d1  0f8ea3000000         jle 0x86f37a
// 0086f2d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0086f2db  eb03                 jmp 0x86f2e0
// 0086f2dd  8d4900               lea ecx, [ecx]
// 0086f2e0  55                   push ebp
// 0086f2e1  53                   push ebx
// 0086f2e2  8bce                 mov ecx, esi
// 0086f2e4  e8a3b8f9ff           call 0x80ab8c
// 0086f2e9  8bf8                 mov edi, eax
// 0086f2eb  85ff                 test edi, edi
// 0086f2ed  0f84b4000000         je 0x86f3a7
// 0086f2f3  6a00                 push 0
// 0086f2f5  8bcf                 mov ecx, edi
// 0086f2f7  e84ab0f9ff           call 0x80a346
// 0086f2fc  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0086f302  83f8ff               cmp eax, -1
// 0086f305  740d                 je 0x86f314
// 0086f307  3bc3                 cmp eax, ebx
// 0086f309  7f09                 jg 0x86f314
// 0086f30b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086f30f  83c010               add eax, 0x10
// 0086f312  eb04                 jmp 0x86f318
// 0086f314  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086f318  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0086f31e  0500e90000           add eax, 0xe900
// 0086f323  03c8                 add ecx, eax
// 0086f325  51                   push ecx
// 0086f326  8bcf                 mov ecx, edi
// 0086f328  e88bd81500           call 0x9ccbb8
// 0086f32d  8d7d01               lea edi, [ebp + 1]
// 0086f330  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 0086f336  7d30                 jge 0x86f368
// 0086f338  57                   push edi
// 0086f339  53                   push ebx
// 0086f33a  8bce                 mov ecx, esi
// 0086f33c  e84bb8f9ff           call 0x80ab8c
// 0086f341  8be8                 mov ebp, eax
// 0086f343  85ed                 test ebp, ebp
// 0086f345  7460                 je 0x86f3a7
// 0086f347  8d57ff               lea edx, [edi - 1]
// 0086f34a  52                   push edx
// 0086f34b  53                   push ebx
// 0086f34c  8bce                 mov ecx, esi
// 0086f34e  e89db7f9ff           call 0x80aaf0
// 0086f353  50                   push eax
// 0086f354  8bcd                 mov ecx, ebp
// 0086f356  e85dd81500           call 0x9ccbb8
// 0086f35b  47                   inc edi
// 0086f35c  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 0086f362  7cd4                 jl 0x86f338
// 0086f364  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0086f368  8344241010           add dword ptr [esp + 0x10], 0x10
// 0086f36d  43                   inc ebx
// 0086f36e  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 0086f374  0f8c66ffffff         jl 0x86f2e0
// 0086f37a  ff8e84000000         dec dword ptr [esi + 0x84]
// 0086f380  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0086f386  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0086f38c  8d546d00             lea edx, [ebp + ebp*2]
// 0086f390  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 0086f394  8d0440               lea eax, [eax + eax*2]
// 0086f397  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 0086f39b  8b06                 mov eax, dword ptr [esi]
// 0086f39d  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0086f3a3  8bce                 mov ecx, esi
// 0086f3a5  ffd2                 call edx
// 0086f3a7  5f                   pop edi
// 0086f3a8  5b                   pop ebx
// 0086f3a9  5e                   pop esi
// 0086f3aa  5d                   pop ebp
// 0086f3ab  83c40c               add esp, 0xc
// 0086f3ae  c20400               ret 4
// copied from an identical function in another client (function ?HideColumn@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1