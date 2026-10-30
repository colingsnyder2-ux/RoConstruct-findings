// roc 2009-06 00783580  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783580
//
// 00783580  6aff                 push -1
// 00783582  6878a38700           push 0x87a378
// 00783587  64a100000000         mov eax, dword ptr fs:[0]
// 0078358d  50                   push eax
// 0078358e  83ec24               sub esp, 0x24
// 00783591  55                   push ebp
// 00783592  56                   push esi
// 00783593  57                   push edi
// 00783594  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00783599  33c4                 xor eax, esp
// 0078359b  50                   push eax
// 0078359c  8d442434             lea eax, [esp + 0x34]
// 007835a0  64a300000000         mov dword ptr fs:[0], eax
// 007835a6  8bf1                 mov esi, ecx
// 007835a8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 007835af  0f8517010000         jne 0x7836cc
// 007835b5  56                   push esi
// 007835b6  8d4c2424             lea ecx, [esp + 0x24]
// 007835ba  e83b890c00           call 0x84befa
// 007835bf  8d4c2420             lea ecx, [esp + 0x20]
// 007835c3  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007835cb  e8028a0c00           call 0x84bfd2
// 007835d0  f6860801000001       test byte ptr [esi + 0x108], 1
// 007835d7  8be8                 mov ebp, eax
// 007835d9  7457                 je 0x783632
// 007835db  8b06                 mov eax, dword ptr [esi]
// 007835dd  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007835e3  8d4c2410             lea ecx, [esp + 0x10]
// 007835e7  51                   push ecx
// 007835e8  8bce                 mov ecx, esi
// 007835ea  ffd2                 call edx
// 007835ec  8b442444             mov eax, dword ptr [esp + 0x44]
// 007835f0  8b5008               mov edx, dword ptr [eax + 8]
// 007835f3  8b4804               mov ecx, dword ptr [eax + 4]
// 007835f6  8b700c               mov esi, dword ptr [eax + 0xc]
// 007835f9  8bfa                 mov edi, edx
// 007835fb  2b38                 sub edi, dword ptr [eax]
// 007835fd  2bf1                 sub esi, ecx
// 007835ff  3bfe                 cmp edi, esi
// 00783601  7d19                 jge 0x78361c
// 00783603  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00783607  8d442410             lea eax, [esp + 0x10]
// 0078360b  50                   push eax
// 0078360c  51                   push ecx
// 0078360d  89542420             mov dword ptr [esp + 0x20], edx
// 00783611  ff15e0ee8900         call dword ptr [0x89eee0]
// 00783617  e995000000           jmp 0x7836b1
// 0078361c  8d442410             lea eax, [esp + 0x10]
// 00783620  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00783624  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00783628  50                   push eax
// 00783629  51                   push ecx
// 0078362a  ff15e0ee8900         call dword ptr [0x89eee0]
// 00783630  eb7f                 jmp 0x7836b1
// 00783632  8b542444             mov edx, dword ptr [esp + 0x44]
// 00783636  52                   push edx
// 00783637  8d442414             lea eax, [esp + 0x14]
// 0078363b  50                   push eax
// 0078363c  ff1500ee8900         call dword ptr [0x89ee00]
// 00783642  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00783646  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078364a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0078364e  8bc7                 mov eax, edi
// 00783650  2b442410             sub eax, dword ptr [esp + 0x10]
// 00783654  2bce                 sub ecx, esi
// 00783656  33d2                 xor edx, edx
// 00783658  3bc8                 cmp ecx, eax
// 0078365a  0f9fc2               setg dl
// 0078365d  85d2                 test edx, edx
// 0078365f  740e                 je 0x78366f
// 00783661  83f804               cmp eax, 4
// 00783664  7415                 je 0x78367b
// 00783666  83c7fc               add edi, -4
// 00783669  897c2410             mov dword ptr [esp + 0x10], edi
// 0078366d  eb0c                 jmp 0x78367b
// 0078366f  83f904               cmp ecx, 4
// 00783672  7407                 je 0x78367b
// 00783674  83c604               add esi, 4
// 00783677  8974241c             mov dword ptr [esp + 0x1c], esi
// 0078367b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0078367f  51                   push ecx
// 00783680  8d4c2424             lea ecx, [esp + 0x24]
// 00783684  e813890c00           call 0x84bf9c
// 00783689  8b542414             mov edx, dword ptr [esp + 0x14]
// 0078368d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00783691  8b742410             mov esi, dword ptr [esp + 0x10]
// 00783695  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00783699  6849005a00           push 0x5a0049
// 0078369e  2bc2                 sub eax, edx
// 007836a0  50                   push eax
// 007836a1  2bce                 sub ecx, esi
// 007836a3  51                   push ecx
// 007836a4  52                   push edx
// 007836a5  8b542434             mov edx, dword ptr [esp + 0x34]
// 007836a9  56                   push esi
// 007836aa  52                   push edx
// 007836ab  ff15c8e08900         call dword ptr [0x89e0c8]
// 007836b1  55                   push ebp
// 007836b2  8d4c2424             lea ecx, [esp + 0x24]
// 007836b6  e81d890c00           call 0x84bfd8
// 007836bb  8d4c2420             lea ecx, [esp + 0x20]
// 007836bf  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007836c7  e828880c00           call 0x84bef4
// 007836cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007836d0  64890d00000000       mov dword ptr fs:[0], ecx
// 007836d7  59                   pop ecx
// 007836d8  5f                   pop edi
// 007836d9  5e                   pop esi
// 007836da  5d                   pop ebp
// 007836db  83c430               add esp, 0x30
// 007836de  c20800               ret 8
// copied from an identical function in another client (function ?DrawTracker@CXTSplitterWnd@@MAEXABVCRect@@PAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1