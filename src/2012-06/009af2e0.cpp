// roc 2012-06 009af2e0  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 560 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af2e0
//
// 009af2e0  53                   push ebx
// 009af2e1  56                   push esi
// 009af2e2  57                   push edi
// 009af2e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009af2e7  33db                 xor ebx, ebx
// 009af2e9  3bfb                 cmp edi, ebx
// 009af2eb  8bf1                 mov esi, ecx
// 009af2ed  7d05                 jge 0x9af2f4
// 009af2ef  e8cc30fdff           call 0x9823c0
// 009af2f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 009af2f8  3bc3                 cmp eax, ebx
// 009af2fa  7c03                 jl 0x9af2ff
// 009af2fc  894610               mov dword ptr [esi + 0x10], eax
// 009af2ff  3bfb                 cmp edi, ebx
// 009af301  753c                 jne 0x9af33f
// 009af303  395e04               cmp dword ptr [esi + 4], ebx
// 009af306  742b                 je 0x9af333
// 009af308  33ff                 xor edi, edi
// 009af30a  395e08               cmp dword ptr [esi + 8], ebx
// 009af30d  7e15                 jle 0x9af324
// 009af30f  90                   nop 
// 009af310  8b4604               mov eax, dword ptr [esi + 4]
// 009af313  8b14f8               mov edx, dword ptr [eax + edi*8]
// 009af316  8d0cf8               lea ecx, [eax + edi*8]
// 009af319  8b02                 mov eax, dword ptr [edx]
// 009af31b  53                   push ebx
// 009af31c  ffd0                 call eax
// 009af31e  47                   inc edi
// 009af31f  3b7e08               cmp edi, dword ptr [esi + 8]
// 009af322  7cec                 jl 0x9af310
// 009af324  8b4e04               mov ecx, dword ptr [esi + 4]
// 009af327  51                   push ecx
// 009af328  e88d30fdff           call 0x9823ba
// 009af32d  83c404               add esp, 4
// 009af330  895e04               mov dword ptr [esi + 4], ebx
// 009af333  5f                   pop edi
// 009af334  895e0c               mov dword ptr [esi + 0xc], ebx
// 009af337  895e08               mov dword ptr [esi + 8], ebx
// 009af33a  5e                   pop esi
// 009af33b  5b                   pop ebx
// 009af33c  c20800               ret 8
// 009af33f  8b4e04               mov ecx, dword ptr [esi + 4]
// 009af342  55                   push ebp
// 009af343  3bcb                 cmp ecx, ebx
// 009af345  7553                 jne 0x9af39a
// 009af347  8b4610               mov eax, dword ptr [esi + 0x10]
// 009af34a  3bf8                 cmp edi, eax
// 009af34c  8bdf                 mov ebx, edi
// 009af34e  7f02                 jg 0x9af352
// 009af350  8bd8                 mov ebx, eax
// 009af352  8d2cdd00000000       lea ebp, [ebx*8]
// 009af359  55                   push ebp
// 009af35a  e89130fdff           call 0x9823f0
// 009af35f  55                   push ebp
// 009af360  33ed                 xor ebp, ebp
// 009af362  55                   push ebp
// 009af363  50                   push eax
// 009af364  894604               mov dword ptr [esi + 4], eax
// 009af367  e80840fdff           call 0x983374
// 009af36c  83c410               add esp, 0x10
// 009af36f  33c9                 xor ecx, ecx
// 009af371  3bfd                 cmp edi, ebp
// 009af373  7e18                 jle 0x9af38d
// 009af375  8b5604               mov edx, dword ptr [esi + 4]
// 009af378  8d04ca               lea eax, [edx + ecx*8]
// 009af37b  3bc5                 cmp eax, ebp
// 009af37d  7409                 je 0x9af388
// 009af37f  c7005404c100         mov dword ptr [eax], 0xc10454
// 009af385  896804               mov dword ptr [eax + 4], ebp
// 009af388  41                   inc ecx
// 009af389  3bcf                 cmp ecx, edi
// 009af38b  7ce8                 jl 0x9af375
// 009af38d  5d                   pop ebp
// 009af38e  897e08               mov dword ptr [esi + 8], edi
// 009af391  5f                   pop edi
// 009af392  895e0c               mov dword ptr [esi + 0xc], ebx
// 009af395  5e                   pop esi
// 009af396  5b                   pop ebx
// 009af397  c20800               ret 8
// 009af39a  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 009af39d  3bfd                 cmp edi, ebp
// 009af39f  0f8f96000000         jg 0x9af43b
// 009af3a5  8b4608               mov eax, dword ptr [esi + 8]
// 009af3a8  3bc7                 cmp eax, edi
// 009af3aa  7d53                 jge 0x9af3ff
// 009af3ac  8bd7                 mov edx, edi
// 009af3ae  2bd0                 sub edx, eax
// 009af3b0  03d2                 add edx, edx
// 009af3b2  03d2                 add edx, edx
// 009af3b4  03d2                 add edx, edx
// 009af3b6  52                   push edx
// 009af3b7  8d04c1               lea eax, [ecx + eax*8]
// 009af3ba  53                   push ebx
// 009af3bb  50                   push eax
// 009af3bc  e8b33ffdff           call 0x983374
// 009af3c1  8bd7                 mov edx, edi
// 009af3c3  2b5608               sub edx, dword ptr [esi + 8]
// 009af3c6  83c40c               add esp, 0xc
// 009af3c9  33c9                 xor ecx, ecx
// 009af3cb  85d2                 test edx, edx
// 009af3cd  0f8e33010000         jle 0x9af506
// 009af3d3  8b4608               mov eax, dword ptr [esi + 8]
// 009af3d6  8b5604               mov edx, dword ptr [esi + 4]
// 009af3d9  03c1                 add eax, ecx
// 009af3db  8d04c2               lea eax, [edx + eax*8]
// 009af3de  3bc3                 cmp eax, ebx
// 009af3e0  7409                 je 0x9af3eb
// 009af3e2  c7005404c100         mov dword ptr [eax], 0xc10454
// 009af3e8  895804               mov dword ptr [eax + 4], ebx
// 009af3eb  8bc7                 mov eax, edi
// 009af3ed  2b4608               sub eax, dword ptr [esi + 8]
// 009af3f0  41                   inc ecx
// 009af3f1  3bc8                 cmp ecx, eax
// 009af3f3  7cde                 jl 0x9af3d3
// 009af3f5  5d                   pop ebp
// 009af3f6  897e08               mov dword ptr [esi + 8], edi
// 009af3f9  5f                   pop edi
// 009af3fa  5e                   pop esi
// 009af3fb  5b                   pop ebx
// 009af3fc  c20800               ret 8
// 009af3ff  0f8e01010000         jle 0x9af506
// 009af405  2bc7                 sub eax, edi
// 009af407  85c0                 test eax, eax
// 009af409  0f8ef7000000         jle 0x9af506
// 009af40f  8d2cfd00000000       lea ebp, [edi*8]
// 009af416  8b4e04               mov ecx, dword ptr [esi + 4]
// 009af419  8b1429               mov edx, dword ptr [ecx + ebp]
// 009af41c  8b02                 mov eax, dword ptr [edx]
// 009af41e  03cd                 add ecx, ebp
// 009af420  6a00                 push 0
// 009af422  ffd0                 call eax
// 009af424  8b4e08               mov ecx, dword ptr [esi + 8]
// 009af427  43                   inc ebx
// 009af428  2bcf                 sub ecx, edi
// 009af42a  83c508               add ebp, 8
// 009af42d  3bd9                 cmp ebx, ecx
// 009af42f  7ce5                 jl 0x9af416
// 009af431  5d                   pop ebp
// 009af432  897e08               mov dword ptr [esi + 8], edi
// 009af435  5f                   pop edi
// 009af436  5e                   pop esi
// 009af437  5b                   pop ebx
// 009af438  c20800               ret 8
// 009af43b  8b4610               mov eax, dword ptr [esi + 0x10]
// 009af43e  3bc3                 cmp eax, ebx
// 009af440  7524                 jne 0x9af466
// 009af442  8b4608               mov eax, dword ptr [esi + 8]
// 009af445  99                   cdq 
// 009af446  83e207               and edx, 7
// 009af449  03c2                 add eax, edx
// 009af44b  c1f803               sar eax, 3
// 009af44e  83f804               cmp eax, 4
// 009af451  7d07                 jge 0x9af45a
// 009af453  b804000000           mov eax, 4
// 009af458  eb0c                 jmp 0x9af466
// 009af45a  3d00040000           cmp eax, 0x400
// 009af45f  7e05                 jle 0x9af466
// 009af461  b800040000           mov eax, 0x400
// 009af466  03c5                 add eax, ebp
// 009af468  3bf8                 cmp edi, eax
// 009af46a  7d06                 jge 0x9af472
// 009af46c  89442414             mov dword ptr [esp + 0x14], eax
// 009af470  eb06                 jmp 0x9af478
// 009af472  897c2414             mov dword ptr [esp + 0x14], edi
// 009af476  8bc7                 mov eax, edi
// 009af478  3bc5                 cmp eax, ebp
// 009af47a  7d05                 jge 0x9af481
// 009af47c  e83f2ffdff           call 0x9823c0
// 009af481  8d1cc500000000       lea ebx, [eax*8]
// 009af488  53                   push ebx
// 009af489  e8622ffdff           call 0x9823f0
// 009af48e  8b5608               mov edx, dword ptr [esi + 8]
// 009af491  03d2                 add edx, edx
// 009af493  03d2                 add edx, edx
// 009af495  8be8                 mov ebp, eax
// 009af497  8b4604               mov eax, dword ptr [esi + 4]
// 009af49a  03d2                 add edx, edx
// 009af49c  52                   push edx
// 009af49d  50                   push eax
// 009af49e  53                   push ebx
// 009af49f  55                   push ebp
// 009af4a0  e82b4da5ff           call 0x4041d0
// 009af4a5  8b4608               mov eax, dword ptr [esi + 8]
// 009af4a8  8bcf                 mov ecx, edi
// 009af4aa  2bc8                 sub ecx, eax
// 009af4ac  03c9                 add ecx, ecx
// 009af4ae  03c9                 add ecx, ecx
// 009af4b0  03c9                 add ecx, ecx
// 009af4b2  51                   push ecx
// 009af4b3  33db                 xor ebx, ebx
// 009af4b5  8d54c500             lea edx, [ebp + eax*8]
// 009af4b9  53                   push ebx
// 009af4ba  52                   push edx
// 009af4bb  e8b43efdff           call 0x983374
// 009af4c0  8bc7                 mov eax, edi
// 009af4c2  2b4608               sub eax, dword ptr [esi + 8]
// 009af4c5  83c420               add esp, 0x20
// 009af4c8  33c9                 xor ecx, ecx
// 009af4ca  85c0                 test eax, eax
// 009af4cc  7e22                 jle 0x9af4f0
// 009af4ce  8bff                 mov edi, edi
// 009af4d0  8b5608               mov edx, dword ptr [esi + 8]
// 009af4d3  03d1                 add edx, ecx
// 009af4d5  8d44d500             lea eax, [ebp + edx*8]
// 009af4d9  3bc3                 cmp eax, ebx
// 009af4db  7409                 je 0x9af4e6
// 009af4dd  c7005404c100         mov dword ptr [eax], 0xc10454
// 009af4e3  895804               mov dword ptr [eax + 4], ebx
// 009af4e6  8bc7                 mov eax, edi
// 009af4e8  2b4608               sub eax, dword ptr [esi + 8]
// 009af4eb  41                   inc ecx
// 009af4ec  3bc8                 cmp ecx, eax
// 009af4ee  7ce0                 jl 0x9af4d0
// 009af4f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 009af4f3  51                   push ecx
// 009af4f4  e8c12efdff           call 0x9823ba
// 009af4f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 009af4fd  83c404               add esp, 4
// 009af500  896e04               mov dword ptr [esi + 4], ebp
// 009af503  89560c               mov dword ptr [esi + 0xc], edx
// 009af506  5d                   pop ebp
// 009af507  897e08               mov dword ptr [esi + 8], edi
// 009af50a  5f                   pop edi
// 009af50b  5e                   pop esi
// 009af50c  5b                   pop ebx
// 009af50d  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetSize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
