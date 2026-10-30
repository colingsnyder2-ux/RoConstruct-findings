// roc 2010-06 008a5ff0  unit: CXTPRibbonSystemPopupBar  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5ff0
//
// 008a5ff0  6aff                 push -1
// 008a5ff2  68b2c99b00           push 0x9bc9b2
// 008a5ff7  64a100000000         mov eax, dword ptr fs:[0]
// 008a5ffd  50                   push eax
// 008a5ffe  83ec44               sub esp, 0x44
// 008a6001  53                   push ebx
// 008a6002  55                   push ebp
// 008a6003  56                   push esi
// 008a6004  57                   push edi
// 008a6005  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a600a  33c4                 xor eax, esp
// 008a600c  50                   push eax
// 008a600d  8d442458             lea eax, [esp + 0x58]
// 008a6011  64a300000000         mov dword ptr fs:[0], eax
// 008a6017  8bf1                 mov esi, ecx
// 008a6019  56                   push esi
// 008a601a  8d4c243c             lea ecx, [esp + 0x3c]
// 008a601e  e8ed92f5ff           call 0x7ff310
// 008a6023  8bce                 mov ecx, esi
// 008a6025  e86626f1ff           call 0x7b8690
// 008a602a  8be8                 mov ebp, eax
// 008a602c  68003ba700           push 0xa73b00
// 008a6031  8bcd                 mov ecx, ebp
// 008a6033  e8c8c1f8ff           call 0x832200
// 008a6038  8bf8                 mov edi, eax
// 008a603a  85ff                 test edi, edi
// 008a603c  0f84dd010000         je 0x8a621f
// 008a6042  6a01                 push 1
// 008a6044  6a00                 push 0
// 008a6046  8d442450             lea eax, [esp + 0x50]
// 008a604a  50                   push eax
// 008a604b  8bcf                 mov ecx, edi
// 008a604d  e8deeafeff           call 0x894b30
// 008a6052  8b10                 mov edx, dword ptr [eax]
// 008a6054  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008a6058  6aff                 push -1
// 008a605a  8d8e00020000         lea ecx, [esi + 0x200]
// 008a6060  51                   push ecx
// 008a6061  83ec10               sub esp, 0x10
// 008a6064  8bcc                 mov ecx, esp
// 008a6066  8911                 mov dword ptr [ecx], edx
// 008a6068  8b5004               mov edx, dword ptr [eax + 4]
// 008a606b  895104               mov dword ptr [ecx + 4], edx
// 008a606e  8b5008               mov edx, dword ptr [eax + 8]
// 008a6071  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a6074  895108               mov dword ptr [ecx + 8], edx
// 008a6077  89410c               mov dword ptr [ecx + 0xc], eax
// 008a607a  8d4c2450             lea ecx, [esp + 0x50]
// 008a607e  51                   push ecx
// 008a607f  53                   push ebx
// 008a6080  8bcf                 mov ecx, edi
// 008a6082  e8e9effeff           call 0x895070
// 008a6087  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 008a608d  52                   push edx
// 008a608e  e81dfaffff           call 0x8a5ab0
// 008a6093  50                   push eax
// 008a6094  e8e51cf0ff           call 0x7a7d7e
// 008a6099  83c408               add esp, 8
// 008a609c  85c0                 test eax, eax
// 008a609e  0f847b010000         je 0x8a621f
// 008a60a4  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008a60aa  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008a60b0  50                   push eax
// 008a60b1  e85a2afaff           call 0x848b10
// 008a60b6  50                   push eax
// 008a60b7  e8c21cf0ff           call 0x7a7d7e
// 008a60bc  8bf8                 mov edi, eax
// 008a60be  83c408               add esp, 8
// 008a60c1  85ff                 test edi, edi
// 008a60c3  0f8456010000         je 0x8a621f
// 008a60c9  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008a60cf  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008a60d5  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a60d9  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008a60df  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a60e3  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 008a60e9  894c2420             mov dword ptr [esp + 0x20], ecx
// 008a60ed  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008a60f3  89542424             mov dword ptr [esp + 0x24], edx
// 008a60f7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008a60fd  8d4c2418             lea ecx, [esp + 0x18]
// 008a6101  51                   push ecx
// 008a6102  8bc8                 mov ecx, eax
// 008a6104  e8371ef0ff           call 0x7a7f40
// 008a6109  8d542418             lea edx, [esp + 0x18]
// 008a610d  52                   push edx
// 008a610e  8bce                 mov ecx, esi
// 008a6110  e8fd27f0ff           call 0x7a8912
// 008a6115  8bcf                 mov ecx, edi
// 008a6117  e8c42ffaff           call 0x8490e0
// 008a611c  85c0                 test eax, eax
// 008a611e  744e                 je 0x8a616e
// 008a6120  8d442438             lea eax, [esp + 0x38]
// 008a6124  50                   push eax
// 008a6125  8d4c241c             lea ecx, [esp + 0x1c]
// 008a6129  51                   push ecx
// 008a612a  8d542450             lea edx, [esp + 0x50]
// 008a612e  52                   push edx
// 008a612f  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 008a6135  85c0                 test eax, eax
// 008a6137  7435                 je 0x8a616e
// 008a6139  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a613d  8b5500               mov edx, dword ptr [ebp]
// 008a6140  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008a6146  83ec10               sub esp, 0x10
// 008a6149  8bc4                 mov eax, esp
// 008a614b  8908                 mov dword ptr [eax], ecx
// 008a614d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a6151  894804               mov dword ptr [eax + 4], ecx
// 008a6154  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a6158  894808               mov dword ptr [eax + 8], ecx
// 008a615b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a615f  89480c               mov dword ptr [eax + 0xc], ecx
// 008a6162  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008a6168  50                   push eax
// 008a6169  53                   push ebx
// 008a616a  8bcd                 mov ecx, ebp
// 008a616c  ffd2                 call edx
// 008a616e  8bce                 mov ecx, esi
// 008a6170  33ff                 xor edi, edi
// 008a6172  e84932f1ff           call 0x7b93c0
// 008a6177  85c0                 test eax, eax
// 008a6179  0f8ea0000000         jle 0x8a621f
// 008a617f  90                   nop 
// 008a6180  57                   push edi
// 008a6181  8bce                 mov ecx, esi
// 008a6183  e84832f1ff           call 0x7b93d0
// 008a6188  85c0                 test eax, eax
// 008a618a  7409                 je 0x8a6195
// 008a618c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008a6193  750e                 jne 0x8a61a3
// 008a6195  8bce                 mov ecx, esi
// 008a6197  47                   inc edi
// 008a6198  e82332f1ff           call 0x7b93c0
// 008a619d  3bf8                 cmp edi, eax
// 008a619f  7cdf                 jl 0x8a6180
// 008a61a1  eb7c                 jmp 0x8a621f
// 008a61a3  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 008a61a9  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008a61af  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a61b3  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 008a61b9  51                   push ecx
// 008a61ba  89542430             mov dword ptr [esp + 0x30], edx
// 008a61be  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 008a61c4  894c2434             mov dword ptr [esp + 0x34], ecx
// 008a61c8  8bcc                 mov ecx, esp
// 008a61ca  8964246c             mov dword ptr [esp + 0x6c], esp
// 008a61ce  68e43aa700           push 0xa73ae4
// 008a61d3  8954243c             mov dword ptr [esp + 0x3c], edx
// 008a61d7  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a61dd  51                   push ecx
// 008a61de  8bcc                 mov ecx, esp
// 008a61e0  8964241c             mov dword ptr [esp + 0x1c], esp
// 008a61e4  684458a600           push 0xa65844
// 008a61e9  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008a61f1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a61f7  8bcd                 mov ecx, ebp
// 008a61f9  c644246801           mov byte ptr [esp + 0x68], 1
// 008a61fe  e8edbff8ff           call 0x8321f0
// 008a6203  8bc8                 mov ecx, eax
// 008a6205  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008a620d  e85ef1feff           call 0x895370
// 008a6212  50                   push eax
// 008a6213  8d44242c             lea eax, [esp + 0x2c]
// 008a6217  50                   push eax
// 008a6218  8bcb                 mov ecx, ebx
// 008a621a  e81f25f0ff           call 0x7a873e
// 008a621f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008a6223  64890d00000000       mov dword ptr fs:[0], ecx
// 008a622a  59                   pop ecx
// 008a622b  5f                   pop edi
// 008a622c  5e                   pop esi
// 008a622d  5d                   pop ebp
// 008a622e  5b                   pop ebx
// 008a622f  83c450               add esp, 0x50
// 008a6232  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonSystemPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp