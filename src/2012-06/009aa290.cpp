// roc 2012-06 009aa290  unit: CXTPReportControl  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aa290
//
// 009aa290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009aa294  83ec1c               sub esp, 0x1c
// 009aa297  57                   push edi
// 009aa298  8bf9                 mov edi, ecx
// 009aa29a  85c0                 test eax, eax
// 009aa29c  7419                 je 0x9aa2b7
// 009aa29e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009aa2a2  50                   push eax
// 009aa2a3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009aa2a7  50                   push eax
// 009aa2a8  51                   push ecx
// 009aa2a9  8bcf                 mov ecx, edi
// 009aa2ab  e86cf40e00           call 0xa9971c
// 009aa2b0  5f                   pop edi
// 009aa2b1  83c41c               add esp, 0x1c
// 009aa2b4  c20c00               ret 0xc
// 009aa2b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 009aa2bb  56                   push esi
// 009aa2bc  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 009aa2c2  83f807               cmp eax, 7
// 009aa2c5  0f872a010000         ja 0x9aa3f5
// 009aa2cb  ff248508a49a00       jmp dword ptr [eax*4 + 0x9aa408]
// 009aa2d2  33f6                 xor esi, esi
// 009aa2d4  56                   push esi
// 009aa2d5  8bcf                 mov ecx, edi
// 009aa2d7  e854faffff           call 0x9a9d30
// 009aa2dc  5e                   pop esi
// 009aa2dd  5f                   pop edi
// 009aa2de  83c41c               add esp, 0x1c
// 009aa2e1  c20c00               ret 0xc
// 009aa2e4  6a01                 push 1
// 009aa2e6  e8a3f40e00           call 0xa9978e
// 009aa2eb  8bf0                 mov esi, eax
// 009aa2ed  56                   push esi
// 009aa2ee  8bcf                 mov ecx, edi
// 009aa2f0  e83bfaffff           call 0x9a9d30
// 009aa2f5  5e                   pop esi
// 009aa2f6  5f                   pop edi
// 009aa2f7  83c41c               add esp, 0x1c
// 009aa2fa  c20c00               ret 0xc
// 009aa2fd  8d46ff               lea eax, [esi - 1]
// 009aa300  33d2                 xor edx, edx
// 009aa302  85c0                 test eax, eax
// 009aa304  0f9ec2               setle dl
// 009aa307  8bcf                 mov ecx, edi
// 009aa309  4a                   dec edx
// 009aa30a  23d0                 and edx, eax
// 009aa30c  8bf2                 mov esi, edx
// 009aa30e  56                   push esi
// 009aa30f  e81cfaffff           call 0x9a9d30
// 009aa314  5e                   pop esi
// 009aa315  5f                   pop edi
// 009aa316  83c41c               add esp, 0x1c
// 009aa319  c20c00               ret 0xc
// 009aa31c  6a01                 push 1
// 009aa31e  46                   inc esi
// 009aa31f  e86af40e00           call 0xa9978e
// 009aa324  3bf0                 cmp esi, eax
// 009aa326  0f8cc9000000         jl 0x9aa3f5
// 009aa32c  6a01                 push 1
// 009aa32e  8bcf                 mov ecx, edi
// 009aa330  e859f40e00           call 0xa9978e
// 009aa335  8bf0                 mov esi, eax
// 009aa337  56                   push esi
// 009aa338  8bcf                 mov ecx, edi
// 009aa33a  e8f1f9ffff           call 0x9a9d30
// 009aa33f  5e                   pop esi
// 009aa340  5f                   pop edi
// 009aa341  83c41c               add esp, 0x1c
// 009aa344  c20c00               ret 0xc
// 009aa347  6a00                 push 0
// 009aa349  56                   push esi
// 009aa34a  e8c1fbffff           call 0x9a9f10
// 009aa34f  8bce                 mov ecx, esi
// 009aa351  2bc8                 sub ecx, eax
// 009aa353  85c9                 test ecx, ecx
// 009aa355  0f8e77ffffff         jle 0x9aa2d2
// 009aa35b  6a00                 push 0
// 009aa35d  56                   push esi
// 009aa35e  8bcf                 mov ecx, edi
// 009aa360  e8abfbffff           call 0x9a9f10
// 009aa365  2bf0                 sub esi, eax
// 009aa367  56                   push esi
// 009aa368  8bcf                 mov ecx, edi
// 009aa36a  e8c1f9ffff           call 0x9a9d30
// 009aa36f  5e                   pop esi
// 009aa370  5f                   pop edi
// 009aa371  83c41c               add esp, 0x1c
// 009aa374  c20c00               ret 0xc
// 009aa377  53                   push ebx
// 009aa378  6a01                 push 1
// 009aa37a  56                   push esi
// 009aa37b  e890fbffff           call 0x9a9f10
// 009aa380  6a01                 push 1
// 009aa382  8bcf                 mov ecx, edi
// 009aa384  8d1c30               lea ebx, [eax + esi]
// 009aa387  e802f40e00           call 0xa9978e
// 009aa38c  3bd8                 cmp ebx, eax
// 009aa38e  5b                   pop ebx
// 009aa38f  6a01                 push 1
// 009aa391  8bcf                 mov ecx, edi
// 009aa393  0f8d4dffffff         jge 0x9aa2e6
// 009aa399  56                   push esi
// 009aa39a  e871fbffff           call 0x9a9f10
// 009aa39f  03f0                 add esi, eax
// 009aa3a1  56                   push esi
// 009aa3a2  8bcf                 mov ecx, edi
// 009aa3a4  e887f9ffff           call 0x9a9d30
// 009aa3a9  5e                   pop esi
// 009aa3aa  5f                   pop edi
// 009aa3ab  83c41c               add esp, 0x1c
// 009aa3ae  c20c00               ret 0xc
// 009aa3b1  33c0                 xor eax, eax
// 009aa3b3  6a17                 push 0x17
// 009aa3b5  8d54240c             lea edx, [esp + 0xc]
// 009aa3b9  52                   push edx
// 009aa3ba  89442410             mov dword ptr [esp + 0x10], eax
// 009aa3be  89442414             mov dword ptr [esp + 0x14], eax
// 009aa3c2  6a01                 push 1
// 009aa3c4  8944241c             mov dword ptr [esp + 0x1c], eax
// 009aa3c8  89442420             mov dword ptr [esp + 0x20], eax
// 009aa3cc  89442424             mov dword ptr [esp + 0x24], eax
// 009aa3d0  89442428             mov dword ptr [esp + 0x28], eax
// 009aa3d4  8944242c             mov dword ptr [esp + 0x2c], eax
// 009aa3d8  c74424141c000000     mov dword ptr [esp + 0x14], 0x1c
// 009aa3e0  c744241810000000     mov dword ptr [esp + 0x18], 0x10
// 009aa3e8  e89bf30e00           call 0xa99788
// 009aa3ed  85c0                 test eax, eax
// 009aa3ef  740c                 je 0x9aa3fd
// 009aa3f1  8b742420             mov esi, dword ptr [esp + 0x20]
// 009aa3f5  56                   push esi
// 009aa3f6  8bcf                 mov ecx, edi
// 009aa3f8  e833f9ffff           call 0x9a9d30
// 009aa3fd  5e                   pop esi
// 009aa3fe  5f                   pop edi
// 009aa3ff  83c41c               add esp, 0x1c
// 009aa402  c20c00               ret 0xc
// 009aa405  8d4900               lea ecx, [ecx]
// 009aa408  fd                   std 
// 009aa409  a29a001ca3           mov byte ptr [0xa31c009a], al
// 009aa40e  9a0047a39a0077       lcall 0x7700, 0x9aa34700
// 009aa415  a39a00b1a3           mov dword ptr [0xa3b1009a], eax
// 009aa41a  9a00b1a39a00d2       lcall 0xd200, 0x9aa3b100
// 009aa421  a29a00e4a2           mov byte ptr [0xa2e4009a], al
// copied from an identical function in another client (function ?OnVScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp