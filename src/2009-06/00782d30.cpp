// roc 2009-06 00782d30  unit: CXTSplitterWnd  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782d30
//
// 00782d30  83ec08               sub esp, 8
// 00782d33  55                   push ebp
// 00782d34  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00782d38  56                   push esi
// 00782d39  8bf1                 mov esi, ecx
// 00782d3b  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00782d41  83f8ff               cmp eax, -1
// 00782d44  7412                 je 0x782d58
// 00782d46  3bc5                 cmp eax, ebp
// 00782d48  0f842e010000         je 0x782e7c
// 00782d4e  8b06                 mov eax, dword ptr [esi]
// 00782d50  8b90bc010000         mov edx, dword ptr [eax + 0x1bc]
// 00782d56  ffd2                 call edx
// 00782d58  8b06                 mov eax, dword ptr [esi]
// 00782d5a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 00782d60  8d4c240c             lea ecx, [esp + 0xc]
// 00782d64  51                   push ecx
// 00782d65  8d54240c             lea edx, [esp + 0xc]
// 00782d69  52                   push edx
// 00782d6a  8bce                 mov ecx, esi
// 00782d6c  89aef8000000         mov dword ptr [esi + 0xf8], ebp
// 00782d72  ffd0                 call eax
// 00782d74  85c0                 test eax, eax
// 00782d76  742f                 je 0x782da7
// 00782d78  8b442408             mov eax, dword ptr [esp + 8]
// 00782d7c  3bc5                 cmp eax, ebp
// 00782d7e  7527                 jne 0x782da7
// 00782d80  40                   inc eax
// 00782d81  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00782d87  89442408             mov dword ptr [esp + 8], eax
// 00782d8b  7c06                 jl 0x782d93
// 00782d8d  33c0                 xor eax, eax
// 00782d8f  89442408             mov dword ptr [esp + 8], eax
// 00782d93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00782d97  8b16                 mov edx, dword ptr [esi]
// 00782d99  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00782d9f  6a00                 push 0
// 00782da1  51                   push ecx
// 00782da2  50                   push eax
// 00782da3  8bce                 mov ecx, esi
// 00782da5  ffd2                 call edx
// 00782da7  53                   push ebx
// 00782da8  33db                 xor ebx, ebx
// 00782daa  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 00782db0  57                   push edi
// 00782db1  0f8e96000000         jle 0x782e4d
// 00782db7  53                   push ebx
// 00782db8  55                   push ebp
// 00782db9  8bce                 mov ecx, esi
// 00782dbb  e89a67f9ff           call 0x71955a
// 00782dc0  8bf8                 mov edi, eax
// 00782dc2  85ff                 test edi, edi
// 00782dc4  0f84b0000000         je 0x782e7a
// 00782dca  6a00                 push 0
// 00782dcc  8bcf                 mov ecx, edi
// 00782dce  e84d5ff9ff           call 0x718d20
// 00782dd3  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00782dd9  83f8ff               cmp eax, -1
// 00782ddc  7407                 je 0x782de5
// 00782dde  3bc3                 cmp eax, ebx
// 00782de0  8d4301               lea eax, [ebx + 1]
// 00782de3  7e02                 jle 0x782de7
// 00782de5  8bc3                 mov eax, ebx
// 00782de7  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00782ded  81c1900e0000         add ecx, 0xe90
// 00782df3  c1e104               shl ecx, 4
// 00782df6  03c8                 add ecx, eax
// 00782df8  51                   push ecx
// 00782df9  8bcf                 mov ecx, edi
// 00782dfb  e862980c00           call 0x84c662
// 00782e00  8d7d01               lea edi, [ebp + 1]
// 00782e03  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 00782e09  7d35                 jge 0x782e40
// 00782e0b  eb03                 jmp 0x782e10
// 00782e0d  8d4900               lea ecx, [ecx]
// 00782e10  53                   push ebx
// 00782e11  57                   push edi
// 00782e12  8bce                 mov ecx, esi
// 00782e14  e84167f9ff           call 0x71955a
// 00782e19  8be8                 mov ebp, eax
// 00782e1b  85ed                 test ebp, ebp
// 00782e1d  745b                 je 0x782e7a
// 00782e1f  53                   push ebx
// 00782e20  8d57ff               lea edx, [edi - 1]
// 00782e23  52                   push edx
// 00782e24  8bce                 mov ecx, esi
// 00782e26  e89366f9ff           call 0x7194be
// 00782e2b  50                   push eax
// 00782e2c  8bcd                 mov ecx, ebp
// 00782e2e  e82f980c00           call 0x84c662
// 00782e33  47                   inc edi
// 00782e34  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 00782e3a  7cd4                 jl 0x782e10
// 00782e3c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00782e40  43                   inc ebx
// 00782e41  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 00782e47  0f8c6affffff         jl 0x782db7
// 00782e4d  ff8e80000000         dec dword ptr [esi + 0x80]
// 00782e53  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00782e59  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00782e5f  8d546d00             lea edx, [ebp + ebp*2]
// 00782e63  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 00782e67  8d0440               lea eax, [eax + eax*2]
// 00782e6a  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 00782e6e  8b06                 mov eax, dword ptr [esi]
// 00782e70  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00782e76  8bce                 mov ecx, esi
// 00782e78  ffd2                 call edx
// 00782e7a  5f                   pop edi
// 00782e7b  5b                   pop ebx
// 00782e7c  5e                   pop esi
// 00782e7d  5d                   pop ebp
// 00782e7e  83c408               add esp, 8
// 00782e81  c20400               ret 4
// copied from an identical function in another client (function ?HideRow@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1