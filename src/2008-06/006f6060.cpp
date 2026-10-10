// roc 2008-06 006f6060  unit: CXTPControlSelector  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6060
//
// 006f6060  83ec2c               sub esp, 0x2c
// 006f6063  53                   push ebx
// 006f6064  55                   push ebp
// 006f6065  56                   push esi
// 006f6066  57                   push edi
// 006f6067  8bf9                 mov edi, ecx
// 006f6069  e8d251fbff           call 0x6ab240
// 006f606e  83bf9c01000000       cmp dword ptr [edi + 0x19c], 0
// 006f6075  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 006f607b  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 006f6081  89442414             mov dword ptr [esp + 0x14], eax
// 006f6085  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 006f608b  8944242c             mov dword ptr [esp + 0x2c], eax
// 006f608f  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 006f6095  894c2430             mov dword ptr [esp + 0x30], ecx
// 006f6099  89542434             mov dword ptr [esp + 0x34], edx
// 006f609d  89442438             mov dword ptr [esp + 0x38], eax
// 006f60a1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006f60a9  0f8e45010000         jle 0x6f61f4
// 006f60af  90                   nop 
// 006f60b0  33db                 xor ebx, ebx
// 006f60b2  399fa0010000         cmp dword ptr [edi + 0x1a0], ebx
// 006f60b8  0f8e21010000         jle 0x6f61df
// 006f60be  8bff                 mov edi, edi
// 006f60c0  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 006f60c6  8baf90010000         mov ebp, dword ptr [edi + 0x190]
// 006f60cc  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f60d0  42                   inc edx
// 006f60d1  0fafd6               imul edx, esi
// 006f60d4  0354242c             add edx, dword ptr [esp + 0x2c]
// 006f60d8  8bc6                 mov eax, esi
// 006f60da  0faf442410           imul eax, dword ptr [esp + 0x10]
// 006f60df  0344242c             add eax, dword ptr [esp + 0x2c]
// 006f60e3  8bcd                 mov ecx, ebp
// 006f60e5  0fafcb               imul ecx, ebx
// 006f60e8  034c2430             add ecx, dword ptr [esp + 0x30]
// 006f60ec  8d7301               lea esi, [ebx + 1]
// 006f60ef  89742418             mov dword ptr [esp + 0x18], esi
// 006f60f3  0faff5               imul esi, ebp
// 006f60f6  03742430             add esi, dword ptr [esp + 0x30]
// 006f60fa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f60fe  41                   inc ecx
// 006f60ff  40                   inc eax
// 006f6100  894c2420             mov dword ptr [esp + 0x20], ecx
// 006f6104  4a                   dec edx
// 006f6105  4e                   dec esi
// 006f6106  6a2e                 push 0x2e
// 006f6108  8bcd                 mov ecx, ebp
// 006f610a  89442420             mov dword ptr [esp + 0x20], eax
// 006f610e  89542428             mov dword ptr [esp + 0x28], edx
// 006f6112  8974242c             mov dword ptr [esp + 0x2c], esi
// 006f6116  e8557ffbff           call 0x6ae070
// 006f611b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f611f  3b8f84010000         cmp ecx, dword ptr [edi + 0x184]
// 006f6125  8bf0                 mov esi, eax
// 006f6127  7d39                 jge 0x6f6162
// 006f6129  3b9f88010000         cmp ebx, dword ptr [edi + 0x188]
// 006f612f  7d31                 jge 0x6f6162
// 006f6131  e80a9cfeff           call 0x6dfd40
// 006f6136  6a0d                 push 0xd
// 006f6138  8bc8                 mov ecx, eax
// 006f613a  e8e193feff           call 0x6df520
// 006f613f  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006f6143  50                   push eax
// 006f6144  8d542420             lea edx, [esp + 0x20]
// 006f6148  52                   push edx
// 006f6149  8bcb                 mov ecx, ebx
// 006f614b  e80eb2faff           call 0x6a135e
// 006f6150  e8eb9bfeff           call 0x6dfd40
// 006f6155  6a0e                 push 0xe
// 006f6157  8bc8                 mov ecx, eax
// 006f6159  e8c293feff           call 0x6df520
// 006f615e  8bf0                 mov esi, eax
// 006f6160  eb1f                 jmp 0x6f6181
// 006f6162  e8d99bfeff           call 0x6dfd40
// 006f6167  6a05                 push 5
// 006f6169  8bc8                 mov ecx, eax
// 006f616b  e8b093feff           call 0x6df520
// 006f6170  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 006f6174  50                   push eax
// 006f6175  8d442420             lea eax, [esp + 0x20]
// 006f6179  50                   push eax
// 006f617a  8bcb                 mov ecx, ebx
// 006f617c  e8ddb1faff           call 0x6a135e
// 006f6181  6a2b                 push 0x2b
// 006f6183  8bcd                 mov ecx, ebp
// 006f6185  e8e67efbff           call 0x6ae070
// 006f618a  50                   push eax
// 006f618b  6a2b                 push 0x2b
// 006f618d  8bcd                 mov ecx, ebp
// 006f618f  e8dc7efbff           call 0x6ae070
// 006f6194  50                   push eax
// 006f6195  8d4c2424             lea ecx, [esp + 0x24]
// 006f6199  51                   push ecx
// 006f619a  8bcb                 mov ecx, ebx
// 006f619c  e8b7b1faff           call 0x6a1358
// 006f61a1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f61a5  8b17                 mov edx, dword ptr [edi]
// 006f61a7  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 006f61ad  56                   push esi
// 006f61ae  83ec10               sub esp, 0x10
// 006f61b1  8bc4                 mov eax, esp
// 006f61b3  8908                 mov dword ptr [eax], ecx
// 006f61b5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f61b9  894804               mov dword ptr [eax + 4], ecx
// 006f61bc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f61c0  894808               mov dword ptr [eax + 8], ecx
// 006f61c3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f61c7  89480c               mov dword ptr [eax + 0xc], ecx
// 006f61ca  53                   push ebx
// 006f61cb  8bcf                 mov ecx, edi
// 006f61cd  ffd2                 call edx
// 006f61cf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f61d3  3b9fa0010000         cmp ebx, dword ptr [edi + 0x1a0]
// 006f61d9  0f8ce1feffff         jl 0x6f60c0
// 006f61df  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f61e3  40                   inc eax
// 006f61e4  3b879c010000         cmp eax, dword ptr [edi + 0x19c]
// 006f61ea  89442410             mov dword ptr [esp + 0x10], eax
// 006f61ee  0f8cbcfeffff         jl 0x6f60b0
// 006f61f4  5f                   pop edi
// 006f61f5  5e                   pop esi
// 006f61f6  5d                   pop ebp
// 006f61f7  5b                   pop ebx
// 006f61f8  83c42c               add esp, 0x2c
// 006f61fb  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlExt.cpp (function ?Draw@CXTPControlSelector@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp
