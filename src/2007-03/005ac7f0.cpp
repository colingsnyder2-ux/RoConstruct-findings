// roc 2007-03 005ac7f0  unit: seg_005a0000  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac7f0
//
// 005ac7f0  83ec08               sub esp, 8
// 005ac7f3  53                   push ebx
// 005ac7f4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005ac7f8  55                   push ebp
// 005ac7f9  56                   push esi
// 005ac7fa  57                   push edi
// 005ac7fb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ac7ff  8bc7                 mov eax, edi
// 005ac801  2bc3                 sub eax, ebx
// 005ac803  c1f802               sar eax, 2
// 005ac806  83f820               cmp eax, 0x20
// 005ac809  7e7c                 jle 0x5ac887
// 005ac80b  8b742424             mov esi, dword ptr [esp + 0x24]
// 005ac80f  90                   nop 
// 005ac810  85f6                 test esi, esi
// 005ac812  0f8e8b000000         jle 0x5ac8a3
// 005ac818  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ac81c  50                   push eax
// 005ac81d  57                   push edi
// 005ac81e  8d4c2418             lea ecx, [esp + 0x18]
// 005ac822  53                   push ebx
// 005ac823  51                   push ecx
// 005ac824  e867f9ffff           call 0x5ac190
// 005ac829  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005ac82d  8bc6                 mov eax, esi
// 005ac82f  99                   cdq 
// 005ac830  2bc2                 sub eax, edx
// 005ac832  d1f8                 sar eax, 1
// 005ac834  8bf0                 mov esi, eax
// 005ac836  99                   cdq 
// 005ac837  2bc2                 sub eax, edx
// 005ac839  d1f8                 sar eax, 1
// 005ac83b  03f0                 add esi, eax
// 005ac83d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ac841  8bd7                 mov edx, edi
// 005ac843  8bc8                 mov ecx, eax
// 005ac845  2bd5                 sub edx, ebp
// 005ac847  2bcb                 sub ecx, ebx
// 005ac849  83e2fc               and edx, 0xfffffffc
// 005ac84c  83e1fc               and ecx, 0xfffffffc
// 005ac84f  83c410               add esp, 0x10
// 005ac852  3bca                 cmp ecx, edx
// 005ac854  7d11                 jge 0x5ac867
// 005ac856  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ac85a  52                   push edx
// 005ac85b  56                   push esi
// 005ac85c  50                   push eax
// 005ac85d  53                   push ebx
// 005ac85e  e88dffffff           call 0x5ac7f0
// 005ac863  8bdd                 mov ebx, ebp
// 005ac865  eb11                 jmp 0x5ac878
// 005ac867  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ac86b  50                   push eax
// 005ac86c  56                   push esi
// 005ac86d  57                   push edi
// 005ac86e  55                   push ebp
// 005ac86f  e87cffffff           call 0x5ac7f0
// 005ac874  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005ac878  8bc7                 mov eax, edi
// 005ac87a  2bc3                 sub eax, ebx
// 005ac87c  c1f802               sar eax, 2
// 005ac87f  83c410               add esp, 0x10
// 005ac882  83f820               cmp eax, 0x20
// 005ac885  7f89                 jg 0x5ac810
// 005ac887  83f801               cmp eax, 1
// 005ac88a  7e0f                 jle 0x5ac89b
// 005ac88c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ac890  51                   push ecx
// 005ac891  57                   push edi
// 005ac892  53                   push ebx
// 005ac893  e898faffff           call 0x5ac330
// 005ac898  83c40c               add esp, 0xc
// 005ac89b  5f                   pop edi
// 005ac89c  5e                   pop esi
// 005ac89d  5d                   pop ebp
// 005ac89e  5b                   pop ebx
// 005ac89f  83c408               add esp, 8
// 005ac8a2  c3                   ret 
// 005ac8a3  83f820               cmp eax, 0x20
// 005ac8a6  7edf                 jle 0x5ac887
// 005ac8a8  8bcf                 mov ecx, edi
// 005ac8aa  2bcb                 sub ecx, ebx
// 005ac8ac  83e1fc               and ecx, 0xfffffffc
// 005ac8af  83f904               cmp ecx, 4
// 005ac8b2  7e13                 jle 0x5ac8c7
// 005ac8b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ac8b8  6a00                 push 0
// 005ac8ba  6a00                 push 0
// 005ac8bc  52                   push edx
// 005ac8bd  57                   push edi
// 005ac8be  53                   push ebx
// 005ac8bf  e82cf8ffff           call 0x5ac0f0
// 005ac8c4  83c414               add esp, 0x14
// 005ac8c7  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ac8cb  50                   push eax
// 005ac8cc  57                   push edi
// 005ac8cd  53                   push ebx
// 005ac8ce  e8edfbffff           call 0x5ac4c0
// 005ac8d3  83c40c               add esp, 0xc
// 005ac8d6  5f                   pop edi
// 005ac8d7  5e                   pop esi
// 005ac8d8  5d                   pop ebp
// 005ac8d9  5b                   pop ebx
// 005ac8da  83c408               add esp, 8
// 005ac8dd  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort@PAPAVMotorJoint@RBX@@HP6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0HP6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
