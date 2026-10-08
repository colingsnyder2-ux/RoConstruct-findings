// roc 2007-03 005bd200  unit: seg_005b0000  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd200
//
// 005bd200  83ec18               sub esp, 0x18
// 005bd203  53                   push ebx
// 005bd204  55                   push ebp
// 005bd205  56                   push esi
// 005bd206  8b742428             mov esi, dword ptr [esp + 0x28]
// 005bd20a  57                   push edi
// 005bd20b  56                   push esi
// 005bd20c  e83fb8ffff           call 0x5b8a50
// 005bd211  83c404               add esp, 4
// 005bd214  89442410             mov dword ptr [esp + 0x10], eax
// 005bd218  83f804               cmp eax, 4
// 005bd21b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 005bd223  8d442410             lea eax, [esp + 0x10]
// 005bd227  7c04                 jl 0x5bd22d
// 005bd229  8d442414             lea eax, [esp + 0x14]
// 005bd22d  8b28                 mov ebp, dword ptr [eax]
// 005bd22f  85ed                 test ebp, ebp
// 005bd231  0f85c9000000         jne 0x5bd300
// 005bd237  6a04                 push 4
// 005bd239  56                   push esi
// 005bd23a  e841c8ffff           call 0x5b9a80
// 005bd23f  83c408               add esp, 8
// 005bd242  85c0                 test eax, eax
// 005bd244  7406                 je 0x5bd24c
// 005bd246  c700c2000000         mov dword ptr [eax], 0xc2
// 005bd24c  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd251  50                   push eax
// 005bd252  68f0d8ffff           push 0xffffd8f0
// 005bd257  56                   push esi
// 005bd258  e873c0ffff           call 0x5b92d0
// 005bd25d  6afe                 push -2
// 005bd25f  56                   push esi
// 005bd260  e8cbc3ffff           call 0x5b9630
// 005bd265  83c414               add esp, 0x14
// 005bd268  d9ee                 fldz 
// 005bd26a  33ff                 xor edi, edi
// 005bd26c  85ed                 test ebp, ebp
// 005bd26e  d9542418             fst dword ptr [esp + 0x18]
// 005bd272  d954241c             fst dword ptr [esp + 0x1c]
// 005bd276  d95c2420             fstp dword ptr [esp + 0x20]
// 005bd27a  d9e8                 fld1 
// 005bd27c  d95c2424             fstp dword ptr [esp + 0x24]
// 005bd280  7e17                 jle 0x5bd299
// 005bd282  8d5f01               lea ebx, [edi + 1]
// 005bd285  53                   push ebx
// 005bd286  56                   push esi
// 005bd287  e814bbffff           call 0x5b8da0
// 005bd28c  d95cbc20             fstp dword ptr [esp + edi*4 + 0x20]
// 005bd290  8bfb                 mov edi, ebx
// 005bd292  83c408               add esp, 8
// 005bd295  3bfd                 cmp edi, ebp
// 005bd297  7ce9                 jl 0x5bd282
// 005bd299  d9442418             fld dword ptr [esp + 0x18]
// 005bd29d  83ec10               sub esp, 0x10
// 005bd2a0  8bc4                 mov eax, esp
// 005bd2a2  d918                 fstp dword ptr [eax]
// 005bd2a4  8d4c2424             lea ecx, [esp + 0x24]
// 005bd2a8  d944242c             fld dword ptr [esp + 0x2c]
// 005bd2ac  51                   push ecx
// 005bd2ad  d95804               fstp dword ptr [eax + 4]
// 005bd2b0  d9442434             fld dword ptr [esp + 0x34]
// 005bd2b4  d95808               fstp dword ptr [eax + 8]
// 005bd2b7  d9442438             fld dword ptr [esp + 0x38]
// 005bd2bb  d9580c               fstp dword ptr [eax + 0xc]
// 005bd2be  e81d5dfcff           call 0x582fe0
// 005bd2c3  8b38                 mov edi, dword ptr [eax]
// 005bd2c5  6a04                 push 4
// 005bd2c7  56                   push esi
// 005bd2c8  e8b3c7ffff           call 0x5b9a80
// 005bd2cd  83c41c               add esp, 0x1c
// 005bd2d0  85c0                 test eax, eax
// 005bd2d2  7402                 je 0x5bd2d6
// 005bd2d4  8938                 mov dword ptr [eax], edi
// 005bd2d6  8b154c828a00         mov edx, dword ptr [0x8a824c]
// 005bd2dc  52                   push edx
// 005bd2dd  68f0d8ffff           push 0xffffd8f0
// 005bd2e2  56                   push esi
// 005bd2e3  e8e8bfffff           call 0x5b92d0
// 005bd2e8  6afe                 push -2
// 005bd2ea  56                   push esi
// 005bd2eb  e840c3ffff           call 0x5b9630
// 005bd2f0  83c414               add esp, 0x14
// 005bd2f3  b801000000           mov eax, 1
// 005bd2f8  5f                   pop edi
// 005bd2f9  5e                   pop esi
// 005bd2fa  5d                   pop ebp
// 005bd2fb  5b                   pop ebx
// 005bd2fc  83c418               add esp, 0x18
// 005bd2ff  c3                   ret 
// 005bd300  83fd01               cmp ebp, 1
// 005bd303  0f855fffffff         jne 0x5bd268
// 005bd309  55                   push ebp
// 005bd30a  56                   push esi
// 005bd30b  e8a0b9ffff           call 0x5b8cb0
// 005bd310  83c408               add esp, 8
// 005bd313  85c0                 test eax, eax
// 005bd315  55                   push ebp
// 005bd316  56                   push esi
// 005bd317  7428                 je 0x5bd341
// 005bd319  e8c2baffff           call 0x5b8de0
// 005bd31e  83c408               add esp, 8
// 005bd321  50                   push eax
// 005bd322  8d4c2418             lea ecx, [esp + 0x18]
// 005bd326  e8d55dfcff           call 0x583100
// 005bd32b  8b08                 mov ecx, dword ptr [eax]
// 005bd32d  51                   push ecx
// 005bd32e  56                   push esi
// 005bd32f  e83c99f7ff           call 0x536c70
// 005bd334  83c408               add esp, 8
// 005bd337  8bc5                 mov eax, ebp
// 005bd339  5f                   pop edi
// 005bd33a  5e                   pop esi
// 005bd33b  5d                   pop ebp
// 005bd33c  5b                   pop ebx
// 005bd33d  83c418               add esp, 0x18
// 005bd340  c3                   ret 
// 005bd341  e8aab9ffff           call 0x5b8cf0
// 005bd346  83c408               add esp, 8
// 005bd349  85c0                 test eax, eax
// 005bd34b  742e                 je 0x5bd37b
// 005bd34d  6a00                 push 0
// 005bd34f  6a01                 push 1
// 005bd351  56                   push esi
// 005bd352  e8f9baffff           call 0x5b8e50
// 005bd357  50                   push eax
// 005bd358  8d542424             lea edx, [esp + 0x24]
// 005bd35c  52                   push edx
// 005bd35d  e84e5afcff           call 0x582db0
// 005bd362  8b00                 mov eax, dword ptr [eax]
// 005bd364  50                   push eax
// 005bd365  56                   push esi
// 005bd366  e80599f7ff           call 0x536c70
// 005bd36b  83c41c               add esp, 0x1c
// 005bd36e  b801000000           mov eax, 1
// 005bd373  5f                   pop edi
// 005bd374  5e                   pop esi
// 005bd375  5d                   pop ebp
// 005bd376  5b                   pop ebx
// 005bd377  83c418               add esp, 0x18
// 005bd37a  c3                   ret 
// 005bd37b  8b0d44828a00         mov ecx, dword ptr [0x8a8244]
// 005bd381  51                   push ecx
// 005bd382  6a01                 push 1
// 005bd384  56                   push esi
// 005bd385  e826d1ffff           call 0x5ba4b0
// 005bd38a  d900                 fld dword ptr [eax]
// 005bd38c  8bcc                 mov ecx, esp
// 005bd38e  d919                 fstp dword ptr [ecx]
// 005bd390  8d542420             lea edx, [esp + 0x20]
// 005bd394  d94004               fld dword ptr [eax + 4]
// 005bd397  52                   push edx
// 005bd398  d95904               fstp dword ptr [ecx + 4]
// 005bd39b  d94008               fld dword ptr [eax + 8]
// 005bd39e  d95908               fstp dword ptr [ecx + 8]
// 005bd3a1  e8ba5ffcff           call 0x583360
// 005bd3a6  8b00                 mov eax, dword ptr [eax]
// 005bd3a8  50                   push eax
// 005bd3a9  56                   push esi
// 005bd3aa  e8c198f7ff           call 0x536c70
// 005bd3af  83c418               add esp, 0x18
// 005bd3b2  5f                   pop edi
// 005bd3b3  5e                   pop esi
// 005bd3b4  5d                   pop ebp
// 005bd3b5  b801000000           mov eax, 1
// 005bd3ba  5b                   pop ebx
// 005bd3bb  83c418               add esp, 0x18
// 005bd3be  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
