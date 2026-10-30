// roc 2009-12 0089db50  unit: CXTPReportPaintManager  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089db50
//
// 0089db50  6aff                 push -1
// 0089db52  68601d9600           push 0x961d60
// 0089db57  64a100000000         mov eax, dword ptr fs:[0]
// 0089db5d  50                   push eax
// 0089db5e  83ec2c               sub esp, 0x2c
// 0089db61  56                   push esi
// 0089db62  57                   push edi
// 0089db63  a10052b600           mov eax, dword ptr [0xb65200]
// 0089db68  33c4                 xor eax, esp
// 0089db6a  50                   push eax
// 0089db6b  8d442438             lea eax, [esp + 0x38]
// 0089db6f  64a300000000         mov dword ptr fs:[0], eax
// 0089db75  8bf1                 mov esi, ecx
// 0089db77  8d7e30               lea edi, [esi + 0x30]
// 0089db7a  8bcf                 mov ecx, edi
// 0089db7c  e89d62f5ff           call 0x7f3e1e
// 0089db81  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089db85  50                   push eax
// 0089db86  ff1528b19800         call dword ptr [0x98b128]
// 0089db8c  50                   push eax
// 0089db8d  8bcf                 mov ecx, edi
// 0089db8f  e89662f5ff           call 0x7f3e2a
// 0089db94  6a00                 push 0
// 0089db96  8d4c2428             lea ecx, [esp + 0x28]
// 0089db9a  e8eb880800           call 0x92648a
// 0089db9f  57                   push edi
// 0089dba0  8d4c2428             lea ecx, [esp + 0x28]
// 0089dba4  51                   push ecx
// 0089dba5  8d4c241c             lea ecx, [esp + 0x1c]
// 0089dba9  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0089dbb1  e8aadafaff           call 0x84b660
// 0089dbb6  57                   push edi
// 0089dbb7  8d4c2418             lea ecx, [esp + 0x18]
// 0089dbbb  c644244401           mov byte ptr [esp + 0x44], 1
// 0089dbc0  e8bbc5faff           call 0x84a180
// 0089dbc5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089dbc9  8d54240c             lea edx, [esp + 0xc]
// 0089dbcd  52                   push edx
// 0089dbce  6a01                 push 1
// 0089dbd0  6868619a00           push 0x9a6168
// 0089dbd5  50                   push eax
// 0089dbd6  ff156cb19800         call dword ptr [0x98b16c]
// 0089dbdc  8b8ee4020000         mov ecx, dword ptr [esi + 0x2e4]
// 0089dbe2  8b11                 mov edx, dword ptr [ecx]
// 0089dbe4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089dbe8  8b5258               mov edx, dword ptr [edx + 0x58]
// 0089dbeb  50                   push eax
// 0089dbec  ffd2                 call edx
// 0089dbee  8d4c2414             lea ecx, [esp + 0x14]
// 0089dbf2  898664020000         mov dword ptr [esi + 0x264], eax
// 0089dbf8  898668020000         mov dword ptr [esi + 0x268], eax
// 0089dbfe  c644244000           mov byte ptr [esp + 0x40], 0
// 0089dc03  e8d8dafaff           call 0x84b6e0
// 0089dc08  8d4c2424             lea ecx, [esp + 0x24]
// 0089dc0c  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0089dc14  e86b880800           call 0x926484
// 0089dc19  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089dc1d  64890d00000000       mov dword ptr fs:[0], ecx
// 0089dc24  59                   pop ecx
// 0089dc25  5f                   pop edi
// 0089dc26  5e                   pop esi
// 0089dc27  83c438               add esp, 0x38
// 0089dc2a  c20400               ret 4
// copied from an identical function in another client (function ?SetCaptionFont@CXTPReportPaintManager@@QAEXAAUtagLOGFONTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp