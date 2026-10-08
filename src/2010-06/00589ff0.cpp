// from server: 100% by auto
// roc 2010-06 00589ff0  unit: seg_00580000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589ff0
//
// 00589ff0  53                   push ebx
// 00589ff1  56                   push esi
// 00589ff2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00589ff6  8b4604               mov eax, dword ptr [esi + 4]
// 00589ff9  8b08                 mov ecx, dword ptr [eax]
// 00589ffb  57                   push edi
// 00589ffc  6a20                 push 0x20
// 00589ffe  6a01                 push 1
// 0058a000  56                   push esi
// 0058a001  ffd1                 call ecx
// 0058a003  8bf8                 mov edi, eax
// 0058a005  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0058a00b  33db                 xor ebx, ebx
// 0058a00d  83c40c               add esp, 0xc
// 0058a010  c707b09d5800         mov dword ptr [edi], 0x589db0
// 0058a016  c74704509f5800       mov dword ptr [edi + 4], 0x589f50
// 0058a01d  c74708809f5800       mov dword ptr [edi + 8], 0x589f80
// 0058a024  885f0d               mov byte ptr [edi + 0xd], bl
// 0058a027  e814f5ffff           call 0x589540
// 0058a02c  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 0058a032  7407                 je 0x58a03b
// 0058a034  e8e7f6ffff           call 0x589720
// 0058a039  eb10                 jmp 0x58a04b
// 0058a03b  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 0058a041  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 0058a04b  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 0058a051  7407                 je 0x58a05a
// 0058a053  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 0058a05a  385c2414             cmp byte ptr [esp + 0x14], bl
// 0058a05e  7411                 je 0x58a071
// 0058a060  33d2                 xor edx, edx
// 0058a062  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0058a068  0f94c2               sete dl
// 0058a06b  42                   inc edx
// 0058a06c  895710               mov dword ptr [edi + 0x10], edx
// 0058a06f  eb03                 jmp 0x58a074
// 0058a071  895f10               mov dword ptr [edi + 0x10], ebx
// 0058a074  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0058a077  895f14               mov dword ptr [edi + 0x14], ebx
// 0058a07a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0058a080  740f                 je 0x58a091
// 0058a082  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0058a088  03c0                 add eax, eax
// 0058a08a  894718               mov dword ptr [edi + 0x18], eax
// 0058a08d  5f                   pop edi
// 0058a08e  5e                   pop esi
// 0058a08f  5b                   pop ebx
// 0058a090  c3                   ret 
// 0058a091  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0058a097  894f18               mov dword ptr [edi + 0x18], ecx
// 0058a09a  5f                   pop edi
// 0058a09b  5e                   pop esi
// 0058a09c  5b                   pop ebx
// 0058a09d  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
