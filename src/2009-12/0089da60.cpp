// roc 2009-12 0089da60  unit: CXTPReportPaintManager  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089da60
//
// 0089da60  6aff                 push -1
// 0089da62  68b8329600           push 0x9632b8
// 0089da67  64a100000000         mov eax, dword ptr fs:[0]
// 0089da6d  50                   push eax
// 0089da6e  83ec2c               sub esp, 0x2c
// 0089da71  53                   push ebx
// 0089da72  55                   push ebp
// 0089da73  56                   push esi
// 0089da74  57                   push edi
// 0089da75  a10052b600           mov eax, dword ptr [0xb65200]
// 0089da7a  33c4                 xor eax, esp
// 0089da7c  50                   push eax
// 0089da7d  8d442440             lea eax, [esp + 0x40]
// 0089da81  64a300000000         mov dword ptr fs:[0], eax
// 0089da87  8bf9                 mov edi, ecx
// 0089da89  8d7720               lea esi, [edi + 0x20]
// 0089da8c  8bce                 mov ecx, esi
// 0089da8e  e88b63f5ff           call 0x7f3e1e
// 0089da93  8d5f28               lea ebx, [edi + 0x28]
// 0089da96  8bcb                 mov ecx, ebx
// 0089da98  e88163f5ff           call 0x7f3e1e
// 0089da9d  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 0089daa1  55                   push ebp
// 0089daa2  ff1528b19800         call dword ptr [0x98b128]
// 0089daa8  50                   push eax
// 0089daa9  8bce                 mov ecx, esi
// 0089daab  e87a63f5ff           call 0x7f3e2a
// 0089dab0  55                   push ebp
// 0089dab1  c74510bc020000       mov dword ptr [ebp + 0x10], 0x2bc
// 0089dab8  ff1528b19800         call dword ptr [0x98b128]
// 0089dabe  50                   push eax
// 0089dabf  8bcb                 mov ecx, ebx
// 0089dac1  e86463f5ff           call 0x7f3e2a
// 0089dac6  6a00                 push 0
// 0089dac8  8d4c2430             lea ecx, [esp + 0x30]
// 0089dacc  e8b9890800           call 0x92648a
// 0089dad1  56                   push esi
// 0089dad2  8d442430             lea eax, [esp + 0x30]
// 0089dad6  50                   push eax
// 0089dad7  8d4c2424             lea ecx, [esp + 0x24]
// 0089dadb  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0089dae3  e878dbfaff           call 0x84b660
// 0089dae8  8b542434             mov edx, dword ptr [esp + 0x34]
// 0089daec  8d4c2414             lea ecx, [esp + 0x14]
// 0089daf0  51                   push ecx
// 0089daf1  6a01                 push 1
// 0089daf3  6868619a00           push 0x9a6168
// 0089daf8  52                   push edx
// 0089daf9  ff156cb19800         call dword ptr [0x98b16c]
// 0089daff  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089db03  83c004               add eax, 4
// 0089db06  83f812               cmp eax, 0x12
// 0089db09  7d05                 jge 0x89db10
// 0089db0b  b812000000           mov eax, 0x12
// 0089db10  8d4c241c             lea ecx, [esp + 0x1c]
// 0089db14  898760020000         mov dword ptr [edi + 0x260], eax
// 0089db1a  e8c1dbfaff           call 0x84b6e0
// 0089db1f  8d4c242c             lea ecx, [esp + 0x2c]
// 0089db23  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089db2b  e854890800           call 0x926484
// 0089db30  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089db34  64890d00000000       mov dword ptr fs:[0], ecx
// 0089db3b  59                   pop ecx
// 0089db3c  5f                   pop edi
// 0089db3d  5e                   pop esi
// 0089db3e  5d                   pop ebp
// 0089db3f  5b                   pop ebx
// 0089db40  83c438               add esp, 0x38
// 0089db43  c20400               ret 4
// copied from an identical function in another client (function ?SetTextFont@CXTPReportPaintManager@@QAEXAAUtagLOGFONTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp