// roc 2009-12 0085e730  unit: CXTSplitterWnd  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e730
//
// 0085e730  51                   push ecx
// 0085e731  56                   push esi
// 0085e732  8bf1                 mov esi, ecx
// 0085e734  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0085e73b  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0085e745  7537                 jne 0x85e77e
// 0085e747  e8267d0c00           call 0x926472
// 0085e74c  a900000002           test eax, 0x2000000
// 0085e751  741a                 je 0x85e76d
// 0085e753  6a00                 push 0
// 0085e755  6a00                 push 0
// 0085e757  6800000006           push 0x6000000
// 0085e75c  8bce                 mov ecx, esi
// 0085e75e  e87758f9ff           call 0x7f3fda
// 0085e763  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 0085e76d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085e771  50                   push eax
// 0085e772  8bce                 mov ecx, esi
// 0085e774  e879840c00           call 0x926bf2
// 0085e779  5e                   pop esi
// 0085e77a  59                   pop ecx
// 0085e77b  c20400               ret 4
// 0085e77e  53                   push ebx
// 0085e77f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0085e783  85db                 test ebx, ebx
// 0085e785  0f8438010000         je 0x85e8c3
// 0085e78b  8b16                 mov edx, dword ptr [esi]
// 0085e78d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0085e793  55                   push ebp
// 0085e794  57                   push edi
// 0085e795  8dbea8000000         lea edi, [esi + 0xa8]
// 0085e79b  57                   push edi
// 0085e79c  ffd0                 call eax
// 0085e79e  8d8bd3feffff         lea ecx, [ebx - 0x12d]
// 0085e7a4  81f9e0000000         cmp ecx, 0xe0
// 0085e7aa  775c                 ja 0x85e808
// 0085e7ac  8d83d3feffff         lea eax, [ebx - 0x12d]
// 0085e7b2  99                   cdq 
// 0085e7b3  b90f000000           mov ecx, 0xf
// 0085e7b8  f7f9                 idiv ecx
// 0085e7ba  8d8eb8000000         lea ecx, [esi + 0xb8]
// 0085e7c0  51                   push ecx
// 0085e7c1  8bce                 mov ecx, esi
// 0085e7c3  8bfa                 mov edi, edx
// 0085e7c5  8b16                 mov edx, dword ptr [esi]
// 0085e7c7  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0085e7cd  83c065               add eax, 0x65
// 0085e7d0  50                   push eax
// 0085e7d1  ffd2                 call edx
// 0085e7d3  8b06                 mov eax, dword ptr [esi]
// 0085e7d5  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0085e7db  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 0085e7e1  8d8ec8000000         lea ecx, [esi + 0xc8]
// 0085e7e7  51                   push ecx
// 0085e7e8  81c7c9000000         add edi, 0xc9
// 0085e7ee  57                   push edi
// 0085e7ef  8bce                 mov ecx, esi
// 0085e7f1  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 0085e7fb  ffd2                 call edx
// 0085e7fd  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 0085e803  e98c000000           jmp 0x85e894
// 0085e808  8bce                 mov ecx, esi
// 0085e80a  83fb03               cmp ebx, 3
// 0085e80d  7573                 jne 0x85e882
// 0085e80f  8b06                 mov eax, dword ptr [esi]
// 0085e811  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0085e817  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0085e81d  53                   push ebx
// 0085e81e  6a01                 push 1
// 0085e820  ffd2                 call edx
// 0085e822  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0085e828  8b16                 mov edx, dword ptr [esi]
// 0085e82a  8daec8000000         lea ebp, [esi + 0xc8]
// 0085e830  55                   push ebp
// 0085e831  89442414             mov dword ptr [esp + 0x14], eax
// 0085e835  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 0085e83b  6a02                 push 2
// 0085e83d  8bce                 mov ecx, esi
// 0085e83f  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 0085e849  ffd0                 call eax
// 0085e84b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085e84f  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 0085e855  8b470c               mov eax, dword ptr [edi + 0xc]
// 0085e858  2b4704               sub eax, dword ptr [edi + 4]
// 0085e85b  99                   cdq 
// 0085e85c  2bc2                 sub eax, edx
// 0085e85e  d1f8                 sar eax, 1
// 0085e860  50                   push eax
// 0085e861  6a00                 push 0
// 0085e863  53                   push ebx
// 0085e864  8b1d6ccc9800         mov ebx, dword ptr [0x98cc6c]
// 0085e86a  ffd3                 call ebx
// 0085e86c  8b4708               mov eax, dword ptr [edi + 8]
// 0085e86f  2b07                 sub eax, dword ptr [edi]
// 0085e871  6a00                 push 0
// 0085e873  99                   cdq 
// 0085e874  2bc2                 sub eax, edx
// 0085e876  d1f8                 sar eax, 1
// 0085e878  50                   push eax
// 0085e879  55                   push ebp
// 0085e87a  ffd3                 call ebx
// 0085e87c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0085e880  eb12                 jmp 0x85e894
// 0085e882  8b16                 mov edx, dword ptr [esi]
// 0085e884  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0085e88a  8d86b8000000         lea eax, [esi + 0xb8]
// 0085e890  50                   push eax
// 0085e891  53                   push ebx
// 0085e892  ffd2                 call edx
// 0085e894  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085e897  50                   push eax
// 0085e898  ff152ccc9800         call dword ptr [0x98cc2c]
// 0085e89e  50                   push eax
// 0085e89f  e88652f9ff           call 0x7f3b2a
// 0085e8a4  8b16                 mov edx, dword ptr [esi]
// 0085e8a6  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0085e8ac  53                   push ebx
// 0085e8ad  8bce                 mov ecx, esi
// 0085e8af  c7869800000001000000 mov dword ptr [esi + 0x98], 1
// 0085e8b9  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0085e8bf  ffd0                 call eax
// 0085e8c1  5f                   pop edi
// 0085e8c2  5d                   pop ebp
// 0085e8c3  5b                   pop ebx
// 0085e8c4  5e                   pop esi
// 0085e8c5  59                   pop ecx
// 0085e8c6  c20400               ret 4
// copied from an identical function in another client (function ?StartTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1