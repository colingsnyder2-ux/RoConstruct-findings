// roc 2011-06 00870110  unit: CXTSplitterWnd  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870110
//
// 00870110  51                   push ecx
// 00870111  56                   push esi
// 00870112  57                   push edi
// 00870113  8bf1                 mov esi, ecx
// 00870115  33ff                 xor edi, edi
// 00870117  39befc000000         cmp dword ptr [esi + 0xfc], edi
// 0087011d  7530                 jne 0x87014f
// 0087011f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00870123  50                   push eax
// 00870124  e8b9ca1500           call 0x9ccbe2
// 00870129  39be14010000         cmp dword ptr [esi + 0x114], edi
// 0087012f  0f84fd010000         je 0x870332
// 00870135  57                   push edi
// 00870136  6800000006           push 0x6000000
// 0087013b  57                   push edi
// 0087013c  8bce                 mov ecx, esi
// 0087013e  e895a6f9ff           call 0x80a7d8
// 00870143  89be14010000         mov dword ptr [esi + 0x114], edi
// 00870149  5f                   pop edi
// 0087014a  5e                   pop esi
// 0087014b  59                   pop ecx
// 0087014c  c20400               ret 4
// 0087014f  39be98000000         cmp dword ptr [esi + 0x98], edi
// 00870155  0f84d7010000         je 0x870332
// 0087015b  53                   push ebx
// 0087015c  ff15401ba400         call dword ptr [0xa41b40]
// 00870162  8b16                 mov edx, dword ptr [esi]
// 00870164  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0087016a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00870170  53                   push ebx
// 00870171  8bce                 mov ecx, esi
// 00870173  ffd0                 call eax
// 00870175  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 0087017b  7413                 je 0x870190
// 0087017d  8b16                 mov edx, dword ptr [esi]
// 0087017f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 00870185  8d86c8000000         lea eax, [esi + 0xc8]
// 0087018b  50                   push eax
// 0087018c  8bce                 mov ecx, esi
// 0087018e  ffd2                 call edx
// 00870190  8b06                 mov eax, dword ptr [esi]
// 00870192  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00870198  55                   push ebp
// 00870199  57                   push edi
// 0087019a  57                   push edi
// 0087019b  8bce                 mov ecx, esi
// 0087019d  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 008701a3  89be98000000         mov dword ptr [esi + 0x98], edi
// 008701a9  ffd2                 call edx
// 008701ab  8b2d601ca400         mov ebp, dword ptr [0xa41c60]
// 008701b1  6aff                 push -1
// 008701b3  6aff                 push -1
// 008701b5  53                   push ebx
// 008701b6  8944241c             mov dword ptr [esp + 0x1c], eax
// 008701ba  ffd5                 call ebp
// 008701bc  6aff                 push -1
// 008701be  6aff                 push -1
// 008701c0  8dbec8000000         lea edi, [esi + 0xc8]
// 008701c6  57                   push edi
// 008701c7  ffd5                 call ebp
// 008701c9  837c241800           cmp dword ptr [esp + 0x18], 0
// 008701ce  5d                   pop ebp
// 008701cf  0f842f010000         je 0x870304
// 008701d5  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008701db  83f801               cmp eax, 1
// 008701de  7513                 jne 0x8701f3
// 008701e0  8b06                 mov eax, dword ptr [esi]
// 008701e2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008701e8  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008701ee  e90c010000           jmp 0x8702ff
// 008701f3  83f865               cmp eax, 0x65
// 008701f6  7c45                 jl 0x87023d
// 008701f8  83f873               cmp eax, 0x73
// 008701fb  7f40                 jg 0x87023d
// 008701fd  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 00870204  740f                 je 0x870215
// 00870206  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0087020c  83e904               sub ecx, 4
// 0087020f  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 00870215  8b16                 mov edx, dword ptr [esi]
// 00870217  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 0087021d  83c09b               add eax, -0x65
// 00870220  50                   push eax
// 00870221  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00870227  50                   push eax
// 00870228  8bce                 mov ecx, esi
// 0087022a  ffd2                 call edx
// 0087022c  8b06                 mov eax, dword ptr [esi]
// 0087022e  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00870234  8bce                 mov ecx, esi
// 00870236  ffd2                 call edx
// 00870238  e9c7000000           jmp 0x870304
// 0087023d  83f802               cmp eax, 2
// 00870240  7507                 jne 0x870249
// 00870242  8b0b                 mov ecx, dword ptr [ebx]
// 00870244  e9ae000000           jmp 0x8702f7
// 00870249  3dc9000000           cmp eax, 0xc9
// 0087024e  7c3e                 jl 0x87028e
// 00870250  3dd7000000           cmp eax, 0xd7
// 00870255  7f37                 jg 0x87028e
// 00870257  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0087025e  740b                 je 0x87026b
// 00870260  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00870266  83e904               sub ecx, 4
// 00870269  890b                 mov dword ptr [ebx], ecx
// 0087026b  8b16                 mov edx, dword ptr [esi]
// 0087026d  8b92a0010000         mov edx, dword ptr [edx + 0x1a0]
// 00870273  0537ffffff           add eax, 0xffffff37
// 00870278  50                   push eax
// 00870279  8b03                 mov eax, dword ptr [ebx]
// 0087027b  50                   push eax
// 0087027c  8bce                 mov ecx, esi
// 0087027e  ffd2                 call edx
// 00870280  8b06                 mov eax, dword ptr [esi]
// 00870282  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00870288  8bce                 mov ecx, esi
// 0087028a  ffd2                 call edx
// 0087028c  eb76                 jmp 0x870304
// 0087028e  3d2d010000           cmp eax, 0x12d
// 00870293  7c48                 jl 0x8702dd
// 00870295  3d0d020000           cmp eax, 0x20d
// 0087029a  7f41                 jg 0x8702dd
// 0087029c  05d3feffff           add eax, 0xfffffed3
// 008702a1  99                   cdq 
// 008702a2  b90f000000           mov ecx, 0xf
// 008702a7  f7f9                 idiv ecx
// 008702a9  8bce                 mov ecx, esi
// 008702ab  8bda                 mov ebx, edx
// 008702ad  8b16                 mov edx, dword ptr [esi]
// 008702af  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 008702b5  50                   push eax
// 008702b6  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 008702bc  50                   push eax
// 008702bd  ffd2                 call edx
// 008702bf  8b0f                 mov ecx, dword ptr [edi]
// 008702c1  8b06                 mov eax, dword ptr [esi]
// 008702c3  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 008702c9  53                   push ebx
// 008702ca  51                   push ecx
// 008702cb  8bce                 mov ecx, esi
// 008702cd  ffd2                 call edx
// 008702cf  8b06                 mov eax, dword ptr [esi]
// 008702d1  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008702d7  8bce                 mov ecx, esi
// 008702d9  ffd2                 call edx
// 008702db  eb27                 jmp 0x870304
// 008702dd  83f803               cmp eax, 3
// 008702e0  7522                 jne 0x870304
// 008702e2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 008702e8  8b06                 mov eax, dword ptr [esi]
// 008702ea  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008702f0  51                   push ecx
// 008702f1  8bce                 mov ecx, esi
// 008702f3  ffd2                 call edx
// 008702f5  8b0f                 mov ecx, dword ptr [edi]
// 008702f7  8b06                 mov eax, dword ptr [esi]
// 008702f9  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008702ff  51                   push ecx
// 00870300  8bce                 mov ecx, esi
// 00870302  ffd2                 call edx
// 00870304  8b06                 mov eax, dword ptr [esi]
// 00870306  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0087030c  6a00                 push 0
// 0087030e  6a00                 push 0
// 00870310  8bce                 mov ecx, esi
// 00870312  ffd2                 call edx
// 00870314  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00870318  5b                   pop ebx
// 00870319  3bc8                 cmp ecx, eax
// 0087031b  7515                 jne 0x870332
// 0087031d  85c9                 test ecx, ecx
// 0087031f  7411                 je 0x870332
// 00870321  8b06                 mov eax, dword ptr [esi]
// 00870323  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 00870329  51                   push ecx
// 0087032a  6aff                 push -1
// 0087032c  6aff                 push -1
// 0087032e  8bce                 mov ecx, esi
// 00870330  ffd2                 call edx
// 00870332  5f                   pop edi
// 00870333  5e                   pop esi
// 00870334  59                   pop ecx
// 00870335  c20400               ret 4
// copied from an identical function in another client (function ?StopTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1