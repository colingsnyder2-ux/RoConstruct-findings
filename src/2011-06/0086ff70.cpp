// roc 2011-06 0086ff70  unit: CXTSplitterWnd  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ff70
//
// 0086ff70  51                   push ecx
// 0086ff71  56                   push esi
// 0086ff72  8bf1                 mov esi, ecx
// 0086ff74  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0086ff7b  c7861401000000000000 mov dword ptr [esi + 0x114], 0
// 0086ff85  7537                 jne 0x86ffbe
// 0086ff87  e88cc61500           call 0x9cc618
// 0086ff8c  a900000002           test eax, 0x2000000
// 0086ff91  741a                 je 0x86ffad
// 0086ff93  6a00                 push 0
// 0086ff95  6a00                 push 0
// 0086ff97  6800000006           push 0x6000000
// 0086ff9c  8bce                 mov ecx, esi
// 0086ff9e  e835a8f9ff           call 0x80a7d8
// 0086ffa3  c7861401000001000000 mov dword ptr [esi + 0x114], 1
// 0086ffad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086ffb1  50                   push eax
// 0086ffb2  8bce                 mov ecx, esi
// 0086ffb4  e823cc1500           call 0x9ccbdc
// 0086ffb9  5e                   pop esi
// 0086ffba  59                   pop ecx
// 0086ffbb  c20400               ret 4
// 0086ffbe  53                   push ebx
// 0086ffbf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0086ffc3  85db                 test ebx, ebx
// 0086ffc5  0f8438010000         je 0x870103
// 0086ffcb  8b16                 mov edx, dword ptr [esi]
// 0086ffcd  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0086ffd3  55                   push ebp
// 0086ffd4  57                   push edi
// 0086ffd5  8dbea8000000         lea edi, [esi + 0xa8]
// 0086ffdb  57                   push edi
// 0086ffdc  ffd0                 call eax
// 0086ffde  8d8bd3feffff         lea ecx, [ebx - 0x12d]
// 0086ffe4  81f9e0000000         cmp ecx, 0xe0
// 0086ffea  775c                 ja 0x870048
// 0086ffec  8d83d3feffff         lea eax, [ebx - 0x12d]
// 0086fff2  99                   cdq 
// 0086fff3  b90f000000           mov ecx, 0xf
// 0086fff8  f7f9                 idiv ecx
// 0086fffa  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00870000  51                   push ecx
// 00870001  8bce                 mov ecx, esi
// 00870003  8bfa                 mov edi, edx
// 00870005  8b16                 mov edx, dword ptr [esi]
// 00870007  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0087000d  83c065               add eax, 0x65
// 00870010  50                   push eax
// 00870011  ffd2                 call edx
// 00870013  8b06                 mov eax, dword ptr [esi]
// 00870015  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0087001b  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 00870021  8d8ec8000000         lea ecx, [esi + 0xc8]
// 00870027  51                   push ecx
// 00870028  81c7c9000000         add edi, 0xc9
// 0087002e  57                   push edi
// 0087002f  8bce                 mov ecx, esi
// 00870031  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 0087003b  ffd2                 call edx
// 0087003d  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00870043  e98c000000           jmp 0x8700d4
// 00870048  8bce                 mov ecx, esi
// 0087004a  83fb03               cmp ebx, 3
// 0087004d  7573                 jne 0x8700c2
// 0087004f  8b06                 mov eax, dword ptr [esi]
// 00870051  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00870057  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0087005d  53                   push ebx
// 0087005e  6a01                 push 1
// 00870060  ffd2                 call edx
// 00870062  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00870068  8b16                 mov edx, dword ptr [esi]
// 0087006a  8daec8000000         lea ebp, [esi + 0xc8]
// 00870070  55                   push ebp
// 00870071  89442414             mov dword ptr [esp + 0x14], eax
// 00870075  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 0087007b  6a02                 push 2
// 0087007d  8bce                 mov ecx, esi
// 0087007f  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 00870089  ffd0                 call eax
// 0087008b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087008f  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 00870095  8b470c               mov eax, dword ptr [edi + 0xc]
// 00870098  2b4704               sub eax, dword ptr [edi + 4]
// 0087009b  99                   cdq 
// 0087009c  2bc2                 sub eax, edx
// 0087009e  d1f8                 sar eax, 1
// 008700a0  50                   push eax
// 008700a1  6a00                 push 0
// 008700a3  53                   push ebx
// 008700a4  8b1d601ca400         mov ebx, dword ptr [0xa41c60]
// 008700aa  ffd3                 call ebx
// 008700ac  8b4708               mov eax, dword ptr [edi + 8]
// 008700af  2b07                 sub eax, dword ptr [edi]
// 008700b1  6a00                 push 0
// 008700b3  99                   cdq 
// 008700b4  2bc2                 sub eax, edx
// 008700b6  d1f8                 sar eax, 1
// 008700b8  50                   push eax
// 008700b9  55                   push ebp
// 008700ba  ffd3                 call ebx
// 008700bc  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008700c0  eb12                 jmp 0x8700d4
// 008700c2  8b16                 mov edx, dword ptr [esi]
// 008700c4  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 008700ca  8d86b8000000         lea eax, [esi + 0xb8]
// 008700d0  50                   push eax
// 008700d1  53                   push ebx
// 008700d2  ffd2                 call edx
// 008700d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008700d7  50                   push eax
// 008700d8  ff15341ba400         call dword ptr [0xa41b34]
// 008700de  50                   push eax
// 008700df  e844a2f9ff           call 0x80a328
// 008700e4  8b16                 mov edx, dword ptr [esi]
// 008700e6  8b82a8010000         mov eax, dword ptr [edx + 0x1a8]
// 008700ec  53                   push ebx
// 008700ed  8bce                 mov ecx, esi
// 008700ef  c7869800000001000000 mov dword ptr [esi + 0x98], 1
// 008700f9  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 008700ff  ffd0                 call eax
// 00870101  5f                   pop edi
// 00870102  5d                   pop ebp
// 00870103  5b                   pop ebx
// 00870104  5e                   pop esi
// 00870105  59                   pop ecx
// 00870106  c20400               ret 4
// copied from an identical function in another client (function ?StartTracking@CXTSplitterWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1