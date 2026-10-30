// roc 2012-06 00a311c0  unit: CXTRegistryManager  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a311c0
//
// 00a311c0  6aff                 push -1
// 00a311c2  68b754ae00           push 0xae54b7
// 00a311c7  64a100000000         mov eax, dword ptr fs:[0]
// 00a311cd  50                   push eax
// 00a311ce  b81c100000           mov eax, 0x101c
// 00a311d3  e80821f5ff           call 0x9832e0
// 00a311d8  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a311dd  33c4                 xor eax, esp
// 00a311df  89842418100000       mov dword ptr [esp + 0x1018], eax
// 00a311e6  53                   push ebx
// 00a311e7  55                   push ebp
// 00a311e8  56                   push esi
// 00a311e9  57                   push edi
// 00a311ea  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a311ef  33c4                 xor eax, esp
// 00a311f1  50                   push eax
// 00a311f2  8d842430100000       lea eax, [esp + 0x1030]
// 00a311f9  64a300000000         mov dword ptr fs:[0], eax
// 00a311ff  8b842444100000       mov eax, dword ptr [esp + 0x1044]
// 00a31206  8bac244c100000       mov ebp, dword ptr [esp + 0x104c]
// 00a3120d  8bbc2440100000       mov edi, dword ptr [esp + 0x1040]
// 00a31214  8b9c2448100000       mov ebx, dword ptr [esp + 0x1048]
// 00a3121b  8bf1                 mov esi, ecx
// 00a3121d  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a31222  89442420             mov dword ptr [esp + 0x20], eax
// 00a31226  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a3122a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00a31232  ff156046b200         call dword ptr [0xb24660]
// 00a31238  84c0                 test al, al
// 00a3123a  0f84e3000000         je 0xa31323
// 00a31240  8bce                 mov ecx, esi
// 00a31242  e829fdffff           call 0xa30f70
// 00a31247  85c0                 test eax, eax
// 00a31249  7506                 jne 0xa31251
// 00a3124b  55                   push ebp
// 00a3124c  e909010000           jmp 0xa3135a
// 00a31251  8b16                 mov edx, dword ptr [esi]
// 00a31253  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a31257  8b5208               mov edx, dword ptr [edx + 8]
// 00a3125a  6819000200           push 0x20019
// 00a3125f  50                   push eax
// 00a31260  8bce                 mov ecx, esi
// 00a31262  ffd2                 call edx
// 00a31264  8be8                 mov ebp, eax
// 00a31266  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a3126a  c784243810000000000000 mov dword ptr [esp + 0x1038], 0
// 00a31275  85ed                 test ebp, ebp
// 00a31277  7509                 jne 0xa31282
// 00a31279  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a3127d  e9d7000000           jmp 0xa31359
// 00a31282  8d4c2418             lea ecx, [esp + 0x18]
// 00a31286  ff158447b200         call dword ptr [0xb24784]
// 00a3128c  8d4c2424             lea ecx, [esp + 0x24]
// 00a31290  51                   push ecx
// 00a31291  6a00                 push 0
// 00a31293  8d542430             lea edx, [esp + 0x30]
// 00a31297  52                   push edx
// 00a31298  6a00                 push 0
// 00a3129a  53                   push ebx
// 00a3129b  55                   push ebp
// 00a3129c  c684245010000001     mov byte ptr [esp + 0x1050], 1
// 00a312a4  ff151c20b200         call dword ptr [0xb2201c]
// 00a312aa  894610               mov dword ptr [esi + 0x10], eax
// 00a312ad  85c0                 test eax, eax
// 00a312af  7423                 je 0xa312d4
// 00a312b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a312b5  50                   push eax
// 00a312b6  8bcf                 mov ecx, edi
// 00a312b8  ff15c847b200         call dword ptr [0xb247c8]
// 00a312be  8d4c2418             lea ecx, [esp + 0x18]
// 00a312c2  ff15d047b200         call dword ptr [0xb247d0]
// 00a312c8  55                   push ebp
// 00a312c9  ff150420b200         call dword ptr [0xb22004]
// 00a312cf  e98e000000           jmp 0xa31362
// 00a312d4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a312d8  8d4c2424             lea ecx, [esp + 0x24]
// 00a312dc  51                   push ecx
// 00a312dd  52                   push edx
// 00a312de  8d4c2420             lea ecx, [esp + 0x20]
// 00a312e2  ff15ac43b200         call dword ptr [0xb243ac]
// 00a312e8  50                   push eax
// 00a312e9  8d442430             lea eax, [esp + 0x30]
// 00a312ed  50                   push eax
// 00a312ee  6a00                 push 0
// 00a312f0  53                   push ebx
// 00a312f1  55                   push ebp
// 00a312f2  ff151c20b200         call dword ptr [0xb2201c]
// 00a312f8  6aff                 push -1
// 00a312fa  8d4c241c             lea ecx, [esp + 0x1c]
// 00a312fe  894610               mov dword ptr [esi + 0x10], eax
// 00a31301  ff15b043b200         call dword ptr [0xb243b0]
// 00a31307  837e1000             cmp dword ptr [esi + 0x10], 0
// 00a3130b  7407                 je 0xa31314
// 00a3130d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a31311  51                   push ecx
// 00a31312  eba2                 jmp 0xa312b6
// 00a31314  8d542418             lea edx, [esp + 0x18]
// 00a31318  52                   push edx
// 00a31319  8bcf                 mov ecx, edi
// 00a3131b  ff158047b200         call dword ptr [0xb24780]
// 00a31321  eb9b                 jmp 0xa312be
// 00a31323  c644241700           mov byte ptr [esp + 0x17], 0
// 00a31328  85ed                 test ebp, ebp
// 00a3132a  7506                 jne 0xa31332
// 00a3132c  8d442417             lea eax, [esp + 0x17]
// 00a31330  8be8                 mov ebp, eax
// 00a31332  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a31337  ff159847b200         call dword ptr [0xb24798]
// 00a3133d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a31341  50                   push eax
// 00a31342  6800100000           push 0x1000
// 00a31347  8d4c2434             lea ecx, [esp + 0x34]
// 00a3134b  51                   push ecx
// 00a3134c  55                   push ebp
// 00a3134d  53                   push ebx
// 00a3134e  52                   push edx
// 00a3134f  ff155c23b200         call dword ptr [0xb2235c]
// 00a31355  8d44242c             lea eax, [esp + 0x2c]
// 00a31359  50                   push eax
// 00a3135a  8bcf                 mov ecx, edi
// 00a3135c  ff15c847b200         call dword ptr [0xb247c8]
// 00a31362  8bc7                 mov eax, edi
// 00a31364  8b8c2430100000       mov ecx, dword ptr [esp + 0x1030]
// 00a3136b  64890d00000000       mov dword ptr fs:[0], ecx
// 00a31372  59                   pop ecx
// 00a31373  5f                   pop edi
// 00a31374  5e                   pop esi
// 00a31375  5d                   pop ebp
// 00a31376  5b                   pop ebx
// 00a31377  8b8c2418100000       mov ecx, dword ptr [esp + 0x1018]
// 00a3137e  33cc                 xor ecx, esp
// 00a31380  e8b226f5ff           call 0x983a37
// 00a31385  81c428100000         add esp, 0x1028
// 00a3138b  c21000               ret 0x10
// copied from an identical function in another client (function ?GetProfileStringA@CXTRegistryManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp