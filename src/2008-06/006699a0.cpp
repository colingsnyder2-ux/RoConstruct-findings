// roc 2008-06 006699a0  unit: RBX::TreeStage  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006699a0
//
// 006699a0  55                   push ebp
// 006699a1  8bec                 mov ebp, esp
// 006699a3  83e4f8               and esp, 0xfffffff8
// 006699a6  6aff                 push -1
// 006699a8  68a8c37d00           push 0x7dc3a8
// 006699ad  64a100000000         mov eax, dword ptr fs:[0]
// 006699b3  50                   push eax
// 006699b4  64892500000000       mov dword ptr fs:[0], esp
// 006699bb  83ec50               sub esp, 0x50
// 006699be  53                   push ebx
// 006699bf  56                   push esi
// 006699c0  57                   push edi
// 006699c1  8bf1                 mov esi, ecx
// 006699c3  8d44240f             lea eax, [esp + 0xf]
// 006699c7  50                   push eax
// 006699c8  8d4c2413             lea ecx, [esp + 0x13]
// 006699cc  51                   push ecx
// 006699cd  8d4c2440             lea ecx, [esp + 0x40]
// 006699d1  e8ca18feff           call 0x64b2a0
// 006699d6  8d5508               lea edx, [ebp + 8]
// 006699d9  52                   push edx
// 006699da  8d442430             lea eax, [esp + 0x30]
// 006699de  33ff                 xor edi, edi
// 006699e0  50                   push eax
// 006699e1  8d4c2440             lea ecx, [esp + 0x40]
// 006699e5  897c246c             mov dword ptr [esp + 0x6c], edi
// 006699e9  e852f2f7ff           call 0x5e8c40
// 006699ee  8b5508               mov edx, dword ptr [ebp + 8]
// 006699f1  8d4c2438             lea ecx, [esp + 0x38]
// 006699f5  51                   push ecx
// 006699f6  52                   push edx
// 006699f7  8bce                 mov ecx, esi
// 006699f9  e852f7ffff           call 0x669150
// 006699fe  8b442450             mov eax, dword ptr [esp + 0x50]
// 00669a02  8b00                 mov eax, dword ptr [eax]
// 00669a04  8b742438             mov esi, dword ptr [esp + 0x38]
// 00669a08  8bd8                 mov ebx, eax
// 00669a0a  897c2414             mov dword ptr [esp + 0x14], edi
// 00669a0e  8974241c             mov dword ptr [esp + 0x1c], esi
// 00669a12  895c2420             mov dword ptr [esp + 0x20], ebx
// 00669a16  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00669a1a  85f6                 test esi, esi
// 00669a1c  7406                 je 0x669a24
// 00669a1e  3b742438             cmp esi, dword ptr [esp + 0x38]
// 00669a22  7406                 je 0x669a2a
// 00669a24  ff1590288000         call dword ptr [0x802890]
// 00669a2a  3bdf                 cmp ebx, edi
// 00669a2c  0f8403010000         je 0x669b35
// 00669a32  85f6                 test esi, esi
// 00669a34  7567                 jne 0x669a9d
// 00669a36  ff1590288000         call dword ptr [0x802890]
// 00669a3c  3b5e18               cmp ebx, dword ptr [esi + 0x18]
// 00669a3f  7506                 jne 0x669a47
// 00669a41  ff1590288000         call dword ptr [0x802890]
// 00669a47  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 00669a4a  8bcb                 mov ecx, ebx
// 00669a4c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00669a50  e83be1f7ff           call 0x5e7b90
// 00669a55  8bf0                 mov esi, eax
// 00669a57  85f6                 test esi, esi
// 00669a59  0f84c0000000         je 0x669b1f
// 00669a5f  90                   nop 
// 00669a60  807e2400             cmp byte ptr [esi + 0x24], 0
// 00669a64  0f85a3000000         jne 0x669b0d
// 00669a6a  8b16                 mov edx, dword ptr [esi]
// 00669a6c  8b420c               mov eax, dword ptr [edx + 0xc]
// 00669a6f  8bce                 mov ecx, esi
// 00669a71  ffd0                 call eax
// 00669a73  85c0                 test eax, eax
// 00669a75  0f8592000000         jne 0x669b0d
// 00669a7b  8b16                 mov edx, dword ptr [esi]
// 00669a7d  8b4214               mov eax, dword ptr [edx + 0x14]
// 00669a80  8bce                 mov ecx, esi
// 00669a82  ffd0                 call eax
// 00669a84  83f805               cmp eax, 5
// 00669a87  0f8c80000000         jl 0x669b0d
// 00669a8d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00669a90  3bd8                 cmp ebx, eax
// 00669a92  750d                 jne 0x669aa1
// 00669a94  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00669a97  894c2410             mov dword ptr [esp + 0x10], ecx
// 00669a9b  eb08                 jmp 0x669aa5
// 00669a9d  8b36                 mov esi, dword ptr [esi]
// 00669a9f  eb9b                 jmp 0x669a3c
// 00669aa1  89442410             mov dword ptr [esp + 0x10], eax
// 00669aa5  837c241000           cmp dword ptr [esp + 0x10], 0
// 00669aaa  743e                 je 0x669aea
// 00669aac  8b542450             mov edx, dword ptr [esp + 0x50]
// 00669ab0  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00669ab4  8d442410             lea eax, [esp + 0x10]
// 00669ab8  50                   push eax
// 00669ab9  8d4c2430             lea ecx, [esp + 0x30]
// 00669abd  51                   push ecx
// 00669abe  8d4c2440             lea ecx, [esp + 0x40]
// 00669ac2  89542430             mov dword ptr [esp + 0x30], edx
// 00669ac6  e89545e4ff           call 0x4ae060
// 00669acb  8bf8                 mov edi, eax
// 00669acd  8b07                 mov eax, dword ptr [edi]
// 00669acf  85c0                 test eax, eax
// 00669ad1  7404                 je 0x669ad7
// 00669ad3  3bc3                 cmp eax, ebx
// 00669ad5  7406                 je 0x669add
// 00669ad7  ff1590288000         call dword ptr [0x802890]
// 00669add  8b542428             mov edx, dword ptr [esp + 0x28]
// 00669ae1  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00669ae5  395704               cmp dword ptr [edi + 4], edx
// 00669ae8  7523                 jne 0x669b0d
// 00669aea  8b442414             mov eax, dword ptr [esp + 0x14]
// 00669aee  85c0                 test eax, eax
// 00669af0  740e                 je 0x669b00
// 00669af2  50                   push eax
// 00669af3  56                   push esi
// 00669af4  e827f3ffff           call 0x668e20
// 00669af9  83c408               add esp, 8
// 00669afc  84c0                 test al, al
// 00669afe  740d                 je 0x669b0d
// 00669b00  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00669b03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00669b07  89742414             mov dword ptr [esp + 0x14], esi
// 00669b0b  8908                 mov dword ptr [eax], ecx
// 00669b0d  56                   push esi
// 00669b0e  8bcb                 mov ecx, ebx
// 00669b10  e88be0f7ff           call 0x5e7ba0
// 00669b15  8bf0                 mov esi, eax
// 00669b17  85f6                 test esi, esi
// 00669b19  0f8541ffffff         jne 0x669a60
// 00669b1f  8d4c241c             lea ecx, [esp + 0x1c]
// 00669b23  e818f8f7ff           call 0x5e9340
// 00669b28  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00669b2c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00669b30  e9e1feffff           jmp 0x669a16
// 00669b35  8d4c2438             lea ecx, [esp + 0x38]
// 00669b39  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00669b41  e8ea16feff           call 0x64b230
// 00669b46  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00669b4a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00669b4e  5f                   pop edi
// 00669b4f  5e                   pop esi
// 00669b50  64890d00000000       mov dword ptr fs:[0], ecx
// 00669b57  5b                   pop ebx
// 00669b58  8be5                 mov esp, ebp
// 00669b5a  5d                   pop ebp
// 00669b5b  c20800               ret 8
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?findLightestDownstream@TreeStage@RBX@@AAEPAVJoint@2@PAVPrimitive@2@AAPAV42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
