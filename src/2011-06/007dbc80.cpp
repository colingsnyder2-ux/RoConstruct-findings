// roc 2011-06 007dbc80  unit: seg_007d0000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dbc80
//
// 007dbc80  83ec08               sub esp, 8
// 007dbc83  53                   push ebx
// 007dbc84  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 007dbc87  55                   push ebp
// 007dbc88  56                   push esi
// 007dbc89  8b33                 mov esi, dword ptr [ebx]
// 007dbc8b  33ed                 xor ebp, ebp
// 007dbc8d  c6464a00             mov byte ptr [esi + 0x4a], 0
// 007dbc91  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 007dbc95  895c2410             mov dword ptr [esp + 0x10], ebx
// 007dbc99  8974240c             mov dword ptr [esp + 0xc], esi
// 007dbc9d  0f84e3000000         je 0x7dbd86
// 007dbca3  eb0b                 jmp 0x7dbcb0
// 007dbca5  8da42400000000       lea esp, [esp]
// 007dbcac  8d642400             lea esp, [esp]
// 007dbcb0  8b4710               mov eax, dword ptr [edi + 0x10]
// 007dbcb3  2d17010000           sub eax, 0x117
// 007dbcb8  0f84a1000000         je 0x7dbd5f
// 007dbcbe  83e806               sub eax, 6
// 007dbcc1  7413                 je 0x7dbcd6
// 007dbcc3  6840e2ab00           push 0xabe240
// 007dbcc8  57                   push edi
// 007dbcc9  e8a22d0000           call 0x7dea70
// 007dbcce  83c408               add esp, 8
// 007dbcd1  e996000000           jmp 0x7dbd6c
// 007dbcd6  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 007dbcd9  57                   push edi
// 007dbcda  e8413f0000           call 0x7dfc20
// 007dbcdf  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dbce2  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007dbce6  8d4c2801             lea ecx, [eax + ebp + 1]
// 007dbcea  83c404               add esp, 4
// 007dbced  81f9c8000000         cmp ecx, 0xc8
// 007dbcf3  7e47                 jle 0x7dbd3c
// 007dbcf5  8b16                 mov edx, dword ptr [esi]
// 007dbcf7  8b423c               mov eax, dword ptr [edx + 0x3c]
// 007dbcfa  68d0e1ab00           push 0xabe1d0
// 007dbcff  68c8000000           push 0xc8
// 007dbd04  85c0                 test eax, eax
// 007dbd06  7513                 jne 0x7dbd1b
// 007dbd08  8b4610               mov eax, dword ptr [esi + 0x10]
// 007dbd0b  6864e1ab00           push 0xabe164
// 007dbd10  50                   push eax
// 007dbd11  e80a11faff           call 0x77ce20
// 007dbd16  83c410               add esp, 0x10
// 007dbd19  eb12                 jmp 0x7dbd2d
// 007dbd1b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007dbd1e  50                   push eax
// 007dbd1f  683ce1ab00           push 0xabe13c
// 007dbd24  51                   push ecx
// 007dbd25  e8f610faff           call 0x77ce20
// 007dbd2a  83c414               add esp, 0x14
// 007dbd2d  8b560c               mov edx, dword ptr [esi + 0xc]
// 007dbd30  6a00                 push 0
// 007dbd32  50                   push eax
// 007dbd33  52                   push edx
// 007dbd34  e8972c0000           call 0x7de9d0
// 007dbd39  83c40c               add esp, 0xc
// 007dbd3c  53                   push ebx
// 007dbd3d  57                   push edi
// 007dbd3e  e81df3ffff           call 0x7db060
// 007dbd43  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dbd47  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007dbd4b  03cd                 add ecx, ebp
// 007dbd4d  83c408               add esp, 8
// 007dbd50  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 007dbd58  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007dbd5c  45                   inc ebp
// 007dbd5d  eb0d                 jmp 0x7dbd6c
// 007dbd5f  57                   push edi
// 007dbd60  e8bb3e0000           call 0x7dfc20
// 007dbd65  83c404               add esp, 4
// 007dbd68  804e4a02             or byte ptr [esi + 0x4a], 2
// 007dbd6c  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 007dbd70  7514                 jne 0x7dbd86
// 007dbd72  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 007dbd76  750e                 jne 0x7dbd86
// 007dbd78  57                   push edi
// 007dbd79  e8a23e0000           call 0x7dfc20
// 007dbd7e  83c404               add esp, 4
// 007dbd81  e92affffff           jmp 0x7dbcb0
// 007dbd86  8bd5                 mov edx, ebp
// 007dbd88  8bc7                 mov eax, edi
// 007dbd8a  e871f3ffff           call 0x7db100
// 007dbd8f  8a564a               mov dl, byte ptr [esi + 0x4a]
// 007dbd92  8a4332               mov al, byte ptr [ebx + 0x32]
// 007dbd95  80e201               and dl, 1
// 007dbd98  2ac2                 sub al, dl
// 007dbd9a  884649               mov byte ptr [esi + 0x49], al
// 007dbd9d  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 007dbda1  51                   push ecx
// 007dbda2  53                   push ebx
// 007dbda3  e838650100           call 0x7f22e0
// 007dbda8  83c408               add esp, 8
// 007dbdab  5e                   pop esi
// 007dbdac  5d                   pop ebp
// 007dbdad  5b                   pop ebx
// 007dbdae  83c408               add esp, 8
// 007dbdb1  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
