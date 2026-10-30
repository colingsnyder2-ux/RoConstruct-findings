// roc 2012-06 00a161e0  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a161e0
//
// 00a161e0  6aff                 push -1
// 00a161e2  68c839ae00           push 0xae39c8
// 00a161e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a161ed  50                   push eax
// 00a161ee  51                   push ecx
// 00a161ef  56                   push esi
// 00a161f0  57                   push edi
// 00a161f1  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a161f6  33c4                 xor eax, esp
// 00a161f8  50                   push eax
// 00a161f9  8d442410             lea eax, [esp + 0x10]
// 00a161fd  64a300000000         mov dword ptr fs:[0], eax
// 00a16203  8bf1                 mov esi, ecx
// 00a16205  8974240c             mov dword ptr [esp + 0xc], esi
// 00a16209  c706f0d4c100         mov dword ptr [esi], 0xc1d4f0
// 00a1620f  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00a16213  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a16216  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a16219  50                   push eax
// 00a1621a  6afc                 push -4
// 00a1621c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00a16224  51                   push ecx
// 00a16225  7408                 je 0xa1622f
// 00a16227  ff15c43bb200         call dword ptr [0xb23bc4]
// 00a1622d  eb06                 jmp 0xa16235
// 00a1622f  ff15943ab200         call dword ptr [0xb23a94]
// 00a16235  8b4608               mov eax, dword ptr [esi + 8]
// 00a16238  8d78ff               lea edi, [eax - 1]
// 00a1623b  85ff                 test edi, edi
// 00a1623d  7c26                 jl 0xa16265
// 00a1623f  90                   nop 
// 00a16240  85ff                 test edi, edi
// 00a16242  7c42                 jl 0xa16286
// 00a16244  3b7e08               cmp edi, dword ptr [esi + 8]
// 00a16247  7d3d                 jge 0xa16286
// 00a16249  8b4604               mov eax, dword ptr [esi + 4]
// 00a1624c  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00a1624f  83790400             cmp dword ptr [ecx + 4], 0
// 00a16253  8d04b8               lea eax, [eax + edi*4]
// 00a16256  7408                 je 0xa16260
// 00a16258  8b11                 mov edx, dword ptr [ecx]
// 00a1625a  8b02                 mov eax, dword ptr [edx]
// 00a1625c  6a01                 push 1
// 00a1625e  ffd0                 call eax
// 00a16260  83ef01               sub edi, 1
// 00a16263  79db                 jns 0xa16240
// 00a16265  8bce                 mov ecx, esi
// 00a16267  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00a1626f  e8ecfeffff           call 0xa16160
// 00a16274  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a16278  64890d00000000       mov dword ptr fs:[0], ecx
// 00a1627f  59                   pop ecx
// 00a16280  5f                   pop edi
// 00a16281  5e                   pop esi
// 00a16282  83c410               add esp, 0x10
// 00a16285  c3                   ret 
// 00a16286  e835c1f6ff           call 0x9823c0
// copied from an identical function in another client (function ??1CHookSink@CXTPHookManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPHookManager.cpp