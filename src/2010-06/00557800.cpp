// roc 2010-06 00557800  unit: seg_00550000  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557800
//
// 00557800  6aff                 push -1
// 00557802  683a139900           push 0x99133a
// 00557807  64a100000000         mov eax, dword ptr fs:[0]
// 0055780d  50                   push eax
// 0055780e  64892500000000       mov dword ptr fs:[0], esp
// 00557815  83ec08               sub esp, 8
// 00557818  56                   push esi
// 00557819  57                   push edi
// 0055781a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055781e  33f6                 xor esi, esi
// 00557820  68fe08a000           push 0xa008fe
// 00557825  8bcf                 mov ecx, edi
// 00557827  8974241c             mov dword ptr [esp + 0x1c], esi
// 0055782b  8974240c             mov dword ptr [esp + 0xc], esi
// 0055782f  ff1510a49e00         call dword ptr [0x9ea410]
// 00557835  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00557838  89742418             mov dword ptr [esp + 0x18], esi
// 0055783c  c744240801000000     mov dword ptr [esp + 8], 1
// 00557844  3bc6                 cmp eax, esi
// 00557846  0f8693000000         jbe 0x5578df
// 0055784c  55                   push ebp
// 0055784d  8d6b04               lea ebp, [ebx + 4]
// 00557850  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00557854  7205                 jb 0x55785b
// 00557856  8b4500               mov eax, dword ptr [ebp]
// 00557859  eb02                 jmp 0x55785d
// 0055785b  8bc5                 mov eax, ebp
// 0055785d  8a0430               mov al, byte ptr [eax + esi]
// 00557860  88442410             mov byte ptr [esp + 0x10], al
// 00557864  0fbec0               movsx eax, al
// 00557867  83f85c               cmp eax, 0x5c
// 0055786a  7759                 ja 0x5578c5
// 0055786c  0fb6800c795500       movzx eax, byte ptr [eax + 0x55790c]
// 00557873  ff2485f4785500       jmp dword ptr [eax*4 + 0x5578f4]
// 0055787a  68b008a200           push 0xa208b0
// 0055787f  8bcf                 mov ecx, edi
// 00557881  ff1520a49e00         call dword ptr [0x9ea420]
// 00557887  eb49                 jmp 0x5578d2
// 00557889  68ac08a200           push 0xa208ac
// 0055788e  8bcf                 mov ecx, edi
// 00557890  ff1520a49e00         call dword ptr [0x9ea420]
// 00557896  eb3a                 jmp 0x5578d2
// 00557898  68a808a200           push 0xa208a8
// 0055789d  8bcf                 mov ecx, edi
// 0055789f  ff1520a49e00         call dword ptr [0x9ea420]
// 005578a5  eb2b                 jmp 0x5578d2
// 005578a7  68a408a200           push 0xa208a4
// 005578ac  8bcf                 mov ecx, edi
// 005578ae  ff1520a49e00         call dword ptr [0x9ea420]
// 005578b4  eb1c                 jmp 0x5578d2
// 005578b6  68a008a200           push 0xa208a0
// 005578bb  8bcf                 mov ecx, edi
// 005578bd  ff1520a49e00         call dword ptr [0x9ea420]
// 005578c3  eb0d                 jmp 0x5578d2
// 005578c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005578c9  51                   push ecx
// 005578ca  8bcf                 mov ecx, edi
// 005578cc  ff15eca69e00         call dword ptr [0x9ea6ec]
// 005578d2  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005578d5  46                   inc esi
// 005578d6  3bc6                 cmp eax, esi
// 005578d8  0f8772ffffff         ja 0x557850
// 005578de  5d                   pop ebp
// 005578df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005578e3  8bc7                 mov eax, edi
// 005578e5  5f                   pop edi
// 005578e6  5e                   pop esi
// 005578e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005578ee  83c414               add esp, 0x14
// 005578f1  c3                   ret 
// 005578f2  8bff                 mov edi, edi
// 005578f4  7a78                 jp 0x55796e
// 005578f6  55                   push ebp
// 005578f7  00a778550098         add byte ptr [edi - 0x67ffaa88], ah
// 005578fd  7855                 js 0x557954
// 005578ff  0089785500b6         add byte ptr [ecx - 0x49ffaa88], cl
// 00557905  7855                 js 0x55795c
// 00557907  00c5                 add ch, al
// 00557909  7855                 js 0x557960
// 0055790b  0000                 add byte ptr [eax], al
// 0055790d  0505050505           add eax, 0x5050505
// 00557912  0505050102           add eax, 0x2010505
// 00557917  0505030505           add eax, 0x5050305
// 0055791c  0505050505           add eax, 0x5050505
// 00557921  0505050505           add eax, 0x5050505
// 00557926  0505050505           add eax, 0x5050505
// 0055792b  0505050505           add eax, 0x5050505
// 00557930  0505050505           add eax, 0x5050505
// 00557935  0505050505           add eax, 0x5050505
// 0055793a  0505050505           add eax, 0x5050505
// 0055793f  0505050505           add eax, 0x5050505
// 00557944  0505050505           add eax, 0x5050505
// 00557949  0505050505           add eax, 0x5050505
// 0055794e  0505050505           add eax, 0x5050505
// 00557953  0505050505           add eax, 0x5050505
// 00557958  0505050505           add eax, 0x5050505
// 0055795d  0505050505           add eax, 0x5050505
// 00557962  0505050505           add eax, 0x5050505
// library g3d-6.09-rbx2008/G3Dcpp\TextOutput.cpp (function ?escape@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextOutput.cpp
