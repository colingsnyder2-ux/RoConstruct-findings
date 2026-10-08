// roc 2007-03 00529550  unit: seg_00520000  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529550
//
// 00529550  83ec20               sub esp, 0x20
// 00529553  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00529557  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 0052955d  53                   push ebx
// 0052955e  99                   cdq 
// 0052955f  55                   push ebp
// 00529560  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00529564  f77d08               idiv dword ptr [ebp + 8]
// 00529567  56                   push esi
// 00529568  8bb1dc000000         mov esi, dword ptr [ecx + 0xdc]
// 0052956e  57                   push edi
// 0052956f  8b5d1c               mov ebx, dword ptr [ebp + 0x1c]
// 00529572  03db                 add ebx, ebx
// 00529574  03db                 add ebx, ebx
// 00529576  03db                 add ebx, ebx
// 00529578  56                   push esi
// 00529579  895c2424             mov dword ptr [esp + 0x24], ebx
// 0052957d  8bf8                 mov edi, eax
// 0052957f  8bc6                 mov eax, esi
// 00529581  99                   cdq 
// 00529582  f77d0c               idiv dword ptr [ebp + 0xc]
// 00529585  8b742440             mov esi, dword ptr [esp + 0x40]
// 00529589  56                   push esi
// 0052958a  8be8                 mov ebp, eax
// 0052958c  0fafc7               imul eax, edi
// 0052958f  89442434             mov dword ptr [esp + 0x34], eax
// 00529593  99                   cdq 
// 00529594  2bc2                 sub eax, edx
// 00529596  d1f8                 sar eax, 1
// 00529598  89442430             mov dword ptr [esp + 0x30], eax
// 0052959c  8bc7                 mov eax, edi
// 0052959e  0fafc3               imul eax, ebx
// 005295a1  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 005295a4  896c242c             mov dword ptr [esp + 0x2c], ebp
// 005295a8  e8c3feffff           call 0x529470
// 005295ad  8b442440             mov eax, dword ptr [esp + 0x40]
// 005295b1  33c9                 xor ecx, ecx
// 005295b3  83c408               add esp, 8
// 005295b6  39480c               cmp dword ptr [eax + 0xc], ecx
// 005295b9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005295bd  0f8eae000000         jle 0x529671
// 005295c3  89742434             mov dword ptr [esp + 0x34], esi
// 005295c7  eb07                 jmp 0x5295d0
// 005295c9  8da42400000000       lea esp, [esp]
// 005295d0  8b542440             mov edx, dword ptr [esp + 0x40]
// 005295d4  8b048a               mov eax, dword ptr [edx + ecx*4]
// 005295d7  89442414             mov dword ptr [esp + 0x14], eax
// 005295db  8b442420             mov eax, dword ptr [esp + 0x20]
// 005295df  33db                 xor ebx, ebx
// 005295e1  85c0                 test eax, eax
// 005295e3  766d                 jbe 0x529652
// 005295e5  89442418             mov dword ptr [esp + 0x18], eax
// 005295e9  8da42400000000       lea esp, [esp]
// 005295f0  33d2                 xor edx, edx
// 005295f2  85ed                 test ebp, ebp
// 005295f4  7e35                 jle 0x52962b
// 005295f6  8b742434             mov esi, dword ptr [esp + 0x34]
// 005295fa  896c2410             mov dword ptr [esp + 0x10], ebp
// 005295fe  8bff                 mov edi, edi
// 00529600  8b06                 mov eax, dword ptr [esi]
// 00529602  03c3                 add eax, ebx
// 00529604  85ff                 test edi, edi
// 00529606  7e19                 jle 0x529621
// 00529608  8bcf                 mov ecx, edi
// 0052960a  8d9b00000000         lea ebx, [ebx]
// 00529610  0fb628               movzx ebp, byte ptr [eax]
// 00529613  03d5                 add edx, ebp
// 00529615  83c001               add eax, 1
// 00529618  83e901               sub ecx, 1
// 0052961b  75f3                 jne 0x529610
// 0052961d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00529621  83c604               add esi, 4
// 00529624  836c241001           sub dword ptr [esp + 0x10], 1
// 00529629  75d5                 jne 0x529600
// 0052962b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052962f  8d040a               lea eax, [edx + ecx]
// 00529632  99                   cdq 
// 00529633  f77c242c             idiv dword ptr [esp + 0x2c]
// 00529637  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052963b  83c101               add ecx, 1
// 0052963e  03df                 add ebx, edi
// 00529640  836c241801           sub dword ptr [esp + 0x18], 1
// 00529645  894c2414             mov dword ptr [esp + 0x14], ecx
// 00529649  8841ff               mov byte ptr [ecx - 1], al
// 0052964c  75a2                 jne 0x5295f0
// 0052964e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00529652  8b542438             mov edx, dword ptr [esp + 0x38]
// 00529656  8d04ad00000000       lea eax, [ebp*4]
// 0052965d  01442434             add dword ptr [esp + 0x34], eax
// 00529661  83c101               add ecx, 1
// 00529664  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00529667  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052966b  0f8c5fffffff         jl 0x5295d0
// 00529671  5f                   pop edi
// 00529672  5e                   pop esi
// 00529673  5d                   pop ebp
// 00529674  5b                   pop ebx
// 00529675  83c420               add esp, 0x20
// 00529678  c3                   ret 
// library jpeg-6b/jcsample.c (function _int_downsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
