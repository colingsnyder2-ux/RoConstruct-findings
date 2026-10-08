// roc 2012-06 009cfd10  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cfd10
//
// 009cfd10  51                   push ecx
// 009cfd11  8b442410             mov eax, dword ptr [esp + 0x10]
// 009cfd15  53                   push ebx
// 009cfd16  55                   push ebp
// 009cfd17  56                   push esi
// 009cfd18  8b742418             mov esi, dword ptr [esp + 0x18]
// 009cfd1c  8bd1                 mov edx, ecx
// 009cfd1e  57                   push edi
// 009cfd1f  89542410             mov dword ptr [esp + 0x10], edx
// 009cfd23  a840                 test al, 0x40
// 009cfd25  0f843b010000         je 0x9cfe66
// 009cfd2b  83e010               and eax, 0x10
// 009cfd2e  33db                 xor ebx, ebx
// 009cfd30  33c9                 xor ecx, ecx
// 009cfd32  33ff                 xor edi, edi
// 009cfd34  33ed                 xor ebp, ebp
// 009cfd36  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 009cfd39  89442420             mov dword ptr [esp + 0x20], eax
// 009cfd3d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 009cfd41  0f8edf000000         jle 0x9cfe26
// 009cfd47  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009cfd4b  83c330               add ebx, 0x30
// 009cfd4e  8bff                 mov edi, edi
// 009cfd50  837bf800             cmp dword ptr [ebx - 8], 0
// 009cfd54  0f84b3000000         je 0x9cfe0d
// 009cfd5a  833b00               cmp dword ptr [ebx], 0
// 009cfd5d  0f85aa000000         jne 0x9cfe0d
// 009cfd63  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009cfd67  8b542424             mov edx, dword ptr [esp + 0x24]
// 009cfd6b  51                   push ecx
// 009cfd6c  8d43d0               lea eax, [ebx - 0x30]
// 009cfd6f  52                   push edx
// 009cfd70  50                   push eax
// 009cfd71  ff15f43ab200         call dword ptr [0xb23af4]
// 009cfd77  837c242000           cmp dword ptr [esp + 0x20], 0
// 009cfd7c  740f                 je 0x9cfd8d
// 009cfd7e  8b06                 mov eax, dword ptr [esi]
// 009cfd80  6a00                 push 0
// 009cfd82  50                   push eax
// 009cfd83  8d43d0               lea eax, [ebx - 0x30]
// 009cfd86  50                   push eax
// 009cfd87  ff15f43ab200         call dword ptr [0xb23af4]
// 009cfd8d  837bfc00             cmp dword ptr [ebx - 4], 0
// 009cfd91  7447                 je 0x9cfdda
// 009cfd93  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009cfd97  8b542428             mov edx, dword ptr [esp + 0x28]
// 009cfd9b  83ec10               sub esp, 0x10
// 009cfd9e  8bc4                 mov eax, esp
// 009cfda0  8908                 mov dword ptr [eax], ecx
// 009cfda2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009cfda6  895004               mov dword ptr [eax + 4], edx
// 009cfda9  8b542440             mov edx, dword ptr [esp + 0x40]
// 009cfdad  894808               mov dword ptr [eax + 8], ecx
// 009cfdb0  8b0e                 mov ecx, dword ptr [esi]
// 009cfdb2  89500c               mov dword ptr [eax + 0xc], edx
// 009cfdb5  8b4604               mov eax, dword ptr [esi + 4]
// 009cfdb8  8b542430             mov edx, dword ptr [esp + 0x30]
// 009cfdbc  50                   push eax
// 009cfdbd  8b442430             mov eax, dword ptr [esp + 0x30]
// 009cfdc1  51                   push ecx
// 009cfdc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009cfdc6  52                   push edx
// 009cfdc7  57                   push edi
// 009cfdc8  55                   push ebp
// 009cfdc9  50                   push eax
// 009cfdca  51                   push ecx
// 009cfdcb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009cfdcf  e84cfeffff           call 0x9cfc20
// 009cfdd4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009cfdd8  33ff                 xor edi, edi
// 009cfdda  837c242000           cmp dword ptr [esp + 0x20], 0
// 009cfddf  740a                 je 0x9cfdeb
// 009cfde1  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 009cfde4  8b0e                 mov ecx, dword ptr [esi]
// 009cfde6  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 009cfde9  eb09                 jmp 0x9cfdf4
// 009cfdeb  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 009cfdee  8b4e04               mov ecx, dword ptr [esi + 4]
// 009cfdf1  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 009cfdf4  3bf8                 cmp edi, eax
// 009cfdf6  7f15                 jg 0x9cfe0d
// 009cfdf8  837c242000           cmp dword ptr [esp + 0x20], 0
// 009cfdfd  7408                 je 0x9cfe07
// 009cfdff  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 009cfe02  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 009cfe05  eb06                 jmp 0x9cfe0d
// 009cfe07  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 009cfe0a  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 009cfe0d  8b542410             mov edx, dword ptr [esp + 0x10]
// 009cfe11  45                   inc ebp
// 009cfe12  83c340               add ebx, 0x40
// 009cfe15  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 009cfe18  0f8c32ffffff         jl 0x9cfd50
// 009cfe1e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009cfe22  85db                 test ebx, ebx
// 009cfe24  7502                 jne 0x9cfe28
// 009cfe26  8bf9                 mov edi, ecx
// 009cfe28  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009cfe2c  83ec10               sub esp, 0x10
// 009cfe2f  8bc4                 mov eax, esp
// 009cfe31  8908                 mov dword ptr [eax], ecx
// 009cfe33  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009cfe37  894804               mov dword ptr [eax + 4], ecx
// 009cfe3a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009cfe3e  894808               mov dword ptr [eax + 8], ecx
// 009cfe41  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009cfe45  89480c               mov dword ptr [eax + 0xc], ecx
// 009cfe48  8b4604               mov eax, dword ptr [esi + 4]
// 009cfe4b  8b0e                 mov ecx, dword ptr [esi]
// 009cfe4d  50                   push eax
// 009cfe4e  8b442434             mov eax, dword ptr [esp + 0x34]
// 009cfe52  51                   push ecx
// 009cfe53  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 009cfe56  50                   push eax
// 009cfe57  8b442434             mov eax, dword ptr [esp + 0x34]
// 009cfe5b  57                   push edi
// 009cfe5c  51                   push ecx
// 009cfe5d  53                   push ebx
// 009cfe5e  50                   push eax
// 009cfe5f  8bca                 mov ecx, edx
// 009cfe61  e8bafdffff           call 0x9cfc20
// 009cfe66  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009cfe6a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009cfe6e  8d040a               lea eax, [edx + ecx]
// 009cfe71  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009cfe75  8b542430             mov edx, dword ptr [esp + 0x30]
// 009cfe79  0106                 add dword ptr [esi], eax
// 009cfe7b  5f                   pop edi
// 009cfe7c  03ca                 add ecx, edx
// 009cfe7e  014e04               add dword ptr [esi + 4], ecx
// 009cfe81  5e                   pop esi
// 009cfe82  5d                   pop ebp
// 009cfe83  5b                   pop ebx
// 009cfe84  59                   pop ecx
// 009cfe85  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
