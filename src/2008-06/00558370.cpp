// roc 2008-06 00558370  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558370
//
// 00558370  64a100000000         mov eax, dword ptr fs:[0]
// 00558376  6aff                 push -1
// 00558378  6868917d00           push 0x7d9168
// 0055837d  50                   push eax
// 0055837e  64892500000000       mov dword ptr fs:[0], esp
// 00558385  83ec08               sub esp, 8
// 00558388  56                   push esi
// 00558389  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055838d  57                   push edi
// 0055838e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00558392  85f6                 test esi, esi
// 00558394  7436                 je 0x5583cc
// 00558396  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055839a  3bf0                 cmp esi, eax
// 0055839c  742e                 je 0x5583cc
// 0055839e  85c0                 test eax, eax
// 005583a0  7416                 je 0x5583b8
// 005583a2  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 005583a8  3bc6                 cmp eax, esi
// 005583aa  7420                 je 0x5583cc
// 005583ac  50                   push eax
// 005583ad  8bce                 mov ecx, esi
// 005583af  e89c18f7ff           call 0x4c9c50
// 005583b4  84c0                 test al, al
// 005583b6  7514                 jne 0x5583cc
// 005583b8  8b06                 mov eax, dword ptr [esi]
// 005583ba  8b5018               mov edx, dword ptr [eax + 0x18]
// 005583bd  57                   push edi
// 005583be  8bce                 mov ecx, esi
// 005583c0  ffd2                 call edx
// 005583c2  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 005583c8  85f6                 test esi, esi
// 005583ca  75ca                 jne 0x558396
// 005583cc  8b07                 mov eax, dword ptr [edi]
// 005583ce  55                   push ebp
// 005583cf  8d4c240c             lea ecx, [esp + 0xc]
// 005583d3  51                   push ecx
// 005583d4  8d8808010000         lea ecx, [eax + 0x108]
// 005583da  e8d191f3ff           call 0x4915b0
// 005583df  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005583e3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005583eb  85ed                 test ebp, ebp
// 005583ed  747a                 je 0x558469
// 005583ef  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005583f2  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005583f5  7606                 jbe 0x5583fd
// 005583f7  ff1590288000         call dword ptr [0x802890]
// 005583fd  8b7500               mov esi, dword ptr [ebp]
// 00558400  53                   push ebx
// 00558401  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00558404  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00558407  7606                 jbe 0x55840f
// 00558409  ff1590288000         call dword ptr [0x802890]
// 0055840f  8b4500               mov eax, dword ptr [ebp]
// 00558412  85f6                 test esi, esi
// 00558414  7404                 je 0x55841a
// 00558416  3bf0                 cmp esi, eax
// 00558418  7406                 je 0x558420
// 0055841a  ff1590288000         call dword ptr [0x802890]
// 00558420  3bfb                 cmp edi, ebx
// 00558422  7444                 je 0x558468
// 00558424  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0055842a  85f6                 test esi, esi
// 0055842c  7532                 jne 0x558460
// 0055842e  ffd3                 call ebx
// 00558430  33c0                 xor eax, eax
// 00558432  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00558435  7202                 jb 0x558439
// 00558437  ffd3                 call ebx
// 00558439  8b542430             mov edx, dword ptr [esp + 0x30]
// 0055843d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00558441  52                   push edx
// 00558442  50                   push eax
// 00558443  57                   push edi
// 00558444  e827ffffff           call 0x558370
// 00558449  83c40c               add esp, 0xc
// 0055844c  85f6                 test esi, esi
// 0055844e  7514                 jne 0x558464
// 00558450  ffd3                 call ebx
// 00558452  33c0                 xor eax, eax
// 00558454  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00558457  7202                 jb 0x55845b
// 00558459  ffd3                 call ebx
// 0055845b  83c708               add edi, 8
// 0055845e  eba1                 jmp 0x558401
// 00558460  8b06                 mov eax, dword ptr [esi]
// 00558462  ebce                 jmp 0x558432
// 00558464  8b06                 mov eax, dword ptr [esi]
// 00558466  ebec                 jmp 0x558454
// 00558468  5b                   pop ebx
// 00558469  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055846d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00558475  5d                   pop ebp
// 00558476  85f6                 test esi, esi
// 00558478  742a                 je 0x5584a4
// 0055847a  8d4e04               lea ecx, [esi + 4]
// 0055847d  83caff               or edx, 0xffffffff
// 00558480  f00fc111             lock xadd dword ptr [ecx], edx
// 00558484  751e                 jne 0x5584a4
// 00558486  8b06                 mov eax, dword ptr [esi]
// 00558488  8b5004               mov edx, dword ptr [eax + 4]
// 0055848b  8bce                 mov ecx, esi
// 0055848d  ffd2                 call edx
// 0055848f  8d4608               lea eax, [esi + 8]
// 00558492  83c9ff               or ecx, 0xffffffff
// 00558495  f00fc108             lock xadd dword ptr [eax], ecx
// 00558499  7509                 jne 0x5584a4
// 0055849b  8b16                 mov edx, dword ptr [esi]
// 0055849d  8b4208               mov eax, dword ptr [edx + 8]
// 005584a0  8bce                 mov ecx, esi
// 005584a2  ffd0                 call eax
// 005584a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005584a8  5f                   pop edi
// 005584a9  5e                   pop esi
// 005584aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005584b1  83c414               add esp, 0x14
// 005584b4  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?signalDescendentRemoving@Instance@RBX@@CAXABV?$shared_ptr@VInstance@RBX@@@boost@@PAV12@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
