// from server: 100% by auto
// roc 2009-06 006ea4b0  unit: RBX::PartDropTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ea4b0
//
// 006ea4b0  53                   push ebx
// 006ea4b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ea4b5  56                   push esi
// 006ea4b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ea4ba  8b4608               mov eax, dword ptr [esi + 8]
// 006ea4bd  3b4308               cmp eax, dword ptr [ebx + 8]
// 006ea4c0  7412                 je 0x6ea4d4
// 006ea4c2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ea4c6  53                   push ebx
// 006ea4c7  56                   push esi
// 006ea4c8  50                   push eax
// 006ea4c9  e8a2e6fdff           call 0x6c8b70
// 006ea4ce  83c40c               add esp, 0xc
// 006ea4d1  5e                   pop esi
// 006ea4d2  5b                   pop ebx
// 006ea4d3  c3                   ret 
// 006ea4d4  83f803               cmp eax, 3
// 006ea4d7  7518                 jne 0x6ea4f1
// 006ea4d9  dd03                 fld qword ptr [ebx]
// 006ea4db  dc1e                 fcomp qword ptr [esi]
// 006ea4dd  dfe0                 fnstsw ax
// 006ea4df  f6c441               test ah, 0x41
// 006ea4e2  7508                 jne 0x6ea4ec
// 006ea4e4  5e                   pop esi
// 006ea4e5  b801000000           mov eax, 1
// 006ea4ea  5b                   pop ebx
// 006ea4eb  c3                   ret 
// 006ea4ec  5e                   pop esi
// 006ea4ed  33c0                 xor eax, eax
// 006ea4ef  5b                   pop ebx
// 006ea4f0  c3                   ret 
// 006ea4f1  83f804               cmp eax, 4
// 006ea4f4  7515                 jne 0x6ea50b
// 006ea4f6  8b03                 mov eax, dword ptr [ebx]
// 006ea4f8  8b0e                 mov ecx, dword ptr [esi]
// 006ea4fa  e841ffffff           call 0x6ea440
// 006ea4ff  33c9                 xor ecx, ecx
// 006ea501  85c0                 test eax, eax
// 006ea503  0f9cc1               setl cl
// 006ea506  5e                   pop esi
// 006ea507  5b                   pop ebx
// 006ea508  8bc1                 mov eax, ecx
// 006ea50a  c3                   ret 
// 006ea50b  57                   push edi
// 006ea50c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ea510  6a0d                 push 0xd
// 006ea512  56                   push esi
// 006ea513  8bc7                 mov eax, edi
// 006ea515  e8a6feffff           call 0x6ea3c0
// 006ea51a  83c408               add esp, 8
// 006ea51d  83f8ff               cmp eax, -1
// 006ea520  750b                 jne 0x6ea52d
// 006ea522  53                   push ebx
// 006ea523  56                   push esi
// 006ea524  57                   push edi
// 006ea525  e846e6fdff           call 0x6c8b70
// 006ea52a  83c40c               add esp, 0xc
// 006ea52d  5f                   pop edi
// 006ea52e  5e                   pop esi
// 006ea52f  5b                   pop ebx
// 006ea530  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_lessthan)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
