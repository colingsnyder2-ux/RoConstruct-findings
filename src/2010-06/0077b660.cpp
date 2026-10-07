// roc 2010-06 0077b660  unit: RBX::PartDropTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b660
//
// 0077b660  55                   push ebp
// 0077b661  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077b665  56                   push esi
// 0077b666  57                   push edi
// 0077b667  8bf0                 mov esi, eax
// 0077b669  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077b66d  55                   push ebp
// 0077b66e  50                   push eax
// 0077b66f  56                   push esi
// 0077b670  e85bfaffff           call 0x77b0d0
// 0077b675  8bf8                 mov edi, eax
// 0077b677  83c40c               add esp, 0xc
// 0077b67a  837f0800             cmp dword ptr [edi + 8], 0
// 0077b67e  7507                 jne 0x77b687
// 0077b680  5f                   pop edi
// 0077b681  5e                   pop esi
// 0077b682  83c8ff               or eax, 0xffffffff
// 0077b685  5d                   pop ebp
// 0077b686  c3                   ret 
// 0077b687  55                   push ebp
// 0077b688  53                   push ebx
// 0077b689  56                   push esi
// 0077b68a  e841faffff           call 0x77b0d0
// 0077b68f  50                   push eax
// 0077b690  57                   push edi
// 0077b691  e8fa72fbff           call 0x732990
// 0077b696  83c414               add esp, 0x14
// 0077b699  85c0                 test eax, eax
// 0077b69b  74e3                 je 0x77b680
// 0077b69d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077b6a1  8b4608               mov eax, dword ptr [esi + 8]
// 0077b6a4  57                   push edi
// 0077b6a5  56                   push esi
// 0077b6a6  8bcb                 mov ecx, ebx
// 0077b6a8  e8d3fbffff           call 0x77b280
// 0077b6ad  8b7608               mov esi, dword ptr [esi + 8]
// 0077b6b0  8b4608               mov eax, dword ptr [esi + 8]
// 0077b6b3  83c408               add esp, 8
// 0077b6b6  85c0                 test eax, eax
// 0077b6b8  7413                 je 0x77b6cd
// 0077b6ba  83f801               cmp eax, 1
// 0077b6bd  7505                 jne 0x77b6c4
// 0077b6bf  833e00               cmp dword ptr [esi], 0
// 0077b6c2  7409                 je 0x77b6cd
// 0077b6c4  5f                   pop edi
// 0077b6c5  5e                   pop esi
// 0077b6c6  b801000000           mov eax, 1
// 0077b6cb  5d                   pop ebp
// 0077b6cc  c3                   ret 
// 0077b6cd  5f                   pop edi
// 0077b6ce  5e                   pop esi
// 0077b6cf  33c0                 xor eax, eax
// 0077b6d1  5d                   pop ebp
// 0077b6d2  c3                   ret 
// library lua-5.1.4/lvm.c (function _call_orderTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
