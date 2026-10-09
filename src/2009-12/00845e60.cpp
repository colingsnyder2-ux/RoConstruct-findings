// roc 2009-12 00845e60  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845e60
//
// 00845e60  51                   push ecx
// 00845e61  8b442410             mov eax, dword ptr [esp + 0x10]
// 00845e65  53                   push ebx
// 00845e66  55                   push ebp
// 00845e67  56                   push esi
// 00845e68  8b742418             mov esi, dword ptr [esp + 0x18]
// 00845e6c  8bd1                 mov edx, ecx
// 00845e6e  57                   push edi
// 00845e6f  89542410             mov dword ptr [esp + 0x10], edx
// 00845e73  a840                 test al, 0x40
// 00845e75  0f843b010000         je 0x845fb6
// 00845e7b  83e010               and eax, 0x10
// 00845e7e  33db                 xor ebx, ebx
// 00845e80  33c9                 xor ecx, ecx
// 00845e82  33ff                 xor edi, edi
// 00845e84  33ed                 xor ebp, ebp
// 00845e86  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 00845e89  89442420             mov dword ptr [esp + 0x20], eax
// 00845e8d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00845e91  0f8edf000000         jle 0x845f76
// 00845e97  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00845e9b  83c330               add ebx, 0x30
// 00845e9e  8bff                 mov edi, edi
// 00845ea0  837bf800             cmp dword ptr [ebx - 8], 0
// 00845ea4  0f84b3000000         je 0x845f5d
// 00845eaa  833b00               cmp dword ptr [ebx], 0
// 00845ead  0f85aa000000         jne 0x845f5d
// 00845eb3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00845eb7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00845ebb  51                   push ecx
// 00845ebc  8d43d0               lea eax, [ebx - 0x30]
// 00845ebf  52                   push edx
// 00845ec0  50                   push eax
// 00845ec1  ff156ccc9800         call dword ptr [0x98cc6c]
// 00845ec7  837c242000           cmp dword ptr [esp + 0x20], 0
// 00845ecc  740f                 je 0x845edd
// 00845ece  8b06                 mov eax, dword ptr [esi]
// 00845ed0  6a00                 push 0
// 00845ed2  50                   push eax
// 00845ed3  8d43d0               lea eax, [ebx - 0x30]
// 00845ed6  50                   push eax
// 00845ed7  ff156ccc9800         call dword ptr [0x98cc6c]
// 00845edd  837bfc00             cmp dword ptr [ebx - 4], 0
// 00845ee1  7447                 je 0x845f2a
// 00845ee3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00845ee7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00845eeb  83ec10               sub esp, 0x10
// 00845eee  8bc4                 mov eax, esp
// 00845ef0  8908                 mov dword ptr [eax], ecx
// 00845ef2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00845ef6  895004               mov dword ptr [eax + 4], edx
// 00845ef9  8b542440             mov edx, dword ptr [esp + 0x40]
// 00845efd  894808               mov dword ptr [eax + 8], ecx
// 00845f00  8b0e                 mov ecx, dword ptr [esi]
// 00845f02  89500c               mov dword ptr [eax + 0xc], edx
// 00845f05  8b4604               mov eax, dword ptr [esi + 4]
// 00845f08  8b542430             mov edx, dword ptr [esp + 0x30]
// 00845f0c  50                   push eax
// 00845f0d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00845f11  51                   push ecx
// 00845f12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00845f16  52                   push edx
// 00845f17  57                   push edi
// 00845f18  55                   push ebp
// 00845f19  50                   push eax
// 00845f1a  51                   push ecx
// 00845f1b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00845f1f  e84cfeffff           call 0x845d70
// 00845f24  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00845f28  33ff                 xor edi, edi
// 00845f2a  837c242000           cmp dword ptr [esp + 0x20], 0
// 00845f2f  740a                 je 0x845f3b
// 00845f31  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 00845f34  8b0e                 mov ecx, dword ptr [esi]
// 00845f36  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 00845f39  eb09                 jmp 0x845f44
// 00845f3b  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 00845f3e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00845f41  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 00845f44  3bf8                 cmp edi, eax
// 00845f46  7f15                 jg 0x845f5d
// 00845f48  837c242000           cmp dword ptr [esp + 0x20], 0
// 00845f4d  7408                 je 0x845f57
// 00845f4f  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 00845f52  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 00845f55  eb06                 jmp 0x845f5d
// 00845f57  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 00845f5a  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 00845f5d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00845f61  45                   inc ebp
// 00845f62  83c340               add ebx, 0x40
// 00845f65  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 00845f68  0f8c32ffffff         jl 0x845ea0
// 00845f6e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00845f72  85db                 test ebx, ebx
// 00845f74  7502                 jne 0x845f78
// 00845f76  8bf9                 mov edi, ecx
// 00845f78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00845f7c  83ec10               sub esp, 0x10
// 00845f7f  8bc4                 mov eax, esp
// 00845f81  8908                 mov dword ptr [eax], ecx
// 00845f83  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00845f87  894804               mov dword ptr [eax + 4], ecx
// 00845f8a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00845f8e  894808               mov dword ptr [eax + 8], ecx
// 00845f91  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00845f95  89480c               mov dword ptr [eax + 0xc], ecx
// 00845f98  8b4604               mov eax, dword ptr [esi + 4]
// 00845f9b  8b0e                 mov ecx, dword ptr [esi]
// 00845f9d  50                   push eax
// 00845f9e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00845fa2  51                   push ecx
// 00845fa3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00845fa6  50                   push eax
// 00845fa7  8b442434             mov eax, dword ptr [esp + 0x34]
// 00845fab  57                   push edi
// 00845fac  51                   push ecx
// 00845fad  53                   push ebx
// 00845fae  50                   push eax
// 00845faf  8bca                 mov ecx, edx
// 00845fb1  e8bafdffff           call 0x845d70
// 00845fb6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00845fba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00845fbe  8d040a               lea eax, [edx + ecx]
// 00845fc1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00845fc5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00845fc9  0106                 add dword ptr [esi], eax
// 00845fcb  5f                   pop edi
// 00845fcc  03ca                 add ecx, edx
// 00845fce  014e04               add dword ptr [esi + 4], ecx
// 00845fd1  5e                   pop esi
// 00845fd2  5d                   pop ebp
// 00845fd3  5b                   pop ebx
// 00845fd4  59                   pop ecx
// 00845fd5  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
