// roc 2010-06 00897380  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897380
//
// 00897380  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00897384  53                   push ebx
// 00897385  55                   push ebp
// 00897386  56                   push esi
// 00897387  57                   push edi
// 00897388  0f859d000000         jne 0x89742b
// 0089738e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00897392  bd03000000           mov ebp, 3
// 00897397  896c2414             mov dword ptr [esp + 0x14], ebp
// 0089739b  eb03                 jmp 0x8973a0
// 0089739d  8d4900               lea ecx, [ecx]
// 008973a0  8b742414             mov esi, dword ptr [esp + 0x14]
// 008973a4  33ff                 xor edi, edi
// 008973a6  8b4304               mov eax, dword ptr [ebx + 4]
// 008973a9  57                   push edi
// 008973aa  55                   push ebp
// 008973ab  50                   push eax
// 008973ac  ff1560a19e00         call dword ptr [0x9ea160]
// 008973b2  8bc8                 mov ecx, eax
// 008973b4  e807feffff           call 0x8971c0
// 008973b9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008973bc  50                   push eax
// 008973bd  57                   push edi
// 008973be  55                   push ebp
// 008973bf  51                   push ecx
// 008973c0  ff155ca19e00         call dword ptr [0x9ea15c]
// 008973c6  03742414             add esi, dword ptr [esp + 0x14]
// 008973ca  47                   inc edi
// 008973cb  83ff04               cmp edi, 4
// 008973ce  7cd6                 jl 0x8973a6
// 008973d0  8344241403           add dword ptr [esp + 0x14], 3
// 008973d5  4d                   dec ebp
// 008973d6  83fdff               cmp ebp, -1
// 008973d9  7fc5                 jg 0x8973a0
// 008973db  8b542418             mov edx, dword ptr [esp + 0x18]
// 008973df  8b420c               mov eax, dword ptr [edx + 0xc]
// 008973e2  33ed                 xor ebp, ebp
// 008973e4  8d753c               lea esi, [ebp + 0x3c]
// 008973e7  bf04000000           mov edi, 4
// 008973ec  3bc7                 cmp eax, edi
// 008973ee  7e2c                 jle 0x89741c
// 008973f0  8b4304               mov eax, dword ptr [ebx + 4]
// 008973f3  57                   push edi
// 008973f4  55                   push ebp
// 008973f5  50                   push eax
// 008973f6  ff1560a19e00         call dword ptr [0x9ea160]
// 008973fc  8bc8                 mov ecx, eax
// 008973fe  e8bdfdffff           call 0x8971c0
// 00897403  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00897406  50                   push eax
// 00897407  57                   push edi
// 00897408  55                   push ebp
// 00897409  51                   push ecx
// 0089740a  ff155ca19e00         call dword ptr [0x9ea15c]
// 00897410  8b542418             mov edx, dword ptr [esp + 0x18]
// 00897414  8b420c               mov eax, dword ptr [edx + 0xc]
// 00897417  47                   inc edi
// 00897418  3bf8                 cmp edi, eax
// 0089741a  7cd4                 jl 0x8973f0
// 0089741c  83ee0f               sub esi, 0xf
// 0089741f  45                   inc ebp
// 00897420  85f6                 test esi, esi
// 00897422  7fc3                 jg 0x8973e7
// 00897424  5f                   pop edi
// 00897425  5e                   pop esi
// 00897426  5d                   pop ebp
// 00897427  5b                   pop ebx
// 00897428  c20800               ret 8
// 0089742b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089742f  33ed                 xor ebp, ebp
// 00897431  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00897439  8da42400000000       lea esp, [esp]
// 00897440  8b742414             mov esi, dword ptr [esp + 0x14]
// 00897444  bb03000000           mov ebx, 3
// 00897449  8da42400000000       lea esp, [esp]
// 00897450  8b4704               mov eax, dword ptr [edi + 4]
// 00897453  53                   push ebx
// 00897454  55                   push ebp
// 00897455  50                   push eax
// 00897456  ff1560a19e00         call dword ptr [0x9ea160]
// 0089745c  8bc8                 mov ecx, eax
// 0089745e  e85dfdffff           call 0x8971c0
// 00897463  8b4f04               mov ecx, dword ptr [edi + 4]
// 00897466  50                   push eax
// 00897467  53                   push ebx
// 00897468  55                   push ebp
// 00897469  51                   push ecx
// 0089746a  ff155ca19e00         call dword ptr [0x9ea15c]
// 00897470  03742414             add esi, dword ptr [esp + 0x14]
// 00897474  4b                   dec ebx
// 00897475  83fbff               cmp ebx, -1
// 00897478  7fd6                 jg 0x897450
// 0089747a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089747e  83c003               add eax, 3
// 00897481  45                   inc ebp
// 00897482  83f80f               cmp eax, 0xf
// 00897485  89442414             mov dword ptr [esp + 0x14], eax
// 00897489  7cb5                 jl 0x897440
// 0089748b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0089748f  8b4508               mov eax, dword ptr [ebp + 8]
// 00897492  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0089749a  83c0fc               add eax, -4
// 0089749d  be3c000000           mov esi, 0x3c
// 008974a2  bb04000000           mov ebx, 4
// 008974a7  3bc3                 cmp eax, ebx
// 008974a9  7e38                 jle 0x8974e3
// 008974ab  eb03                 jmp 0x8974b0
// 008974ad  8d4900               lea ecx, [ecx]
// 008974b0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008974b4  8b4704               mov eax, dword ptr [edi + 4]
// 008974b7  52                   push edx
// 008974b8  53                   push ebx
// 008974b9  50                   push eax
// 008974ba  ff1560a19e00         call dword ptr [0x9ea160]
// 008974c0  8bc8                 mov ecx, eax
// 008974c2  e8f9fcffff           call 0x8971c0
// 008974c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008974cb  8b5704               mov edx, dword ptr [edi + 4]
// 008974ce  50                   push eax
// 008974cf  51                   push ecx
// 008974d0  53                   push ebx
// 008974d1  52                   push edx
// 008974d2  ff155ca19e00         call dword ptr [0x9ea15c]
// 008974d8  8b4508               mov eax, dword ptr [ebp + 8]
// 008974db  43                   inc ebx
// 008974dc  83c0fc               add eax, -4
// 008974df  3bd8                 cmp ebx, eax
// 008974e1  7ccd                 jl 0x8974b0
// 008974e3  ff442414             inc dword ptr [esp + 0x14]
// 008974e7  83ee0f               sub esi, 0xf
// 008974ea  85f6                 test esi, esi
// 008974ec  7fb4                 jg 0x8974a2
// 008974ee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008974f6  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008974fe  8bff                 mov edi, edi
// 00897500  8b742414             mov esi, dword ptr [esp + 0x14]
// 00897504  bb03000000           mov ebx, 3
// 00897509  8da42400000000       lea esp, [esp]
// 00897510  8b4508               mov eax, dword ptr [ebp + 8]
// 00897513  2b442418             sub eax, dword ptr [esp + 0x18]
// 00897517  53                   push ebx
// 00897518  48                   dec eax
// 00897519  50                   push eax
// 0089751a  8b4704               mov eax, dword ptr [edi + 4]
// 0089751d  50                   push eax
// 0089751e  ff1560a19e00         call dword ptr [0x9ea160]
// 00897524  8bc8                 mov ecx, eax
// 00897526  e895fcffff           call 0x8971c0
// 0089752b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0089752e  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00897532  8b5704               mov edx, dword ptr [edi + 4]
// 00897535  50                   push eax
// 00897536  53                   push ebx
// 00897537  49                   dec ecx
// 00897538  51                   push ecx
// 00897539  52                   push edx
// 0089753a  ff155ca19e00         call dword ptr [0x9ea15c]
// 00897540  03742414             add esi, dword ptr [esp + 0x14]
// 00897544  4b                   dec ebx
// 00897545  83fbff               cmp ebx, -1
// 00897548  7fc6                 jg 0x897510
// 0089754a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089754e  ff442418             inc dword ptr [esp + 0x18]
// 00897552  83c003               add eax, 3
// 00897555  83f80f               cmp eax, 0xf
// 00897558  89442414             mov dword ptr [esp + 0x14], eax
// 0089755c  7ca2                 jl 0x897500
// 0089755e  5f                   pop edi
// 0089755f  5e                   pop esi
// 00897560  5d                   pop ebp
// 00897561  5b                   pop ebx
// 00897562  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
