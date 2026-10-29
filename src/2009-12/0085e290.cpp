// roc 2009-12 0085e290  unit: CXTSplitterWnd  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e290
//
// 0085e290  8b442404             mov eax, dword ptr [esp + 4]
// 0085e294  83ec30               sub esp, 0x30
// 0085e297  56                   push esi
// 0085e298  57                   push edi
// 0085e299  50                   push eax
// 0085e29a  8bf1                 mov esi, ecx
// 0085e29c  e88f810c00           call 0x926430
// 0085e2a1  8bf8                 mov edi, eax
// 0085e2a3  85ff                 test edi, edi
// 0085e2a5  0f84e0000000         je 0x85e38b
// 0085e2ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085e2ae  8d4c2408             lea ecx, [esp + 8]
// 0085e2b2  51                   push ecx
// 0085e2b3  52                   push edx
// 0085e2b4  ff1550cc9800         call dword ptr [0x98cc50]
// 0085e2ba  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0085e2bd  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0085e2c0  f7d8                 neg eax
// 0085e2c2  50                   push eax
// 0085e2c3  f7d9                 neg ecx
// 0085e2c5  51                   push ecx
// 0085e2c6  8d542410             lea edx, [esp + 0x10]
// 0085e2ca  52                   push edx
// 0085e2cb  ff1558ca9800         call dword ptr [0x98ca58]
// 0085e2d1  8b06                 mov eax, dword ptr [esi]
// 0085e2d3  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0085e2d9  8d4c2428             lea ecx, [esp + 0x28]
// 0085e2dd  51                   push ecx
// 0085e2de  8bce                 mov ecx, esi
// 0085e2e0  ffd2                 call edx
// 0085e2e2  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0085e2e9  7440                 je 0x85e32b
// 0085e2eb  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0085e2f1  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0085e2f4  7d35                 jge 0x85e32b
// 0085e2f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085e2fa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085e2fe  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085e302  894c2418             mov dword ptr [esp + 0x18], ecx
// 0085e306  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0085e309  03c8                 add ecx, eax
// 0085e30b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085e30f  8d442418             lea eax, [esp + 0x18]
// 0085e313  50                   push eax
// 0085e314  89542424             mov dword ptr [esp + 0x24], edx
// 0085e318  8b16                 mov edx, dword ptr [esi]
// 0085e31a  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0085e320  6a00                 push 0
// 0085e322  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0085e326  57                   push edi
// 0085e327  8bce                 mov ecx, esi
// 0085e329  ffd2                 call edx
// 0085e32b  83be8800000000       cmp dword ptr [esi + 0x88], 0
// 0085e332  7440                 je 0x85e374
// 0085e334  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0085e33a  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0085e33d  7d35                 jge 0x85e374
// 0085e33f  8b442408             mov eax, dword ptr [esp + 8]
// 0085e343  8b5660               mov edx, dword ptr [esi + 0x60]
// 0085e346  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085e34a  03d0                 add edx, eax
// 0085e34c  89442418             mov dword ptr [esp + 0x18], eax
// 0085e350  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085e354  89442424             mov dword ptr [esp + 0x24], eax
// 0085e358  8d442418             lea eax, [esp + 0x18]
// 0085e35c  50                   push eax
// 0085e35d  89542424             mov dword ptr [esp + 0x24], edx
// 0085e361  8b16                 mov edx, dword ptr [esi]
// 0085e363  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0085e369  6a00                 push 0
// 0085e36b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0085e36f  57                   push edi
// 0085e370  8bce                 mov ecx, esi
// 0085e372  ffd2                 call edx
// 0085e374  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085e378  8b542430             mov edx, dword ptr [esp + 0x30]
// 0085e37c  8b06                 mov eax, dword ptr [esi]
// 0085e37e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 0085e384  51                   push ecx
// 0085e385  52                   push edx
// 0085e386  57                   push edi
// 0085e387  8bce                 mov ecx, esi
// 0085e389  ffd0                 call eax
// 0085e38b  5f                   pop edi
// 0085e38c  b801000000           mov eax, 1
// 0085e391  5e                   pop esi
// 0085e392  83c430               add esp, 0x30
// 0085e395  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTSplitterWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1