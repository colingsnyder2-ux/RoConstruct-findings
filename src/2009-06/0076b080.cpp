// roc 2009-06 0076b080  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076b080
//
// 0076b080  51                   push ecx
// 0076b081  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076b085  53                   push ebx
// 0076b086  55                   push ebp
// 0076b087  56                   push esi
// 0076b088  8b742418             mov esi, dword ptr [esp + 0x18]
// 0076b08c  8bd1                 mov edx, ecx
// 0076b08e  57                   push edi
// 0076b08f  89542410             mov dword ptr [esp + 0x10], edx
// 0076b093  a840                 test al, 0x40
// 0076b095  0f843b010000         je 0x76b1d6
// 0076b09b  83e010               and eax, 0x10
// 0076b09e  33db                 xor ebx, ebx
// 0076b0a0  33c9                 xor ecx, ecx
// 0076b0a2  33ff                 xor edi, edi
// 0076b0a4  33ed                 xor ebp, ebp
// 0076b0a6  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 0076b0a9  89442420             mov dword ptr [esp + 0x20], eax
// 0076b0ad  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0076b0b1  0f8edf000000         jle 0x76b196
// 0076b0b7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0076b0bb  83c330               add ebx, 0x30
// 0076b0be  8bff                 mov edi, edi
// 0076b0c0  837bf800             cmp dword ptr [ebx - 8], 0
// 0076b0c4  0f84b3000000         je 0x76b17d
// 0076b0ca  833b00               cmp dword ptr [ebx], 0
// 0076b0cd  0f85aa000000         jne 0x76b17d
// 0076b0d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076b0d7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076b0db  51                   push ecx
// 0076b0dc  8d43d0               lea eax, [ebx - 0x30]
// 0076b0df  52                   push edx
// 0076b0e0  50                   push eax
// 0076b0e1  ff15f8ed8900         call dword ptr [0x89edf8]
// 0076b0e7  837c242000           cmp dword ptr [esp + 0x20], 0
// 0076b0ec  740f                 je 0x76b0fd
// 0076b0ee  8b06                 mov eax, dword ptr [esi]
// 0076b0f0  6a00                 push 0
// 0076b0f2  50                   push eax
// 0076b0f3  8d43d0               lea eax, [ebx - 0x30]
// 0076b0f6  50                   push eax
// 0076b0f7  ff15f8ed8900         call dword ptr [0x89edf8]
// 0076b0fd  837bfc00             cmp dword ptr [ebx - 4], 0
// 0076b101  7447                 je 0x76b14a
// 0076b103  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076b107  8b542428             mov edx, dword ptr [esp + 0x28]
// 0076b10b  83ec10               sub esp, 0x10
// 0076b10e  8bc4                 mov eax, esp
// 0076b110  8908                 mov dword ptr [eax], ecx
// 0076b112  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076b116  895004               mov dword ptr [eax + 4], edx
// 0076b119  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076b11d  894808               mov dword ptr [eax + 8], ecx
// 0076b120  8b0e                 mov ecx, dword ptr [esi]
// 0076b122  89500c               mov dword ptr [eax + 0xc], edx
// 0076b125  8b4604               mov eax, dword ptr [esi + 4]
// 0076b128  8b542430             mov edx, dword ptr [esp + 0x30]
// 0076b12c  50                   push eax
// 0076b12d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076b131  51                   push ecx
// 0076b132  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0076b136  52                   push edx
// 0076b137  57                   push edi
// 0076b138  55                   push ebp
// 0076b139  50                   push eax
// 0076b13a  51                   push ecx
// 0076b13b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076b13f  e84cfeffff           call 0x76af90
// 0076b144  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0076b148  33ff                 xor edi, edi
// 0076b14a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0076b14f  740a                 je 0x76b15b
// 0076b151  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 0076b154  8b0e                 mov ecx, dword ptr [esi]
// 0076b156  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 0076b159  eb09                 jmp 0x76b164
// 0076b15b  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 0076b15e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076b161  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 0076b164  3bf8                 cmp edi, eax
// 0076b166  7f15                 jg 0x76b17d
// 0076b168  837c242000           cmp dword ptr [esp + 0x20], 0
// 0076b16d  7408                 je 0x76b177
// 0076b16f  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 0076b172  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 0076b175  eb06                 jmp 0x76b17d
// 0076b177  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 0076b17a  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 0076b17d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076b181  45                   inc ebp
// 0076b182  83c340               add ebx, 0x40
// 0076b185  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 0076b188  0f8c32ffffff         jl 0x76b0c0
// 0076b18e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0076b192  85db                 test ebx, ebx
// 0076b194  7502                 jne 0x76b198
// 0076b196  8bf9                 mov edi, ecx
// 0076b198  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076b19c  83ec10               sub esp, 0x10
// 0076b19f  8bc4                 mov eax, esp
// 0076b1a1  8908                 mov dword ptr [eax], ecx
// 0076b1a3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0076b1a7  894804               mov dword ptr [eax + 4], ecx
// 0076b1aa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076b1ae  894808               mov dword ptr [eax + 8], ecx
// 0076b1b1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076b1b5  89480c               mov dword ptr [eax + 0xc], ecx
// 0076b1b8  8b4604               mov eax, dword ptr [esi + 4]
// 0076b1bb  8b0e                 mov ecx, dword ptr [esi]
// 0076b1bd  50                   push eax
// 0076b1be  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076b1c2  51                   push ecx
// 0076b1c3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0076b1c6  50                   push eax
// 0076b1c7  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076b1cb  57                   push edi
// 0076b1cc  51                   push ecx
// 0076b1cd  53                   push ebx
// 0076b1ce  50                   push eax
// 0076b1cf  8bca                 mov ecx, edx
// 0076b1d1  e8bafdffff           call 0x76af90
// 0076b1d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076b1da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0076b1de  8d040a               lea eax, [edx + ecx]
// 0076b1e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076b1e5  8b542430             mov edx, dword ptr [esp + 0x30]
// 0076b1e9  0106                 add dword ptr [esi], eax
// 0076b1eb  5f                   pop edi
// 0076b1ec  03ca                 add ecx, edx
// 0076b1ee  014e04               add dword ptr [esi + 4], ecx
// 0076b1f1  5e                   pop esi
// 0076b1f2  5d                   pop ebp
// 0076b1f3  5b                   pop ebx
// 0076b1f4  59                   pop ecx
// 0076b1f5  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
