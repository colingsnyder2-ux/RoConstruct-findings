// roc 2009-12 008a77b0  unit: CXTRegistryManager  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a77b0
//
// 008a77b0  83ec10               sub esp, 0x10
// 008a77b3  56                   push esi
// 008a77b4  8bf1                 mov esi, ecx
// 008a77b6  e8b5ffffff           call 0x8a7770
// 008a77bb  85c0                 test eax, eax
// 008a77bd  7507                 jne 0x8a77c6
// 008a77bf  5e                   pop esi
// 008a77c0  83c410               add esp, 0x10
// 008a77c3  c20400               ret 4
// 008a77c6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008a77c9  55                   push ebp
// 008a77ca  57                   push edi
// 008a77cb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008a77cf  8d442410             lea eax, [esp + 0x10]
// 008a77d3  50                   push eax
// 008a77d4  33ed                 xor ebp, ebp
// 008a77d6  57                   push edi
// 008a77d7  55                   push ebp
// 008a77d8  68b0f59900           push 0x99f5b0
// 008a77dd  51                   push ecx
// 008a77de  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008a77e2  896c2424             mov dword ptr [esp + 0x24], ebp
// 008a77e6  896c2420             mov dword ptr [esp + 0x20], ebp
// 008a77ea  ff1510b09800         call dword ptr [0x98b010]
// 008a77f0  894610               mov dword ptr [esi + 0x10], eax
// 008a77f3  3bc5                 cmp eax, ebp
// 008a77f5  7427                 je 0x8a781e
// 008a77f7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a77fb  8b3508b09800         mov esi, dword ptr [0x98b008]
// 008a7801  3bc5                 cmp eax, ebp
// 008a7803  7403                 je 0x8a7808
// 008a7805  50                   push eax
// 008a7806  ffd6                 call esi
// 008a7808  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a780c  3bc5                 cmp eax, ebp
// 008a780e  7403                 je 0x8a7813
// 008a7810  50                   push eax
// 008a7811  ffd6                 call esi
// 008a7813  5f                   pop edi
// 008a7814  5d                   pop ebp
// 008a7815  33c0                 xor eax, eax
// 008a7817  5e                   pop esi
// 008a7818  83c410               add esp, 0x10
// 008a781b  c20400               ret 4
// 008a781e  8b4e08               mov ecx, dword ptr [esi + 8]
// 008a7821  53                   push ebx
// 008a7822  8b1d0cb09800         mov ebx, dword ptr [0x98b00c]
// 008a7828  8d542418             lea edx, [esp + 0x18]
// 008a782c  52                   push edx
// 008a782d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a7831  8d442414             lea eax, [esp + 0x14]
// 008a7835  50                   push eax
// 008a7836  55                   push ebp
// 008a7837  57                   push edi
// 008a7838  55                   push ebp
// 008a7839  55                   push ebp
// 008a783a  55                   push ebp
// 008a783b  51                   push ecx
// 008a783c  52                   push edx
// 008a783d  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008a7841  ffd3                 call ebx
// 008a7843  894610               mov dword ptr [esi + 0x10], eax
// 008a7846  3bc5                 cmp eax, ebp
// 008a7848  740c                 je 0x8a7856
// 008a784a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a784e  8b3508b09800         mov esi, dword ptr [0x98b008]
// 008a7854  eb2b                 jmp 0x8a7881
// 008a7856  8b560c               mov edx, dword ptr [esi + 0xc]
// 008a7859  8d442418             lea eax, [esp + 0x18]
// 008a785d  50                   push eax
// 008a785e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a7862  8d4c2420             lea ecx, [esp + 0x20]
// 008a7866  51                   push ecx
// 008a7867  55                   push ebp
// 008a7868  57                   push edi
// 008a7869  55                   push ebp
// 008a786a  55                   push ebp
// 008a786b  55                   push ebp
// 008a786c  52                   push edx
// 008a786d  50                   push eax
// 008a786e  ffd3                 call ebx
// 008a7870  894610               mov dword ptr [esi + 0x10], eax
// 008a7873  8b3508b09800         mov esi, dword ptr [0x98b008]
// 008a7879  3bc5                 cmp eax, ebp
// 008a787b  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a787f  741e                 je 0x8a789f
// 008a7881  3bc5                 cmp eax, ebp
// 008a7883  7403                 je 0x8a7888
// 008a7885  50                   push eax
// 008a7886  ffd6                 call esi
// 008a7888  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a788c  3bc5                 cmp eax, ebp
// 008a788e  7403                 je 0x8a7893
// 008a7890  50                   push eax
// 008a7891  ffd6                 call esi
// 008a7893  5b                   pop ebx
// 008a7894  5f                   pop edi
// 008a7895  5d                   pop ebp
// 008a7896  33c0                 xor eax, eax
// 008a7898  5e                   pop esi
// 008a7899  83c410               add esp, 0x10
// 008a789c  c20400               ret 4
// 008a789f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a78a3  3bc5                 cmp eax, ebp
// 008a78a5  7403                 je 0x8a78aa
// 008a78a7  50                   push eax
// 008a78a8  ffd6                 call esi
// 008a78aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a78ae  3bc5                 cmp eax, ebp
// 008a78b0  7403                 je 0x8a78b5
// 008a78b2  50                   push eax
// 008a78b3  ffd6                 call esi
// 008a78b5  5b                   pop ebx
// 008a78b6  8bc7                 mov eax, edi
// 008a78b8  5f                   pop edi
// 008a78b9  5d                   pop ebp
// 008a78ba  5e                   pop esi
// 008a78bb  83c410               add esp, 0x10
// 008a78be  c20400               ret 4
// copied from an identical function in another client (function ?GetAppRegistryKey@CXTRegistryManager@@MAEPAUHKEY__@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp