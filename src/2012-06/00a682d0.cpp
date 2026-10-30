// roc 2012-06 00a682d0  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a682d0
//
// 00a682d0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00a682d4  53                   push ebx
// 00a682d5  55                   push ebp
// 00a682d6  56                   push esi
// 00a682d7  57                   push edi
// 00a682d8  0f859d000000         jne 0xa6837b
// 00a682de  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a682e2  bd03000000           mov ebp, 3
// 00a682e7  896c2414             mov dword ptr [esp + 0x14], ebp
// 00a682eb  eb03                 jmp 0xa682f0
// 00a682ed  8d4900               lea ecx, [ecx]
// 00a682f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a682f4  33ff                 xor edi, edi
// 00a682f6  8b4304               mov eax, dword ptr [ebx + 4]
// 00a682f9  57                   push edi
// 00a682fa  55                   push ebp
// 00a682fb  50                   push eax
// 00a682fc  ff15b820b200         call dword ptr [0xb220b8]
// 00a68302  8bc8                 mov ecx, eax
// 00a68304  e877fdffff           call 0xa68080
// 00a68309  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00a6830c  50                   push eax
// 00a6830d  57                   push edi
// 00a6830e  55                   push ebp
// 00a6830f  51                   push ecx
// 00a68310  ff15c020b200         call dword ptr [0xb220c0]
// 00a68316  03742414             add esi, dword ptr [esp + 0x14]
// 00a6831a  47                   inc edi
// 00a6831b  83ff04               cmp edi, 4
// 00a6831e  7cd6                 jl 0xa682f6
// 00a68320  8344241403           add dword ptr [esp + 0x14], 3
// 00a68325  4d                   dec ebp
// 00a68326  83fdff               cmp ebp, -1
// 00a68329  7fc5                 jg 0xa682f0
// 00a6832b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6832f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a68332  33ed                 xor ebp, ebp
// 00a68334  8d753c               lea esi, [ebp + 0x3c]
// 00a68337  bf04000000           mov edi, 4
// 00a6833c  3bc7                 cmp eax, edi
// 00a6833e  7e2c                 jle 0xa6836c
// 00a68340  8b4304               mov eax, dword ptr [ebx + 4]
// 00a68343  57                   push edi
// 00a68344  55                   push ebp
// 00a68345  50                   push eax
// 00a68346  ff15b820b200         call dword ptr [0xb220b8]
// 00a6834c  8bc8                 mov ecx, eax
// 00a6834e  e82dfdffff           call 0xa68080
// 00a68353  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00a68356  50                   push eax
// 00a68357  57                   push edi
// 00a68358  55                   push ebp
// 00a68359  51                   push ecx
// 00a6835a  ff15c020b200         call dword ptr [0xb220c0]
// 00a68360  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a68364  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a68367  47                   inc edi
// 00a68368  3bf8                 cmp edi, eax
// 00a6836a  7cd4                 jl 0xa68340
// 00a6836c  83ee0f               sub esi, 0xf
// 00a6836f  45                   inc ebp
// 00a68370  85f6                 test esi, esi
// 00a68372  7fc3                 jg 0xa68337
// 00a68374  5f                   pop edi
// 00a68375  5e                   pop esi
// 00a68376  5d                   pop ebp
// 00a68377  5b                   pop ebx
// 00a68378  c20800               ret 8
// 00a6837b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a6837f  33ed                 xor ebp, ebp
// 00a68381  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00a68389  8da42400000000       lea esp, [esp]
// 00a68390  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a68394  bb03000000           mov ebx, 3
// 00a68399  8da42400000000       lea esp, [esp]
// 00a683a0  8b4704               mov eax, dword ptr [edi + 4]
// 00a683a3  53                   push ebx
// 00a683a4  55                   push ebp
// 00a683a5  50                   push eax
// 00a683a6  ff15b820b200         call dword ptr [0xb220b8]
// 00a683ac  8bc8                 mov ecx, eax
// 00a683ae  e8cdfcffff           call 0xa68080
// 00a683b3  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a683b6  50                   push eax
// 00a683b7  53                   push ebx
// 00a683b8  55                   push ebp
// 00a683b9  51                   push ecx
// 00a683ba  ff15c020b200         call dword ptr [0xb220c0]
// 00a683c0  03742414             add esi, dword ptr [esp + 0x14]
// 00a683c4  4b                   dec ebx
// 00a683c5  83fbff               cmp ebx, -1
// 00a683c8  7fd6                 jg 0xa683a0
// 00a683ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a683ce  83c003               add eax, 3
// 00a683d1  45                   inc ebp
// 00a683d2  83f80f               cmp eax, 0xf
// 00a683d5  89442414             mov dword ptr [esp + 0x14], eax
// 00a683d9  7cb5                 jl 0xa68390
// 00a683db  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a683df  8b4508               mov eax, dword ptr [ebp + 8]
// 00a683e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a683ea  83c0fc               add eax, -4
// 00a683ed  be3c000000           mov esi, 0x3c
// 00a683f2  bb04000000           mov ebx, 4
// 00a683f7  3bc3                 cmp eax, ebx
// 00a683f9  7e38                 jle 0xa68433
// 00a683fb  eb03                 jmp 0xa68400
// 00a683fd  8d4900               lea ecx, [ecx]
// 00a68400  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a68404  8b4704               mov eax, dword ptr [edi + 4]
// 00a68407  52                   push edx
// 00a68408  53                   push ebx
// 00a68409  50                   push eax
// 00a6840a  ff15b820b200         call dword ptr [0xb220b8]
// 00a68410  8bc8                 mov ecx, eax
// 00a68412  e869fcffff           call 0xa68080
// 00a68417  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6841b  8b5704               mov edx, dword ptr [edi + 4]
// 00a6841e  50                   push eax
// 00a6841f  51                   push ecx
// 00a68420  53                   push ebx
// 00a68421  52                   push edx
// 00a68422  ff15c020b200         call dword ptr [0xb220c0]
// 00a68428  8b4508               mov eax, dword ptr [ebp + 8]
// 00a6842b  43                   inc ebx
// 00a6842c  83c0fc               add eax, -4
// 00a6842f  3bd8                 cmp ebx, eax
// 00a68431  7ccd                 jl 0xa68400
// 00a68433  ff442414             inc dword ptr [esp + 0x14]
// 00a68437  83ee0f               sub esi, 0xf
// 00a6843a  85f6                 test esi, esi
// 00a6843c  7fb4                 jg 0xa683f2
// 00a6843e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a68446  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00a6844e  8bff                 mov edi, edi
// 00a68450  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a68454  bb03000000           mov ebx, 3
// 00a68459  8da42400000000       lea esp, [esp]
// 00a68460  8b4508               mov eax, dword ptr [ebp + 8]
// 00a68463  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a68467  53                   push ebx
// 00a68468  48                   dec eax
// 00a68469  50                   push eax
// 00a6846a  8b4704               mov eax, dword ptr [edi + 4]
// 00a6846d  50                   push eax
// 00a6846e  ff15b820b200         call dword ptr [0xb220b8]
// 00a68474  8bc8                 mov ecx, eax
// 00a68476  e805fcffff           call 0xa68080
// 00a6847b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00a6847e  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00a68482  8b5704               mov edx, dword ptr [edi + 4]
// 00a68485  50                   push eax
// 00a68486  53                   push ebx
// 00a68487  49                   dec ecx
// 00a68488  51                   push ecx
// 00a68489  52                   push edx
// 00a6848a  ff15c020b200         call dword ptr [0xb220c0]
// 00a68490  03742414             add esi, dword ptr [esp + 0x14]
// 00a68494  4b                   dec ebx
// 00a68495  83fbff               cmp ebx, -1
// 00a68498  7fc6                 jg 0xa68460
// 00a6849a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6849e  ff442418             inc dword ptr [esp + 0x18]
// 00a684a2  83c003               add eax, 3
// 00a684a5  83f80f               cmp eax, 0xf
// 00a684a8  89442414             mov dword ptr [esp + 0x14], eax
// 00a684ac  7ca2                 jl 0xa68450
// 00a684ae  5f                   pop edi
// 00a684af  5e                   pop esi
// 00a684b0  5d                   pop ebp
// 00a684b1  5b                   pop ebx
// 00a684b2  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
