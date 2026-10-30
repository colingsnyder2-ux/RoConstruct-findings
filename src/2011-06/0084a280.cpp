// roc 2011-06 0084a280  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a280
//
// 0084a280  83ec50               sub esp, 0x50
// 0084a283  a12058c900           mov eax, dword ptr [0xc95820]
// 0084a288  33c4                 xor eax, esp
// 0084a28a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0084a28e  53                   push ebx
// 0084a28f  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0084a293  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0084a296  55                   push ebp
// 0084a297  56                   push esi
// 0084a298  57                   push edi
// 0084a299  f7d0                 not eax
// 0084a29b  8bf9                 mov edi, ecx
// 0084a29d  897c2414             mov dword ptr [esp + 0x14], edi
// 0084a2a1  a801                 test al, 1
// 0084a2a3  7462                 je 0x84a307
// 0084a2a5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0084a2a8  51                   push ecx
// 0084a2a9  8bcb                 mov ecx, ebx
// 0084a2ab  e84809fcff           call 0x80abf8
// 0084a2b0  837f0c00             cmp dword ptr [edi + 0xc], 0
// 0084a2b4  0f84b4000000         je 0x84a36e
// 0084a2ba  33ed                 xor ebp, ebp
// 0084a2bc  396f08               cmp dword ptr [edi + 8], ebp
// 0084a2bf  0f86a9000000         jbe 0x84a36e
// 0084a2c5  8b5704               mov edx, dword ptr [edi + 4]
// 0084a2c8  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 0084a2cb  85f6                 test esi, esi
// 0084a2cd  741d                 je 0x84a2ec
// 0084a2cf  90                   nop 
// 0084a2d0  6a01                 push 1
// 0084a2d2  56                   push esi
// 0084a2d3  53                   push ebx
// 0084a2d4  e8b787ffff           call 0x842a90
// 0084a2d9  6a01                 push 1
// 0084a2db  8d4604               lea eax, [esi + 4]
// 0084a2de  50                   push eax
// 0084a2df  53                   push ebx
// 0084a2e0  e80be9ffff           call 0x848bf0
// 0084a2e5  8b7648               mov esi, dword ptr [esi + 0x48]
// 0084a2e8  85f6                 test esi, esi
// 0084a2ea  75e4                 jne 0x84a2d0
// 0084a2ec  45                   inc ebp
// 0084a2ed  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0084a2f0  72d3                 jb 0x84a2c5
// 0084a2f2  5f                   pop edi
// 0084a2f3  5e                   pop esi
// 0084a2f4  5d                   pop ebp
// 0084a2f5  5b                   pop ebx
// 0084a2f6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0084a2fa  33cc                 xor ecx, esp
// 0084a2fc  e8f615fcff           call 0x80b8f7
// 0084a301  83c450               add esp, 0x50
// 0084a304  c20400               ret 4
// 0084a307  8bcb                 mov ecx, ebx
// 0084a309  e8e408fcff           call 0x80abf2
// 0084a30e  8be8                 mov ebp, eax
// 0084a310  85ed                 test ebp, ebp
// 0084a312  745a                 je 0x84a36e
// 0084a314  eb04                 jmp 0x84a31a
// 0084a316  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0084a31a  6a3c                 push 0x3c
// 0084a31c  83c8ff               or eax, 0xffffffff
// 0084a31f  8d4c241c             lea ecx, [esp + 0x1c]
// 0084a323  6a00                 push 0
// 0084a325  51                   push ecx
// 0084a326  4d                   dec ebp
// 0084a327  89442460             mov dword ptr [esp + 0x60], eax
// 0084a32b  89442464             mov dword ptr [esp + 0x64], eax
// 0084a32f  e8b00ffcff           call 0x80b2e4
// 0084a334  83c40c               add esp, 0xc
// 0084a337  6a01                 push 1
// 0084a339  8d542414             lea edx, [esp + 0x14]
// 0084a33d  52                   push edx
// 0084a33e  53                   push ebx
// 0084a33f  e84c87ffff           call 0x842a90
// 0084a344  6a01                 push 1
// 0084a346  8d44241c             lea eax, [esp + 0x1c]
// 0084a34a  50                   push eax
// 0084a34b  53                   push ebx
// 0084a34c  e89fe8ffff           call 0x848bf0
// 0084a351  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a355  51                   push ecx
// 0084a356  8bcf                 mov ecx, edi
// 0084a358  e803fdffff           call 0x84a060
// 0084a35d  b911000000           mov ecx, 0x11
// 0084a362  8d742418             lea esi, [esp + 0x18]
// 0084a366  8bf8                 mov edi, eax
// 0084a368  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084a36a  85ed                 test ebp, ebp
// 0084a36c  75a8                 jne 0x84a316
// 0084a36e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0084a372  5f                   pop edi
// 0084a373  5e                   pop esi
// 0084a374  5d                   pop ebp
// 0084a375  5b                   pop ebx
// 0084a376  33cc                 xor ecx, esp
// 0084a378  e87a15fcff           call 0x80b8f7
// 0084a37d  83c450               add esp, 0x50
// 0084a380  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp