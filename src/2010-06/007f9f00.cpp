// roc 2010-06 007f9f00  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9f00
//
// 007f9f00  51                   push ecx
// 007f9f01  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9f05  53                   push ebx
// 007f9f06  55                   push ebp
// 007f9f07  56                   push esi
// 007f9f08  8b742418             mov esi, dword ptr [esp + 0x18]
// 007f9f0c  8bd1                 mov edx, ecx
// 007f9f0e  57                   push edi
// 007f9f0f  89542410             mov dword ptr [esp + 0x10], edx
// 007f9f13  a840                 test al, 0x40
// 007f9f15  0f843b010000         je 0x7fa056
// 007f9f1b  83e010               and eax, 0x10
// 007f9f1e  33db                 xor ebx, ebx
// 007f9f20  33c9                 xor ecx, ecx
// 007f9f22  33ff                 xor edi, edi
// 007f9f24  33ed                 xor ebp, ebp
// 007f9f26  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 007f9f29  89442420             mov dword ptr [esp + 0x20], eax
// 007f9f2d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007f9f31  0f8edf000000         jle 0x7fa016
// 007f9f37  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007f9f3b  83c330               add ebx, 0x30
// 007f9f3e  8bff                 mov edi, edi
// 007f9f40  837bf800             cmp dword ptr [ebx - 8], 0
// 007f9f44  0f84b3000000         je 0x7f9ffd
// 007f9f4a  833b00               cmp dword ptr [ebx], 0
// 007f9f4d  0f85aa000000         jne 0x7f9ffd
// 007f9f53  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f9f57  8b542424             mov edx, dword ptr [esp + 0x24]
// 007f9f5b  51                   push ecx
// 007f9f5c  8d43d0               lea eax, [ebx - 0x30]
// 007f9f5f  52                   push edx
// 007f9f60  50                   push eax
// 007f9f61  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007f9f67  837c242000           cmp dword ptr [esp + 0x20], 0
// 007f9f6c  740f                 je 0x7f9f7d
// 007f9f6e  8b06                 mov eax, dword ptr [esi]
// 007f9f70  6a00                 push 0
// 007f9f72  50                   push eax
// 007f9f73  8d43d0               lea eax, [ebx - 0x30]
// 007f9f76  50                   push eax
// 007f9f77  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007f9f7d  837bfc00             cmp dword ptr [ebx - 4], 0
// 007f9f81  7447                 je 0x7f9fca
// 007f9f83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f9f87  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f9f8b  83ec10               sub esp, 0x10
// 007f9f8e  8bc4                 mov eax, esp
// 007f9f90  8908                 mov dword ptr [eax], ecx
// 007f9f92  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f9f96  895004               mov dword ptr [eax + 4], edx
// 007f9f99  8b542440             mov edx, dword ptr [esp + 0x40]
// 007f9f9d  894808               mov dword ptr [eax + 8], ecx
// 007f9fa0  8b0e                 mov ecx, dword ptr [esi]
// 007f9fa2  89500c               mov dword ptr [eax + 0xc], edx
// 007f9fa5  8b4604               mov eax, dword ptr [esi + 4]
// 007f9fa8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007f9fac  50                   push eax
// 007f9fad  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f9fb1  51                   push ecx
// 007f9fb2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007f9fb6  52                   push edx
// 007f9fb7  57                   push edi
// 007f9fb8  55                   push ebp
// 007f9fb9  50                   push eax
// 007f9fba  51                   push ecx
// 007f9fbb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f9fbf  e84cfeffff           call 0x7f9e10
// 007f9fc4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007f9fc8  33ff                 xor edi, edi
// 007f9fca  837c242000           cmp dword ptr [esp + 0x20], 0
// 007f9fcf  740a                 je 0x7f9fdb
// 007f9fd1  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 007f9fd4  8b0e                 mov ecx, dword ptr [esi]
// 007f9fd6  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 007f9fd9  eb09                 jmp 0x7f9fe4
// 007f9fdb  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 007f9fde  8b4e04               mov ecx, dword ptr [esi + 4]
// 007f9fe1  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 007f9fe4  3bf8                 cmp edi, eax
// 007f9fe6  7f15                 jg 0x7f9ffd
// 007f9fe8  837c242000           cmp dword ptr [esp + 0x20], 0
// 007f9fed  7408                 je 0x7f9ff7
// 007f9fef  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 007f9ff2  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 007f9ff5  eb06                 jmp 0x7f9ffd
// 007f9ff7  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 007f9ffa  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 007f9ffd  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fa001  45                   inc ebp
// 007fa002  83c340               add ebx, 0x40
// 007fa005  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 007fa008  0f8c32ffffff         jl 0x7f9f40
// 007fa00e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007fa012  85db                 test ebx, ebx
// 007fa014  7502                 jne 0x7fa018
// 007fa016  8bf9                 mov edi, ecx
// 007fa018  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fa01c  83ec10               sub esp, 0x10
// 007fa01f  8bc4                 mov eax, esp
// 007fa021  8908                 mov dword ptr [eax], ecx
// 007fa023  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fa027  894804               mov dword ptr [eax + 4], ecx
// 007fa02a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007fa02e  894808               mov dword ptr [eax + 8], ecx
// 007fa031  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fa035  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa038  8b4604               mov eax, dword ptr [esi + 4]
// 007fa03b  8b0e                 mov ecx, dword ptr [esi]
// 007fa03d  50                   push eax
// 007fa03e  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fa042  51                   push ecx
// 007fa043  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 007fa046  50                   push eax
// 007fa047  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fa04b  57                   push edi
// 007fa04c  51                   push ecx
// 007fa04d  53                   push ebx
// 007fa04e  50                   push eax
// 007fa04f  8bca                 mov ecx, edx
// 007fa051  e8bafdffff           call 0x7f9e10
// 007fa056  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fa05a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007fa05e  8d040a               lea eax, [edx + ecx]
// 007fa061  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fa065  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fa069  0106                 add dword ptr [esi], eax
// 007fa06b  5f                   pop edi
// 007fa06c  03ca                 add ecx, edx
// 007fa06e  014e04               add dword ptr [esi + 4], ecx
// 007fa071  5e                   pop esi
// 007fa072  5d                   pop ebp
// 007fa073  5b                   pop ebx
// 007fa074  59                   pop ecx
// 007fa075  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
