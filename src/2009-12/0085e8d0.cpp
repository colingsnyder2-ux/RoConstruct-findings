// roc 2009-12 0085e8d0  unit: CXTSplitterWnd  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e8d0
//
// 0085e8d0  51                   push ecx
// 0085e8d1  56                   push esi
// 0085e8d2  57                   push edi
// 0085e8d3  8bf1                 mov esi, ecx
// 0085e8d5  33ff                 xor edi, edi
// 0085e8d7  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 0085e8dd  7530                 jne 0x85e90f
// 0085e8df  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085e8e3  50                   push eax
// 0085e8e4  e80f830c00           call 0x926bf8
// 0085e8e9  39be14010000         cmp dword ptr [esi + 0x114], edi
// 0085e8ef  0f84fd010000         je 0x85eaf2
// 0085e8f5  57                   push edi
// 0085e8f6  6800000006           push 0x6000000
// 0085e8fb  57                   push edi
// 0085e8fc  8bce                 mov ecx, esi
// 0085e8fe  e8d756f9ff           call 0x7f3fda
// 0085e903  89be14010000         mov dword ptr [esi + 0x114], edi
// 0085e909  5f                   pop edi
// 0085e90a  5e                   pop esi
// 0085e90b  59                   pop ecx
// 0085e90c  c20400               ret 4
// 0085e90f  39be98000000         cmp dword ptr [esi + 0x98], edi
// 0085e915  0f84d7010000         je 0x85eaf2
// 0085e91b  53                   push ebx
// 0085e91c  ff1520cc9800         call dword ptr [0x98cc20]
// 0085e922  8b16                 mov edx, dword ptr [esi]
// 0085e924  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0085e92a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0085e930  53                   push ebx
// 0085e931  8bce                 mov ecx, esi
// 0085e933  ffd0                 call eax
// 0085e935  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 0085e93b  7413                 je 0x85e950
// 0085e93d  8b16                 mov edx, dword ptr [esi]
// 0085e93f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 0085e945  8d86c8000000         lea eax, [esi + 0xc8]
// 0085e94b  50                   push eax
// 0085e94c  8bce                 mov ecx, esi
// 0085e94e  ffd2                 call edx
// 0085e950  8b06                 mov eax, dword ptr [esi]
// 0085e952  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0085e958  55                   push ebp
// 0085e959  57                   push edi
// 0085e95a  57                   push edi
// 0085e95b  8bce                 mov ecx, esi
// 0085e95d  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 0085e963  89be98000000         mov dword ptr [esi + 0x98], edi
// 0085e969  ffd2                 call edx
// 0085e96b  8b2d6ccc9800         mov ebp, dword ptr [0x98cc6c]
// 0085e971  6aff                 push -1
// 0085e973  6aff                 push -1
// 0085e975  53                   push ebx
// 0085e976  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085e97a  ffd5                 call ebp
// 0085e97c  6aff                 push -1
// 0085e97e  6aff                 push -1
// 0085e980  8dbec8000000         lea edi, [esi + 0xc8]
// 0085e986  57                   push edi
// 0085e987  ffd5                 call ebp
// 0085e989  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085e98e  5d                   pop ebp
// 0085e98f  0f842f010000         je 0x85eac4
// 0085e995  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0085e99b  83f801               cmp eax, 1
// 0085e99e  7513                 jne 0x85e9b3
// 0085e9a0  8b06                 mov eax, dword ptr [esi]
// 0085e9a2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0085e9a8  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0085e9ae  e90c010000           jmp 0x85eabf
// 0085e9b3  83f865               cmp eax, 0x65
// 0085e9b6  7c45                 jl 0x85e9fd
// 0085e9b8  83f873               cmp eax, 0x73
// 0085e9bb  7f40                 jg 0x85e9fd
// 0085e9bd  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0085e9c4  740f                 je 0x85e9d5
// 0085e9c6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0085e9cc  83e904               sub ecx, 4
// 0085e9cf  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 0085e9d5  8b16                 mov edx, dword ptr [esi]
// 0085e9d7  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 0085e9dd  83c09b               add eax, -0x65
// 0085e9e0  50                   push eax
// 0085e9e1  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0085e9e7  50                   push eax
// 0085e9e8  8bce                 mov ecx, esi
// 0085e9ea  ffd2                 call edx
// 0085e9ec  8b06                 mov eax, dword ptr [esi]
// 0085e9ee  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085e9f4  8bce                 mov ecx, esi
// 0085e9f6  ffd2                 call edx
// 0085e9f8  e9c7000000           jmp 0x85eac4
// 0085e9fd  83f802               cmp eax, 2
// 0085ea00  7507                 jne 0x85ea09
// 0085ea02  8b0b                 mov ecx, dword ptr [ebx]
// 0085ea04  e9ae000000           jmp 0x85eab7
// 0085ea09  3dc9000000           cmp eax, 0xc9
// 0085ea0e  7c3e                 jl 0x85ea4e
// 0085ea10  3dd7000000           cmp eax, 0xd7
// 0085ea15  7f37                 jg 0x85ea4e
// 0085ea17  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0085ea1e  740b                 je 0x85ea2b
// 0085ea20  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0085ea26  83e904               sub ecx, 4
// 0085ea29  890b                 mov dword ptr [ebx], ecx
// 0085ea2b  8b16                 mov edx, dword ptr [esi]
// 0085ea2d  8b92a0010000         mov edx, dword ptr [edx + 0x1a0]
// 0085ea33  0537ffffff           add eax, 0xffffff37
// 0085ea38  50                   push eax
// 0085ea39  8b03                 mov eax, dword ptr [ebx]
// 0085ea3b  50                   push eax
// 0085ea3c  8bce                 mov ecx, esi
// 0085ea3e  ffd2                 call edx
// 0085ea40  8b06                 mov eax, dword ptr [esi]
// 0085ea42  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085ea48  8bce                 mov ecx, esi
// 0085ea4a  ffd2                 call edx
// 0085ea4c  eb76                 jmp 0x85eac4
// 0085ea4e  3d2d010000           cmp eax, 0x12d
// 0085ea53  7c48                 jl 0x85ea9d
// 0085ea55  3d0d020000           cmp eax, 0x20d
// 0085ea5a  7f41                 jg 0x85ea9d
// 0085ea5c  05d3feffff           add eax, 0xfffffed3
// 0085ea61  99                   cdq 
// 0085ea62  b90f000000           mov ecx, 0xf
// 0085ea67  f7f9                 idiv ecx
// 0085ea69  8bce                 mov ecx, esi
// 0085ea6b  8bda                 mov ebx, edx
// 0085ea6d  8b16                 mov edx, dword ptr [esi]
// 0085ea6f  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 0085ea75  50                   push eax
// 0085ea76  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0085ea7c  50                   push eax
// 0085ea7d  ffd2                 call edx
// 0085ea7f  8b0f                 mov ecx, dword ptr [edi]
// 0085ea81  8b06                 mov eax, dword ptr [esi]
// 0085ea83  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 0085ea89  53                   push ebx
// 0085ea8a  51                   push ecx
// 0085ea8b  8bce                 mov ecx, esi
// 0085ea8d  ffd2                 call edx
// 0085ea8f  8b06                 mov eax, dword ptr [esi]
// 0085ea91  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085ea97  8bce                 mov ecx, esi
// 0085ea99  ffd2                 call edx
// 0085ea9b  eb27                 jmp 0x85eac4
// 0085ea9d  83f803               cmp eax, 3
// 0085eaa0  7522                 jne 0x85eac4
// 0085eaa2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0085eaa8  8b06                 mov eax, dword ptr [esi]
// 0085eaaa  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0085eab0  51                   push ecx
// 0085eab1  8bce                 mov ecx, esi
// 0085eab3  ffd2                 call edx
// 0085eab5  8b0f                 mov ecx, dword ptr [edi]
// 0085eab7  8b06                 mov eax, dword ptr [esi]
// 0085eab9  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0085eabf  51                   push ecx
// 0085eac0  8bce                 mov ecx, esi
// 0085eac2  ffd2                 call edx
// 0085eac4  8b06                 mov eax, dword ptr [esi]
// 0085eac6  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0085eacc  6a00                 push 0
// 0085eace  6a00                 push 0
// 0085ead0  8bce                 mov ecx, esi
// 0085ead2  ffd2                 call edx
// 0085ead4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085ead8  5b                   pop ebx
// 0085ead9  3bc8                 cmp ecx, eax
// 0085eadb  7515                 jne 0x85eaf2
// 0085eadd  85c9                 test ecx, ecx
// 0085eadf  7411                 je 0x85eaf2
// 0085eae1  8b06                 mov eax, dword ptr [esi]
// 0085eae3  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 0085eae9  51                   push ecx
// 0085eaea  6aff                 push -1
// 0085eaec  6aff                 push -1
// 0085eaee  8bce                 mov ecx, esi
// 0085eaf0  ffd2                 call edx
// 0085eaf2  5f                   pop edi
// 0085eaf3  5e                   pop esi
// 0085eaf4  59                   pop ecx
// 0085eaf5  c20400               ret 4
// copied from an identical function in another client (function ?StopTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1