// roc 2009-06 00783290  unit: CXTSplitterWnd  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783290
//
// 00783290  8b442404             mov eax, dword ptr [esp + 4]
// 00783294  83ec30               sub esp, 0x30
// 00783297  56                   push esi
// 00783298  57                   push edi
// 00783299  50                   push eax
// 0078329a  8bf1                 mov esi, ecx
// 0078329c  e86b8c0c00           call 0x84bf0c
// 007832a1  8bf8                 mov edi, eax
// 007832a3  85ff                 test edi, edi
// 007832a5  0f84e0000000         je 0x78338b
// 007832ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 007832ae  8d4c2408             lea ecx, [esp + 8]
// 007832b2  51                   push ecx
// 007832b3  52                   push edx
// 007832b4  ff1514ee8900         call dword ptr [0x89ee14]
// 007832ba  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007832bd  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007832c0  f7d8                 neg eax
// 007832c2  50                   push eax
// 007832c3  f7d9                 neg ecx
// 007832c5  51                   push ecx
// 007832c6  8d542410             lea edx, [esp + 0x10]
// 007832ca  52                   push edx
// 007832cb  ff15bced8900         call dword ptr [0x89edbc]
// 007832d1  8b06                 mov eax, dword ptr [esi]
// 007832d3  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007832d9  8d4c2428             lea ecx, [esp + 0x28]
// 007832dd  51                   push ecx
// 007832de  8bce                 mov ecx, esi
// 007832e0  ffd2                 call edx
// 007832e2  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 007832e9  7440                 je 0x78332b
// 007832eb  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007832f1  3b4658               cmp eax, dword ptr [esi + 0x58]
// 007832f4  7d35                 jge 0x78332b
// 007832f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007832fa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007832fe  8b542410             mov edx, dword ptr [esp + 0x10]
// 00783302  894c2418             mov dword ptr [esp + 0x18], ecx
// 00783306  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00783309  03c8                 add ecx, eax
// 0078330b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078330f  8d442418             lea eax, [esp + 0x18]
// 00783313  50                   push eax
// 00783314  89542424             mov dword ptr [esp + 0x24], edx
// 00783318  8b16                 mov edx, dword ptr [esi]
// 0078331a  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00783320  6a00                 push 0
// 00783322  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00783326  57                   push edi
// 00783327  8bce                 mov ecx, esi
// 00783329  ffd2                 call edx
// 0078332b  83be8800000000       cmp dword ptr [esi + 0x88], 0
// 00783332  7440                 je 0x783374
// 00783334  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0078333a  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0078333d  7d35                 jge 0x783374
// 0078333f  8b442408             mov eax, dword ptr [esp + 8]
// 00783343  8b5660               mov edx, dword ptr [esi + 0x60]
// 00783346  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0078334a  03d0                 add edx, eax
// 0078334c  89442418             mov dword ptr [esp + 0x18], eax
// 00783350  8b442414             mov eax, dword ptr [esp + 0x14]
// 00783354  89442424             mov dword ptr [esp + 0x24], eax
// 00783358  8d442418             lea eax, [esp + 0x18]
// 0078335c  50                   push eax
// 0078335d  89542424             mov dword ptr [esp + 0x24], edx
// 00783361  8b16                 mov edx, dword ptr [esi]
// 00783363  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00783369  6a00                 push 0
// 0078336b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0078336f  57                   push edi
// 00783370  8bce                 mov ecx, esi
// 00783372  ffd2                 call edx
// 00783374  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00783378  8b542430             mov edx, dword ptr [esp + 0x30]
// 0078337c  8b06                 mov eax, dword ptr [esi]
// 0078337e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00783384  51                   push ecx
// 00783385  52                   push edx
// 00783386  57                   push edi
// 00783387  8bce                 mov ecx, esi
// 00783389  ffd0                 call eax
// 0078338b  5f                   pop edi
// 0078338c  b801000000           mov eax, 1
// 00783391  5e                   pop esi
// 00783392  83c430               add esp, 0x30
// 00783395  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTSplitterWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1