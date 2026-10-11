// roc 2008-06 0061fb20  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061fb20
//
// 0061fb20  64a100000000         mov eax, dword ptr fs:[0]
// 0061fb26  6aff                 push -1
// 0061fb28  6861957d00           push 0x7d9561
// 0061fb2d  50                   push eax
// 0061fb2e  64892500000000       mov dword ptr fs:[0], esp
// 0061fb35  83ec3c               sub esp, 0x3c
// 0061fb38  53                   push ebx
// 0061fb39  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0061fb3d  55                   push ebp
// 0061fb3e  56                   push esi
// 0061fb3f  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0061fb42  57                   push edi
// 0061fb43  3b7310               cmp esi, dword ptr [ebx + 0x10]
// 0061fb46  7606                 jbe 0x61fb4e
// 0061fb48  ff1590288000         call dword ptr [0x802890]
// 0061fb4e  8b2b                 mov ebp, dword ptr [ebx]
// 0061fb50  8bfe                 mov edi, esi
// 0061fb52  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0061fb55  896c2418             mov dword ptr [esp + 0x18], ebp
// 0061fb59  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061fb5d  89742410             mov dword ptr [esp + 0x10], esi
// 0061fb61  39730c               cmp dword ptr [ebx + 0xc], esi
// 0061fb64  7606                 jbe 0x61fb6c
// 0061fb66  ff1590288000         call dword ptr [0x802890]
// 0061fb6c  8b03                 mov eax, dword ptr [ebx]
// 0061fb6e  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0061fb74  89442420             mov dword ptr [esp + 0x20], eax
// 0061fb78  85ed                 test ebp, ebp
// 0061fb7a  7406                 je 0x61fb82
// 0061fb7c  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 0061fb80  7406                 je 0x61fb88
// 0061fb82  ff1590288000         call dword ptr [0x802890]
// 0061fb88  3bfe                 cmp edi, esi
// 0061fb8a  0f84ec020000         je 0x61fe7c
// 0061fb90  85ed                 test ebp, ebp
// 0061fb92  7524                 jne 0x61fbb8
// 0061fb94  ff1590288000         call dword ptr [0x802890]
// 0061fb9a  33c0                 xor eax, eax
// 0061fb9c  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fb9f  7206                 jb 0x61fba7
// 0061fba1  ff1590288000         call dword ptr [0x802890]
// 0061fba7  8b0f                 mov ecx, dword ptr [edi]
// 0061fba9  85c9                 test ecx, ecx
// 0061fbab  7410                 je 0x61fbbd
// 0061fbad  8b11                 mov edx, dword ptr [ecx]
// 0061fbaf  8b4204               mov eax, dword ptr [edx + 4]
// 0061fbb2  ffd0                 call eax
// 0061fbb4  8bf0                 mov esi, eax
// 0061fbb6  eb0a                 jmp 0x61fbc2
// 0061fbb8  8b4500               mov eax, dword ptr [ebp]
// 0061fbbb  ebdf                 jmp 0x61fb9c
// 0061fbbd  be14969200           mov esi, 0x929614
// 0061fbc2  68f8be9200           push 0x92bef8
// 0061fbc7  8bce                 mov ecx, esi
// 0061fbc9  ffd3                 call ebx
// 0061fbcb  84c0                 test al, al
// 0061fbcd  7465                 je 0x61fc34
// 0061fbcf  85ed                 test ebp, ebp
// 0061fbd1  7534                 jne 0x61fc07
// 0061fbd3  ff1590288000         call dword ptr [0x802890]
// 0061fbd9  33c0                 xor eax, eax
// 0061fbdb  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fbde  7206                 jb 0x61fbe6
// 0061fbe0  ff1590288000         call dword ptr [0x802890]
// 0061fbe6  8d4c2430             lea ecx, [esp + 0x30]
// 0061fbea  57                   push edi
// 0061fbeb  51                   push ecx
// 0061fbec  e81f65dfff           call 0x416110
// 0061fbf1  83c408               add esp, 8
// 0061fbf4  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061fbf8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061fc00  720a                 jb 0x61fc0c
// 0061fc02  8b4004               mov eax, dword ptr [eax + 4]
// 0061fc05  eb08                 jmp 0x61fc0f
// 0061fc07  8b4500               mov eax, dword ptr [ebp]
// 0061fc0a  ebcf                 jmp 0x61fbdb
// 0061fc0c  83c004               add eax, 4
// 0061fc0f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0061fc13  50                   push eax
// 0061fc14  52                   push edx
// 0061fc15  e86626ffff           call 0x612280
// 0061fc1a  83c408               add esp, 8
// 0061fc1d  8d4c2430             lea ecx, [esp + 0x30]
// 0061fc21  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0061fc29  ff1568248000         call dword ptr [0x802468]
// 0061fc2f  e91c020000           jmp 0x61fe50
// 0061fc34  68d0be9200           push 0x92bed0
// 0061fc39  8bce                 mov ecx, esi
// 0061fc3b  ffd3                 call ebx
// 0061fc3d  84c0                 test al, al
// 0061fc3f  7435                 je 0x61fc76
// 0061fc41  85ed                 test ebp, ebp
// 0061fc43  752c                 jne 0x61fc71
// 0061fc45  ff1590288000         call dword ptr [0x802890]
// 0061fc4b  33c0                 xor eax, eax
// 0061fc4d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fc50  7206                 jb 0x61fc58
// 0061fc52  ff1590288000         call dword ptr [0x802890]
// 0061fc58  57                   push edi
// 0061fc59  e87262dfff           call 0x415ed0
// 0061fc5e  50                   push eax
// 0061fc5f  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061fc63  50                   push eax
// 0061fc64  e8b725ffff           call 0x612220
// 0061fc69  83c40c               add esp, 0xc
// 0061fc6c  e9df010000           jmp 0x61fe50
// 0061fc71  8b4500               mov eax, dword ptr [ebp]
// 0061fc74  ebd7                 jmp 0x61fc4d
// 0061fc76  6878e39400           push 0x94e378
// 0061fc7b  8bce                 mov ecx, esi
// 0061fc7d  ffd3                 call ebx
// 0061fc7f  84c0                 test al, al
// 0061fc81  7435                 je 0x61fcb8
// 0061fc83  85ed                 test ebp, ebp
// 0061fc85  752c                 jne 0x61fcb3
// 0061fc87  ff1590288000         call dword ptr [0x802890]
// 0061fc8d  33c0                 xor eax, eax
// 0061fc8f  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fc92  7206                 jb 0x61fc9a
// 0061fc94  ff1590288000         call dword ptr [0x802890]
// 0061fc9a  57                   push edi
// 0061fc9b  e800faffff           call 0x61f6a0
// 0061fca0  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061fca4  50                   push eax
// 0061fca5  51                   push ecx
// 0061fca6  e87525ffff           call 0x612220
// 0061fcab  83c40c               add esp, 0xc
// 0061fcae  e99d010000           jmp 0x61fe50
// 0061fcb3  8b4500               mov eax, dword ptr [ebp]
// 0061fcb6  ebd7                 jmp 0x61fc8f
// 0061fcb8  68dcbe9200           push 0x92bedc
// 0061fcbd  8bce                 mov ecx, esi
// 0061fcbf  ffd3                 call ebx
// 0061fcc1  84c0                 test al, al
// 0061fcc3  7438                 je 0x61fcfd
// 0061fcc5  85ed                 test ebp, ebp
// 0061fcc7  752f                 jne 0x61fcf8
// 0061fcc9  ff1590288000         call dword ptr [0x802890]
// 0061fccf  33c0                 xor eax, eax
// 0061fcd1  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fcd4  7206                 jb 0x61fcdc
// 0061fcd6  ff1590288000         call dword ptr [0x802890]
// 0061fcdc  57                   push edi
// 0061fcdd  e80e63dfff           call 0x415ff0
// 0061fce2  8b542460             mov edx, dword ptr [esp + 0x60]
// 0061fce6  51                   push ecx
// 0061fce7  dd1c24               fstp qword ptr [esp]
// 0061fcea  52                   push edx
// 0061fceb  e81025ffff           call 0x612200
// 0061fcf0  83c40c               add esp, 0xc
// 0061fcf3  e958010000           jmp 0x61fe50
// 0061fcf8  8b4500               mov eax, dword ptr [ebp]
// 0061fcfb  ebd4                 jmp 0x61fcd1
// 0061fcfd  68e8be9200           push 0x92bee8
// 0061fd02  8bce                 mov ecx, esi
// 0061fd04  ffd3                 call ebx
// 0061fd06  84c0                 test al, al
// 0061fd08  7425                 je 0x61fd2f
// 0061fd0a  8d4c2418             lea ecx, [esp + 0x18]
// 0061fd0e  e85d3cdfff           call 0x413970
// 0061fd13  50                   push eax
// 0061fd14  e86763dfff           call 0x416080
// 0061fd19  8b442460             mov eax, dword ptr [esp + 0x60]
// 0061fd1d  51                   push ecx
// 0061fd1e  dd1c24               fstp qword ptr [esp]
// 0061fd21  50                   push eax
// 0061fd22  e8d924ffff           call 0x612200
// 0061fd27  83c40c               add esp, 0xc
// 0061fd2a  e921010000           jmp 0x61fe50
// 0061fd2f  6844969200           push 0x929644
// 0061fd34  8bce                 mov ecx, esi
// 0061fd36  ffd3                 call ebx
// 0061fd38  84c0                 test al, al
// 0061fd3a  7425                 je 0x61fd61
// 0061fd3c  8d4c2418             lea ecx, [esp + 0x18]
// 0061fd40  e82b3cdfff           call 0x413970
// 0061fd45  50                   push eax
// 0061fd46  e81562dfff           call 0x415f60
// 0061fd4b  8b542460             mov edx, dword ptr [esp + 0x60]
// 0061fd4f  0fb6c8               movzx ecx, al
// 0061fd52  51                   push ecx
// 0061fd53  52                   push edx
// 0061fd54  e89726ffff           call 0x6123f0
// 0061fd59  83c40c               add esp, 0xc
// 0061fd5c  e9ef000000           jmp 0x61fe50
// 0061fd61  6880599300           push 0x935980
// 0061fd66  8bce                 mov ecx, esi
// 0061fd68  ffd3                 call ebx
// 0061fd6a  84c0                 test al, al
// 0061fd6c  744b                 je 0x61fdb9
// 0061fd6e  8d4c2418             lea ecx, [esp + 0x18]
// 0061fd72  e8f93bdfff           call 0x413970
// 0061fd77  50                   push eax
// 0061fd78  8d44242c             lea eax, [esp + 0x2c]
// 0061fd7c  50                   push eax
// 0061fd7d  e8aef9ffff           call 0x61f730
// 0061fd82  8bcc                 mov ecx, esp
// 0061fd84  8964241c             mov dword ptr [esp + 0x1c], esp
// 0061fd88  50                   push eax
// 0061fd89  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0061fd91  e88a9cf3ff           call 0x559a20
// 0061fd96  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0061fd9a  51                   push ecx
// 0061fd9b  e890a9f8ff           call 0x5aa730
// 0061fda0  83c40c               add esp, 0xc
// 0061fda3  8d4c2428             lea ecx, [esp + 0x28]
// 0061fda7  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0061fdaf  e8ac08feff           call 0x600660
// 0061fdb4  e997000000           jmp 0x61fe50
// 0061fdb9  68a03a9400           push 0x943aa0
// 0061fdbe  8bce                 mov ecx, esi
// 0061fdc0  ffd3                 call ebx
// 0061fdc2  84c0                 test al, al
// 0061fdc4  7444                 je 0x61fe0a
// 0061fdc6  8d4c2418             lea ecx, [esp + 0x18]
// 0061fdca  e8a13bdfff           call 0x413970
// 0061fdcf  50                   push eax
// 0061fdd0  e80bfaffff           call 0x61f7e0
// 0061fdd5  8b4004               mov eax, dword ptr [eax + 4]
// 0061fdd8  83c004               add eax, 4
// 0061fddb  83c404               add esp, 4
// 0061fdde  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061fde2  7213                 jb 0x61fdf7
// 0061fde4  8b4004               mov eax, dword ptr [eax + 4]
// 0061fde7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0061fdeb  50                   push eax
// 0061fdec  52                   push edx
// 0061fded  e88e24ffff           call 0x612280
// 0061fdf2  83c408               add esp, 8
// 0061fdf5  eb59                 jmp 0x61fe50
// 0061fdf7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0061fdfb  83c004               add eax, 4
// 0061fdfe  50                   push eax
// 0061fdff  52                   push edx
// 0061fe00  e87b24ffff           call 0x612280
// 0061fe05  83c408               add esp, 8
// 0061fe08  eb46                 jmp 0x61fe50
// 0061fe0a  68b8b29500           push 0x95b2b8
// 0061fe0f  8bce                 mov ecx, esi
// 0061fe11  ffd3                 call ebx
// 0061fe13  84c0                 test al, al
// 0061fe15  741f                 je 0x61fe36
// 0061fe17  8d4c2418             lea ecx, [esp + 0x18]
// 0061fe1b  e8503bdfff           call 0x413970
// 0061fe20  50                   push eax
// 0061fe21  e84afaffff           call 0x61f870
// 0061fe26  50                   push eax
// 0061fe27  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061fe2b  50                   push eax
// 0061fe2c  e84f24ffff           call 0x612280
// 0061fe31  83c40c               add esp, 0xc
// 0061fe34  eb1a                 jmp 0x61fe50
// 0061fe36  68e8dc9700           push 0x97dce8
// 0061fe3b  8bce                 mov ecx, esi
// 0061fe3d  ff1554268000         call dword ptr [0x802654]
// 0061fe43  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061fe47  51                   push ecx
// 0061fe48  e89323ffff           call 0x6121e0
// 0061fe4d  83c404               add esp, 4
// 0061fe50  85ed                 test ebp, ebp
// 0061fe52  7523                 jne 0x61fe77
// 0061fe54  ff1590288000         call dword ptr [0x802890]
// 0061fe5a  33c0                 xor eax, eax
// 0061fe5c  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0061fe5f  7206                 jb 0x61fe67
// 0061fe61  ff1590288000         call dword ptr [0x802890]
// 0061fe67  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061fe6b  83c704               add edi, 4
// 0061fe6e  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061fe72  e901fdffff           jmp 0x61fb78
// 0061fe77  8b4500               mov eax, dword ptr [ebp]
// 0061fe7a  ebe0                 jmp 0x61fe5c
// 0061fe7c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061fe80  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0061fe83  2b410c               sub eax, dword ptr [ecx + 0xc]
// 0061fe86  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0061fe8a  5f                   pop edi
// 0061fe8b  5e                   pop esi
// 0061fe8c  5d                   pop ebp
// 0061fe8d  c1f802               sar eax, 2
// 0061fe90  64890d00000000       mov dword ptr fs:[0], ecx
// 0061fe97  5b                   pop ebx
// 0061fe98  83c448               add esp, 0x48
// 0061fe9b  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?pushArgs@@YAIPAUlua_State@@ABV?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
