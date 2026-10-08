// roc 2009-12 00628490  unit: seg_00620000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00628490
//
// 00628490  53                   push ebx
// 00628491  56                   push esi
// 00628492  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628496  8b4604               mov eax, dword ptr [esi + 4]
// 00628499  8b08                 mov ecx, dword ptr [eax]
// 0062849b  57                   push edi
// 0062849c  6a20                 push 0x20
// 0062849e  6a01                 push 1
// 006284a0  56                   push esi
// 006284a1  ffd1                 call ecx
// 006284a3  8bf8                 mov edi, eax
// 006284a5  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 006284ab  33db                 xor ebx, ebx
// 006284ad  83c40c               add esp, 0xc
// 006284b0  c70750826200         mov dword ptr [edi], 0x628250
// 006284b6  c74704f0836200       mov dword ptr [edi + 4], 0x6283f0
// 006284bd  c7470820846200       mov dword ptr [edi + 8], 0x628420
// 006284c4  885f0d               mov byte ptr [edi + 0xd], bl
// 006284c7  e814f5ffff           call 0x6279e0
// 006284cc  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 006284d2  7407                 je 0x6284db
// 006284d4  e8e7f6ffff           call 0x627bc0
// 006284d9  eb10                 jmp 0x6284eb
// 006284db  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 006284e1  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 006284eb  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 006284f1  7407                 je 0x6284fa
// 006284f3  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 006284fa  385c2414             cmp byte ptr [esp + 0x14], bl
// 006284fe  7411                 je 0x628511
// 00628500  33d2                 xor edx, edx
// 00628502  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 00628508  0f94c2               sete dl
// 0062850b  42                   inc edx
// 0062850c  895710               mov dword ptr [edi + 0x10], edx
// 0062850f  eb03                 jmp 0x628514
// 00628511  895f10               mov dword ptr [edi + 0x10], ebx
// 00628514  895f1c               mov dword ptr [edi + 0x1c], ebx
// 00628517  895f14               mov dword ptr [edi + 0x14], ebx
// 0062851a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 00628520  740f                 je 0x628531
// 00628522  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00628528  03c0                 add eax, eax
// 0062852a  894718               mov dword ptr [edi + 0x18], eax
// 0062852d  5f                   pop edi
// 0062852e  5e                   pop esi
// 0062852f  5b                   pop ebx
// 00628530  c3                   ret 
// 00628531  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00628537  894f18               mov dword ptr [edi + 0x18], ecx
// 0062853a  5f                   pop edi
// 0062853b  5e                   pop esi
// 0062853c  5b                   pop ebx
// 0062853d  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
