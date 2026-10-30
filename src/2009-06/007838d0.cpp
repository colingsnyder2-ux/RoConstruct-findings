// roc 2009-06 007838d0  unit: CXTSplitterWnd  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007838d0
//
// 007838d0  51                   push ecx
// 007838d1  56                   push esi
// 007838d2  57                   push edi
// 007838d3  8bf1                 mov esi, ecx
// 007838d5  33ff                 xor edi, edi
// 007838d7  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 007838dd  7530                 jne 0x78390f
// 007838df  8b442410             mov eax, dword ptr [esp + 0x10]
// 007838e3  50                   push eax
// 007838e4  e8a38d0c00           call 0x84c68c
// 007838e9  39be14010000         cmp dword ptr [esi + 0x114], edi
// 007838ef  0f84fd010000         je 0x783af2
// 007838f5  57                   push edi
// 007838f6  6800000006           push 0x6000000
// 007838fb  57                   push edi
// 007838fc  8bce                 mov ecx, esi
// 007838fe  e8af58f9ff           call 0x7191b2
// 00783903  89be14010000         mov dword ptr [esi + 0x114], edi
// 00783909  5f                   pop edi
// 0078390a  5e                   pop esi
// 0078390b  59                   pop ecx
// 0078390c  c20400               ret 4
// 0078390f  39be98000000         cmp dword ptr [esi + 0x98], edi
// 00783915  0f84d7010000         je 0x783af2
// 0078391b  53                   push ebx
// 0078391c  ff1544ee8900         call dword ptr [0x89ee44]
// 00783922  8b16                 mov edx, dword ptr [esi]
// 00783924  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0078392a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00783930  53                   push ebx
// 00783931  8bce                 mov ecx, esi
// 00783933  ffd0                 call eax
// 00783935  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 0078393b  7413                 je 0x783950
// 0078393d  8b16                 mov edx, dword ptr [esi]
// 0078393f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 00783945  8d86c8000000         lea eax, [esi + 0xc8]
// 0078394b  50                   push eax
// 0078394c  8bce                 mov ecx, esi
// 0078394e  ffd2                 call edx
// 00783950  8b06                 mov eax, dword ptr [esi]
// 00783952  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00783958  55                   push ebp
// 00783959  57                   push edi
// 0078395a  57                   push edi
// 0078395b  8bce                 mov ecx, esi
// 0078395d  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00783963  89be98000000         mov dword ptr [esi + 0x98], edi
// 00783969  ffd2                 call edx
// 0078396b  8b2df8ed8900         mov ebp, dword ptr [0x89edf8]
// 00783971  6aff                 push -1
// 00783973  6aff                 push -1
// 00783975  53                   push ebx
// 00783976  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078397a  ffd5                 call ebp
// 0078397c  6aff                 push -1
// 0078397e  6aff                 push -1
// 00783980  8dbec8000000         lea edi, [esi + 0xc8]
// 00783986  57                   push edi
// 00783987  ffd5                 call ebp
// 00783989  837c241800           cmp dword ptr [esp + 0x18], 0
// 0078398e  5d                   pop ebp
// 0078398f  0f842f010000         je 0x783ac4
// 00783995  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0078399b  83f801               cmp eax, 1
// 0078399e  7513                 jne 0x7839b3
// 007839a0  8b06                 mov eax, dword ptr [esi]
// 007839a2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007839a8  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 007839ae  e90c010000           jmp 0x783abf
// 007839b3  83f865               cmp eax, 0x65
// 007839b6  7c45                 jl 0x7839fd
// 007839b8  83f873               cmp eax, 0x73
// 007839bb  7f40                 jg 0x7839fd
// 007839bd  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 007839c4  740f                 je 0x7839d5
// 007839c6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 007839cc  83e904               sub ecx, 4
// 007839cf  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 007839d5  8b16                 mov edx, dword ptr [esi]
// 007839d7  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 007839dd  83c09b               add eax, -0x65
// 007839e0  50                   push eax
// 007839e1  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 007839e7  50                   push eax
// 007839e8  8bce                 mov ecx, esi
// 007839ea  ffd2                 call edx
// 007839ec  8b06                 mov eax, dword ptr [esi]
// 007839ee  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007839f4  8bce                 mov ecx, esi
// 007839f6  ffd2                 call edx
// 007839f8  e9c7000000           jmp 0x783ac4
// 007839fd  83f802               cmp eax, 2
// 00783a00  7507                 jne 0x783a09
// 00783a02  8b0b                 mov ecx, dword ptr [ebx]
// 00783a04  e9ae000000           jmp 0x783ab7
// 00783a09  3dc9000000           cmp eax, 0xc9
// 00783a0e  7c3e                 jl 0x783a4e
// 00783a10  3dd7000000           cmp eax, 0xd7
// 00783a15  7f37                 jg 0x783a4e
// 00783a17  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 00783a1e  740b                 je 0x783a2b
// 00783a20  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00783a26  83e904               sub ecx, 4
// 00783a29  890b                 mov dword ptr [ebx], ecx
// 00783a2b  8b16                 mov edx, dword ptr [esi]
// 00783a2d  8b92a0010000         mov edx, dword ptr [edx + 0x1a0]
// 00783a33  0537ffffff           add eax, 0xffffff37
// 00783a38  50                   push eax
// 00783a39  8b03                 mov eax, dword ptr [ebx]
// 00783a3b  50                   push eax
// 00783a3c  8bce                 mov ecx, esi
// 00783a3e  ffd2                 call edx
// 00783a40  8b06                 mov eax, dword ptr [esi]
// 00783a42  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00783a48  8bce                 mov ecx, esi
// 00783a4a  ffd2                 call edx
// 00783a4c  eb76                 jmp 0x783ac4
// 00783a4e  3d2d010000           cmp eax, 0x12d
// 00783a53  7c48                 jl 0x783a9d
// 00783a55  3d0d020000           cmp eax, 0x20d
// 00783a5a  7f41                 jg 0x783a9d
// 00783a5c  05d3feffff           add eax, 0xfffffed3
// 00783a61  99                   cdq 
// 00783a62  b90f000000           mov ecx, 0xf
// 00783a67  f7f9                 idiv ecx
// 00783a69  8bce                 mov ecx, esi
// 00783a6b  8bda                 mov ebx, edx
// 00783a6d  8b16                 mov edx, dword ptr [esi]
// 00783a6f  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 00783a75  50                   push eax
// 00783a76  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00783a7c  50                   push eax
// 00783a7d  ffd2                 call edx
// 00783a7f  8b0f                 mov ecx, dword ptr [edi]
// 00783a81  8b06                 mov eax, dword ptr [esi]
// 00783a83  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00783a89  53                   push ebx
// 00783a8a  51                   push ecx
// 00783a8b  8bce                 mov ecx, esi
// 00783a8d  ffd2                 call edx
// 00783a8f  8b06                 mov eax, dword ptr [esi]
// 00783a91  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00783a97  8bce                 mov ecx, esi
// 00783a99  ffd2                 call edx
// 00783a9b  eb27                 jmp 0x783ac4
// 00783a9d  83f803               cmp eax, 3
// 00783aa0  7522                 jne 0x783ac4
// 00783aa2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00783aa8  8b06                 mov eax, dword ptr [esi]
// 00783aaa  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00783ab0  51                   push ecx
// 00783ab1  8bce                 mov ecx, esi
// 00783ab3  ffd2                 call edx
// 00783ab5  8b0f                 mov ecx, dword ptr [edi]
// 00783ab7  8b06                 mov eax, dword ptr [esi]
// 00783ab9  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00783abf  51                   push ecx
// 00783ac0  8bce                 mov ecx, esi
// 00783ac2  ffd2                 call edx
// 00783ac4  8b06                 mov eax, dword ptr [esi]
// 00783ac6  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00783acc  6a00                 push 0
// 00783ace  6a00                 push 0
// 00783ad0  8bce                 mov ecx, esi
// 00783ad2  ffd2                 call edx
// 00783ad4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00783ad8  5b                   pop ebx
// 00783ad9  3bc8                 cmp ecx, eax
// 00783adb  7515                 jne 0x783af2
// 00783add  85c9                 test ecx, ecx
// 00783adf  7411                 je 0x783af2
// 00783ae1  8b06                 mov eax, dword ptr [esi]
// 00783ae3  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 00783ae9  51                   push ecx
// 00783aea  6aff                 push -1
// 00783aec  6aff                 push -1
// 00783aee  8bce                 mov ecx, esi
// 00783af0  ffd2                 call edx
// 00783af2  5f                   pop edi
// 00783af3  5e                   pop esi
// 00783af4  59                   pop ecx
// 00783af5  c20400               ret 4
// copied from an identical function in another client (function ?StopTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1