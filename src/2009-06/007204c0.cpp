// from server: 100% by tester
// roc 2008-06 006abde0  unit: CRobloxControlColorSelector  size: 977 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006abde0
//
// 006abde0  8b442408             mov eax, dword ptr [esp + 8]
// 006abde4  83ec44               sub esp, 0x44
// 006abde7  53                   push ebx
// 006abde8  55                   push ebp
// 006abde9  56                   push esi
// 006abdea  57                   push edi
// 006abdeb  8bf1                 mov esi, ecx
// 006abded  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006abdf1  50                   push eax
// 006abdf2  51                   push ecx
// 006abdf3  8dbec0000000         lea edi, [esi + 0xc0]
// 006abdf9  57                   push edi
// 006abdfa  ff152c2d8000         call dword ptr [0x802d2c]
// 006abe00  85c0                 test eax, eax
// 006abe02  0f849d030000         je 0x6ac1a5
// 006abe08  8b442458             mov eax, dword ptr [esp + 0x58]
// 006abe0c  8bd0                 mov edx, eax
// 006abe0e  2b17                 sub edx, dword ptr [edi]
// 006abe10  83fa02               cmp edx, 2
// 006abe13  7e11                 jle 0x6abe26
// 006abe15  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006abe1b  2bc8                 sub ecx, eax
// 006abe1d  83f902               cmp ecx, 2
// 006abe20  0f8f7f030000         jg 0x6ac1a5
// 006abe26  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006abe2c  e8df8f0000           call 0x6b4e10
// 006abe31  c7405800000000       mov dword ptr [eax + 0x58], 0
// 006abe38  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006abe3e  8b11                 mov edx, dword ptr [ecx]
// 006abe40  6a01                 push 1
// 006abe42  89442428             mov dword ptr [esp + 0x28], eax
// 006abe46  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006abe4c  6a00                 push 0
// 006abe4e  ffd0                 call eax
// 006abe50  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006abe56  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006abe59  52                   push edx
// 006abe5a  ff15942c8000         call dword ptr [0x802c94]
// 006abe60  8b4f04               mov ecx, dword ptr [edi + 4]
// 006abe63  8b07                 mov eax, dword ptr [edi]
// 006abe65  8b5708               mov edx, dword ptr [edi + 8]
// 006abe68  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006abe6c  8d4c2428             lea ecx, [esp + 0x28]
// 006abe70  89442428             mov dword ptr [esp + 0x28], eax
// 006abe74  8b470c               mov eax, dword ptr [edi + 0xc]
// 006abe77  51                   push ecx
// 006abe78  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006abe7e  89542434             mov dword ptr [esp + 0x34], edx
// 006abe82  89442438             mov dword ptr [esp + 0x38], eax
// 006abe86  e8a74dffff           call 0x6a0c32
// 006abe8b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006abe91  8b5020               mov edx, dword ptr [eax + 0x20]
// 006abe94  52                   push edx
// 006abe95  ff15a82d8000         call dword ptr [0x802da8]
// 006abe9b  50                   push eax
// 006abe9c  e83d4dffff           call 0x6a0bde
// 006abea1  e89a3b0700           call 0x71fa40
// 006abea6  8b10                 mov edx, dword ptr [eax]
// 006abea8  8bc8                 mov ecx, eax
// 006abeaa  8b4218               mov eax, dword ptr [edx + 0x18]
// 006abead  68f4260000           push 0x26f4
// 006abeb2  ffd0                 call eax
// 006abeb4  50                   push eax
// 006abeb5  ff15042d8000         call dword ptr [0x802d04]
// 006abebb  ff154c2b8000         call dword ptr [0x802b4c]
// 006abec1  50                   push eax
// 006abec2  e8174dffff           call 0x6a0bde
// 006abec7  8bd8                 mov ebx, eax
// 006abec9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006abecc  51                   push ecx
// 006abecd  895c2424             mov dword ptr [esp + 0x24], ebx
// 006abed1  ff15482b8000         call dword ptr [0x802b48]
// 006abed7  85c0                 test eax, eax
// 006abed9  740d                 je 0x6abee8
// 006abedb  8b5320               mov edx, dword ptr [ebx + 0x20]
// 006abede  6803040000           push 0x403
// 006abee3  6a00                 push 0
// 006abee5  52                   push edx
// 006abee6  eb08                 jmp 0x6abef0
// 006abee8  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006abeeb  6a03                 push 3
// 006abeed  6a00                 push 0
// 006abeef  50                   push eax
// 006abef0  ff15442b8000         call dword ptr [0x802b44]
// 006abef6  50                   push eax
// 006abef7  e82c011100           call 0x7bc028
// 006abefc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006abf00  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006abf04  83ec10               sub esp, 0x10
// 006abf07  8be8                 mov ebp, eax
// 006abf09  8bc4                 mov eax, esp
// 006abf0b  8908                 mov dword ptr [eax], ecx
// 006abf0d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006abf11  895004               mov dword ptr [eax + 4], edx
// 006abf14  8b542444             mov edx, dword ptr [esp + 0x44]
// 006abf18  894808               mov dword ptr [eax + 8], ecx
// 006abf1b  55                   push ebp
// 006abf1c  8bce                 mov ecx, esi
// 006abf1e  89500c               mov dword ptr [eax + 0xc], edx
// 006abf21  e87afdffff           call 0x6abca0
// 006abf26  8b06                 mov eax, dword ptr [esi]
// 006abf28  8b901c010000         mov edx, dword ptr [eax + 0x11c]
// 006abf2e  8bce                 mov ecx, esi
// 006abf30  ffd2                 call edx
// 006abf32  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006abf36  89442418             mov dword ptr [esp + 0x18], eax
// 006abf3a  8b07                 mov eax, dword ptr [edi]
// 006abf3c  8bd1                 mov edx, ecx
// 006abf3e  2bd0                 sub edx, eax
// 006abf40  33db                 xor ebx, ebx
// 006abf42  83fa02               cmp edx, 2
// 006abf45  0f9ec3               setle bl
// 006abf48  85db                 test ebx, ebx
// 006abf4a  740a                 je 0x6abf56
// 006abf4c  8d542428             lea edx, [esp + 0x28]
// 006abf50  89542410             mov dword ptr [esp + 0x10], edx
// 006abf54  eb0e                 jmp 0x6abf64
// 006abf56  8d442430             lea eax, [esp + 0x30]
// 006abf5a  89442410             mov dword ptr [esp + 0x10], eax
// 006abf5e  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 006abf64  8b3dac2d8000         mov edi, dword ptr [0x802dac]
// 006abf6a  2bc1                 sub eax, ecx
// 006abf6c  89442414             mov dword ptr [esp + 0x14], eax
// 006abf70  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006abf78  ffd7                 call edi
// 006abf7a  50                   push eax
// 006abf7b  e85e4cffff           call 0x6a0bde
// 006abf80  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 006abf86  0f852a010000         jne 0x6ac0b6
// 006abf8c  8d642400             lea esp, [esp]
// 006abf90  6a00                 push 0
// 006abf92  6a00                 push 0
// 006abf94  6a00                 push 0
// 006abf96  8d4c2444             lea ecx, [esp + 0x44]
// 006abf9a  51                   push ecx
// 006abf9b  ff15782c8000         call dword ptr [0x802c78]
// 006abfa1  85c0                 test eax, eax
// 006abfa3  0f840d010000         je 0x6ac0b6
// 006abfa9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006abfad  3d00020000           cmp eax, 0x200
// 006abfb2  0f85b8000000         jne 0x6ac070
// 006abfb8  8b442444             mov eax, dword ptr [esp + 0x44]
// 006abfbc  0fbfc8               movsx ecx, ax
// 006abfbf  c1e810               shr eax, 0x10
// 006abfc2  98                   cwde 
// 006abfc3  8944245c             mov dword ptr [esp + 0x5c], eax
// 006abfc7  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006abfcd  8d542458             lea edx, [esp + 0x58]
// 006abfd1  894c2458             mov dword ptr [esp + 0x58], ecx
// 006abfd5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006abfd8  52                   push edx
// 006abfd9  51                   push ecx
// 006abfda  ff15802d8000         call dword ptr [0x802d80]
// 006abfe0  8b442458             mov eax, dword ptr [esp + 0x58]
// 006abfe4  03442414             add eax, dword ptr [esp + 0x14]
// 006abfe8  8b542428             mov edx, dword ptr [esp + 0x28]
// 006abfec  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006abff0  89442458             mov dword ptr [esp + 0x58], eax
// 006abff4  85db                 test ebx, ebx
// 006abff6  740c                 je 0x6ac004
// 006abff8  8bcf                 mov ecx, edi
// 006abffa  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 006abffe  3bc1                 cmp eax, ecx
// 006ac000  7c12                 jl 0x6ac014
// 006ac002  eb0a                 jmp 0x6ac00e
// 006ac004  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ac008  03ca                 add ecx, edx
// 006ac00a  3bc1                 cmp eax, ecx
// 006ac00c  7f06                 jg 0x6ac014
// 006ac00e  8bc1                 mov eax, ecx
// 006ac010  89442458             mov dword ptr [esp + 0x58], eax
// 006ac014  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ac018  3901                 cmp dword ptr [ecx], eax
// 006ac01a  7476                 je 0x6ac092
// 006ac01c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006ac020  83ec10               sub esp, 0x10
// 006ac023  8bc4                 mov eax, esp
// 006ac025  8910                 mov dword ptr [eax], edx
// 006ac027  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006ac02b  895004               mov dword ptr [eax + 4], edx
// 006ac02e  897808               mov dword ptr [eax + 8], edi
// 006ac031  89480c               mov dword ptr [eax + 0xc], ecx
// 006ac034  55                   push ebp
// 006ac035  8bce                 mov ecx, esi
// 006ac037  e864fcffff           call 0x6abca0
// 006ac03c  8b542458             mov edx, dword ptr [esp + 0x58]
// 006ac040  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ac044  8910                 mov dword ptr [eax], edx
// 006ac046  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006ac04a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006ac04e  83ec10               sub esp, 0x10
// 006ac051  8bc4                 mov eax, esp
// 006ac053  8908                 mov dword ptr [eax], ecx
// 006ac055  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006ac059  895004               mov dword ptr [eax + 4], edx
// 006ac05c  8b542444             mov edx, dword ptr [esp + 0x44]
// 006ac060  894808               mov dword ptr [eax + 8], ecx
// 006ac063  55                   push ebp
// 006ac064  8bce                 mov ecx, esi
// 006ac066  89500c               mov dword ptr [eax + 0xc], edx
// 006ac069  e832fcffff           call 0x6abca0
// 006ac06e  eb22                 jmp 0x6ac092
// 006ac070  3d00010000           cmp eax, 0x100
// 006ac075  7509                 jne 0x6ac080
// 006ac077  837c24401b           cmp dword ptr [esp + 0x40], 0x1b
// 006ac07c  7438                 je 0x6ac0b6
// 006ac07e  eb07                 jmp 0x6ac087
// 006ac080  3d02020000           cmp eax, 0x202
// 006ac085  7427                 je 0x6ac0ae
// 006ac087  8d442438             lea eax, [esp + 0x38]
// 006ac08b  50                   push eax
// 006ac08c  ff15c82c8000         call dword ptr [0x802cc8]
// 006ac092  8b3dac2d8000         mov edi, dword ptr [0x802dac]
// 006ac098  ffd7                 call edi
// 006ac09a  50                   push eax
// 006ac09b  e83e4bffff           call 0x6a0bde
// 006ac0a0  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 006ac0a6  0f84e4feffff         je 0x6abf90
// 006ac0ac  eb08                 jmp 0x6ac0b6
// 006ac0ae  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006ac0b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006ac0ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006ac0be  83ec10               sub esp, 0x10
// 006ac0c1  8bc4                 mov eax, esp
// 006ac0c3  8908                 mov dword ptr [eax], ecx
// 006ac0c5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006ac0c9  895004               mov dword ptr [eax + 4], edx
// 006ac0cc  8b542444             mov edx, dword ptr [esp + 0x44]
// 006ac0d0  894808               mov dword ptr [eax + 8], ecx
// 006ac0d3  55                   push ebp
// 006ac0d4  8bce                 mov ecx, esi
// 006ac0d6  89500c               mov dword ptr [eax + 0xc], edx
// 006ac0d9  e8c2fbffff           call 0x6abca0
// 006ac0de  ffd7                 call edi
// 006ac0e0  50                   push eax
// 006ac0e1  e8f84affff           call 0x6a0bde
// 006ac0e6  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 006ac0ec  7506                 jne 0x6ac0f4
// 006ac0ee  ff15b42d8000         call dword ptr [0x802db4]
// 006ac0f4  6a00                 push 0
// 006ac0f6  ff15482b8000         call dword ptr [0x802b48]
// 006ac0fc  85ed                 test ebp, ebp
// 006ac0fe  7412                 je 0x6ac112
// 006ac100  8b4504               mov eax, dword ptr [ebp + 4]
// 006ac103  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ac107  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006ac10a  50                   push eax
// 006ac10b  52                   push edx
// 006ac10c  ff15c02c8000         call dword ptr [0x802cc0]
// 006ac112  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ac116  897058               mov dword ptr [eax + 0x58], esi
// 006ac119  8b442430             mov eax, dword ptr [esp + 0x30]
// 006ac11d  2b442428             sub eax, dword ptr [esp + 0x28]
// 006ac121  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006ac126  8bf8                 mov edi, eax
// 006ac128  7458                 je 0x6ac182
// 006ac12a  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006ac130  2b8ec0000000         sub ecx, dword ptr [esi + 0xc0]
// 006ac136  3bc1                 cmp eax, ecx
// 006ac138  7448                 je 0x6ac182
// 006ac13a  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 006ac140  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 006ac147  751c                 jne 0x6ac165
// 006ac149  8bce                 mov ecx, esi
// 006ac14b  e8f0f0ffff           call 0x6ab240
// 006ac150  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ac156  8b10                 mov edx, dword ptr [eax]
// 006ac158  51                   push ecx
// 006ac159  8bc8                 mov ecx, eax
// 006ac15b  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 006ac161  ffd0                 call eax
// 006ac163  2bf8                 sub edi, eax
// 006ac165  8b16                 mov edx, dword ptr [esi]
// 006ac167  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 006ac16d  57                   push edi
// 006ac16e  8bce                 mov ecx, esi
// 006ac170  ffd0                 call eax
// 006ac172  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ac178  8b11                 mov edx, dword ptr [ecx]
// 006ac17a  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006ac180  ffd0                 call eax
// 006ac182  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ac188  8b11                 mov edx, dword ptr [ecx]
// 006ac18a  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006ac190  6a01                 push 1
// 006ac192  6a00                 push 0
// 006ac194  ffd0                 call eax
// 006ac196  b801000000           mov eax, 1
// 006ac19b  5f                   pop edi
// 006ac19c  5e                   pop esi
// 006ac19d  5d                   pop ebp
// 006ac19e  5b                   pop ebx
// 006ac19f  83c444               add esp, 0x44
// 006ac1a2  c20800               ret 8
// 006ac1a5  5f                   pop edi
// 006ac1a6  5e                   pop esi
// 006ac1a7  5d                   pop ebp
// 006ac1a8  33c0                 xor eax, eax
// 006ac1aa  5b                   pop ebx
// 006ac1ab  83c444               add esp, 0x44
// 006ac1ae  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?CustomizeStartResize@CXTPControl@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
