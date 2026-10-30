// roc 2009-12 00892550  unit: CXTPDockBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892550
//
// 00892550  56                   push esi
// 00892551  57                   push edi
// 00892552  8bf9                 mov edi, ecx
// 00892554  33f6                 xor esi, esi
// 00892556  397760               cmp dword ptr [edi + 0x60], esi
// 00892559  7e67                 jle 0x8925c2
// 0089255b  55                   push ebp
// 0089255c  8d6e01               lea ebp, [esi + 1]
// 0089255f  90                   nop 
// 00892560  56                   push esi
// 00892561  8bcf                 mov ecx, edi
// 00892563  e8c8f0ffff           call 0x891630
// 00892568  85c0                 test eax, eax
// 0089256a  744e                 je 0x8925ba
// 0089256c  f680ec00000040       test byte ptr [eax + 0xec], 0x40
// 00892573  7445                 je 0x8925ba
// 00892575  85f6                 test esi, esi
// 00892577  7e1e                 jle 0x892597
// 00892579  8d46ff               lea eax, [esi - 1]
// 0089257c  50                   push eax
// 0089257d  8bcf                 mov ecx, edi
// 0089257f  e8acf0ffff           call 0x891630
// 00892584  85c0                 test eax, eax
// 00892586  740f                 je 0x892597
// 00892588  6a01                 push 1
// 0089258a  6a00                 push 0
// 0089258c  56                   push esi
// 0089258d  8d4f58               lea ecx, [edi + 0x58]
// 00892590  e8abb50500           call 0x8edb40
// 00892595  46                   inc esi
// 00892596  45                   inc ebp
// 00892597  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0089259a  49                   dec ecx
// 0089259b  3bf1                 cmp esi, ecx
// 0089259d  7d1b                 jge 0x8925ba
// 0089259f  55                   push ebp
// 008925a0  8bcf                 mov ecx, edi
// 008925a2  e889f0ffff           call 0x891630
// 008925a7  85c0                 test eax, eax
// 008925a9  740f                 je 0x8925ba
// 008925ab  6a01                 push 1
// 008925ad  6a00                 push 0
// 008925af  55                   push ebp
// 008925b0  8d4f58               lea ecx, [edi + 0x58]
// 008925b3  e888b50500           call 0x8edb40
// 008925b8  46                   inc esi
// 008925b9  45                   inc ebp
// 008925ba  46                   inc esi
// 008925bb  45                   inc ebp
// 008925bc  3b7760               cmp esi, dword ptr [edi + 0x60]
// 008925bf  7c9f                 jl 0x892560
// 008925c1  5d                   pop ebp
// 008925c2  5f                   pop edi
// 008925c3  5e                   pop esi
// 008925c4  c3                   ret 
// copied from an identical function in another client (function ?AdjustStretchBars@CXTPDockBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp