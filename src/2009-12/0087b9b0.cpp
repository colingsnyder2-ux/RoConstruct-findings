// roc 2009-12 0087b9b0  unit: CXTPControlGallery  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b9b0
//
// 0087b9b0  6aff                 push -1
// 0087b9b2  686b039600           push 0x96036b
// 0087b9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0087b9bd  50                   push eax
// 0087b9be  83ec20               sub esp, 0x20
// 0087b9c1  53                   push ebx
// 0087b9c2  55                   push ebp
// 0087b9c3  56                   push esi
// 0087b9c4  57                   push edi
// 0087b9c5  a10052b600           mov eax, dword ptr [0xb65200]
// 0087b9ca  33c4                 xor eax, esp
// 0087b9cc  50                   push eax
// 0087b9cd  8d442434             lea eax, [esp + 0x34]
// 0087b9d1  64a300000000         mov dword ptr fs:[0], eax
// 0087b9d7  8bf9                 mov edi, ecx
// 0087b9d9  e8e2b9ffff           call 0x8773c0
// 0087b9de  85c0                 test eax, eax
// 0087b9e0  0f85eb000000         jne 0x87bad1
// 0087b9e6  8bcf                 mov ecx, edi
// 0087b9e8  e863b9ffff           call 0x877350
// 0087b9ed  85c0                 test eax, eax
// 0087b9ef  0f84dc000000         je 0x87bad1
// 0087b9f5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087b9f9  8b542444             mov edx, dword ptr [esp + 0x44]
// 0087b9fd  8d442424             lea eax, [esp + 0x24]
// 0087ba01  50                   push eax
// 0087ba02  51                   push ecx
// 0087ba03  52                   push edx
// 0087ba04  8bcf                 mov ecx, edi
// 0087ba06  e855efffff           call 0x87a960
// 0087ba0b  83f8ff               cmp eax, -1
// 0087ba0e  0f84b9000000         je 0x87bacd
// 0087ba14  50                   push eax
// 0087ba15  8bcf                 mov ecx, edi
// 0087ba17  e8e4c7ffff           call 0x878200
// 0087ba1c  8bf0                 mov esi, eax
// 0087ba1e  8b4628               mov eax, dword ptr [esi + 0x28]
// 0087ba21  85c0                 test eax, eax
// 0087ba23  7d03                 jge 0x87ba28
// 0087ba25  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087ba28  8d4c2420             lea ecx, [esp + 0x20]
// 0087ba2c  51                   push ecx
// 0087ba2d  8bce                 mov ecx, esi
// 0087ba2f  89442418             mov dword ptr [esp + 0x18], eax
// 0087ba33  e8d8b8ffff           call 0x877310
// 0087ba38  8bd8                 mov ebx, eax
// 0087ba3a  8d54241c             lea edx, [esp + 0x1c]
// 0087ba3e  52                   push edx
// 0087ba3f  8bce                 mov ecx, esi
// 0087ba41  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0087ba49  e8e2ea0100           call 0x89a530
// 0087ba4e  8be8                 mov ebp, eax
// 0087ba50  8d442418             lea eax, [esp + 0x18]
// 0087ba54  50                   push eax
// 0087ba55  8bce                 mov ecx, esi
// 0087ba57  c644244001           mov byte ptr [esp + 0x40], 1
// 0087ba5c  e8cfea0100           call 0x89a530
// 0087ba61  8bd0                 mov edx, eax
// 0087ba63  8bcf                 mov ecx, edi
// 0087ba65  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0087ba6a  e8e1b8ffff           call 0x877350
// 0087ba6f  8b4028               mov eax, dword ptr [eax + 0x28]
// 0087ba72  8b742414             mov esi, dword ptr [esp + 0x14]
// 0087ba76  50                   push eax
// 0087ba77  53                   push ebx
// 0087ba78  55                   push ebp
// 0087ba79  52                   push edx
// 0087ba7a  56                   push esi
// 0087ba7b  83ec10               sub esp, 0x10
// 0087ba7e  89642438             mov dword ptr [esp + 0x38], esp
// 0087ba82  8bc4                 mov eax, esp
// 0087ba84  8d4c2448             lea ecx, [esp + 0x48]
// 0087ba88  51                   push ecx
// 0087ba89  50                   push eax
// 0087ba8a  ff1564cc9800         call dword ptr [0x98cc64]
// 0087ba90  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 0087ba96  85ff                 test edi, edi
// 0087ba98  7403                 je 0x87ba9d
// 0087ba9a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0087ba9d  8b542470             mov edx, dword ptr [esp + 0x70]
// 0087baa1  57                   push edi
// 0087baa2  52                   push edx
// 0087baa3  e80846feff           call 0x8600b0
// 0087baa8  83c42c               add esp, 0x2c
// 0087baab  8d4c2418             lea ecx, [esp + 0x18]
// 0087baaf  ff15c0de9800         call dword ptr [0x98dec0]
// 0087bab5  8d4c241c             lea ecx, [esp + 0x1c]
// 0087bab9  ff15c0de9800         call dword ptr [0x98dec0]
// 0087babf  8d4c2420             lea ecx, [esp + 0x20]
// 0087bac3  ff15c0de9800         call dword ptr [0x98dec0]
// 0087bac9  8bc6                 mov eax, esi
// 0087bacb  eb07                 jmp 0x87bad4
// 0087bacd  33c0                 xor eax, eax
// 0087bacf  eb03                 jmp 0x87bad4
// 0087bad1  83c8ff               or eax, 0xffffffff
// 0087bad4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087bad8  64890d00000000       mov dword ptr fs:[0], ecx
// 0087badf  59                   pop ecx
// 0087bae0  5f                   pop edi
// 0087bae1  5e                   pop esi
// 0087bae2  5d                   pop ebp
// 0087bae3  5b                   pop ebx
// 0087bae4  83c42c               add esp, 0x2c
// 0087bae7  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPControlGallery@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp