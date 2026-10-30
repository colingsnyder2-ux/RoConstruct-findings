// roc 2010-06 00812570  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812570
//
// 00812570  6aff                 push -1
// 00812572  6838459b00           push 0x9b4538
// 00812577  64a100000000         mov eax, dword ptr fs:[0]
// 0081257d  50                   push eax
// 0081257e  83ec24               sub esp, 0x24
// 00812581  55                   push ebp
// 00812582  56                   push esi
// 00812583  57                   push edi
// 00812584  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00812589  33c4                 xor eax, esp
// 0081258b  50                   push eax
// 0081258c  8d442434             lea eax, [esp + 0x34]
// 00812590  64a300000000         mov dword ptr fs:[0], eax
// 00812596  8bf1                 mov esi, ecx
// 00812598  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0081259f  0f8517010000         jne 0x8126bc
// 008125a5  56                   push esi
// 008125a6  8d4c2424             lea ecx, [esp + 0x24]
// 008125aa  e8eda71600           call 0x97cd9c
// 008125af  8d4c2420             lea ecx, [esp + 0x20]
// 008125b3  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008125bb  e87ea81600           call 0x97ce3e
// 008125c0  f6860801000001       test byte ptr [esi + 0x108], 1
// 008125c7  8be8                 mov ebp, eax
// 008125c9  7457                 je 0x812622
// 008125cb  8b06                 mov eax, dword ptr [esi]
// 008125cd  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008125d3  8d4c2410             lea ecx, [esp + 0x10]
// 008125d7  51                   push ecx
// 008125d8  8bce                 mov ecx, esi
// 008125da  ffd2                 call edx
// 008125dc  8b442444             mov eax, dword ptr [esp + 0x44]
// 008125e0  8b5008               mov edx, dword ptr [eax + 8]
// 008125e3  8b4804               mov ecx, dword ptr [eax + 4]
// 008125e6  8b700c               mov esi, dword ptr [eax + 0xc]
// 008125e9  8bfa                 mov edi, edx
// 008125eb  2b38                 sub edi, dword ptr [eax]
// 008125ed  2bf1                 sub esi, ecx
// 008125ef  3bfe                 cmp edi, esi
// 008125f1  7d19                 jge 0x81260c
// 008125f3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008125f7  8d442410             lea eax, [esp + 0x10]
// 008125fb  50                   push eax
// 008125fc  51                   push ecx
// 008125fd  89542420             mov dword ptr [esp + 0x20], edx
// 00812601  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 00812607  e995000000           jmp 0x8126a1
// 0081260c  8d442410             lea eax, [esp + 0x10]
// 00812610  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00812614  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00812618  50                   push eax
// 00812619  51                   push ecx
// 0081261a  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 00812620  eb7f                 jmp 0x8126a1
// 00812622  8b542444             mov edx, dword ptr [esp + 0x44]
// 00812626  52                   push edx
// 00812627  8d442414             lea eax, [esp + 0x14]
// 0081262b  50                   push eax
// 0081262c  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00812632  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00812636  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081263a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081263e  8bc7                 mov eax, edi
// 00812640  2b442410             sub eax, dword ptr [esp + 0x10]
// 00812644  2bce                 sub ecx, esi
// 00812646  33d2                 xor edx, edx
// 00812648  3bc8                 cmp ecx, eax
// 0081264a  0f9fc2               setg dl
// 0081264d  85d2                 test edx, edx
// 0081264f  740e                 je 0x81265f
// 00812651  83f804               cmp eax, 4
// 00812654  7415                 je 0x81266b
// 00812656  83c7fc               add edi, -4
// 00812659  897c2410             mov dword ptr [esp + 0x10], edi
// 0081265d  eb0c                 jmp 0x81266b
// 0081265f  83f904               cmp ecx, 4
// 00812662  7407                 je 0x81266b
// 00812664  83c604               add esi, 4
// 00812667  8974241c             mov dword ptr [esp + 0x1c], esi
// 0081266b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081266f  51                   push ecx
// 00812670  8d4c2424             lea ecx, [esp + 0x24]
// 00812674  e88fa71600           call 0x97ce08
// 00812679  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081267d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00812681  8b742410             mov esi, dword ptr [esp + 0x10]
// 00812685  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00812689  6849005a00           push 0x5a0049
// 0081268e  2bc2                 sub eax, edx
// 00812690  50                   push eax
// 00812691  2bce                 sub ecx, esi
// 00812693  51                   push ecx
// 00812694  52                   push edx
// 00812695  8b542434             mov edx, dword ptr [esp + 0x34]
// 00812699  56                   push esi
// 0081269a  52                   push edx
// 0081269b  ff1550a19e00         call dword ptr [0x9ea150]
// 008126a1  55                   push ebp
// 008126a2  8d4c2424             lea ecx, [esp + 0x24]
// 008126a6  e899a71600           call 0x97ce44
// 008126ab  8d4c2420             lea ecx, [esp + 0x20]
// 008126af  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008126b7  e8daa61600           call 0x97cd96
// 008126bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008126c0  64890d00000000       mov dword ptr fs:[0], ecx
// 008126c7  59                   pop ecx
// 008126c8  5f                   pop edi
// 008126c9  5e                   pop esi
// 008126ca  5d                   pop ebp
// 008126cb  83c430               add esp, 0x30
// 008126ce  c20800               ret 8
// copied from an identical function in another client (function ?DrawTracker@CXTSplitterWnd@@MAEXABVCRect@@PAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1