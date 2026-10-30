// roc 2009-12 007ce490  unit: RBX::PartDropTool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ce490
//
// 007ce490  53                   push ebx
// 007ce491  8b580c               mov ebx, dword ptr [eax + 0xc]
// 007ce494  55                   push ebp
// 007ce495  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 007ce498  56                   push esi
// 007ce499  57                   push edi
// 007ce49a  8d7810               lea edi, [eax + 0x10]
// 007ce49d  8d7110               lea esi, [ecx + 0x10]
// 007ce4a0  57                   push edi
// 007ce4a1  56                   push esi
// 007ce4a2  ff1568b99800         call dword ptr [0x98b968]
// 007ce4a8  83c408               add esp, 8
// 007ce4ab  85c0                 test eax, eax
// 007ce4ad  7545                 jne 0x7ce4f4
// 007ce4af  90                   nop 
// 007ce4b0  8bc6                 mov eax, esi
// 007ce4b2  8d5001               lea edx, [eax + 1]
// 007ce4b5  8a08                 mov cl, byte ptr [eax]
// 007ce4b7  40                   inc eax
// 007ce4b8  84c9                 test cl, cl
// 007ce4ba  75f9                 jne 0x7ce4b5
// 007ce4bc  2bc2                 sub eax, edx
// 007ce4be  3bc3                 cmp eax, ebx
// 007ce4c0  7421                 je 0x7ce4e3
// 007ce4c2  3bc5                 cmp eax, ebp
// 007ce4c4  742b                 je 0x7ce4f1
// 007ce4c6  40                   inc eax
// 007ce4c7  03f8                 add edi, eax
// 007ce4c9  03f0                 add esi, eax
// 007ce4cb  57                   push edi
// 007ce4cc  56                   push esi
// 007ce4cd  2be8                 sub ebp, eax
// 007ce4cf  2bd8                 sub ebx, eax
// 007ce4d1  ff1568b99800         call dword ptr [0x98b968]
// 007ce4d7  83c408               add esp, 8
// 007ce4da  85c0                 test eax, eax
// 007ce4dc  74d2                 je 0x7ce4b0
// 007ce4de  5f                   pop edi
// 007ce4df  5e                   pop esi
// 007ce4e0  5d                   pop ebp
// 007ce4e1  5b                   pop ebx
// 007ce4e2  c3                   ret 
// 007ce4e3  33c9                 xor ecx, ecx
// 007ce4e5  3bc5                 cmp eax, ebp
// 007ce4e7  0f95c1               setne cl
// 007ce4ea  5f                   pop edi
// 007ce4eb  5e                   pop esi
// 007ce4ec  5d                   pop ebp
// 007ce4ed  5b                   pop ebx
// 007ce4ee  8bc1                 mov eax, ecx
// 007ce4f0  c3                   ret 
// 007ce4f1  83c8ff               or eax, 0xffffffff
// 007ce4f4  5f                   pop edi
// 007ce4f5  5e                   pop esi
// 007ce4f6  5d                   pop ebp
// 007ce4f7  5b                   pop ebx
// 007ce4f8  c3                   ret 
// copied from an identical function in another client (function _l_strcmp)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lvm.c