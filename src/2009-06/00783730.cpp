// roc 2009-06 00783730  unit: CXTSplitterWnd  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783730
//
// 00783730  51                   push ecx
// 00783731  56                   push esi
// 00783732  8bf1                 mov esi, ecx
// 00783734  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0078373b  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 00783745  7537                 jne 0x78377e
// 00783747  e890870c00           call 0x84bedc
// 0078374c  a900000002           test eax, 0x2000000
// 00783751  741a                 je 0x78376d
// 00783753  6a00                 push 0
// 00783755  6a00                 push 0
// 00783757  6800000006           push 0x6000000
// 0078375c  8bce                 mov ecx, esi
// 0078375e  e84f5af9ff           call 0x7191b2
// 00783763  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 0078376d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00783771  50                   push eax
// 00783772  8bce                 mov ecx, esi
// 00783774  e80d8f0c00           call 0x84c686
// 00783779  5e                   pop esi
// 0078377a  59                   pop ecx
// 0078377b  c20400               ret 4
// 0078377e  53                   push ebx
// 0078377f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00783783  85db                 test ebx, ebx
// 00783785  0f8438010000         je 0x7838c3
// 0078378b  8b16                 mov edx, dword ptr [esi]
// 0078378d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00783793  55                   push ebp
// 00783794  57                   push edi
// 00783795  8dbea8000000         lea edi, [esi + 0xa8]
// 0078379b  57                   push edi
// 0078379c  ffd0                 call eax
// 0078379e  8d8bd3feffff         lea ecx, [ebx - 0x12d]
// 007837a4  81f9e0000000         cmp ecx, 0xe0
// 007837aa  775c                 ja 0x783808
// 007837ac  8d83d3feffff         lea eax, [ebx - 0x12d]
// 007837b2  99                   cdq 
// 007837b3  b90f000000           mov ecx, 0xf
// 007837b8  f7f9                 idiv ecx
// 007837ba  8d8eb8000000         lea ecx, [esi + 0xb8]
// 007837c0  51                   push ecx
// 007837c1  8bce                 mov ecx, esi
// 007837c3  8bfa                 mov edi, edx
// 007837c5  8b16                 mov edx, dword ptr [esi]
// 007837c7  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 007837cd  83c065               add eax, 0x65
// 007837d0  50                   push eax
// 007837d1  ffd2                 call edx
// 007837d3  8b06                 mov eax, dword ptr [esi]
// 007837d5  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 007837db  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 007837e1  8d8ec8000000         lea ecx, [esi + 0xc8]
// 007837e7  51                   push ecx
// 007837e8  81c7c9000000         add edi, 0xc9
// 007837ee  57                   push edi
// 007837ef  8bce                 mov ecx, esi
// 007837f1  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 007837fb  ffd2                 call edx
// 007837fd  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00783803  e98c000000           jmp 0x783894
// 00783808  8bce                 mov ecx, esi
// 0078380a  83fb03               cmp ebx, 3
// 0078380d  7573                 jne 0x783882
// 0078380f  8b06                 mov eax, dword ptr [esi]
// 00783811  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00783817  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0078381d  53                   push ebx
// 0078381e  6a01                 push 1
// 00783820  ffd2                 call edx
// 00783822  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00783828  8b16                 mov edx, dword ptr [esi]
// 0078382a  8daec8000000         lea ebp, [esi + 0xc8]
// 00783830  55                   push ebp
// 00783831  89442414             mov dword ptr [esp + 0x14], eax
// 00783835  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 0078383b  6a02                 push 2
// 0078383d  8bce                 mov ecx, esi
// 0078383f  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 00783849  ffd0                 call eax
// 0078384b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078384f  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 00783855  8b470c               mov eax, dword ptr [edi + 0xc]
// 00783858  2b4704               sub eax, dword ptr [edi + 4]
// 0078385b  99                   cdq 
// 0078385c  2bc2                 sub eax, edx
// 0078385e  d1f8                 sar eax, 1
// 00783860  50                   push eax
// 00783861  6a00                 push 0
// 00783863  53                   push ebx
// 00783864  8b1df8ed8900         mov ebx, dword ptr [0x89edf8]
// 0078386a  ffd3                 call ebx
// 0078386c  8b4708               mov eax, dword ptr [edi + 8]
// 0078386f  2b07                 sub eax, dword ptr [edi]
// 00783871  6a00                 push 0
// 00783873  99                   cdq 
// 00783874  2bc2                 sub eax, edx
// 00783876  d1f8                 sar eax, 1
// 00783878  50                   push eax
// 00783879  55                   push ebp
// 0078387a  ffd3                 call ebx
// 0078387c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00783880  eb12                 jmp 0x783894
// 00783882  8b16                 mov edx, dword ptr [esi]
// 00783884  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0078388a  8d86b8000000         lea eax, [esi + 0xb8]
// 00783890  50                   push eax
// 00783891  53                   push ebx
// 00783892  ffd2                 call edx
// 00783894  8b4620               mov eax, dword ptr [esi + 0x20]
// 00783897  50                   push eax
// 00783898  ff1538ee8900         call dword ptr [0x89ee38]
// 0078389e  50                   push eax
// 0078389f  e85e54f9ff           call 0x718d02
// 007838a4  8b16                 mov edx, dword ptr [esi]
// 007838a6  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 007838ac  53                   push ebx
// 007838ad  8bce                 mov ecx, esi
// 007838af  c7869800000001000000 mov dword ptr [esi + 0x98], 1
// 007838b9  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 007838bf  ffd0                 call eax
// 007838c1  5f                   pop edi
// 007838c2  5d                   pop ebp
// 007838c3  5b                   pop ebx
// 007838c4  5e                   pop esi
// 007838c5  59                   pop ecx
// 007838c6  c20400               ret 4
// copied from an identical function in another client (function ?StartTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1