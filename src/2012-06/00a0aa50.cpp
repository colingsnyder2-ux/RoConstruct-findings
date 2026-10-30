// roc 2012-06 00a0aa50  unit: CXTPControlGalleryOffice2007Theme  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0aa50
//
// 00a0aa50  6aff                 push -1
// 00a0aa52  68c133ae00           push 0xae33c1
// 00a0aa57  64a100000000         mov eax, dword ptr fs:[0]
// 00a0aa5d  50                   push eax
// 00a0aa5e  83ec20               sub esp, 0x20
// 00a0aa61  53                   push ebx
// 00a0aa62  56                   push esi
// 00a0aa63  57                   push edi
// 00a0aa64  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0aa69  33c4                 xor eax, esp
// 00a0aa6b  50                   push eax
// 00a0aa6c  8d442430             lea eax, [esp + 0x30]
// 00a0aa70  64a300000000         mov dword ptr fs:[0], eax
// 00a0aa76  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00a0aa79  6a38                 push 0x38
// 00a0aa7b  8bcf                 mov ecx, edi
// 00a0aa7d  e80ecef7ff           call 0x987890
// 00a0aa82  8b742440             mov esi, dword ptr [esp + 0x40]
// 00a0aa86  50                   push eax
// 00a0aa87  8d44244c             lea eax, [esp + 0x4c]
// 00a0aa8b  50                   push eax
// 00a0aa8c  8bce                 mov ecx, esi
// 00a0aa8e  e81984f7ff           call 0x982eac
// 00a0aa93  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a0aa97  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a0aa9b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a0aa9f  68c5c5c500           push 0xc5c5c5
// 00a0aaa4  6a01                 push 1
// 00a0aaa6  2bc8                 sub ecx, eax
// 00a0aaa8  51                   push ecx
// 00a0aaa9  4a                   dec edx
// 00a0aaaa  52                   push edx
// 00a0aaab  50                   push eax
// 00a0aaac  8bce                 mov ecx, esi
// 00a0aaae  e8ddea0800           call 0xa99590
// 00a0aab3  8d87f8000000         lea eax, [edi + 0xf8]
// 00a0aab9  50                   push eax
// 00a0aaba  56                   push esi
// 00a0aabb  8d4c2428             lea ecx, [esp + 0x28]
// 00a0aabf  e86caafcff           call 0x9d5530
// 00a0aac4  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a0aac8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a0aacc  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a0aad0  6a00                 push 0
// 00a0aad2  89542418             mov dword ptr [esp + 0x18], edx
// 00a0aad6  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a0aada  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a0aade  6af6                 push -0xa
// 00a0aae0  8d542418             lea edx, [esp + 0x18]
// 00a0aae4  52                   push edx
// 00a0aae5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00a0aaed  89442424             mov dword ptr [esp + 0x24], eax
// 00a0aaf1  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a0aaf5  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a0aafb  8b1e                 mov ebx, dword ptr [esi]
// 00a0aafd  6a2c                 push 0x2c
// 00a0aaff  8bcf                 mov ecx, edi
// 00a0ab01  e88acdf7ff           call 0x987890
// 00a0ab06  50                   push eax
// 00a0ab07  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00a0ab0a  8bce                 mov ecx, esi
// 00a0ab0c  ffd0                 call eax
// 00a0ab0e  8d4c2440             lea ecx, [esp + 0x40]
// 00a0ab12  51                   push ecx
// 00a0ab13  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a0ab17  e864f0feff           call 0x9f9b80
// 00a0ab1c  8bf8                 mov edi, eax
// 00a0ab1e  8b1e                 mov ebx, dword ptr [esi]
// 00a0ab20  6824800000           push 0x8024
// 00a0ab25  8d542414             lea edx, [esp + 0x14]
// 00a0ab29  52                   push edx
// 00a0ab2a  8bcf                 mov ecx, edi
// 00a0ab2c  c644244001           mov byte ptr [esp + 0x40], 1
// 00a0ab31  ff155846b200         call dword ptr [0xb24658]
// 00a0ab37  50                   push eax
// 00a0ab38  8bcf                 mov ecx, edi
// 00a0ab3a  ff159847b200         call dword ptr [0xb24798]
// 00a0ab40  50                   push eax
// 00a0ab41  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a0ab44  8bce                 mov ecx, esi
// 00a0ab46  ffd0                 call eax
// 00a0ab48  8d4c2440             lea ecx, [esp + 0x40]
// 00a0ab4c  ff15d047b200         call dword ptr [0xb247d0]
// 00a0ab52  8d4c2420             lea ecx, [esp + 0x20]
// 00a0ab56  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00a0ab5e  e84daafcff           call 0x9d55b0
// 00a0ab63  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0ab67  64890d00000000       mov dword ptr fs:[0], ecx
// 00a0ab6e  59                   pop ecx
// 00a0ab6f  5f                   pop edi
// 00a0ab70  5e                   pop esi
// 00a0ab71  5b                   pop ebx
// 00a0ab72  83c42c               add esp, 0x2c
// 00a0ab75  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp