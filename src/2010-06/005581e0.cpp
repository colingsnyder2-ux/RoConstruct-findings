// roc 2010-06 005581e0  unit: seg_00550000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005581e0
//
// 005581e0  6aff                 push -1
// 005581e2  6822e19900           push 0x99e122
// 005581e7  64a100000000         mov eax, dword ptr fs:[0]
// 005581ed  50                   push eax
// 005581ee  64892500000000       mov dword ptr fs:[0], esp
// 005581f5  83ec38               sub esp, 0x38
// 005581f8  8b442450             mov eax, dword ptr [esp + 0x50]
// 005581fc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00558200  56                   push esi
// 00558201  50                   push eax
// 00558202  51                   push ecx
// 00558203  8d542428             lea edx, [esp + 0x28]
// 00558207  52                   push edx
// 00558208  e883f1ffff           call 0x557390
// 0055820d  83c40c               add esp, 0xc
// 00558210  8d4c2404             lea ecx, [esp + 4]
// 00558214  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0055821c  ff1504a49e00         call dword ptr [0x9ea404]
// 00558222  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00558226  8d442404             lea eax, [esp + 4]
// 0055822a  50                   push eax
// 0055822b  8d4c2424             lea ecx, [esp + 0x24]
// 0055822f  51                   push ecx
// 00558230  8bce                 mov ecx, esi
// 00558232  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00558237  e834f7ffff           call 0x557970
// 0055823c  8d542404             lea edx, [esp + 4]
// 00558240  52                   push edx
// 00558241  8bce                 mov ecx, esi
// 00558243  e848fcffff           call 0x557e90
// 00558248  8d4c2404             lea ecx, [esp + 4]
// 0055824c  c644244400           mov byte ptr [esp + 0x44], 0
// 00558251  ff1500a49e00         call dword ptr [0x9ea400]
// 00558257  8d4c2420             lea ecx, [esp + 0x20]
// 0055825b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00558263  ff1500a49e00         call dword ptr [0x9ea400]
// 00558269  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0055826d  5e                   pop esi
// 0055826e  64890d00000000       mov dword ptr fs:[0], ecx
// 00558275  83c444               add esp, 0x44
// 00558278  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
