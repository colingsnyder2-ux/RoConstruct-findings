// roc 2011-06 00836d20  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 560 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836d20
//
// 00836d20  53                   push ebx
// 00836d21  56                   push esi
// 00836d22  57                   push edi
// 00836d23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00836d27  33db                 xor ebx, ebx
// 00836d29  3bfb                 cmp edi, ebx
// 00836d2b  8bf1                 mov esi, ecx
// 00836d2d  7d05                 jge 0x836d34
// 00836d2f  e8d635fdff           call 0x80a30a
// 00836d34  8b442414             mov eax, dword ptr [esp + 0x14]
// 00836d38  3bc3                 cmp eax, ebx
// 00836d3a  7c03                 jl 0x836d3f
// 00836d3c  894610               mov dword ptr [esi + 0x10], eax
// 00836d3f  3bfb                 cmp edi, ebx
// 00836d41  753c                 jne 0x836d7f
// 00836d43  395e04               cmp dword ptr [esi + 4], ebx
// 00836d46  742b                 je 0x836d73
// 00836d48  33ff                 xor edi, edi
// 00836d4a  395e08               cmp dword ptr [esi + 8], ebx
// 00836d4d  7e15                 jle 0x836d64
// 00836d4f  90                   nop 
// 00836d50  8b4604               mov eax, dword ptr [esi + 4]
// 00836d53  8b14f8               mov edx, dword ptr [eax + edi*8]
// 00836d56  8d0cf8               lea ecx, [eax + edi*8]
// 00836d59  8b02                 mov eax, dword ptr [edx]
// 00836d5b  53                   push ebx
// 00836d5c  ffd0                 call eax
// 00836d5e  47                   inc edi
// 00836d5f  3b7e08               cmp edi, dword ptr [esi + 8]
// 00836d62  7cec                 jl 0x836d50
// 00836d64  8b4e04               mov ecx, dword ptr [esi + 4]
// 00836d67  51                   push ecx
// 00836d68  e89735fdff           call 0x80a304
// 00836d6d  83c404               add esp, 4
// 00836d70  895e04               mov dword ptr [esi + 4], ebx
// 00836d73  5f                   pop edi
// 00836d74  895e0c               mov dword ptr [esi + 0xc], ebx
// 00836d77  895e08               mov dword ptr [esi + 8], ebx
// 00836d7a  5e                   pop esi
// 00836d7b  5b                   pop ebx
// 00836d7c  c20800               ret 8
// 00836d7f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00836d82  55                   push ebp
// 00836d83  3bcb                 cmp ecx, ebx
// 00836d85  7553                 jne 0x836dda
// 00836d87  8b4610               mov eax, dword ptr [esi + 0x10]
// 00836d8a  3bf8                 cmp edi, eax
// 00836d8c  8bdf                 mov ebx, edi
// 00836d8e  7f02                 jg 0x836d92
// 00836d90  8bd8                 mov ebx, eax
// 00836d92  8d2cdd00000000       lea ebp, [ebx*8]
// 00836d99  55                   push ebp
// 00836d9a  e8a135fdff           call 0x80a340
// 00836d9f  55                   push ebp
// 00836da0  33ed                 xor ebp, ebp
// 00836da2  55                   push ebp
// 00836da3  50                   push eax
// 00836da4  894604               mov dword ptr [esi + 4], eax
// 00836da7  e83845fdff           call 0x80b2e4
// 00836dac  83c410               add esp, 0x10
// 00836daf  33c9                 xor ecx, ecx
// 00836db1  3bfd                 cmp edi, ebp
// 00836db3  7e18                 jle 0x836dcd
// 00836db5  8b5604               mov edx, dword ptr [esi + 4]
// 00836db8  8d04ca               lea eax, [edx + ecx*8]
// 00836dbb  3bc5                 cmp eax, ebp
// 00836dbd  7409                 je 0x836dc8
// 00836dbf  c700744dac00         mov dword ptr [eax], 0xac4d74
// 00836dc5  896804               mov dword ptr [eax + 4], ebp
// 00836dc8  41                   inc ecx
// 00836dc9  3bcf                 cmp ecx, edi
// 00836dcb  7ce8                 jl 0x836db5
// 00836dcd  5d                   pop ebp
// 00836dce  897e08               mov dword ptr [esi + 8], edi
// 00836dd1  5f                   pop edi
// 00836dd2  895e0c               mov dword ptr [esi + 0xc], ebx
// 00836dd5  5e                   pop esi
// 00836dd6  5b                   pop ebx
// 00836dd7  c20800               ret 8
// 00836dda  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00836ddd  3bfd                 cmp edi, ebp
// 00836ddf  0f8f96000000         jg 0x836e7b
// 00836de5  8b4608               mov eax, dword ptr [esi + 8]
// 00836de8  3bc7                 cmp eax, edi
// 00836dea  7d53                 jge 0x836e3f
// 00836dec  8bd7                 mov edx, edi
// 00836dee  2bd0                 sub edx, eax
// 00836df0  03d2                 add edx, edx
// 00836df2  03d2                 add edx, edx
// 00836df4  03d2                 add edx, edx
// 00836df6  52                   push edx
// 00836df7  8d04c1               lea eax, [ecx + eax*8]
// 00836dfa  53                   push ebx
// 00836dfb  50                   push eax
// 00836dfc  e8e344fdff           call 0x80b2e4
// 00836e01  8bd7                 mov edx, edi
// 00836e03  2b5608               sub edx, dword ptr [esi + 8]
// 00836e06  83c40c               add esp, 0xc
// 00836e09  33c9                 xor ecx, ecx
// 00836e0b  85d2                 test edx, edx
// 00836e0d  0f8e33010000         jle 0x836f46
// 00836e13  8b4608               mov eax, dword ptr [esi + 8]
// 00836e16  8b5604               mov edx, dword ptr [esi + 4]
// 00836e19  03c1                 add eax, ecx
// 00836e1b  8d04c2               lea eax, [edx + eax*8]
// 00836e1e  3bc3                 cmp eax, ebx
// 00836e20  7409                 je 0x836e2b
// 00836e22  c700744dac00         mov dword ptr [eax], 0xac4d74
// 00836e28  895804               mov dword ptr [eax + 4], ebx
// 00836e2b  8bc7                 mov eax, edi
// 00836e2d  2b4608               sub eax, dword ptr [esi + 8]
// 00836e30  41                   inc ecx
// 00836e31  3bc8                 cmp ecx, eax
// 00836e33  7cde                 jl 0x836e13
// 00836e35  5d                   pop ebp
// 00836e36  897e08               mov dword ptr [esi + 8], edi
// 00836e39  5f                   pop edi
// 00836e3a  5e                   pop esi
// 00836e3b  5b                   pop ebx
// 00836e3c  c20800               ret 8
// 00836e3f  0f8e01010000         jle 0x836f46
// 00836e45  2bc7                 sub eax, edi
// 00836e47  85c0                 test eax, eax
// 00836e49  0f8ef7000000         jle 0x836f46
// 00836e4f  8d2cfd00000000       lea ebp, [edi*8]
// 00836e56  8b4e04               mov ecx, dword ptr [esi + 4]
// 00836e59  8b1429               mov edx, dword ptr [ecx + ebp]
// 00836e5c  8b02                 mov eax, dword ptr [edx]
// 00836e5e  03cd                 add ecx, ebp
// 00836e60  6a00                 push 0
// 00836e62  ffd0                 call eax
// 00836e64  8b4e08               mov ecx, dword ptr [esi + 8]
// 00836e67  43                   inc ebx
// 00836e68  2bcf                 sub ecx, edi
// 00836e6a  83c508               add ebp, 8
// 00836e6d  3bd9                 cmp ebx, ecx
// 00836e6f  7ce5                 jl 0x836e56
// 00836e71  5d                   pop ebp
// 00836e72  897e08               mov dword ptr [esi + 8], edi
// 00836e75  5f                   pop edi
// 00836e76  5e                   pop esi
// 00836e77  5b                   pop ebx
// 00836e78  c20800               ret 8
// 00836e7b  8b4610               mov eax, dword ptr [esi + 0x10]
// 00836e7e  3bc3                 cmp eax, ebx
// 00836e80  7524                 jne 0x836ea6
// 00836e82  8b4608               mov eax, dword ptr [esi + 8]
// 00836e85  99                   cdq 
// 00836e86  83e207               and edx, 7
// 00836e89  03c2                 add eax, edx
// 00836e8b  c1f803               sar eax, 3
// 00836e8e  83f804               cmp eax, 4
// 00836e91  7d07                 jge 0x836e9a
// 00836e93  b804000000           mov eax, 4
// 00836e98  eb0c                 jmp 0x836ea6
// 00836e9a  3d00040000           cmp eax, 0x400
// 00836e9f  7e05                 jle 0x836ea6
// 00836ea1  b800040000           mov eax, 0x400
// 00836ea6  03c5                 add eax, ebp
// 00836ea8  3bf8                 cmp edi, eax
// 00836eaa  7d06                 jge 0x836eb2
// 00836eac  89442414             mov dword ptr [esp + 0x14], eax
// 00836eb0  eb06                 jmp 0x836eb8
// 00836eb2  897c2414             mov dword ptr [esp + 0x14], edi
// 00836eb6  8bc7                 mov eax, edi
// 00836eb8  3bc5                 cmp eax, ebp
// 00836eba  7d05                 jge 0x836ec1
// 00836ebc  e84934fdff           call 0x80a30a
// 00836ec1  8d1cc500000000       lea ebx, [eax*8]
// 00836ec8  53                   push ebx
// 00836ec9  e87234fdff           call 0x80a340
// 00836ece  8b5608               mov edx, dword ptr [esi + 8]
// 00836ed1  03d2                 add edx, edx
// 00836ed3  03d2                 add edx, edx
// 00836ed5  8be8                 mov ebp, eax
// 00836ed7  8b4604               mov eax, dword ptr [esi + 4]
// 00836eda  03d2                 add edx, edx
// 00836edc  52                   push edx
// 00836edd  50                   push eax
// 00836ede  53                   push ebx
// 00836edf  55                   push ebp
// 00836ee0  e8dbc6bcff           call 0x4035c0
// 00836ee5  8b4608               mov eax, dword ptr [esi + 8]
// 00836ee8  8bcf                 mov ecx, edi
// 00836eea  2bc8                 sub ecx, eax
// 00836eec  03c9                 add ecx, ecx
// 00836eee  03c9                 add ecx, ecx
// 00836ef0  03c9                 add ecx, ecx
// 00836ef2  51                   push ecx
// 00836ef3  33db                 xor ebx, ebx
// 00836ef5  8d54c500             lea edx, [ebp + eax*8]
// 00836ef9  53                   push ebx
// 00836efa  52                   push edx
// 00836efb  e8e443fdff           call 0x80b2e4
// 00836f00  8bc7                 mov eax, edi
// 00836f02  2b4608               sub eax, dword ptr [esi + 8]
// 00836f05  83c420               add esp, 0x20
// 00836f08  33c9                 xor ecx, ecx
// 00836f0a  85c0                 test eax, eax
// 00836f0c  7e22                 jle 0x836f30
// 00836f0e  8bff                 mov edi, edi
// 00836f10  8b5608               mov edx, dword ptr [esi + 8]
// 00836f13  03d1                 add edx, ecx
// 00836f15  8d44d500             lea eax, [ebp + edx*8]
// 00836f19  3bc3                 cmp eax, ebx
// 00836f1b  7409                 je 0x836f26
// 00836f1d  c700744dac00         mov dword ptr [eax], 0xac4d74
// 00836f23  895804               mov dword ptr [eax + 4], ebx
// 00836f26  8bc7                 mov eax, edi
// 00836f28  2b4608               sub eax, dword ptr [esi + 8]
// 00836f2b  41                   inc ecx
// 00836f2c  3bc8                 cmp ecx, eax
// 00836f2e  7ce0                 jl 0x836f10
// 00836f30  8b4e04               mov ecx, dword ptr [esi + 4]
// 00836f33  51                   push ecx
// 00836f34  e8cb33fdff           call 0x80a304
// 00836f39  8b542418             mov edx, dword ptr [esp + 0x18]
// 00836f3d  83c404               add esp, 4
// 00836f40  896e04               mov dword ptr [esi + 4], ebp
// 00836f43  89560c               mov dword ptr [esi + 0xc], edx
// 00836f46  5d                   pop ebp
// 00836f47  897e08               mov dword ptr [esi + 8], edi
// 00836f4a  5f                   pop edi
// 00836f4b  5e                   pop esi
// 00836f4c  5b                   pop ebx
// 00836f4d  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetSize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
