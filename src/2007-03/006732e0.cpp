// roc 2007-03 006732e0  unit: seg_00670000  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006732e0
//
// 006732e0  51                   push ecx
// 006732e1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006732e5  a840                 test al, 0x40
// 006732e7  53                   push ebx
// 006732e8  55                   push ebp
// 006732e9  56                   push esi
// 006732ea  8b742418             mov esi, dword ptr [esp + 0x18]
// 006732ee  8bd1                 mov edx, ecx
// 006732f0  57                   push edi
// 006732f1  89542410             mov dword ptr [esp + 0x10], edx
// 006732f5  0f843e010000         je 0x673439
// 006732fb  83e010               and eax, 0x10
// 006732fe  33ed                 xor ebp, ebp
// 00673300  33c9                 xor ecx, ecx
// 00673302  33ff                 xor edi, edi
// 00673304  33db                 xor ebx, ebx
// 00673306  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 00673309  89442420             mov dword ptr [esp + 0x20], eax
// 0067330d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00673311  0f8ee2000000         jle 0x6733f9
// 00673317  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0067331b  83c530               add ebp, 0x30
// 0067331e  8bff                 mov edi, edi
// 00673320  837df800             cmp dword ptr [ebp - 8], 0
// 00673324  0f84b4000000         je 0x6733de
// 0067332a  837d0000             cmp dword ptr [ebp], 0
// 0067332e  0f85aa000000         jne 0x6733de
// 00673334  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00673338  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067333c  51                   push ecx
// 0067333d  8d45d0               lea eax, [ebp - 0x30]
// 00673340  52                   push edx
// 00673341  50                   push eax
// 00673342  ff1558ed7700         call dword ptr [0x77ed58]
// 00673348  837c242000           cmp dword ptr [esp + 0x20], 0
// 0067334d  740f                 je 0x67335e
// 0067334f  8b06                 mov eax, dword ptr [esi]
// 00673351  6a00                 push 0
// 00673353  50                   push eax
// 00673354  8d45d0               lea eax, [ebp - 0x30]
// 00673357  50                   push eax
// 00673358  ff1558ed7700         call dword ptr [0x77ed58]
// 0067335e  837dfc00             cmp dword ptr [ebp - 4], 0
// 00673362  7447                 je 0x6733ab
// 00673364  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00673368  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067336c  83ec10               sub esp, 0x10
// 0067336f  8bc4                 mov eax, esp
// 00673371  8908                 mov dword ptr [eax], ecx
// 00673373  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00673377  895004               mov dword ptr [eax + 4], edx
// 0067337a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0067337e  894808               mov dword ptr [eax + 8], ecx
// 00673381  8b0e                 mov ecx, dword ptr [esi]
// 00673383  89500c               mov dword ptr [eax + 0xc], edx
// 00673386  8b4604               mov eax, dword ptr [esi + 4]
// 00673389  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067338d  50                   push eax
// 0067338e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00673392  51                   push ecx
// 00673393  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00673397  52                   push edx
// 00673398  57                   push edi
// 00673399  53                   push ebx
// 0067339a  50                   push eax
// 0067339b  51                   push ecx
// 0067339c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006733a0  e84bfeffff           call 0x6731f0
// 006733a5  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006733a9  33ff                 xor edi, edi
// 006733ab  837c242000           cmp dword ptr [esp + 0x20], 0
// 006733b0  740a                 je 0x6733bc
// 006733b2  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 006733b5  8b0e                 mov ecx, dword ptr [esi]
// 006733b7  2b45d0               sub eax, dword ptr [ebp - 0x30]
// 006733ba  eb09                 jmp 0x6733c5
// 006733bc  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 006733bf  8b4e04               mov ecx, dword ptr [esi + 4]
// 006733c2  2b45d4               sub eax, dword ptr [ebp - 0x2c]
// 006733c5  3bf8                 cmp edi, eax
// 006733c7  7f15                 jg 0x6733de
// 006733c9  837c242000           cmp dword ptr [esp + 0x20], 0
// 006733ce  7408                 je 0x6733d8
// 006733d0  8b7dd8               mov edi, dword ptr [ebp - 0x28]
// 006733d3  2b7dd0               sub edi, dword ptr [ebp - 0x30]
// 006733d6  eb06                 jmp 0x6733de
// 006733d8  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 006733db  2b7dd4               sub edi, dword ptr [ebp - 0x2c]
// 006733de  8b542410             mov edx, dword ptr [esp + 0x10]
// 006733e2  83c301               add ebx, 1
// 006733e5  83c540               add ebp, 0x40
// 006733e8  3b5a2c               cmp ebx, dword ptr [edx + 0x2c]
// 006733eb  0f8c2fffffff         jl 0x673320
// 006733f1  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006733f5  85ed                 test ebp, ebp
// 006733f7  7502                 jne 0x6733fb
// 006733f9  8bf9                 mov edi, ecx
// 006733fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006733ff  83ec10               sub esp, 0x10
// 00673402  8bc4                 mov eax, esp
// 00673404  8908                 mov dword ptr [eax], ecx
// 00673406  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0067340a  894804               mov dword ptr [eax + 4], ecx
// 0067340d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00673411  894808               mov dword ptr [eax + 8], ecx
// 00673414  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00673418  89480c               mov dword ptr [eax + 0xc], ecx
// 0067341b  8b4604               mov eax, dword ptr [esi + 4]
// 0067341e  8b0e                 mov ecx, dword ptr [esi]
// 00673420  50                   push eax
// 00673421  8b442434             mov eax, dword ptr [esp + 0x34]
// 00673425  51                   push ecx
// 00673426  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00673429  50                   push eax
// 0067342a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0067342e  57                   push edi
// 0067342f  51                   push ecx
// 00673430  55                   push ebp
// 00673431  50                   push eax
// 00673432  8bca                 mov ecx, edx
// 00673434  e8b7fdffff           call 0x6731f0
// 00673439  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0067343d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00673441  8d0411               lea eax, [ecx + edx]
// 00673444  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00673448  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067344c  0106                 add dword ptr [esi], eax
// 0067344e  5f                   pop edi
// 0067344f  03ca                 add ecx, edx
// 00673451  014e04               add dword ptr [esi + 4], ecx
// 00673454  5e                   pop esi
// 00673455  5d                   pop ebp
// 00673456  5b                   pop ebx
// 00673457  59                   pop ecx
// 00673458  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
