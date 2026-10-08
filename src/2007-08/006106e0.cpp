// from server: 100% by auto
// roc 2007-08 006106e0  unit: RBX::Ball  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006106e0
//
// 006106e0  53                   push ebx
// 006106e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006106e5  56                   push esi
// 006106e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006106ea  8b4608               mov eax, dword ptr [esi + 8]
// 006106ed  3b4308               cmp eax, dword ptr [ebx + 8]
// 006106f0  7412                 je 0x610704
// 006106f2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006106f6  53                   push ebx
// 006106f7  56                   push esi
// 006106f8  50                   push eax
// 006106f9  e8226cfbff           call 0x5c7320
// 006106fe  83c40c               add esp, 0xc
// 00610701  5e                   pop esi
// 00610702  5b                   pop ebx
// 00610703  c3                   ret 
// 00610704  83f803               cmp eax, 3
// 00610707  7518                 jne 0x610721
// 00610709  dd03                 fld qword ptr [ebx]
// 0061070b  dc1e                 fcomp qword ptr [esi]
// 0061070d  dfe0                 fnstsw ax
// 0061070f  f6c441               test ah, 0x41
// 00610712  7508                 jne 0x61071c
// 00610714  5e                   pop esi
// 00610715  b801000000           mov eax, 1
// 0061071a  5b                   pop ebx
// 0061071b  c3                   ret 
// 0061071c  5e                   pop esi
// 0061071d  33c0                 xor eax, eax
// 0061071f  5b                   pop ebx
// 00610720  c3                   ret 
// 00610721  83f804               cmp eax, 4
// 00610724  7515                 jne 0x61073b
// 00610726  8b03                 mov eax, dword ptr [ebx]
// 00610728  8b0e                 mov ecx, dword ptr [esi]
// 0061072a  e841ffffff           call 0x610670
// 0061072f  33c9                 xor ecx, ecx
// 00610731  85c0                 test eax, eax
// 00610733  0f9cc1               setl cl
// 00610736  5e                   pop esi
// 00610737  5b                   pop ebx
// 00610738  8bc1                 mov eax, ecx
// 0061073a  c3                   ret 
// 0061073b  57                   push edi
// 0061073c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00610740  6a0d                 push 0xd
// 00610742  56                   push esi
// 00610743  8bc7                 mov eax, edi
// 00610745  e8a6feffff           call 0x6105f0
// 0061074a  83c408               add esp, 8
// 0061074d  83f8ff               cmp eax, -1
// 00610750  750b                 jne 0x61075d
// 00610752  53                   push ebx
// 00610753  56                   push esi
// 00610754  57                   push edi
// 00610755  e8c66bfbff           call 0x5c7320
// 0061075a  83c40c               add esp, 0xc
// 0061075d  5f                   pop edi
// 0061075e  5e                   pop esi
// 0061075f  5b                   pop ebx
// 00610760  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_lessthan)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
