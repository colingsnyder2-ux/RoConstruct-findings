// roc 2007-03 00522550  unit: seg_00520000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522550
//
// 00522550  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00522554  53                   push ebx
// 00522555  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00522559  2b03                 sub eax, dword ptr [ebx]
// 0052255b  56                   push esi
// 0052255c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00522560  57                   push edi
// 00522561  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 00522567  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0052256a  3bc1                 cmp eax, ecx
// 0052256c  7602                 jbe 0x522570
// 0052256e  8bc1                 mov eax, ecx
// 00522570  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 00522576  50                   push eax
// 00522577  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052257f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00522582  8d542414             lea edx, [esp + 0x14]
// 00522586  52                   push edx
// 00522587  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052258b  50                   push eax
// 0052258c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00522590  52                   push edx
// 00522591  8b542424             mov edx, dword ptr [esp + 0x24]
// 00522595  50                   push eax
// 00522596  8b4104               mov eax, dword ptr [ecx + 4]
// 00522599  52                   push edx
// 0052259a  56                   push esi
// 0052259b  ffd0                 call eax
// 0052259d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005225a1  8b03                 mov eax, dword ptr [ebx]
// 005225a3  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 005225a9  52                   push edx
// 005225aa  8b542440             mov edx, dword ptr [esp + 0x40]
// 005225ae  8d0482               lea eax, [edx + eax*4]
// 005225b1  8b570c               mov edx, dword ptr [edi + 0xc]
// 005225b4  50                   push eax
// 005225b5  8b4104               mov eax, dword ptr [ecx + 4]
// 005225b8  52                   push edx
// 005225b9  56                   push esi
// 005225ba  ffd0                 call eax
// 005225bc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005225c0  010b                 add dword ptr [ebx], ecx
// 005225c2  83c42c               add esp, 0x2c
// 005225c5  5f                   pop edi
// 005225c6  5e                   pop esi
// 005225c7  5b                   pop ebx
// 005225c8  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_1pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
