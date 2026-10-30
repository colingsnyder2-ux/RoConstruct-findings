// roc 2012-06 00a17610  unit: VCRect::?$CArray  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17610
//
// 00a17610  53                   push ebx
// 00a17611  56                   push esi
// 00a17612  57                   push edi
// 00a17613  8bf9                 mov edi, ecx
// 00a17615  33f6                 xor esi, esi
// 00a17617  397724               cmp dword ptr [edi + 0x24], esi
// 00a1761a  7e2d                 jle 0xa17649
// 00a1761c  8d642400             lea esp, [esp]
// 00a17620  85f6                 test esi, esi
// 00a17622  7c5d                 jl 0xa17681
// 00a17624  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00a17627  7d58                 jge 0xa17681
// 00a17629  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a1762c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 00a1762f  85db                 test ebx, ebx
// 00a17631  7410                 je 0xa17643
// 00a17633  8bcb                 mov ecx, ebx
// 00a17635  e8a6f7ffff           call 0xa16de0
// 00a1763a  53                   push ebx
// 00a1763b  e8d4aaf6ff           call 0x982114
// 00a17640  83c404               add esp, 4
// 00a17643  46                   inc esi
// 00a17644  3b7724               cmp esi, dword ptr [edi + 0x24]
// 00a17647  7cd7                 jl 0xa17620
// 00a17649  6aff                 push -1
// 00a1764b  6a00                 push 0
// 00a1764d  8d4f1c               lea ecx, [edi + 0x1c]
// 00a17650  e80b0cf8ff           call 0x998260
// 00a17655  837f1000             cmp dword ptr [edi + 0x10], 0
// 00a17659  741b                 je 0xa17676
// 00a1765b  8b07                 mov eax, dword ptr [edi]
// 00a1765d  85c0                 test eax, eax
// 00a1765f  7415                 je 0xa17676
// 00a17661  83782000             cmp dword ptr [eax + 0x20], 0
// 00a17665  740f                 je 0xa17676
// 00a17667  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a1766a  6843cd0a00           push 0xacd43
// 00a1766f  51                   push ecx
// 00a17670  ff15083cb200         call dword ptr [0xb23c08]
// 00a17676  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00a1767d  5f                   pop edi
// 00a1767e  5e                   pop esi
// 00a1767f  5b                   pop ebx
// 00a17680  c3                   ret 
// 00a17681  e83aadf6ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAnimations@CXTPCommandBarAnimation@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp