// roc 2009-12 0085e580  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e580
//
// 0085e580  6aff                 push -1
// 0085e582  6828e69500           push 0x95e628
// 0085e587  64a100000000         mov eax, dword ptr fs:[0]
// 0085e58d  50                   push eax
// 0085e58e  83ec24               sub esp, 0x24
// 0085e591  55                   push ebp
// 0085e592  56                   push esi
// 0085e593  57                   push edi
// 0085e594  a10052b600           mov eax, dword ptr [0xb65200]
// 0085e599  33c4                 xor eax, esp
// 0085e59b  50                   push eax
// 0085e59c  8d442434             lea eax, [esp + 0x34]
// 0085e5a0  64a300000000         mov dword ptr fs:[0], eax
// 0085e5a6  8bf1                 mov esi, ecx
// 0085e5a8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0085e5af  0f8517010000         jne 0x85e6cc
// 0085e5b5  56                   push esi
// 0085e5b6  8d4c2424             lea ecx, [esp + 0x24]
// 0085e5ba  e8cb7e0c00           call 0x92648a
// 0085e5bf  8d4c2420             lea ecx, [esp + 0x20]
// 0085e5c3  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0085e5cb  e8327f0c00           call 0x926502
// 0085e5d0  f6860801000001       test byte ptr [esi + 0x108], 1
// 0085e5d7  8be8                 mov ebp, eax
// 0085e5d9  7457                 je 0x85e632
// 0085e5db  8b06                 mov eax, dword ptr [esi]
// 0085e5dd  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0085e5e3  8d4c2410             lea ecx, [esp + 0x10]
// 0085e5e7  51                   push ecx
// 0085e5e8  8bce                 mov ecx, esi
// 0085e5ea  ffd2                 call edx
// 0085e5ec  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085e5f0  8b5008               mov edx, dword ptr [eax + 8]
// 0085e5f3  8b4804               mov ecx, dword ptr [eax + 4]
// 0085e5f6  8b700c               mov esi, dword ptr [eax + 0xc]
// 0085e5f9  8bfa                 mov edi, edx
// 0085e5fb  2b38                 sub edi, dword ptr [eax]
// 0085e5fd  2bf1                 sub esi, ecx
// 0085e5ff  3bfe                 cmp edi, esi
// 0085e601  7d19                 jge 0x85e61c
// 0085e603  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085e607  8d442410             lea eax, [esp + 0x10]
// 0085e60b  50                   push eax
// 0085e60c  51                   push ecx
// 0085e60d  89542420             mov dword ptr [esp + 0x20], edx
// 0085e611  ff15d4ca9800         call dword ptr [0x98cad4]
// 0085e617  e995000000           jmp 0x85e6b1
// 0085e61c  8d442410             lea eax, [esp + 0x10]
// 0085e620  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0085e624  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085e628  50                   push eax
// 0085e629  51                   push ecx
// 0085e62a  ff15d4ca9800         call dword ptr [0x98cad4]
// 0085e630  eb7f                 jmp 0x85e6b1
// 0085e632  8b542444             mov edx, dword ptr [esp + 0x44]
// 0085e636  52                   push edx
// 0085e637  8d442414             lea eax, [esp + 0x14]
// 0085e63b  50                   push eax
// 0085e63c  ff1564cc9800         call dword ptr [0x98cc64]
// 0085e642  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0085e646  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085e64a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0085e64e  8bc7                 mov eax, edi
// 0085e650  2b442410             sub eax, dword ptr [esp + 0x10]
// 0085e654  2bce                 sub ecx, esi
// 0085e656  33d2                 xor edx, edx
// 0085e658  3bc8                 cmp ecx, eax
// 0085e65a  0f9fc2               setg dl
// 0085e65d  85d2                 test edx, edx
// 0085e65f  740e                 je 0x85e66f
// 0085e661  83f804               cmp eax, 4
// 0085e664  7415                 je 0x85e67b
// 0085e666  83c7fc               add edi, -4
// 0085e669  897c2410             mov dword ptr [esp + 0x10], edi
// 0085e66d  eb0c                 jmp 0x85e67b
// 0085e66f  83f904               cmp ecx, 4
// 0085e672  7407                 je 0x85e67b
// 0085e674  83c604               add esi, 4
// 0085e677  8974241c             mov dword ptr [esp + 0x1c], esi
// 0085e67b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0085e67f  51                   push ecx
// 0085e680  8d4c2424             lea ecx, [esp + 0x24]
// 0085e684  e8437e0c00           call 0x9264cc
// 0085e689  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085e68d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085e691  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085e695  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085e699  6849005a00           push 0x5a0049
// 0085e69e  2bc2                 sub eax, edx
// 0085e6a0  50                   push eax
// 0085e6a1  2bce                 sub ecx, esi
// 0085e6a3  51                   push ecx
// 0085e6a4  52                   push edx
// 0085e6a5  8b542434             mov edx, dword ptr [esp + 0x34]
// 0085e6a9  56                   push esi
// 0085e6aa  52                   push edx
// 0085e6ab  ff1508b19800         call dword ptr [0x98b108]
// 0085e6b1  55                   push ebp
// 0085e6b2  8d4c2424             lea ecx, [esp + 0x24]
// 0085e6b6  e84d7e0c00           call 0x926508
// 0085e6bb  8d4c2420             lea ecx, [esp + 0x20]
// 0085e6bf  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0085e6c7  e8b87d0c00           call 0x926484
// 0085e6cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085e6d0  64890d00000000       mov dword ptr fs:[0], ecx
// 0085e6d7  59                   pop ecx
// 0085e6d8  5f                   pop edi
// 0085e6d9  5e                   pop esi
// 0085e6da  5d                   pop ebp
// 0085e6db  83c430               add esp, 0x30
// 0085e6de  c20800               ret 8
// copied from an identical function in another client (function ?DrawTracker@CXTSplitterWnd@@MAEXABVCRect@@PAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1