// roc 2009-12 0089dc30  unit: CXTPReportPaintManager  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089dc30
//
// 0089dc30  6aff                 push -1
// 0089dc32  68911d9600           push 0x961d91
// 0089dc37  64a100000000         mov eax, dword ptr fs:[0]
// 0089dc3d  50                   push eax
// 0089dc3e  83ec2c               sub esp, 0x2c
// 0089dc41  53                   push ebx
// 0089dc42  55                   push ebp
// 0089dc43  56                   push esi
// 0089dc44  57                   push edi
// 0089dc45  a10052b600           mov eax, dword ptr [0xb65200]
// 0089dc4a  33c4                 xor eax, esp
// 0089dc4c  50                   push eax
// 0089dc4d  8d442440             lea eax, [esp + 0x40]
// 0089dc51  64a300000000         mov dword ptr fs:[0], eax
// 0089dc57  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089dc5b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0089dc5f  33db                 xor ebx, ebx
// 0089dc61  3bc3                 cmp eax, ebx
// 0089dc63  0f845b010000         je 0x89ddc4
// 0089dc69  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0089dc6d  3beb                 cmp ebp, ebx
// 0089dc6f  0f844f010000         je 0x89ddc4
// 0089dc75  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 0089dc7b  8b7730               mov esi, dword ptr [edi + 0x30]
// 0089dc7e  53                   push ebx
// 0089dc7f  55                   push ebp
// 0089dc80  8d4c2438             lea ecx, [esp + 0x38]
// 0089dc84  897c2420             mov dword ptr [esp + 0x20], edi
// 0089dc88  89742424             mov dword ptr [esp + 0x24], esi
// 0089dc8c  c744245c16000000     mov dword ptr [esp + 0x5c], 0x16
// 0089dc94  e8c7d9faff           call 0x84b660
// 0089dc99  895c2448             mov dword ptr [esp + 0x48], ebx
// 0089dc9d  85f6                 test esi, esi
// 0089dc9f  0f8e08010000         jle 0x89ddad
// 0089dca5  85db                 test ebx, ebx
// 0089dca7  0f8cf5000000         jl 0x89dda2
// 0089dcad  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 0089dcb0  0f8dec000000         jge 0x89dda2
// 0089dcb6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0089dcb9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0089dcbc  8d0498               lea eax, [eax + ebx*4]
// 0089dcbf  85f6                 test esi, esi
// 0089dcc1  0f84db000000         je 0x89dda2
// 0089dcc7  8bce                 mov ecx, esi
// 0089dcc9  e8f25d0100           call 0x8b3ac0
// 0089dcce  85c0                 test eax, eax
// 0089dcd0  0f84cc000000         je 0x89dda2
// 0089dcd6  8d4c2450             lea ecx, [esp + 0x50]
// 0089dcda  51                   push ecx
// 0089dcdb  8bce                 mov ecx, esi
// 0089dcdd  e84ec8ffff           call 0x89a530
// 0089dce2  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0089dce6  c644244801           mov byte ptr [esp + 0x48], 1
// 0089dceb  8bce                 mov ecx, esi
// 0089dced  740c                 je 0x89dcfb
// 0089dcef  8b542458             mov edx, dword ptr [esp + 0x58]
// 0089dcf3  52                   push edx
// 0089dcf4  e8b7a4f8ff           call 0x8281b0
// 0089dcf9  eb05                 jmp 0x89dd00
// 0089dcfb  e880a4f8ff           call 0x828180
// 0089dd00  83c0fd               add eax, -3
// 0089dd03  89442428             mov dword ptr [esp + 0x28], eax
// 0089dd07  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089dd0b  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 0089dd12  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0089dd1a  c744242c16000000     mov dword ptr [esp + 0x2c], 0x16
// 0089dd22  c744242003000000     mov dword ptr [esp + 0x20], 3
// 0089dd2a  7510                 jne 0x89dd3c
// 0089dd2c  8bce                 mov ecx, esi
// 0089dd2e  e85d9df8ff           call 0x827a90
// 0089dd33  bf148c0000           mov edi, 0x8c14
// 0089dd38  a810                 test al, 0x10
// 0089dd3a  7505                 jne 0x89dd41
// 0089dd3c  bf248c0000           mov edi, 0x8c24
// 0089dd41  8bce                 mov ecx, esi
// 0089dd43  e8a89cf8ff           call 0x8279f0
// 0089dd48  50                   push eax
// 0089dd49  8d4c2434             lea ecx, [esp + 0x34]
// 0089dd4d  e82ec4faff           call 0x84a180
// 0089dd52  8b7500               mov esi, dword ptr [ebp]
// 0089dd55  57                   push edi
// 0089dd56  8d4c2424             lea ecx, [esp + 0x24]
// 0089dd5a  51                   push ecx
// 0089dd5b  8d4c2458             lea ecx, [esp + 0x58]
// 0089dd5f  83c670               add esi, 0x70
// 0089dd62  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089dd68  50                   push eax
// 0089dd69  8d4c245c             lea ecx, [esp + 0x5c]
// 0089dd6d  ff1580de9800         call dword ptr [0x98de80]
// 0089dd73  8b16                 mov edx, dword ptr [esi]
// 0089dd75  50                   push eax
// 0089dd76  8bcd                 mov ecx, ebp
// 0089dd78  ffd2                 call edx
// 0089dd7a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089dd7e  2b442424             sub eax, dword ptr [esp + 0x24]
// 0089dd82  83c008               add eax, 8
// 0089dd85  39442454             cmp dword ptr [esp + 0x54], eax
// 0089dd89  7f04                 jg 0x89dd8f
// 0089dd8b  89442454             mov dword ptr [esp + 0x54], eax
// 0089dd8f  8d4c2450             lea ecx, [esp + 0x50]
// 0089dd93  c644244800           mov byte ptr [esp + 0x48], 0
// 0089dd98  ff15c0de9800         call dword ptr [0x98dec0]
// 0089dd9e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0089dda2  43                   inc ebx
// 0089dda3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 0089dda7  0f8cf8feffff         jl 0x89dca5
// 0089ddad  8d4c2430             lea ecx, [esp + 0x30]
// 0089ddb1  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089ddb9  e822d9faff           call 0x84b6e0
// 0089ddbe  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089ddc2  eb06                 jmp 0x89ddca
// 0089ddc4  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 0089ddca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089ddce  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ddd5  59                   pop ecx
// 0089ddd6  5f                   pop edi
// 0089ddd7  5e                   pop esi
// 0089ddd8  5d                   pop ebp
// 0089ddd9  5b                   pop ebx
// 0089ddda  83c438               add esp, 0x38
// 0089dddd  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetFooterHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp