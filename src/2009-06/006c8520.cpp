// from server: 100% by auto
// roc 2009-06 006c8520  unit: seg_006c0000  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8520
//
// 006c8520  53                   push ebx
// 006c8521  55                   push ebp
// 006c8522  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006c8526  8bd8                 mov ebx, eax
// 006c8528  8b4504               mov eax, dword ptr [ebp + 4]
// 006c852b  83780806             cmp dword ptr [eax + 8], 6
// 006c852f  56                   push esi
// 006c8530  57                   push edi
// 006c8531  0f8596000000         jne 0x6c85cd
// 006c8537  8b4504               mov eax, dword ptr [ebp + 4]
// 006c853a  8b08                 mov ecx, dword ptr [eax]
// 006c853c  80790600             cmp byte ptr [ecx + 6], 0
// 006c8540  0f8587000000         jne 0x6c85cd
// 006c8546  83780806             cmp dword ptr [eax + 8], 6
// 006c854a  8b7910               mov edi, dword ptr [ecx + 0x10]
// 006c854d  7520                 jne 0x6c856f
// 006c854f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c8553  3b6914               cmp ebp, dword ptr [ecx + 0x14]
// 006c8556  7506                 jne 0x6c855e
// 006c8558  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006c855b  894d0c               mov dword ptr [ebp + 0xc], ecx
// 006c855e  8b10                 mov edx, dword ptr [eax]
// 006c8560  8b4210               mov eax, dword ptr [edx + 0x10]
// 006c8563  8b750c               mov esi, dword ptr [ebp + 0xc]
// 006c8566  2b700c               sub esi, dword ptr [eax + 0xc]
// 006c8569  c1fe02               sar esi, 2
// 006c856c  4e                   dec esi
// 006c856d  eb03                 jmp 0x6c8572
// 006c856f  83ceff               or esi, 0xffffffff
// 006c8572  56                   push esi
// 006c8573  8d4b01               lea ecx, [ebx + 1]
// 006c8576  51                   push ecx
// 006c8577  57                   push edi
// 006c8578  e8b34a0200           call 0x6ed030
// 006c857d  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c8581  83c40c               add esp, 0xc
// 006c8584  8902                 mov dword ptr [edx], eax
// 006c8586  85c0                 test eax, eax
// 006c8588  754a                 jne 0x6c85d4
// 006c858a  53                   push ebx
// 006c858b  56                   push esi
// 006c858c  57                   push edi
// 006c858d  e88efaffff           call 0x6c8020
// 006c8592  8bc8                 mov ecx, eax
// 006c8594  83e13f               and ecx, 0x3f
// 006c8597  83c40c               add esp, 0xc
// 006c859a  83f90b               cmp ecx, 0xb
// 006c859d  772e                 ja 0x6c85cd
// 006c859f  0fb68988866c00       movzx ecx, byte ptr [ecx + 0x6c8688]
// 006c85a6  ff248d70866c00       jmp dword ptr [ecx*4 + 0x6c8670]
// 006c85ad  8bc8                 mov ecx, eax
// 006c85af  c1e806               shr eax, 6
// 006c85b2  c1e917               shr ecx, 0x17
// 006c85b5  25ff000000           and eax, 0xff
// 006c85ba  3bc8                 cmp ecx, eax
// 006c85bc  7d0f                 jge 0x6c85cd
// 006c85be  8b5504               mov edx, dword ptr [ebp + 4]
// 006c85c1  837a0806             cmp dword ptr [edx + 8], 6
// 006c85c5  8bd9                 mov ebx, ecx
// 006c85c7  0f846affffff         je 0x6c8537
// 006c85cd  5f                   pop edi
// 006c85ce  5e                   pop esi
// 006c85cf  5d                   pop ebp
// 006c85d0  33c0                 xor eax, eax
// 006c85d2  5b                   pop ebx
// 006c85d3  c3                   ret 
// 006c85d4  5f                   pop edi
// 006c85d5  5e                   pop esi
// 006c85d6  5d                   pop ebp
// 006c85d7  b8bcc28e00           mov eax, 0x8ec2bc
// 006c85dc  5b                   pop ebx
// 006c85dd  c3                   ret 
// 006c85de  8b4f08               mov ecx, dword ptr [edi + 8]
// 006c85e1  c1e80e               shr eax, 0xe
// 006c85e4  c1e004               shl eax, 4
// 006c85e7  8b1408               mov edx, dword ptr [eax + ecx]
// 006c85ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c85ee  5f                   pop edi
// 006c85ef  5e                   pop esi
// 006c85f0  83c210               add edx, 0x10
// 006c85f3  5d                   pop ebp
// 006c85f4  8910                 mov dword ptr [eax], edx
// 006c85f6  b8b4c28e00           mov eax, 0x8ec2b4
// 006c85fb  5b                   pop ebx
// 006c85fc  c3                   ret 
// 006c85fd  c1e80e               shr eax, 0xe
// 006c8600  25ff010000           and eax, 0x1ff
// 006c8605  8bcf                 mov ecx, edi
// 006c8607  e8e4feffff           call 0x6c84f0
// 006c860c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c8610  5f                   pop edi
// 006c8611  5e                   pop esi
// 006c8612  5d                   pop ebp
// 006c8613  8901                 mov dword ptr [ecx], eax
// 006c8615  b8acc28e00           mov eax, 0x8ec2ac
// 006c861a  5b                   pop ebx
// 006c861b  c3                   ret 
// 006c861c  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 006c861f  85ff                 test edi, edi
// 006c8621  7419                 je 0x6c863c
// 006c8623  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006c8627  c1e817               shr eax, 0x17
// 006c862a  8b0487               mov eax, dword ptr [edi + eax*4]
// 006c862d  5f                   pop edi
// 006c862e  5e                   pop esi
// 006c862f  83c010               add eax, 0x10
// 006c8632  5d                   pop ebp
// 006c8633  8902                 mov dword ptr [edx], eax
// 006c8635  b8a4c28e00           mov eax, 0x8ec2a4
// 006c863a  5b                   pop ebx
// 006c863b  c3                   ret 
// 006c863c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006c8640  5f                   pop edi
// 006c8641  5e                   pop esi
// 006c8642  b800758c00           mov eax, 0x8c7500
// 006c8647  5d                   pop ebp
// 006c8648  8902                 mov dword ptr [edx], eax
// 006c864a  b8a4c28e00           mov eax, 0x8ec2a4
// 006c864f  5b                   pop ebx
// 006c8650  c3                   ret 
// 006c8651  c1e80e               shr eax, 0xe
// 006c8654  25ff010000           and eax, 0x1ff
// 006c8659  8bcf                 mov ecx, edi
// 006c865b  e890feffff           call 0x6c84f0
// 006c8660  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c8664  5f                   pop edi
// 006c8665  5e                   pop esi
// 006c8666  5d                   pop ebp
// 006c8667  8901                 mov dword ptr [ecx], eax
// 006c8669  b888af8e00           mov eax, 0x8eaf88
// 006c866e  5b                   pop ebx
// 006c866f  c3                   ret 
// 006c8670  ad                   lodsd eax, dword ptr [esi]
// 006c8671  856c001c             test dword ptr [eax + eax + 0x1c], ebp
// 006c8675  866c00de             xchg byte ptr [eax + eax - 0x22], ch
// 006c8679  856c00fd             test dword ptr [eax + eax - 3], ebp
// 006c867d  856c0051             test dword ptr [eax + eax + 0x51], ebp
// 006c8681  866c00cd             xchg byte ptr [eax + eax - 0x33], ch
// 006c8685  856c0000             test dword ptr [eax + eax], ebp
// 006c8689  0505050102           add eax, 0x2010505
// 006c868e  030505050504         add eax, dword ptr [0x4050505]
// library lua-5.1.4/ldebug.c (function _getobjname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
