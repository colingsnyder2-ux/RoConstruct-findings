// roc 2010-06 008128c0  unit: CXTSplitterWnd  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008128c0
//
// 008128c0  51                   push ecx
// 008128c1  56                   push esi
// 008128c2  57                   push edi
// 008128c3  8bf1                 mov esi, ecx
// 008128c5  33ff                 xor edi, edi
// 008128c7  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 008128cd  7530                 jne 0x8128ff
// 008128cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 008128d3  50                   push eax
// 008128d4  e861ac1600           call 0x97d53a
// 008128d9  39be14010000         cmp dword ptr [esi + 0x114], edi
// 008128df  0f84fd010000         je 0x812ae2
// 008128e5  57                   push edi
// 008128e6  6800000006           push 0x6000000
// 008128eb  57                   push edi
// 008128ec  8bce                 mov ecx, esi
// 008128ee  e82758f9ff           call 0x7a811a
// 008128f3  89be14010000         mov dword ptr [esi + 0x114], edi
// 008128f9  5f                   pop edi
// 008128fa  5e                   pop esi
// 008128fb  59                   pop ecx
// 008128fc  c20400               ret 4
// 008128ff  39be98000000         cmp dword ptr [esi + 0x98], edi
// 00812905  0f84d7010000         je 0x812ae2
// 0081290b  53                   push ebx
// 0081290c  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 00812912  8b16                 mov edx, dword ptr [esi]
// 00812914  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0081291a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00812920  53                   push ebx
// 00812921  8bce                 mov ecx, esi
// 00812923  ffd0                 call eax
// 00812925  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 0081292b  7413                 je 0x812940
// 0081292d  8b16                 mov edx, dword ptr [esi]
// 0081292f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 00812935  8d86c8000000         lea eax, [esi + 0xc8]
// 0081293b  50                   push eax
// 0081293c  8bce                 mov ecx, esi
// 0081293e  ffd2                 call edx
// 00812940  8b06                 mov eax, dword ptr [esi]
// 00812942  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00812948  55                   push ebp
// 00812949  57                   push edi
// 0081294a  57                   push edi
// 0081294b  8bce                 mov ecx, esi
// 0081294d  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00812953  89be98000000         mov dword ptr [esi + 0x98], edi
// 00812959  ffd2                 call edx
// 0081295b  8b2d40bc9e00         mov ebp, dword ptr [0x9ebc40]
// 00812961  6aff                 push -1
// 00812963  6aff                 push -1
// 00812965  53                   push ebx
// 00812966  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081296a  ffd5                 call ebp
// 0081296c  6aff                 push -1
// 0081296e  6aff                 push -1
// 00812970  8dbec8000000         lea edi, [esi + 0xc8]
// 00812976  57                   push edi
// 00812977  ffd5                 call ebp
// 00812979  837c241800           cmp dword ptr [esp + 0x18], 0
// 0081297e  5d                   pop ebp
// 0081297f  0f842f010000         je 0x812ab4
// 00812985  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0081298b  83f801               cmp eax, 1
// 0081298e  7513                 jne 0x8129a3
// 00812990  8b06                 mov eax, dword ptr [esi]
// 00812992  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00812998  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0081299e  e90c010000           jmp 0x812aaf
// 008129a3  83f865               cmp eax, 0x65
// 008129a6  7c45                 jl 0x8129ed
// 008129a8  83f873               cmp eax, 0x73
// 008129ab  7f40                 jg 0x8129ed
// 008129ad  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 008129b4  740f                 je 0x8129c5
// 008129b6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 008129bc  83e904               sub ecx, 4
// 008129bf  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 008129c5  8b16                 mov edx, dword ptr [esi]
// 008129c7  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 008129cd  83c09b               add eax, -0x65
// 008129d0  50                   push eax
// 008129d1  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 008129d7  50                   push eax
// 008129d8  8bce                 mov ecx, esi
// 008129da  ffd2                 call edx
// 008129dc  8b06                 mov eax, dword ptr [esi]
// 008129de  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008129e4  8bce                 mov ecx, esi
// 008129e6  ffd2                 call edx
// 008129e8  e9c7000000           jmp 0x812ab4
// 008129ed  83f802               cmp eax, 2
// 008129f0  7507                 jne 0x8129f9
// 008129f2  8b0b                 mov ecx, dword ptr [ebx]
// 008129f4  e9ae000000           jmp 0x812aa7
// 008129f9  3dc9000000           cmp eax, 0xc9
// 008129fe  7c3e                 jl 0x812a3e
// 00812a00  3dd7000000           cmp eax, 0xd7
// 00812a05  7f37                 jg 0x812a3e
// 00812a07  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 00812a0e  740b                 je 0x812a1b
// 00812a10  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00812a16  83e904               sub ecx, 4
// 00812a19  890b                 mov dword ptr [ebx], ecx
// 00812a1b  8b16                 mov edx, dword ptr [esi]
// 00812a1d  8b92a0010000         mov edx, dword ptr [edx + 0x1a0]
// 00812a23  0537ffffff           add eax, 0xffffff37
// 00812a28  50                   push eax
// 00812a29  8b03                 mov eax, dword ptr [ebx]
// 00812a2b  50                   push eax
// 00812a2c  8bce                 mov ecx, esi
// 00812a2e  ffd2                 call edx
// 00812a30  8b06                 mov eax, dword ptr [esi]
// 00812a32  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00812a38  8bce                 mov ecx, esi
// 00812a3a  ffd2                 call edx
// 00812a3c  eb76                 jmp 0x812ab4
// 00812a3e  3d2d010000           cmp eax, 0x12d
// 00812a43  7c48                 jl 0x812a8d
// 00812a45  3d0d020000           cmp eax, 0x20d
// 00812a4a  7f41                 jg 0x812a8d
// 00812a4c  05d3feffff           add eax, 0xfffffed3
// 00812a51  99                   cdq 
// 00812a52  b90f000000           mov ecx, 0xf
// 00812a57  f7f9                 idiv ecx
// 00812a59  8bce                 mov ecx, esi
// 00812a5b  8bda                 mov ebx, edx
// 00812a5d  8b16                 mov edx, dword ptr [esi]
// 00812a5f  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 00812a65  50                   push eax
// 00812a66  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00812a6c  50                   push eax
// 00812a6d  ffd2                 call edx
// 00812a6f  8b0f                 mov ecx, dword ptr [edi]
// 00812a71  8b06                 mov eax, dword ptr [esi]
// 00812a73  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00812a79  53                   push ebx
// 00812a7a  51                   push ecx
// 00812a7b  8bce                 mov ecx, esi
// 00812a7d  ffd2                 call edx
// 00812a7f  8b06                 mov eax, dword ptr [esi]
// 00812a81  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00812a87  8bce                 mov ecx, esi
// 00812a89  ffd2                 call edx
// 00812a8b  eb27                 jmp 0x812ab4
// 00812a8d  83f803               cmp eax, 3
// 00812a90  7522                 jne 0x812ab4
// 00812a92  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00812a98  8b06                 mov eax, dword ptr [esi]
// 00812a9a  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00812aa0  51                   push ecx
// 00812aa1  8bce                 mov ecx, esi
// 00812aa3  ffd2                 call edx
// 00812aa5  8b0f                 mov ecx, dword ptr [edi]
// 00812aa7  8b06                 mov eax, dword ptr [esi]
// 00812aa9  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00812aaf  51                   push ecx
// 00812ab0  8bce                 mov ecx, esi
// 00812ab2  ffd2                 call edx
// 00812ab4  8b06                 mov eax, dword ptr [esi]
// 00812ab6  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00812abc  6a00                 push 0
// 00812abe  6a00                 push 0
// 00812ac0  8bce                 mov ecx, esi
// 00812ac2  ffd2                 call edx
// 00812ac4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812ac8  5b                   pop ebx
// 00812ac9  3bc8                 cmp ecx, eax
// 00812acb  7515                 jne 0x812ae2
// 00812acd  85c9                 test ecx, ecx
// 00812acf  7411                 je 0x812ae2
// 00812ad1  8b06                 mov eax, dword ptr [esi]
// 00812ad3  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 00812ad9  51                   push ecx
// 00812ada  6aff                 push -1
// 00812adc  6aff                 push -1
// 00812ade  8bce                 mov ecx, esi
// 00812ae0  ffd2                 call edx
// 00812ae2  5f                   pop edi
// 00812ae3  5e                   pop esi
// 00812ae4  59                   pop ecx
// 00812ae5  c20400               ret 4
// copied from an identical function in another client (function ?StopTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1