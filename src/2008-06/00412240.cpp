// from server: 100% by auto
// roc 2008-06 00412240  unit: CChatPrompt  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412240
//
// 00412240  55                   push ebp
// 00412241  8bec                 mov ebp, esp
// 00412243  6aff                 push -1
// 00412245  6870d77b00           push 0x7bd770
// 0041224a  64a100000000         mov eax, dword ptr fs:[0]
// 00412250  50                   push eax
// 00412251  64892500000000       mov dword ptr fs:[0], esp
// 00412258  83ec14               sub esp, 0x14
// 0041225b  53                   push ebx
// 0041225c  56                   push esi
// 0041225d  8bf1                 mov esi, ecx
// 0041225f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00412262  57                   push edi
// 00412263  8965f0               mov dword ptr [ebp - 0x10], esp
// 00412266  8975e8               mov dword ptr [ebp - 0x18], esi
// 00412269  85d2                 test edx, edx
// 0041226b  7504                 jne 0x412271
// 0041226d  33ff                 xor edi, edi
// 0041226f  eb08                 jmp 0x412279
// 00412271  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00412274  2bfa                 sub edi, edx
// 00412276  c1ff03               sar edi, 3
// 00412279  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0041227c  85db                 test ebx, ebx
// 0041227e  0f8429020000         je 0x4124ad
// 00412284  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00412287  8bc1                 mov eax, ecx
// 00412289  2bc2                 sub eax, edx
// 0041228b  c1f803               sar eax, 3
// 0041228e  baffffff1f           mov edx, 0x1fffffff
// 00412293  2bd0                 sub edx, eax
// 00412295  3bd3                 cmp edx, ebx
// 00412297  7305                 jae 0x41229e
// 00412299  e8a24a0b00           call 0x4c6d40
// 0041229e  03c3                 add eax, ebx
// 004122a0  3bf8                 cmp edi, eax
// 004122a2  0f8302010000         jae 0x4123aa
// 004122a8  8bcf                 mov ecx, edi
// 004122aa  d1e9                 shr ecx, 1
// 004122ac  baffffff1f           mov edx, 0x1fffffff
// 004122b1  2bd1                 sub edx, ecx
// 004122b3  3bd7                 cmp edx, edi
// 004122b5  7304                 jae 0x4122bb
// 004122b7  33ff                 xor edi, edi
// 004122b9  eb02                 jmp 0x4122bd
// 004122bb  03f9                 add edi, ecx
// 004122bd  3bf8                 cmp edi, eax
// 004122bf  7302                 jae 0x4122c3
// 004122c1  8bf8                 mov edi, eax
// 004122c3  6a00                 push 0
// 004122c5  57                   push edi
// 004122c6  e875da2500           call 0x66fd40
// 004122cb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004122ce  c645e400             mov byte ptr [ebp - 0x1c], 0
// 004122d2  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004122d5  52                   push edx
// 004122d6  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004122d9  52                   push edx
// 004122da  8d5608               lea edx, [esi + 8]
// 004122dd  52                   push edx
// 004122de  50                   push eax
// 004122df  8945ec               mov dword ptr [ebp - 0x14], eax
// 004122e2  894510               mov dword ptr [ebp + 0x10], eax
// 004122e5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004122e8  50                   push eax
// 004122e9  51                   push ecx
// 004122ea  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004122f1  e86a680200           call 0x438b60
// 004122f6  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004122f9  83c420               add esp, 0x20
// 004122fc  51                   push ecx
// 004122fd  53                   push ebx
// 004122fe  50                   push eax
// 004122ff  8bce                 mov ecx, esi
// 00412301  894510               mov dword ptr [ebp + 0x10], eax
// 00412304  e837feffff           call 0x412140
// 00412309  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041230c  c6451400             mov byte ptr [ebp + 0x14], 0
// 00412310  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00412313  52                   push edx
// 00412314  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00412317  52                   push edx
// 00412318  8d5608               lea edx, [esi + 8]
// 0041231b  52                   push edx
// 0041231c  50                   push eax
// 0041231d  894510               mov dword ptr [ebp + 0x10], eax
// 00412320  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00412323  51                   push ecx
// 00412324  50                   push eax
// 00412325  e836680200           call 0x438b60
// 0041232a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041232d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00412330  2bc8                 sub ecx, eax
// 00412332  c1f903               sar ecx, 3
// 00412335  83c418               add esp, 0x18
// 00412338  03d9                 add ebx, ecx
// 0041233a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00412341  85c0                 test eax, eax
// 00412343  741e                 je 0x412363
// 00412345  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00412348  52                   push edx
// 00412349  8d4e08               lea ecx, [esi + 8]
// 0041234c  51                   push ecx
// 0041234d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00412350  51                   push ecx
// 00412351  50                   push eax
// 00412352  e839f61800           call 0x5a1990
// 00412357  8b560c               mov edx, dword ptr [esi + 0xc]
// 0041235a  52                   push edx
// 0041235b  e81ae32800           call 0x6a067a
// 00412360  83c414               add esp, 0x14
// 00412363  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00412366  8d0cf8               lea ecx, [eax + edi*8]
// 00412369  8d14d8               lea edx, [eax + ebx*8]
// 0041236c  894e14               mov dword ptr [esi + 0x14], ecx
// 0041236f  895610               mov dword ptr [esi + 0x10], edx
// 00412372  89460c               mov dword ptr [esi + 0xc], eax
// 00412375  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00412378  64890d00000000       mov dword ptr fs:[0], ecx
// 0041237f  5f                   pop edi
// 00412380  5e                   pop esi
// 00412381  5b                   pop ebx
// 00412382  8be5                 mov esp, ebp
// 00412384  5d                   pop ebp
// 00412385  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Insert_n@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@2@IABV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
