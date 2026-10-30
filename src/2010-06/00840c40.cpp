// roc 2010-06 00840c40  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840c40
//
// 00840c40  6aff                 push -1
// 00840c42  68686c9b00           push 0x9b6c68
// 00840c47  64a100000000         mov eax, dword ptr fs:[0]
// 00840c4d  50                   push eax
// 00840c4e  51                   push ecx
// 00840c4f  56                   push esi
// 00840c50  57                   push edi
// 00840c51  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00840c56  33c4                 xor eax, esp
// 00840c58  50                   push eax
// 00840c59  8d442410             lea eax, [esp + 0x10]
// 00840c5d  64a300000000         mov dword ptr fs:[0], eax
// 00840c63  8bf1                 mov esi, ecx
// 00840c65  8974240c             mov dword ptr [esp + 0xc], esi
// 00840c69  c7062074a600         mov dword ptr [esi], 0xa67420
// 00840c6f  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00840c73  8b4614               mov eax, dword ptr [esi + 0x14]
// 00840c76  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00840c79  50                   push eax
// 00840c7a  6afc                 push -4
// 00840c7c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00840c84  51                   push ecx
// 00840c85  7408                 je 0x840c8f
// 00840c87  ff1550bb9e00         call dword ptr [0x9ebb50]
// 00840c8d  eb06                 jmp 0x840c95
// 00840c8f  ff1500bc9e00         call dword ptr [0x9ebc00]
// 00840c95  8b4608               mov eax, dword ptr [esi + 8]
// 00840c98  8d78ff               lea edi, [eax - 1]
// 00840c9b  85ff                 test edi, edi
// 00840c9d  7c26                 jl 0x840cc5
// 00840c9f  90                   nop 
// 00840ca0  85ff                 test edi, edi
// 00840ca2  7c42                 jl 0x840ce6
// 00840ca4  3b7e08               cmp edi, dword ptr [esi + 8]
// 00840ca7  7d3d                 jge 0x840ce6
// 00840ca9  8b4604               mov eax, dword ptr [esi + 4]
// 00840cac  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00840caf  83790400             cmp dword ptr [ecx + 4], 0
// 00840cb3  8d04b8               lea eax, [eax + edi*4]
// 00840cb6  7408                 je 0x840cc0
// 00840cb8  8b11                 mov edx, dword ptr [ecx]
// 00840cba  8b02                 mov eax, dword ptr [edx]
// 00840cbc  6a01                 push 1
// 00840cbe  ffd0                 call eax
// 00840cc0  83ef01               sub edi, 1
// 00840cc3  79db                 jns 0x840ca0
// 00840cc5  8bce                 mov ecx, esi
// 00840cc7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00840ccf  e8ecfeffff           call 0x840bc0
// 00840cd4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00840cd8  64890d00000000       mov dword ptr fs:[0], ecx
// 00840cdf  59                   pop ecx
// 00840ce0  5f                   pop edi
// 00840ce1  5e                   pop esi
// 00840ce2  83c410               add esp, 0x10
// 00840ce5  c3                   ret 
// 00840ce6  e8616ff6ff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CHookSink@CXTPHookManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPHookManager.cpp