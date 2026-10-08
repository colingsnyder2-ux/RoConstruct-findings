// roc 2008-06 005a7780  unit: RBX::Log  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7780
//
// 005a7780  81ec9c000000         sub esp, 0x9c
// 005a7786  53                   push ebx
// 005a7787  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 005a778e  6890000000           push 0x90
// 005a7793  8d442414             lea eax, [esp + 0x14]
// 005a7797  6a00                 push 0
// 005a7799  50                   push eax
// 005a779a  c60300               mov byte ptr [ebx], 0
// 005a779d  e8629f0f00           call 0x6a1704
// 005a77a2  83c40c               add esp, 0xc
// 005a77a5  8d4c240c             lea ecx, [esp + 0xc]
// 005a77a9  51                   push ecx
// 005a77aa  c744241094000000     mov dword ptr [esp + 0x10], 0x94
// 005a77b2  ff159c218000         call dword ptr [0x80219c]
// 005a77b8  837c241006           cmp dword ptr [esp + 0x10], 6
// 005a77bd  0f82b8000000         jb 0x5a787b
// 005a77c3  ff15e4218000         call dword ptr [0x8021e4]
// 005a77c9  8d542404             lea edx, [esp + 4]
// 005a77cd  52                   push edx
// 005a77ce  6a18                 push 0x18
// 005a77d0  50                   push eax
// 005a77d1  ff1530208000         call dword ptr [0x802030]
// 005a77d7  85c0                 test eax, eax
// 005a77d9  0f849c000000         je 0x5a787b
// 005a77df  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a77e3  57                   push edi
// 005a77e4  8b3d00208000         mov edi, dword ptr [0x802000]
// 005a77ea  8d44240c             lea eax, [esp + 0xc]
// 005a77ee  50                   push eax
// 005a77ef  6a00                 push 0
// 005a77f1  6a00                 push 0
// 005a77f3  6a19                 push 0x19
// 005a77f5  51                   push ecx
// 005a77f6  ffd7                 call edi
// 005a77f8  85c0                 test eax, eax
// 005a77fa  7573                 jne 0x5a786f
// 005a77fc  ff15d8228000         call dword ptr [0x8022d8]
// 005a7802  83f87a               cmp eax, 0x7a
// 005a7805  7568                 jne 0x5a786f
// 005a7807  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a780b  56                   push esi
// 005a780c  52                   push edx
// 005a780d  6a00                 push 0
// 005a780f  ff15b0228000         call dword ptr [0x8022b0]
// 005a7815  8bf0                 mov esi, eax
// 005a7817  85f6                 test esi, esi
// 005a7819  7453                 je 0x5a786e
// 005a781b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a781f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a7823  8d442410             lea eax, [esp + 0x10]
// 005a7827  50                   push eax
// 005a7828  51                   push ecx
// 005a7829  56                   push esi
// 005a782a  6a19                 push 0x19
// 005a782c  52                   push edx
// 005a782d  ffd7                 call edi
// 005a782f  85c0                 test eax, eax
// 005a7831  7434                 je 0x5a7867
// 005a7833  8b06                 mov eax, dword ptr [esi]
// 005a7835  50                   push eax
// 005a7836  ff1538208000         call dword ptr [0x802038]
// 005a783c  8a08                 mov cl, byte ptr [eax]
// 005a783e  8b06                 mov eax, dword ptr [esi]
// 005a7840  fec9                 dec cl
// 005a7842  0fb6d1               movzx edx, cl
// 005a7845  52                   push edx
// 005a7846  50                   push eax
// 005a7847  ff153c208000         call dword ptr [0x80203c]
// 005a784d  8b00                 mov eax, dword ptr [eax]
// 005a784f  3d00200000           cmp eax, 0x2000
// 005a7854  7305                 jae 0x5a785b
// 005a7856  c60301               mov byte ptr [ebx], 1
// 005a7859  eb0c                 jmp 0x5a7867
// 005a785b  3d00300000           cmp eax, 0x3000
// 005a7860  1ac9                 sbb cl, cl
// 005a7862  80c103               add cl, 3
// 005a7865  880b                 mov byte ptr [ebx], cl
// 005a7867  56                   push esi
// 005a7868  ff1574228000         call dword ptr [0x802274]
// 005a786e  5e                   pop esi
// 005a786f  8b542408             mov edx, dword ptr [esp + 8]
// 005a7873  52                   push edx
// 005a7874  ff1534228000         call dword ptr [0x802234]
// 005a787a  5f                   pop edi
// 005a787b  33c0                 xor eax, eax
// 005a787d  5b                   pop ebx
// 005a787e  81c49c000000         add esp, 0x9c
// 005a7884  c20800               ret 8
// library rbxgs/util\FileSystem.cpp (function ?GetIntegrity@VistaAPIs@RBX@@QAGJPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
