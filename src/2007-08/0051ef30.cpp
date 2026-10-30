// from server: 100% by auto
// roc 2007-08 0051ef30  unit: seg_00510000  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ef30
//
// 0051ef30  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0051ef36  83ec08               sub esp, 8
// 0051ef39  53                   push ebx
// 0051ef3a  bb01000000           mov ebx, 1
// 0051ef3f  3bc3                 cmp eax, ebx
// 0051ef41  57                   push edi
// 0051ef42  7553                 jne 0x51ef97
// 0051ef44  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0051ef4a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0051ef4d  898638010000         mov dword ptr [esi + 0x138], eax
// 0051ef53  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0051ef56  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0051ef5c  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0051ef5f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0051ef62  894140               mov dword ptr [ecx + 0x40], eax
// 0051ef65  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0051ef68  33d2                 xor edx, edx
// 0051ef6a  f7f7                 div edi
// 0051ef6c  895934               mov dword ptr [ecx + 0x34], ebx
// 0051ef6f  895938               mov dword ptr [ecx + 0x38], ebx
// 0051ef72  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0051ef75  895944               mov dword ptr [ecx + 0x44], ebx
// 0051ef78  85d2                 test edx, edx
// 0051ef7a  7502                 jne 0x51ef7e
// 0051ef7c  8bd7                 mov edx, edi
// 0051ef7e  895148               mov dword ptr [ecx + 0x48], edx
// 0051ef81  5f                   pop edi
// 0051ef82  899e40010000         mov dword ptr [esi + 0x140], ebx
// 0051ef88  c7864401000000000000 mov dword ptr [esi + 0x144], 0
// 0051ef92  5b                   pop ebx
// 0051ef93  83c408               add esp, 8
// 0051ef96  c3                   ret 
// 0051ef97  33ff                 xor edi, edi
// 0051ef99  3bc7                 cmp eax, edi
// 0051ef9b  7e05                 jle 0x51efa2
// 0051ef9d  83f804               cmp eax, 4
// 0051efa0  7e27                 jle 0x51efc9
// 0051efa2  8b0e                 mov ecx, dword ptr [esi]
// 0051efa4  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0051efab  8b16                 mov edx, dword ptr [esi]
// 0051efad  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0051efb3  894218               mov dword ptr [edx + 0x18], eax
// 0051efb6  8b0e                 mov ecx, dword ptr [esi]
// 0051efb8  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0051efbf  8b16                 mov edx, dword ptr [esi]
// 0051efc1  8b02                 mov eax, dword ptr [edx]
// 0051efc3  56                   push esi
// 0051efc4  ffd0                 call eax
// 0051efc6  83c404               add esp, 4
// 0051efc9  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0051efcf  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0051efd2  03c9                 add ecx, ecx
// 0051efd4  03c9                 add ecx, ecx
// 0051efd6  03c9                 add ecx, ecx
// 0051efd8  51                   push ecx
// 0051efd9  52                   push edx
// 0051efda  e871f2ffff           call 0x51e250
// 0051efdf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0051efe2  898638010000         mov dword ptr [esi + 0x138], eax
// 0051efe8  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051efee  03c0                 add eax, eax
// 0051eff0  03c0                 add eax, eax
// 0051eff2  03c0                 add eax, eax
// 0051eff4  50                   push eax
// 0051eff5  51                   push ecx
// 0051eff6  e855f2ffff           call 0x51e250
// 0051effb  83c410               add esp, 0x10
// 0051effe  39be24010000         cmp dword ptr [esi + 0x124], edi
// 0051f004  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0051f00a  89be40010000         mov dword ptr [esi + 0x140], edi
// 0051f010  897c2408             mov dword ptr [esp + 8], edi
// 0051f014  0f8eb2000000         jle 0x51f0cc
// 0051f01a  8d9628010000         lea edx, [esi + 0x128]
// 0051f020  8954240c             mov dword ptr [esp + 0xc], edx
// 0051f024  55                   push ebp
// 0051f025  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051f029  8b08                 mov ecx, dword ptr [eax]
// 0051f02b  8b7908               mov edi, dword ptr [ecx + 8]
// 0051f02e  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0051f031  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0051f034  0fafd7               imul edx, edi
// 0051f037  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0051f03a  895140               mov dword ptr [ecx + 0x40], edx
// 0051f03d  33d2                 xor edx, edx
// 0051f03f  f7f7                 div edi
// 0051f041  8bdd                 mov ebx, ebp
// 0051f043  0fafdf               imul ebx, edi
// 0051f046  897934               mov dword ptr [ecx + 0x34], edi
// 0051f049  896938               mov dword ptr [ecx + 0x38], ebp
// 0051f04c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0051f04f  85d2                 test edx, edx
// 0051f051  7502                 jne 0x51f055
// 0051f053  8bd7                 mov edx, edi
// 0051f055  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0051f058  895144               mov dword ptr [ecx + 0x44], edx
// 0051f05b  33d2                 xor edx, edx
// 0051f05d  f7f5                 div ebp
// 0051f05f  85d2                 test edx, edx
// 0051f061  7502                 jne 0x51f065
// 0051f063  8bd5                 mov edx, ebp
// 0051f065  895148               mov dword ptr [ecx + 0x48], edx
// 0051f068  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0051f06e  8bfb                 mov edi, ebx
// 0051f070  03c7                 add eax, edi
// 0051f072  83f80a               cmp eax, 0xa
// 0051f075  7e13                 jle 0x51f08a
// 0051f077  8b0e                 mov ecx, dword ptr [esi]
// 0051f079  c741140d000000       mov dword ptr [ecx + 0x14], 0xd
// 0051f080  8b16                 mov edx, dword ptr [esi]
// 0051f082  8b02                 mov eax, dword ptr [edx]
// 0051f084  56                   push esi
// 0051f085  ffd0                 call eax
// 0051f087  83c404               add esp, 4
// 0051f08a  85ff                 test edi, edi
// 0051f08c  7e21                 jle 0x51f0af
// 0051f08e  8bff                 mov edi, edi
// 0051f090  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0051f096  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051f09a  83ef01               sub edi, 1
// 0051f09d  89948e44010000       mov dword ptr [esi + ecx*4 + 0x144], edx
// 0051f0a4  83864001000001       add dword ptr [esi + 0x140], 1
// 0051f0ab  85ff                 test edi, edi
// 0051f0ad  7fe1                 jg 0x51f090
// 0051f0af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051f0b3  8344241004           add dword ptr [esp + 0x10], 4
// 0051f0b8  83c001               add eax, 1
// 0051f0bb  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0051f0c1  8944240c             mov dword ptr [esp + 0xc], eax
// 0051f0c5  0f8c5affffff         jl 0x51f025
// 0051f0cb  5d                   pop ebp
// 0051f0cc  5f                   pop edi
// 0051f0cd  5b                   pop ebx
// 0051f0ce  83c408               add esp, 8
// 0051f0d1  c3                   ret 
// library jpeg-6b/jdinput.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
