// roc 2009-06 006ea3c0  unit: RBX::PartDropTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ea3c0
//
// 006ea3c0  55                   push ebp
// 006ea3c1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006ea3c5  56                   push esi
// 006ea3c6  57                   push edi
// 006ea3c7  8bf0                 mov esi, eax
// 006ea3c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ea3cd  55                   push ebp
// 006ea3ce  50                   push eax
// 006ea3cf  56                   push esi
// 006ea3d0  e85bfaffff           call 0x6e9e30
// 006ea3d5  8bf8                 mov edi, eax
// 006ea3d7  83c40c               add esp, 0xc
// 006ea3da  837f0800             cmp dword ptr [edi + 8], 0
// 006ea3de  7507                 jne 0x6ea3e7
// 006ea3e0  5f                   pop edi
// 006ea3e1  5e                   pop esi
// 006ea3e2  83c8ff               or eax, 0xffffffff
// 006ea3e5  5d                   pop ebp
// 006ea3e6  c3                   ret 
// 006ea3e7  55                   push ebp
// 006ea3e8  53                   push ebx
// 006ea3e9  56                   push esi
// 006ea3ea  e841faffff           call 0x6e9e30
// 006ea3ef  50                   push eax
// 006ea3f0  57                   push edi
// 006ea3f1  e85ae8fdff           call 0x6c8c50
// 006ea3f6  83c414               add esp, 0x14
// 006ea3f9  85c0                 test eax, eax
// 006ea3fb  74e3                 je 0x6ea3e0
// 006ea3fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ea401  8b4608               mov eax, dword ptr [esi + 8]
// 006ea404  57                   push edi
// 006ea405  56                   push esi
// 006ea406  8bcb                 mov ecx, ebx
// 006ea408  e8d3fbffff           call 0x6e9fe0
// 006ea40d  8b7608               mov esi, dword ptr [esi + 8]
// 006ea410  8b4608               mov eax, dword ptr [esi + 8]
// 006ea413  83c408               add esp, 8
// 006ea416  85c0                 test eax, eax
// 006ea418  7413                 je 0x6ea42d
// 006ea41a  83f801               cmp eax, 1
// 006ea41d  7505                 jne 0x6ea424
// 006ea41f  833e00               cmp dword ptr [esi], 0
// 006ea422  7409                 je 0x6ea42d
// 006ea424  5f                   pop edi
// 006ea425  5e                   pop esi
// 006ea426  b801000000           mov eax, 1
// 006ea42b  5d                   pop ebp
// 006ea42c  c3                   ret 
// 006ea42d  5f                   pop edi
// 006ea42e  5e                   pop esi
// 006ea42f  33c0                 xor eax, eax
// 006ea431  5d                   pop ebp
// 006ea432  c3                   ret 
// library lua-5.1.4/lvm.c (function _call_orderTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
