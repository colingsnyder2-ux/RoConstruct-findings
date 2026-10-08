// roc 2007-03 004fc140  unit: seg_004f0000  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc140
//
// 004fc140  8b442404             mov eax, dword ptr [esp + 4]
// 004fc144  53                   push ebx
// 004fc145  55                   push ebp
// 004fc146  56                   push esi
// 004fc147  8bf1                 mov esi, ecx
// 004fc149  8b5e04               mov ebx, dword ptr [esi + 4]
// 004fc14c  894604               mov dword ptr [esi + 4], eax
// 004fc14f  f60570ae8b0001       test byte ptr [0x8bae70], 1
// 004fc156  7514                 jne 0x4fc16c
// 004fc158  830d70ae8b0001       or dword ptr [0x8bae70], 1
// 004fc15f  bd0a000000           mov ebp, 0xa
// 004fc164  892d6cae8b00         mov dword ptr [0x8bae6c], ebp
// 004fc16a  eb06                 jmp 0x4fc172
// 004fc16c  8b2d6cae8b00         mov ebp, dword ptr [0x8bae6c]
// 004fc172  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc175  57                   push edi
// 004fc176  8b7e04               mov edi, dword ptr [esi + 4]
// 004fc179  3bf9                 cmp edi, ecx
// 004fc17b  7e70                 jle 0x4fc1ed
// 004fc17d  85c9                 test ecx, ecx
// 004fc17f  7509                 jne 0x4fc18a
// 004fc181  894608               mov dword ptr [esi + 8], eax
// 004fc184  53                   push ebx
// 004fc185  e987000000           jmp 0x4fc211
// 004fc18a  3bfd                 cmp edi, ebp
// 004fc18c  7d06                 jge 0x4fc194
// 004fc18e  896e08               mov dword ptr [esi + 8], ebp
// 004fc191  53                   push ebx
// 004fc192  eb7d                 jmp 0x4fc211
// 004fc194  d905104c7900         fld dword ptr [0x794c10]
// 004fc19a  8bc1                 mov eax, ecx
// 004fc19c  c1e004               shl eax, 4
// 004fc19f  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc1a3  3d801a0600           cmp eax, 0x61a80
// 004fc1a8  7608                 jbe 0x4fc1b2
// 004fc1aa  d9050c4c7900         fld dword ptr [0x794c0c]
// 004fc1b0  eb0d                 jmp 0x4fc1bf
// 004fc1b2  3d00fa0000           cmp eax, 0xfa00
// 004fc1b7  760a                 jbe 0x4fc1c3
// 004fc1b9  d905084c7900         fld dword ptr [0x794c08]
// 004fc1bf  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc1c3  8be9                 mov ebp, ecx
// 004fc1c5  896c2414             mov dword ptr [esp + 0x14], ebp
// 004fc1c9  db442414             fild dword ptr [esp + 0x14]
// 004fc1cd  d84c2418             fmul dword ptr [esp + 0x18]
// 004fc1d1  e82a301200           call 0x61f200
// 004fc1d6  2bc5                 sub eax, ebp
// 004fc1d8  03c7                 add eax, edi
// 004fc1da  894608               mov dword ptr [esi + 8], eax
// 004fc1dd  8b0d6cae8b00         mov ecx, dword ptr [0x8bae6c]
// 004fc1e3  3bc1                 cmp eax, ecx
// 004fc1e5  7d03                 jge 0x4fc1ea
// 004fc1e7  894e08               mov dword ptr [esi + 8], ecx
// 004fc1ea  53                   push ebx
// 004fc1eb  eb24                 jmp 0x4fc211
// 004fc1ed  b856555555           mov eax, 0x55555556
// 004fc1f2  f7e9                 imul ecx
// 004fc1f4  8bc2                 mov eax, edx
// 004fc1f6  c1e81f               shr eax, 0x1f
// 004fc1f9  03c2                 add eax, edx
// 004fc1fb  3bf8                 cmp edi, eax
// 004fc1fd  7f19                 jg 0x4fc218
// 004fc1ff  807c241800           cmp byte ptr [esp + 0x18], 0
// 004fc204  7412                 je 0x4fc218
// 004fc206  3bfd                 cmp edi, ebp
// 004fc208  7e0e                 jle 0x4fc218
// 004fc20a  3bfb                 cmp edi, ebx
// 004fc20c  7c02                 jl 0x4fc210
// 004fc20e  8bfb                 mov edi, ebx
// 004fc210  57                   push edi
// 004fc211  8bce                 mov ecx, esi
// 004fc213  e868f9ffff           call 0x4fbb80
// 004fc218  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004fc21b  8bcb                 mov ecx, ebx
// 004fc21d  5f                   pop edi
// 004fc21e  7d25                 jge 0x4fc245
// 004fc220  d9ee                 fldz 
// 004fc222  c1e304               shl ebx, 4
// 004fc225  8bd3                 mov edx, ebx
// 004fc227  8b06                 mov eax, dword ptr [esi]
// 004fc229  03c2                 add eax, edx
// 004fc22b  740b                 je 0x4fc238
// 004fc22d  d9500c               fst dword ptr [eax + 0xc]
// 004fc230  d95008               fst dword ptr [eax + 8]
// 004fc233  d95004               fst dword ptr [eax + 4]
// 004fc236  d910                 fst dword ptr [eax]
// 004fc238  83c101               add ecx, 1
// 004fc23b  83c210               add edx, 0x10
// 004fc23e  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004fc241  7ce4                 jl 0x4fc227
// 004fc243  ddd8                 fstp st(0)
// 004fc245  5e                   pop esi
// 004fc246  5d                   pop ebp
// 004fc247  5b                   pop ebx
// 004fc248  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VVector4@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
