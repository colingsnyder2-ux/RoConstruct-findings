// from server: 100% by auto
// roc 2007-08 0067b1f0  unit: CXTPControls  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067b1f0
//
// 0067b1f0  51                   push ecx
// 0067b1f1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067b1f5  a840                 test al, 0x40
// 0067b1f7  53                   push ebx
// 0067b1f8  55                   push ebp
// 0067b1f9  56                   push esi
// 0067b1fa  8b742418             mov esi, dword ptr [esp + 0x18]
// 0067b1fe  8bd1                 mov edx, ecx
// 0067b200  57                   push edi
// 0067b201  89542410             mov dword ptr [esp + 0x10], edx
// 0067b205  0f843e010000         je 0x67b349
// 0067b20b  83e010               and eax, 0x10
// 0067b20e  33ed                 xor ebp, ebp
// 0067b210  33c9                 xor ecx, ecx
// 0067b212  33ff                 xor edi, edi
// 0067b214  33db                 xor ebx, ebx
// 0067b216  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 0067b219  89442420             mov dword ptr [esp + 0x20], eax
// 0067b21d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0067b221  0f8ee2000000         jle 0x67b309
// 0067b227  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0067b22b  83c530               add ebp, 0x30
// 0067b22e  8bff                 mov edi, edi
// 0067b230  837df800             cmp dword ptr [ebp - 8], 0
// 0067b234  0f84b4000000         je 0x67b2ee
// 0067b23a  837d0000             cmp dword ptr [ebp], 0
// 0067b23e  0f85aa000000         jne 0x67b2ee
// 0067b244  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067b248  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067b24c  51                   push ecx
// 0067b24d  8d45d0               lea eax, [ebp - 0x30]
// 0067b250  52                   push edx
// 0067b251  50                   push eax
// 0067b252  ff15d8ed7700         call dword ptr [0x77edd8]
// 0067b258  837c242000           cmp dword ptr [esp + 0x20], 0
// 0067b25d  740f                 je 0x67b26e
// 0067b25f  8b06                 mov eax, dword ptr [esi]
// 0067b261  6a00                 push 0
// 0067b263  50                   push eax
// 0067b264  8d45d0               lea eax, [ebp - 0x30]
// 0067b267  50                   push eax
// 0067b268  ff15d8ed7700         call dword ptr [0x77edd8]
// 0067b26e  837dfc00             cmp dword ptr [ebp - 4], 0
// 0067b272  7447                 je 0x67b2bb
// 0067b274  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067b278  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067b27c  83ec10               sub esp, 0x10
// 0067b27f  8bc4                 mov eax, esp
// 0067b281  8908                 mov dword ptr [eax], ecx
// 0067b283  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0067b287  895004               mov dword ptr [eax + 4], edx
// 0067b28a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0067b28e  894808               mov dword ptr [eax + 8], ecx
// 0067b291  8b0e                 mov ecx, dword ptr [esi]
// 0067b293  89500c               mov dword ptr [eax + 0xc], edx
// 0067b296  8b4604               mov eax, dword ptr [esi + 4]
// 0067b299  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067b29d  50                   push eax
// 0067b29e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0067b2a2  51                   push ecx
// 0067b2a3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067b2a7  52                   push edx
// 0067b2a8  57                   push edi
// 0067b2a9  53                   push ebx
// 0067b2aa  50                   push eax
// 0067b2ab  51                   push ecx
// 0067b2ac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0067b2b0  e84bfeffff           call 0x67b100
// 0067b2b5  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0067b2b9  33ff                 xor edi, edi
// 0067b2bb  837c242000           cmp dword ptr [esp + 0x20], 0
// 0067b2c0  740a                 je 0x67b2cc
// 0067b2c2  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 0067b2c5  8b0e                 mov ecx, dword ptr [esi]
// 0067b2c7  2b45d0               sub eax, dword ptr [ebp - 0x30]
// 0067b2ca  eb09                 jmp 0x67b2d5
// 0067b2cc  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0067b2cf  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067b2d2  2b45d4               sub eax, dword ptr [ebp - 0x2c]
// 0067b2d5  3bf8                 cmp edi, eax
// 0067b2d7  7f15                 jg 0x67b2ee
// 0067b2d9  837c242000           cmp dword ptr [esp + 0x20], 0
// 0067b2de  7408                 je 0x67b2e8
// 0067b2e0  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 0067b2e3  2b7dd0               sub edi, dword ptr [ebp - 0x30]
// 0067b2e6  eb06                 jmp 0x67b2ee
// 0067b2e8  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 0067b2eb  2b7dd4               sub edi, dword ptr [ebp - 0x2c]
// 0067b2ee  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067b2f2  83c301               add ebx, 1
// 0067b2f5  83c540               add ebp, 0x40
// 0067b2f8  3b5a2c               cmp ebx, dword ptr [edx + 0x2c]
// 0067b2fb  0f8c2fffffff         jl 0x67b230
// 0067b301  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0067b305  85ed                 test ebp, ebp
// 0067b307  7502                 jne 0x67b30b
// 0067b309  8bf9                 mov edi, ecx
// 0067b30b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067b30f  83ec10               sub esp, 0x10
// 0067b312  8bc4                 mov eax, esp
// 0067b314  8908                 mov dword ptr [eax], ecx
// 0067b316  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0067b31a  894804               mov dword ptr [eax + 4], ecx
// 0067b31d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0067b321  894808               mov dword ptr [eax + 8], ecx
// 0067b324  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0067b328  89480c               mov dword ptr [eax + 0xc], ecx
// 0067b32b  8b4604               mov eax, dword ptr [esi + 4]
// 0067b32e  8b0e                 mov ecx, dword ptr [esi]
// 0067b330  50                   push eax
// 0067b331  8b442434             mov eax, dword ptr [esp + 0x34]
// 0067b335  51                   push ecx
// 0067b336  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0067b339  50                   push eax
// 0067b33a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0067b33e  57                   push edi
// 0067b33f  51                   push ecx
// 0067b340  55                   push ebp
// 0067b341  50                   push eax
// 0067b342  8bca                 mov ecx, edx
// 0067b344  e8b7fdffff           call 0x67b100
// 0067b349  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0067b34d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067b351  8d0411               lea eax, [ecx + edx]
// 0067b354  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067b358  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067b35c  0106                 add dword ptr [esi], eax
// 0067b35e  5f                   pop edi
// 0067b35f  03ca                 add ecx, edx
// 0067b361  014e04               add dword ptr [esi + 4], ecx
// 0067b364  5e                   pop esi
// 0067b365  5d                   pop ebp
// 0067b366  5b                   pop ebx
// 0067b367  59                   pop ecx
// 0067b368  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
