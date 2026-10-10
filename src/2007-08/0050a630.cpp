// from server: 100% by tester
// roc 2007-03 004ffd70  unit: seg_004f0000  size: 439 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ffd70
//
// 004ffd70  6aff                 push -1
// 004ffd72  68520b7500           push 0x750b52
// 004ffd77  64a100000000         mov eax, dword ptr fs:[0]
// 004ffd7d  50                   push eax
// 004ffd7e  83ec4c               sub esp, 0x4c
// 004ffd81  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004ffd86  33c4                 xor eax, esp
// 004ffd88  89442448             mov dword ptr [esp + 0x48], eax
// 004ffd8c  53                   push ebx
// 004ffd8d  55                   push ebp
// 004ffd8e  56                   push esi
// 004ffd8f  57                   push edi
// 004ffd90  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004ffd95  33c4                 xor eax, esp
// 004ffd97  50                   push eax
// 004ffd98  8d442460             lea eax, [esp + 0x60]
// 004ffd9c  64a300000000         mov dword ptr fs:[0], eax
// 004ffda2  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 004ffda6  8b442474             mov eax, dword ptr [esp + 0x74]
// 004ffdaa  6a01                 push 1
// 004ffdac  6a00                 push 0
// 004ffdae  8d4c241c             lea ecx, [esp + 0x1c]
// 004ffdb2  51                   push ecx
// 004ffdb3  8bcf                 mov ecx, edi
// 004ffdb5  8944242c             mov dword ptr [esp + 0x2c], eax
// 004ffdb9  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 004ffdbe  ff1540e67700         call dword ptr [0x77e640]
// 004ffdc4  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 004ffdca  8bd8                 mov ebx, eax
// 004ffdcc  3b1a                 cmp ebx, dword ptr [edx]
// 004ffdce  0f8432010000         je 0x4fff06
// 004ffdd4  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004ffdd8  7205                 jb 0x4ffddf
// 004ffdda  8b7704               mov esi, dword ptr [edi + 4]
// 004ffddd  eb03                 jmp 0x4ffde2
// 004ffddf  8d7704               lea esi, [edi + 4]
// 004ffde2  e8b9feffff           call 0x4ffca0
// 004ffde7  8be8                 mov ebp, eax
// 004ffde9  85ed                 test ebp, ebp
// 004ffdeb  0f8415010000         je 0x4fff06
// 004ffdf1  a1fce67700           mov eax, dword ptr [0x77e6fc]
// 004ffdf6  8b00                 mov eax, dword ptr [eax]
// 004ffdf8  6a01                 push 1
// 004ffdfa  50                   push eax
// 004ffdfb  8d4c241c             lea ecx, [esp + 0x1c]
// 004ffdff  51                   push ecx
// 004ffe00  8bcf                 mov ecx, edi
// 004ffe02  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 004ffe07  ff153ce67700         call dword ptr [0x77e63c]
// 004ffe0d  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 004ffe13  8bf0                 mov esi, eax
// 004ffe15  3b32                 cmp esi, dword ptr [edx]
// 004ffe17  0f84e9000000         je 0x4fff06
// 004ffe1d  2bc3                 sub eax, ebx
// 004ffe1f  83e801               sub eax, 1
// 004ffe22  50                   push eax
// 004ffe23  83c301               add ebx, 1
// 004ffe26  53                   push ebx
// 004ffe27  8d4c2448             lea ecx, [esp + 0x48]
// 004ffe2b  51                   push ecx
// 004ffe2c  8bcf                 mov ecx, edi
// 004ffe2e  ff15a8e67700         call dword ptr [0x77e6a8]
// 004ffe34  8b4714               mov eax, dword ptr [edi + 0x14]
// 004ffe37  2bc6                 sub eax, esi
// 004ffe39  50                   push eax
// 004ffe3a  83c601               add esi, 1
// 004ffe3d  56                   push esi
// 004ffe3e  8d54242c             lea edx, [esp + 0x2c]
// 004ffe42  52                   push edx
// 004ffe43  8bcf                 mov ecx, edi
// 004ffe45  c744247400000000     mov dword ptr [esp + 0x74], 0
// 004ffe4d  ff15a8e67700         call dword ptr [0x77e6a8]
// 004ffe53  8b442444             mov eax, dword ptr [esp + 0x44]
// 004ffe57  be10000000           mov esi, 0x10
// 004ffe5c  39742458             cmp dword ptr [esp + 0x58], esi
// 004ffe60  7304                 jae 0x4ffe66
// 004ffe62  8d442444             lea eax, [esp + 0x44]
// 004ffe66  8d4c2418             lea ecx, [esp + 0x18]
// 004ffe6a  51                   push ecx
// 004ffe6b  683f000f00           push 0xf003f
// 004ffe70  6a00                 push 0
// 004ffe72  50                   push eax
// 004ffe73  55                   push ebp
// 004ffe74  ff1524d07700         call dword ptr [0x77d024]
// 004ffe7a  85c0                 test eax, eax
// 004ffe7c  7567                 jne 0x4ffee5
// 004ffe7e  3974243c             cmp dword ptr [esp + 0x3c], esi
// 004ffe82  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ffe86  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 004ffe8e  7304                 jae 0x4ffe94
// 004ffe90  8d442428             lea eax, [esp + 0x28]
// 004ffe94  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ffe98  8d54241c             lea edx, [esp + 0x1c]
// 004ffe9c  52                   push edx
// 004ffe9d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ffea1  51                   push ecx
// 004ffea2  6a00                 push 0
// 004ffea4  6a00                 push 0
// 004ffea6  50                   push eax
// 004ffea7  52                   push edx
// 004ffea8  ff1514d07700         call dword ptr [0x77d014]
// 004ffeae  8bf0                 mov esi, eax
// 004ffeb0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ffeb4  50                   push eax
// 004ffeb5  ff152cd07700         call dword ptr [0x77d02c]
// 004ffebb  85f6                 test esi, esi
// 004ffebd  8d4c2424             lea ecx, [esp + 0x24]
// 004ffec1  0f94c3               sete bl
// 004ffec4  c644246800           mov byte ptr [esp + 0x68], 0
// 004ffec9  ff158ce77700         call dword ptr [0x77e78c]
// 004ffecf  8d4c2440             lea ecx, [esp + 0x40]
// 004ffed3  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 004ffedb  ff158ce77700         call dword ptr [0x77e78c]
// 004ffee1  8ac3                 mov al, bl
// 004ffee3  eb23                 jmp 0x4fff08
// 004ffee5  8d4c2424             lea ecx, [esp + 0x24]
// 004ffee9  c644246800           mov byte ptr [esp + 0x68], 0
// 004ffeee  ff158ce77700         call dword ptr [0x77e78c]
// 004ffef4  8d4c2440             lea ecx, [esp + 0x40]
// 004ffef8  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 004fff00  ff158ce77700         call dword ptr [0x77e78c]
// 004fff06  32c0                 xor al, al
// 004fff08  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004fff0c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fff13  59                   pop ecx
// 004fff14  5f                   pop edi
// 004fff15  5e                   pop esi
// 004fff16  5d                   pop ebp
// 004fff17  5b                   pop ebx
// 004fff18  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004fff1c  33cc                 xor ecx, esp
// 004fff1e  e883ef1100           call 0x61eea6
// 004fff23  83c458               add esp, 0x58
// 004fff26  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?readInt32@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
