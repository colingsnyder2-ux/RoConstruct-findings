// roc 2010-06 00812720  unit: CXTSplitterWnd  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812720
//
// 00812720  51                   push ecx
// 00812721  56                   push esi
// 00812722  8bf1                 mov esi, ecx
// 00812724  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0081272b  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 00812735  7537                 jne 0x81276e
// 00812737  e8a2a61600           call 0x97cdde
// 0081273c  a900000002           test eax, 0x2000000
// 00812741  741a                 je 0x81275d
// 00812743  6a00                 push 0
// 00812745  6a00                 push 0
// 00812747  6800000006           push 0x6000000
// 0081274c  8bce                 mov ecx, esi
// 0081274e  e8c759f9ff           call 0x7a811a
// 00812753  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 0081275d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00812761  50                   push eax
// 00812762  8bce                 mov ecx, esi
// 00812764  e8cbad1600           call 0x97d534
// 00812769  5e                   pop esi
// 0081276a  59                   pop ecx
// 0081276b  c20400               ret 4
// 0081276e  53                   push ebx
// 0081276f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00812773  85db                 test ebx, ebx
// 00812775  0f8438010000         je 0x8128b3
// 0081277b  8b16                 mov edx, dword ptr [esi]
// 0081277d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00812783  55                   push ebp
// 00812784  57                   push edi
// 00812785  8dbea8000000         lea edi, [esi + 0xa8]
// 0081278b  57                   push edi
// 0081278c  ffd0                 call eax
// 0081278e  8d8bd3feffff         lea ecx, [ebx - 0x12d]
// 00812794  81f9e0000000         cmp ecx, 0xe0
// 0081279a  775c                 ja 0x8127f8
// 0081279c  8d83d3feffff         lea eax, [ebx - 0x12d]
// 008127a2  99                   cdq 
// 008127a3  b90f000000           mov ecx, 0xf
// 008127a8  f7f9                 idiv ecx
// 008127aa  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008127b0  51                   push ecx
// 008127b1  8bce                 mov ecx, esi
// 008127b3  8bfa                 mov edi, edx
// 008127b5  8b16                 mov edx, dword ptr [esi]
// 008127b7  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 008127bd  83c065               add eax, 0x65
// 008127c0  50                   push eax
// 008127c1  ffd2                 call edx
// 008127c3  8b06                 mov eax, dword ptr [esi]
// 008127c5  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 008127cb  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 008127d1  8d8ec8000000         lea ecx, [esi + 0xc8]
// 008127d7  51                   push ecx
// 008127d8  81c7c9000000         add edi, 0xc9
// 008127de  57                   push edi
// 008127df  8bce                 mov ecx, esi
// 008127e1  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 008127eb  ffd2                 call edx
// 008127ed  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008127f3  e98c000000           jmp 0x812884
// 008127f8  8bce                 mov ecx, esi
// 008127fa  83fb03               cmp ebx, 3
// 008127fd  7573                 jne 0x812872
// 008127ff  8b06                 mov eax, dword ptr [esi]
// 00812801  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00812807  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0081280d  53                   push ebx
// 0081280e  6a01                 push 1
// 00812810  ffd2                 call edx
// 00812812  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00812818  8b16                 mov edx, dword ptr [esi]
// 0081281a  8daec8000000         lea ebp, [esi + 0xc8]
// 00812820  55                   push ebp
// 00812821  89442414             mov dword ptr [esp + 0x14], eax
// 00812825  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 0081282b  6a02                 push 2
// 0081282d  8bce                 mov ecx, esi
// 0081282f  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 00812839  ffd0                 call eax
// 0081283b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081283f  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 00812845  8b470c               mov eax, dword ptr [edi + 0xc]
// 00812848  2b4704               sub eax, dword ptr [edi + 4]
// 0081284b  99                   cdq 
// 0081284c  2bc2                 sub eax, edx
// 0081284e  d1f8                 sar eax, 1
// 00812850  50                   push eax
// 00812851  6a00                 push 0
// 00812853  53                   push ebx
// 00812854  8b1d40bc9e00         mov ebx, dword ptr [0x9ebc40]
// 0081285a  ffd3                 call ebx
// 0081285c  8b4708               mov eax, dword ptr [edi + 8]
// 0081285f  2b07                 sub eax, dword ptr [edi]
// 00812861  6a00                 push 0
// 00812863  99                   cdq 
// 00812864  2bc2                 sub eax, edx
// 00812866  d1f8                 sar eax, 1
// 00812868  50                   push eax
// 00812869  55                   push ebp
// 0081286a  ffd3                 call ebx
// 0081286c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00812870  eb12                 jmp 0x812884
// 00812872  8b16                 mov edx, dword ptr [esi]
// 00812874  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0081287a  8d86b8000000         lea eax, [esi + 0xb8]
// 00812880  50                   push eax
// 00812881  53                   push ebx
// 00812882  ffd2                 call edx
// 00812884  8b4620               mov eax, dword ptr [esi + 0x20]
// 00812887  50                   push eax
// 00812888  ff1580bc9e00         call dword ptr [0x9ebc80]
// 0081288e  50                   push eax
// 0081288f  e8d653f9ff           call 0x7a7c6a
// 00812894  8b16                 mov edx, dword ptr [esi]
// 00812896  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 0081289c  53                   push ebx
// 0081289d  8bce                 mov ecx, esi
// 0081289f  c7869800000001000000 mov dword ptr [esi + 0x98], 1
// 008128a9  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 008128af  ffd0                 call eax
// 008128b1  5f                   pop edi
// 008128b2  5d                   pop ebp
// 008128b3  5b                   pop ebx
// 008128b4  5e                   pop esi
// 008128b5  59                   pop ecx
// 008128b6  c20400               ret 4
// copied from an identical function in another client (function ?StartTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1