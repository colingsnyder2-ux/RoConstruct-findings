// from server: 100% by tester
// roc 2007-03 004fff30  unit: seg_004f0000  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fff30
//
// 004fff30  6aff                 push -1
// 004fff32  68520b7500           push 0x750b52
// 004fff37  64a100000000         mov eax, dword ptr fs:[0]
// 004fff3d  50                   push eax
// 004fff3e  83ec4c               sub esp, 0x4c
// 004fff41  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fff46  33c4                 xor eax, esp
// 004fff48  89442448             mov dword ptr [esp + 0x48], eax
// 004fff4c  53                   push ebx
// 004fff4d  55                   push ebp
// 004fff4e  56                   push esi
// 004fff4f  57                   push edi
// 004fff50  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fff55  33c4                 xor eax, esp
// 004fff57  50                   push eax
// 004fff58  8d442460             lea eax, [esp + 0x60]
// 004fff5c  64a300000000         mov dword ptr fs:[0], eax
// 004fff62  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 004fff66  8b442474             mov eax, dword ptr [esp + 0x74]
// 004fff6a  6a01                 push 1
// 004fff6c  6a00                 push 0
// 004fff6e  8d4c241c             lea ecx, [esp + 0x1c]
// 004fff72  51                   push ecx
// 004fff73  8bcf                 mov ecx, edi
// 004fff75  8944242c             mov dword ptr [esp + 0x2c], eax
// 004fff79  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 004fff7e  ff1540e67700         call dword ptr [0x77e640]
// 004fff84  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 004fff8a  8bd8                 mov ebx, eax
// 004fff8c  3b1a                 cmp ebx, dword ptr [edx]
// 004fff8e  0f8481010000         je 0x500115
// 004fff94  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004fff98  7205                 jb 0x4fff9f
// 004fff9a  8b7704               mov esi, dword ptr [edi + 4]
// 004fff9d  eb03                 jmp 0x4fffa2
// 004fff9f  8d7704               lea esi, [edi + 4]
// 004fffa2  e8f9fcffff           call 0x4ffca0
// 004fffa7  8be8                 mov ebp, eax
// 004fffa9  85ed                 test ebp, ebp
// 004fffab  0f8464010000         je 0x500115
// 004fffb1  a1fce67700           mov eax, dword ptr [0x77e6fc]
// 004fffb6  8b00                 mov eax, dword ptr [eax]
// 004fffb8  6a01                 push 1
// 004fffba  50                   push eax
// 004fffbb  8d4c241c             lea ecx, [esp + 0x1c]
// 004fffbf  51                   push ecx
// 004fffc0  8bcf                 mov ecx, edi
// 004fffc2  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 004fffc7  ff153ce67700         call dword ptr [0x77e63c]
// 004fffcd  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 004fffd3  8bf0                 mov esi, eax
// 004fffd5  3b32                 cmp esi, dword ptr [edx]
// 004fffd7  0f8438010000         je 0x500115
// 004fffdd  2bc3                 sub eax, ebx
// 004fffdf  83e801               sub eax, 1
// 004fffe2  50                   push eax
// 004fffe3  83c301               add ebx, 1
// 004fffe6  53                   push ebx
// 004fffe7  8d4c2448             lea ecx, [esp + 0x48]
// 004fffeb  51                   push ecx
// 004fffec  8bcf                 mov ecx, edi
// 004fffee  ff15a8e67700         call dword ptr [0x77e6a8]
// 004ffff4  8b4714               mov eax, dword ptr [edi + 0x14]
// 004ffff7  2bc6                 sub eax, esi
// 004ffff9  50                   push eax
// 004ffffa  83c601               add esi, 1
// 004ffffd  56                   push esi
// 004ffffe  8d54242c             lea edx, [esp + 0x2c]
// 00500002  33db                 xor ebx, ebx
// 00500004  52                   push edx
// 00500005  8bcf                 mov ecx, edi
// 00500007  895c2474             mov dword ptr [esp + 0x74], ebx
// 0050000b  ff15a8e67700         call dword ptr [0x77e6a8]
// 00500011  8b442444             mov eax, dword ptr [esp + 0x44]
// 00500015  be10000000           mov esi, 0x10
// 0050001a  39742458             cmp dword ptr [esp + 0x58], esi
// 0050001e  c644246801           mov byte ptr [esp + 0x68], 1
// 00500023  7304                 jae 0x500029
// 00500025  8d442444             lea eax, [esp + 0x44]
// 00500029  8d4c241c             lea ecx, [esp + 0x1c]
// 0050002d  51                   push ecx
// 0050002e  683f000f00           push 0xf003f
// 00500033  53                   push ebx
// 00500034  50                   push eax
// 00500035  55                   push ebp
// 00500036  ff1524d07700         call dword ptr [0x77d024]
// 0050003c  3bc3                 cmp eax, ebx
// 0050003e  0f85b0000000         jne 0x5000f4
// 00500044  3974243c             cmp dword ptr [esp + 0x3c], esi
// 00500048  8b442428             mov eax, dword ptr [esp + 0x28]
// 0050004c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00500050  7304                 jae 0x500056
// 00500052  8d442428             lea eax, [esp + 0x28]
// 00500056  8d542418             lea edx, [esp + 0x18]
// 0050005a  52                   push edx
// 0050005b  53                   push ebx
// 0050005c  53                   push ebx
// 0050005d  53                   push ebx
// 0050005e  8b1d14d07700         mov ebx, dword ptr [0x77d014]
// 00500064  50                   push eax
// 00500065  8b442430             mov eax, dword ptr [esp + 0x30]
// 00500069  50                   push eax
// 0050006a  ffd3                 call ebx
// 0050006c  8bf0                 mov esi, eax
// 0050006e  85f6                 test esi, esi
// 00500070  754d                 jne 0x5000bf
// 00500072  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00500076  51                   push ecx
// 00500077  e8043bffff           call 0x4f3b80
// 0050007c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00500080  52                   push edx
// 00500081  8bf8                 mov edi, eax
// 00500083  56                   push esi
// 00500084  57                   push edi
// 00500085  e86640ffff           call 0x4f40f0
// 0050008a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0050008e  83c410               add esp, 0x10
// 00500091  837c243c10           cmp dword ptr [esp + 0x3c], 0x10
// 00500096  7304                 jae 0x50009c
// 00500098  8d442428             lea eax, [esp + 0x28]
// 0050009c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005000a0  8d4c2418             lea ecx, [esp + 0x18]
// 005000a4  51                   push ecx
// 005000a5  57                   push edi
// 005000a6  6a00                 push 0
// 005000a8  6a00                 push 0
// 005000aa  50                   push eax
// 005000ab  52                   push edx
// 005000ac  ffd3                 call ebx
// 005000ae  8bf0                 mov esi, eax
// 005000b0  85f6                 test esi, esi
// 005000b2  750b                 jne 0x5000bf
// 005000b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005000b8  57                   push edi
// 005000b9  ff15f0e67700         call dword ptr [0x77e6f0]
// 005000bf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005000c3  50                   push eax
// 005000c4  ff152cd07700         call dword ptr [0x77d02c]
// 005000ca  85f6                 test esi, esi
// 005000cc  8d4c2424             lea ecx, [esp + 0x24]
// 005000d0  0f94c3               sete bl
// 005000d3  c644246800           mov byte ptr [esp + 0x68], 0
// 005000d8  ff158ce77700         call dword ptr [0x77e78c]
// 005000de  8d4c2440             lea ecx, [esp + 0x40]
// 005000e2  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 005000ea  ff158ce77700         call dword ptr [0x77e78c]
// 005000f0  8ac3                 mov al, bl
// 005000f2  eb23                 jmp 0x500117
// 005000f4  8d4c2424             lea ecx, [esp + 0x24]
// 005000f8  c644246800           mov byte ptr [esp + 0x68], 0
// 005000fd  ff158ce77700         call dword ptr [0x77e78c]
// 00500103  8d4c2440             lea ecx, [esp + 0x40]
// 00500107  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0050010f  ff158ce77700         call dword ptr [0x77e78c]
// 00500115  32c0                 xor al, al
// 00500117  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0050011b  64890d00000000       mov dword ptr fs:[0], ecx
// 00500122  59                   pop ecx
// 00500123  5f                   pop edi
// 00500124  5e                   pop esi
// 00500125  5d                   pop ebp
// 00500126  5b                   pop ebx
// 00500127  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050012b  33cc                 xor ecx, esp
// 0050012d  e874ed1100           call 0x61eea6
// 00500132  83c458               add esp, 0x58
// 00500135  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readString@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
