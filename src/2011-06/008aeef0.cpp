// roc 2011-06 008aeef0  unit: CXTPReportPaintManager  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008aeef0
//
// 008aeef0  6aff                 push -1
// 008aeef2  6811afa000           push 0xa0af11
// 008aeef7  64a100000000         mov eax, dword ptr fs:[0]
// 008aeefd  50                   push eax
// 008aeefe  83ec2c               sub esp, 0x2c
// 008aef01  53                   push ebx
// 008aef02  55                   push ebp
// 008aef03  56                   push esi
// 008aef04  57                   push edi
// 008aef05  a12058c900           mov eax, dword ptr [0xc95820]
// 008aef0a  33c4                 xor eax, esp
// 008aef0c  50                   push eax
// 008aef0d  8d442440             lea eax, [esp + 0x40]
// 008aef11  64a300000000         mov dword ptr fs:[0], eax
// 008aef17  894c2414             mov dword ptr [esp + 0x14], ecx
// 008aef1b  8b442450             mov eax, dword ptr [esp + 0x50]
// 008aef1f  33db                 xor ebx, ebx
// 008aef21  3bc3                 cmp eax, ebx
// 008aef23  0f845b010000         je 0x8af084
// 008aef29  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 008aef2d  3beb                 cmp ebp, ebx
// 008aef2f  0f844f010000         je 0x8af084
// 008aef35  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 008aef3b  8b7730               mov esi, dword ptr [edi + 0x30]
// 008aef3e  53                   push ebx
// 008aef3f  55                   push ebp
// 008aef40  8d4c2438             lea ecx, [esp + 0x38]
// 008aef44  897c2420             mov dword ptr [esp + 0x20], edi
// 008aef48  89742424             mov dword ptr [esp + 0x24], esi
// 008aef4c  c744245c16000000     mov dword ptr [esp + 0x5c], 0x16
// 008aef54  e8c7e1faff           call 0x85d120
// 008aef59  895c2448             mov dword ptr [esp + 0x48], ebx
// 008aef5d  85f6                 test esi, esi
// 008aef5f  0f8e08010000         jle 0x8af06d
// 008aef65  85db                 test ebx, ebx
// 008aef67  0f8cf5000000         jl 0x8af062
// 008aef6d  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 008aef70  0f8dec000000         jge 0x8af062
// 008aef76  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008aef79  8b3498               mov esi, dword ptr [eax + ebx*4]
// 008aef7c  8d0498               lea eax, [eax + ebx*4]
// 008aef7f  85f6                 test esi, esi
// 008aef81  0f84db000000         je 0x8af062
// 008aef87  8bce                 mov ecx, esi
// 008aef89  e8e20cf8ff           call 0x82fc70
// 008aef8e  85c0                 test eax, eax
// 008aef90  0f84cc000000         je 0x8af062
// 008aef96  8d4c2450             lea ecx, [esp + 0x50]
// 008aef9a  51                   push ecx
// 008aef9b  8bce                 mov ecx, esi
// 008aef9d  e85ec8ffff           call 0x8ab800
// 008aefa2  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 008aefa6  c644244801           mov byte ptr [esp + 0x48], 1
// 008aefab  8bce                 mov ecx, esi
// 008aefad  740c                 je 0x8aefbb
// 008aefaf  8b542458             mov edx, dword ptr [esp + 0x58]
// 008aefb3  52                   push edx
// 008aefb4  e84713f8ff           call 0x830300
// 008aefb9  eb05                 jmp 0x8aefc0
// 008aefbb  e81013f8ff           call 0x8302d0
// 008aefc0  83c0fd               add eax, -3
// 008aefc3  89442428             mov dword ptr [esp + 0x28], eax
// 008aefc7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008aefcb  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 008aefd2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008aefda  c744242c16000000     mov dword ptr [esp + 0x2c], 0x16
// 008aefe2  c744242003000000     mov dword ptr [esp + 0x20], 3
// 008aefea  7510                 jne 0x8aeffc
// 008aefec  8bce                 mov ecx, esi
// 008aefee  e8cd0bf8ff           call 0x82fbc0
// 008aeff3  bf148c0000           mov edi, 0x8c14
// 008aeff8  a810                 test al, 0x10
// 008aeffa  7505                 jne 0x8af001
// 008aeffc  bf248c0000           mov edi, 0x8c24
// 008af001  8bce                 mov ecx, esi
// 008af003  e8180bf8ff           call 0x82fb20
// 008af008  50                   push eax
// 008af009  8d4c2434             lea ecx, [esp + 0x34]
// 008af00d  e81eccfaff           call 0x85bc30
// 008af012  8b7500               mov esi, dword ptr [ebp]
// 008af015  57                   push edi
// 008af016  8d4c2424             lea ecx, [esp + 0x24]
// 008af01a  51                   push ecx
// 008af01b  8d4c2458             lea ecx, [esp + 0x58]
// 008af01f  83c670               add esi, 0x70
// 008af022  ff15a826a400         call dword ptr [0xa426a8]
// 008af028  50                   push eax
// 008af029  8d4c245c             lea ecx, [esp + 0x5c]
// 008af02d  ff15c82da400         call dword ptr [0xa42dc8]
// 008af033  8b16                 mov edx, dword ptr [esi]
// 008af035  50                   push eax
// 008af036  8bcd                 mov ecx, ebp
// 008af038  ffd2                 call edx
// 008af03a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008af03e  2b442424             sub eax, dword ptr [esp + 0x24]
// 008af042  83c008               add eax, 8
// 008af045  39442454             cmp dword ptr [esp + 0x54], eax
// 008af049  7f04                 jg 0x8af04f
// 008af04b  89442454             mov dword ptr [esp + 0x54], eax
// 008af04f  8d4c2450             lea ecx, [esp + 0x50]
// 008af053  c644244800           mov byte ptr [esp + 0x48], 0
// 008af058  ff15082ea400         call dword ptr [0xa42e08]
// 008af05e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008af062  43                   inc ebx
// 008af063  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 008af067  0f8cf8feffff         jl 0x8aef65
// 008af06d  8d4c2430             lea ecx, [esp + 0x30]
// 008af071  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008af079  e822e1faff           call 0x85d1a0
// 008af07e  8b442454             mov eax, dword ptr [esp + 0x54]
// 008af082  eb06                 jmp 0x8af08a
// 008af084  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 008af08a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008af08e  64890d00000000       mov dword ptr fs:[0], ecx
// 008af095  59                   pop ecx
// 008af096  5f                   pop edi
// 008af097  5e                   pop esi
// 008af098  5d                   pop ebp
// 008af099  5b                   pop ebx
// 008af09a  83c438               add esp, 0x38
// 008af09d  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetFooterHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp