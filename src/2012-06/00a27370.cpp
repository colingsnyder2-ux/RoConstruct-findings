// roc 2012-06 00a27370  unit: CXTPReportPaintManager  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a27370
//
// 00a27370  6aff                 push -1
// 00a27372  68414aae00           push 0xae4a41
// 00a27377  64a100000000         mov eax, dword ptr fs:[0]
// 00a2737d  50                   push eax
// 00a2737e  83ec2c               sub esp, 0x2c
// 00a27381  53                   push ebx
// 00a27382  55                   push ebp
// 00a27383  56                   push esi
// 00a27384  57                   push edi
// 00a27385  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2738a  33c4                 xor eax, esp
// 00a2738c  50                   push eax
// 00a2738d  8d442440             lea eax, [esp + 0x40]
// 00a27391  64a300000000         mov dword ptr fs:[0], eax
// 00a27397  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a2739b  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a2739f  33db                 xor ebx, ebx
// 00a273a1  3bc3                 cmp eax, ebx
// 00a273a3  0f845b010000         je 0xa27504
// 00a273a9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00a273ad  3beb                 cmp ebp, ebx
// 00a273af  0f844f010000         je 0xa27504
// 00a273b5  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 00a273bb  8b7730               mov esi, dword ptr [edi + 0x30]
// 00a273be  53                   push ebx
// 00a273bf  55                   push ebp
// 00a273c0  8d4c2438             lea ecx, [esp + 0x38]
// 00a273c4  897c2420             mov dword ptr [esp + 0x20], edi
// 00a273c8  89742424             mov dword ptr [esp + 0x24], esi
// 00a273cc  c744245c16000000     mov dword ptr [esp + 0x5c], 0x16
// 00a273d4  e857e1faff           call 0x9d5530
// 00a273d9  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a273dd  85f6                 test esi, esi
// 00a273df  0f8e08010000         jle 0xa274ed
// 00a273e5  85db                 test ebx, ebx
// 00a273e7  0f8cf5000000         jl 0xa274e2
// 00a273ed  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 00a273f0  0f8dec000000         jge 0xa274e2
// 00a273f6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a273f9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00a273fc  8d0498               lea eax, [eax + ebx*4]
// 00a273ff  85f6                 test esi, esi
// 00a27401  0f84db000000         je 0xa274e2
// 00a27407  8bce                 mov ecx, esi
// 00a27409  e822600100           call 0xa3d430
// 00a2740e  85c0                 test eax, eax
// 00a27410  0f84cc000000         je 0xa274e2
// 00a27416  8d4c2450             lea ecx, [esp + 0x50]
// 00a2741a  51                   push ecx
// 00a2741b  8bce                 mov ecx, esi
// 00a2741d  e82efafbff           call 0x9e6e50
// 00a27422  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00a27426  c644244801           mov byte ptr [esp + 0x48], 1
// 00a2742b  8bce                 mov ecx, esi
// 00a2742d  740c                 je 0xa2743b
// 00a2742f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a27433  52                   push edx
// 00a27434  e8b714f8ff           call 0x9a88f0
// 00a27439  eb05                 jmp 0xa27440
// 00a2743b  e88014f8ff           call 0x9a88c0
// 00a27440  83c0fd               add eax, -3
// 00a27443  89442428             mov dword ptr [esp + 0x28], eax
// 00a27447  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a2744b  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 00a27452  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00a2745a  c744242c16000000     mov dword ptr [esp + 0x2c], 0x16
// 00a27462  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00a2746a  7510                 jne 0xa2747c
// 00a2746c  8bce                 mov ecx, esi
// 00a2746e  e84d0df8ff           call 0x9a81c0
// 00a27473  bf148c0000           mov edi, 0x8c14
// 00a27478  a810                 test al, 0x10
// 00a2747a  7505                 jne 0xa27481
// 00a2747c  bf248c0000           mov edi, 0x8c24
// 00a27481  8bce                 mov ecx, esi
// 00a27483  e8980cf8ff           call 0x9a8120
// 00a27488  50                   push eax
// 00a27489  8d4c2434             lea ecx, [esp + 0x34]
// 00a2748d  e87ecbfaff           call 0x9d4010
// 00a27492  8b7500               mov esi, dword ptr [ebp]
// 00a27495  57                   push edi
// 00a27496  8d4c2424             lea ecx, [esp + 0x24]
// 00a2749a  51                   push ecx
// 00a2749b  8d4c2458             lea ecx, [esp + 0x58]
// 00a2749f  83c670               add esi, 0x70
// 00a274a2  ff155846b200         call dword ptr [0xb24658]
// 00a274a8  50                   push eax
// 00a274a9  8d4c245c             lea ecx, [esp + 0x5c]
// 00a274ad  ff159847b200         call dword ptr [0xb24798]
// 00a274b3  8b16                 mov edx, dword ptr [esi]
// 00a274b5  50                   push eax
// 00a274b6  8bcd                 mov ecx, ebp
// 00a274b8  ffd2                 call edx
// 00a274ba  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a274be  2b442424             sub eax, dword ptr [esp + 0x24]
// 00a274c2  83c008               add eax, 8
// 00a274c5  39442454             cmp dword ptr [esp + 0x54], eax
// 00a274c9  7f04                 jg 0xa274cf
// 00a274cb  89442454             mov dword ptr [esp + 0x54], eax
// 00a274cf  8d4c2450             lea ecx, [esp + 0x50]
// 00a274d3  c644244800           mov byte ptr [esp + 0x48], 0
// 00a274d8  ff15d047b200         call dword ptr [0xb247d0]
// 00a274de  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a274e2  43                   inc ebx
// 00a274e3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00a274e7  0f8cf8feffff         jl 0xa273e5
// 00a274ed  8d4c2430             lea ecx, [esp + 0x30]
// 00a274f1  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a274f9  e8b2e0faff           call 0x9d55b0
// 00a274fe  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a27502  eb06                 jmp 0xa2750a
// 00a27504  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00a2750a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a2750e  64890d00000000       mov dword ptr fs:[0], ecx
// 00a27515  59                   pop ecx
// 00a27516  5f                   pop edi
// 00a27517  5e                   pop esi
// 00a27518  5d                   pop ebp
// 00a27519  5b                   pop ebx
// 00a2751a  83c438               add esp, 0x38
// 00a2751d  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetFooterHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp