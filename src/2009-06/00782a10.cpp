// roc 2009-06 00782a10  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782a10
//
// 00782a10  83ec0c               sub esp, 0xc
// 00782a13  55                   push ebp
// 00782a14  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00782a18  56                   push esi
// 00782a19  8bf1                 mov esi, ecx
// 00782a1b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00782a21  83f8ff               cmp eax, -1
// 00782a24  7412                 je 0x782a38
// 00782a26  3bc5                 cmp eax, ebp
// 00782a28  0f843b010000         je 0x782b69
// 00782a2e  8b06                 mov eax, dword ptr [esi]
// 00782a30  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 00782a36  ffd2                 call edx
// 00782a38  8b06                 mov eax, dword ptr [esi]
// 00782a3a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 00782a40  8d4c240c             lea ecx, [esp + 0xc]
// 00782a44  51                   push ecx
// 00782a45  8d542414             lea edx, [esp + 0x14]
// 00782a49  52                   push edx
// 00782a4a  8bce                 mov ecx, esi
// 00782a4c  89aef4000000         mov dword ptr [esi + 0xf4], ebp
// 00782a52  ffd0                 call eax
// 00782a54  85c0                 test eax, eax
// 00782a56  742f                 je 0x782a87
// 00782a58  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00782a5c  3bc5                 cmp eax, ebp
// 00782a5e  7527                 jne 0x782a87
// 00782a60  40                   inc eax
// 00782a61  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 00782a67  8944240c             mov dword ptr [esp + 0xc], eax
// 00782a6b  7c06                 jl 0x782a73
// 00782a6d  33c0                 xor eax, eax
// 00782a6f  8944240c             mov dword ptr [esp + 0xc], eax
// 00782a73  8b16                 mov edx, dword ptr [esi]
// 00782a75  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00782a7b  6a00                 push 0
// 00782a7d  50                   push eax
// 00782a7e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00782a82  50                   push eax
// 00782a83  8bce                 mov ecx, esi
// 00782a85  ffd2                 call edx
// 00782a87  53                   push ebx
// 00782a88  33db                 xor ebx, ebx
// 00782a8a  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 00782a90  57                   push edi
// 00782a91  0f8ea3000000         jle 0x782b3a
// 00782a97  895c2410             mov dword ptr [esp + 0x10], ebx
// 00782a9b  eb03                 jmp 0x782aa0
// 00782a9d  8d4900               lea ecx, [ecx]
// 00782aa0  55                   push ebp
// 00782aa1  53                   push ebx
// 00782aa2  8bce                 mov ecx, esi
// 00782aa4  e8b16af9ff           call 0x71955a
// 00782aa9  8bf8                 mov edi, eax
// 00782aab  85ff                 test edi, edi
// 00782aad  0f84b4000000         je 0x782b67
// 00782ab3  6a00                 push 0
// 00782ab5  8bcf                 mov ecx, edi
// 00782ab7  e86462f9ff           call 0x718d20
// 00782abc  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00782ac2  83f8ff               cmp eax, -1
// 00782ac5  740d                 je 0x782ad4
// 00782ac7  3bc3                 cmp eax, ebx
// 00782ac9  7f09                 jg 0x782ad4
// 00782acb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782acf  83c010               add eax, 0x10
// 00782ad2  eb04                 jmp 0x782ad8
// 00782ad4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782ad8  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00782ade  0500e90000           add eax, 0xe900
// 00782ae3  03c8                 add ecx, eax
// 00782ae5  51                   push ecx
// 00782ae6  8bcf                 mov ecx, edi
// 00782ae8  e8759b0c00           call 0x84c662
// 00782aed  8d7d01               lea edi, [ebp + 1]
// 00782af0  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 00782af6  7d30                 jge 0x782b28
// 00782af8  57                   push edi
// 00782af9  53                   push ebx
// 00782afa  8bce                 mov ecx, esi
// 00782afc  e8596af9ff           call 0x71955a
// 00782b01  8be8                 mov ebp, eax
// 00782b03  85ed                 test ebp, ebp
// 00782b05  7460                 je 0x782b67
// 00782b07  8d57ff               lea edx, [edi - 1]
// 00782b0a  52                   push edx
// 00782b0b  53                   push ebx
// 00782b0c  8bce                 mov ecx, esi
// 00782b0e  e8ab69f9ff           call 0x7194be
// 00782b13  50                   push eax
// 00782b14  8bcd                 mov ecx, ebp
// 00782b16  e8479b0c00           call 0x84c662
// 00782b1b  47                   inc edi
// 00782b1c  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 00782b22  7cd4                 jl 0x782af8
// 00782b24  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00782b28  8344241010           add dword ptr [esp + 0x10], 0x10
// 00782b2d  43                   inc ebx
// 00782b2e  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 00782b34  0f8c66ffffff         jl 0x782aa0
// 00782b3a  ff8e84000000         dec dword ptr [esi + 0x84]
// 00782b40  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00782b46  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00782b4c  8d546d00             lea edx, [ebp + ebp*2]
// 00782b50  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 00782b54  8d0440               lea eax, [eax + eax*2]
// 00782b57  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 00782b5b  8b06                 mov eax, dword ptr [esi]
// 00782b5d  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00782b63  8bce                 mov ecx, esi
// 00782b65  ffd2                 call edx
// 00782b67  5f                   pop edi
// 00782b68  5b                   pop ebx
// 00782b69  5e                   pop esi
// 00782b6a  5d                   pop ebp
// 00782b6b  83c40c               add esp, 0xc
// 00782b6e  c20400               ret 4
// copied from an identical function in another client (function ?HideColumn@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1