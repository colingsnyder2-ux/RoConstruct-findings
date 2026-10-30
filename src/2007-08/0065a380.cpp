// from server: 100% by auto
// roc 2007-08 0065a380  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 578 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a380
//
// 0065a380  53                   push ebx
// 0065a381  56                   push esi
// 0065a382  57                   push edi
// 0065a383  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065a387  33db                 xor ebx, ebx
// 0065a389  3bfb                 cmp edi, ebx
// 0065a38b  8bf1                 mov esi, ecx
// 0065a38d  7d05                 jge 0x65a394
// 0065a38f  e88c5bfdff           call 0x62ff20
// 0065a394  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065a398  3bc3                 cmp eax, ebx
// 0065a39a  7c03                 jl 0x65a39f
// 0065a39c  894610               mov dword ptr [esi + 0x10], eax
// 0065a39f  3bfb                 cmp edi, ebx
// 0065a3a1  753e                 jne 0x65a3e1
// 0065a3a3  395e04               cmp dword ptr [esi + 4], ebx
// 0065a3a6  742d                 je 0x65a3d5
// 0065a3a8  33ff                 xor edi, edi
// 0065a3aa  395e08               cmp dword ptr [esi + 8], ebx
// 0065a3ad  7e17                 jle 0x65a3c6
// 0065a3af  90                   nop 
// 0065a3b0  8b4604               mov eax, dword ptr [esi + 4]
// 0065a3b3  8b14f8               mov edx, dword ptr [eax + edi*8]
// 0065a3b6  8d0cf8               lea ecx, [eax + edi*8]
// 0065a3b9  8b02                 mov eax, dword ptr [edx]
// 0065a3bb  53                   push ebx
// 0065a3bc  ffd0                 call eax
// 0065a3be  83c701               add edi, 1
// 0065a3c1  3b7e08               cmp edi, dword ptr [esi + 8]
// 0065a3c4  7cea                 jl 0x65a3b0
// 0065a3c6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065a3c9  51                   push ecx
// 0065a3ca  e8575bfdff           call 0x62ff26
// 0065a3cf  83c404               add esp, 4
// 0065a3d2  895e04               mov dword ptr [esi + 4], ebx
// 0065a3d5  5f                   pop edi
// 0065a3d6  895e0c               mov dword ptr [esi + 0xc], ebx
// 0065a3d9  895e08               mov dword ptr [esi + 8], ebx
// 0065a3dc  5e                   pop esi
// 0065a3dd  5b                   pop ebx
// 0065a3de  c20800               ret 8
// 0065a3e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065a3e4  3bcb                 cmp ecx, ebx
// 0065a3e6  55                   push ebp
// 0065a3e7  7555                 jne 0x65a43e
// 0065a3e9  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065a3ec  3bf8                 cmp edi, eax
// 0065a3ee  8bdf                 mov ebx, edi
// 0065a3f0  7f02                 jg 0x65a3f4
// 0065a3f2  8bd8                 mov ebx, eax
// 0065a3f4  8d2cdd00000000       lea ebp, [ebx*8]
// 0065a3fb  55                   push ebp
// 0065a3fc  e8315bfdff           call 0x62ff32
// 0065a401  55                   push ebp
// 0065a402  33ed                 xor ebp, ebp
// 0065a404  55                   push ebp
// 0065a405  50                   push eax
// 0065a406  894604               mov dword ptr [esi + 4], eax
// 0065a409  e87e67fdff           call 0x630b8c
// 0065a40e  83c410               add esp, 0x10
// 0065a411  33c9                 xor ecx, ecx
// 0065a413  3bfd                 cmp edi, ebp
// 0065a415  7e1a                 jle 0x65a431
// 0065a417  8b5604               mov edx, dword ptr [esi + 4]
// 0065a41a  8d04ca               lea eax, [edx + ecx*8]
// 0065a41d  3bc5                 cmp eax, ebp
// 0065a41f  7409                 je 0x65a42a
// 0065a421  c70064857c00         mov dword ptr [eax], 0x7c8564
// 0065a427  896804               mov dword ptr [eax + 4], ebp
// 0065a42a  83c101               add ecx, 1
// 0065a42d  3bcf                 cmp ecx, edi
// 0065a42f  7ce6                 jl 0x65a417
// 0065a431  5d                   pop ebp
// 0065a432  897e08               mov dword ptr [esi + 8], edi
// 0065a435  5f                   pop edi
// 0065a436  895e0c               mov dword ptr [esi + 0xc], ebx
// 0065a439  5e                   pop esi
// 0065a43a  5b                   pop ebx
// 0065a43b  c20800               ret 8
// 0065a43e  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0065a441  3bfd                 cmp edi, ebp
// 0065a443  0f8f9e000000         jg 0x65a4e7
// 0065a449  8b4608               mov eax, dword ptr [esi + 8]
// 0065a44c  3bc7                 cmp eax, edi
// 0065a44e  7d55                 jge 0x65a4a5
// 0065a450  8bd7                 mov edx, edi
// 0065a452  2bd0                 sub edx, eax
// 0065a454  03d2                 add edx, edx
// 0065a456  03d2                 add edx, edx
// 0065a458  03d2                 add edx, edx
// 0065a45a  52                   push edx
// 0065a45b  8d04c1               lea eax, [ecx + eax*8]
// 0065a45e  53                   push ebx
// 0065a45f  50                   push eax
// 0065a460  e82767fdff           call 0x630b8c
// 0065a465  8bd7                 mov edx, edi
// 0065a467  2b5608               sub edx, dword ptr [esi + 8]
// 0065a46a  83c40c               add esp, 0xc
// 0065a46d  33c9                 xor ecx, ecx
// 0065a46f  85d2                 test edx, edx
// 0065a471  0f8e41010000         jle 0x65a5b8
// 0065a477  8b4608               mov eax, dword ptr [esi + 8]
// 0065a47a  8b5604               mov edx, dword ptr [esi + 4]
// 0065a47d  03c1                 add eax, ecx
// 0065a47f  8d04c2               lea eax, [edx + eax*8]
// 0065a482  3bc3                 cmp eax, ebx
// 0065a484  7409                 je 0x65a48f
// 0065a486  c70064857c00         mov dword ptr [eax], 0x7c8564
// 0065a48c  895804               mov dword ptr [eax + 4], ebx
// 0065a48f  8bc7                 mov eax, edi
// 0065a491  2b4608               sub eax, dword ptr [esi + 8]
// 0065a494  83c101               add ecx, 1
// 0065a497  3bc8                 cmp ecx, eax
// 0065a499  7cdc                 jl 0x65a477
// 0065a49b  5d                   pop ebp
// 0065a49c  897e08               mov dword ptr [esi + 8], edi
// 0065a49f  5f                   pop edi
// 0065a4a0  5e                   pop esi
// 0065a4a1  5b                   pop ebx
// 0065a4a2  c20800               ret 8
// 0065a4a5  0f8e0d010000         jle 0x65a5b8
// 0065a4ab  2bc7                 sub eax, edi
// 0065a4ad  85c0                 test eax, eax
// 0065a4af  0f8e03010000         jle 0x65a5b8
// 0065a4b5  8d2cfd00000000       lea ebp, [edi*8]
// 0065a4bc  8d642400             lea esp, [esp]
// 0065a4c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065a4c3  8b1429               mov edx, dword ptr [ecx + ebp]
// 0065a4c6  8b02                 mov eax, dword ptr [edx]
// 0065a4c8  03cd                 add ecx, ebp
// 0065a4ca  6a00                 push 0
// 0065a4cc  ffd0                 call eax
// 0065a4ce  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065a4d1  83c301               add ebx, 1
// 0065a4d4  2bcf                 sub ecx, edi
// 0065a4d6  83c508               add ebp, 8
// 0065a4d9  3bd9                 cmp ebx, ecx
// 0065a4db  7ce3                 jl 0x65a4c0
// 0065a4dd  5d                   pop ebp
// 0065a4de  897e08               mov dword ptr [esi + 8], edi
// 0065a4e1  5f                   pop edi
// 0065a4e2  5e                   pop esi
// 0065a4e3  5b                   pop ebx
// 0065a4e4  c20800               ret 8
// 0065a4e7  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065a4ea  3bc3                 cmp eax, ebx
// 0065a4ec  7524                 jne 0x65a512
// 0065a4ee  8b4608               mov eax, dword ptr [esi + 8]
// 0065a4f1  99                   cdq 
// 0065a4f2  83e207               and edx, 7
// 0065a4f5  03c2                 add eax, edx
// 0065a4f7  c1f803               sar eax, 3
// 0065a4fa  83f804               cmp eax, 4
// 0065a4fd  7d07                 jge 0x65a506
// 0065a4ff  b804000000           mov eax, 4
// 0065a504  eb0c                 jmp 0x65a512
// 0065a506  3d00040000           cmp eax, 0x400
// 0065a50b  7e05                 jle 0x65a512
// 0065a50d  b800040000           mov eax, 0x400
// 0065a512  03c5                 add eax, ebp
// 0065a514  3bf8                 cmp edi, eax
// 0065a516  7d06                 jge 0x65a51e
// 0065a518  89442414             mov dword ptr [esp + 0x14], eax
// 0065a51c  eb06                 jmp 0x65a524
// 0065a51e  897c2414             mov dword ptr [esp + 0x14], edi
// 0065a522  8bc7                 mov eax, edi
// 0065a524  3bc5                 cmp eax, ebp
// 0065a526  7d05                 jge 0x65a52d
// 0065a528  e8f359fdff           call 0x62ff20
// 0065a52d  8d1cc500000000       lea ebx, [eax*8]
// 0065a534  53                   push ebx
// 0065a535  e8f859fdff           call 0x62ff32
// 0065a53a  8b5608               mov edx, dword ptr [esi + 8]
// 0065a53d  03d2                 add edx, edx
// 0065a53f  03d2                 add edx, edx
// 0065a541  8be8                 mov ebp, eax
// 0065a543  8b4604               mov eax, dword ptr [esi + 4]
// 0065a546  03d2                 add edx, edx
// 0065a548  52                   push edx
// 0065a549  50                   push eax
// 0065a54a  53                   push ebx
// 0065a54b  55                   push ebp
// 0065a54c  e82f73daff           call 0x401880
// 0065a551  8b4608               mov eax, dword ptr [esi + 8]
// 0065a554  8bcf                 mov ecx, edi
// 0065a556  2bc8                 sub ecx, eax
// 0065a558  03c9                 add ecx, ecx
// 0065a55a  03c9                 add ecx, ecx
// 0065a55c  03c9                 add ecx, ecx
// 0065a55e  51                   push ecx
// 0065a55f  33db                 xor ebx, ebx
// 0065a561  8d54c500             lea edx, [ebp + eax*8]
// 0065a565  53                   push ebx
// 0065a566  52                   push edx
// 0065a567  e82066fdff           call 0x630b8c
// 0065a56c  8bc7                 mov eax, edi
// 0065a56e  2b4608               sub eax, dword ptr [esi + 8]
// 0065a571  83c420               add esp, 0x20
// 0065a574  33c9                 xor ecx, ecx
// 0065a576  85c0                 test eax, eax
// 0065a578  7e28                 jle 0x65a5a2
// 0065a57a  8d9b00000000         lea ebx, [ebx]
// 0065a580  8b5608               mov edx, dword ptr [esi + 8]
// 0065a583  03d1                 add edx, ecx
// 0065a585  8d44d500             lea eax, [ebp + edx*8]
// 0065a589  3bc3                 cmp eax, ebx
// 0065a58b  7409                 je 0x65a596
// 0065a58d  c70064857c00         mov dword ptr [eax], 0x7c8564
// 0065a593  895804               mov dword ptr [eax + 4], ebx
// 0065a596  8bc7                 mov eax, edi
// 0065a598  2b4608               sub eax, dword ptr [esi + 8]
// 0065a59b  83c101               add ecx, 1
// 0065a59e  3bc8                 cmp ecx, eax
// 0065a5a0  7cde                 jl 0x65a580
// 0065a5a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065a5a5  51                   push ecx
// 0065a5a6  e87b59fdff           call 0x62ff26
// 0065a5ab  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a5af  83c404               add esp, 4
// 0065a5b2  896e04               mov dword ptr [esi + 4], ebp
// 0065a5b5  89560c               mov dword ptr [esi + 0xc], edx
// 0065a5b8  5d                   pop ebp
// 0065a5b9  897e08               mov dword ptr [esi + 8], edi
// 0065a5bc  5f                   pop edi
// 0065a5bd  5e                   pop esi
// 0065a5be  5b                   pop ebx
// 0065a5bf  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?SetSize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@AAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
