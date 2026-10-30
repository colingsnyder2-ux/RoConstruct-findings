// roc 2009-12 008572c0  unit: CXTPTabClientWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008572c0
//
// 008572c0  6aff                 push -1
// 008572c2  6875e09500           push 0x95e075
// 008572c7  64a100000000         mov eax, dword ptr fs:[0]
// 008572cd  50                   push eax
// 008572ce  51                   push ecx
// 008572cf  a10052b600           mov eax, dword ptr [0xb65200]
// 008572d4  33c4                 xor eax, esp
// 008572d6  50                   push eax
// 008572d7  8d442408             lea eax, [esp + 8]
// 008572db  64a300000000         mov dword ptr fs:[0], eax
// 008572e1  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 008572e4  85c0                 test eax, eax
// 008572e6  0f8581000000         jne 0x85736d
// 008572ec  398180000000         cmp dword ptr [ecx + 0x80], eax
// 008572f2  7577                 jne 0x85736b
// 008572f4  3981b4000000         cmp dword ptr [ecx + 0xb4], eax
// 008572fa  7434                 je 0x857330
// 008572fc  68b0000000           push 0xb0
// 00857301  e85ac5f9ff           call 0x7f3860
// 00857306  83c404               add esp, 4
// 00857309  89442404             mov dword ptr [esp + 4], eax
// 0085730d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00857315  85c0                 test eax, eax
// 00857317  7452                 je 0x85736b
// 00857319  8bc8                 mov ecx, eax
// 0085731b  e840e6ffff           call 0x855960
// 00857320  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00857324  64890d00000000       mov dword ptr fs:[0], ecx
// 0085732b  59                   pop ecx
// 0085732c  83c410               add esp, 0x10
// 0085732f  c3                   ret 
// 00857330  6808010000           push 0x108
// 00857335  e826c5f9ff           call 0x7f3860
// 0085733a  83c404               add esp, 4
// 0085733d  89442404             mov dword ptr [esp + 4], eax
// 00857341  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00857349  85c0                 test eax, eax
// 0085734b  741e                 je 0x85736b
// 0085734d  8bc8                 mov ecx, eax
// 0085734f  e8bcf1ffff           call 0x856510
// 00857354  85c0                 test eax, eax
// 00857356  7413                 je 0x85736b
// 00857358  83c058               add eax, 0x58
// 0085735b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085735f  64890d00000000       mov dword ptr fs:[0], ecx
// 00857366  59                   pop ecx
// 00857367  83c410               add esp, 0x10
// 0085736a  c3                   ret 
// 0085736b  33c0                 xor eax, eax
// 0085736d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00857371  64890d00000000       mov dword ptr fs:[0], ecx
// 00857378  59                   pop ecx
// 00857379  83c410               add esp, 0x10
// 0085737c  c3                   ret 
// copied from an identical function in another client (function ?CreateWorkspace@CXTPTabClientWnd@@UAEPAVCWorkspace@1@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp