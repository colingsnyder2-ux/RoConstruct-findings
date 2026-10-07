// roc 2007-08 005c3510  unit: RBX::Lua::LuaArguments  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3510
//
// 005c3510  53                   push ebx
// 005c3511  56                   push esi
// 005c3512  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c3516  57                   push edi
// 005c3517  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c351b  57                   push edi
// 005c351c  56                   push esi
// 005c351d  e86ea5ffff           call 0x5bda90
// 005c3522  8bd8                 mov ebx, eax
// 005c3524  83c408               add esp, 8
// 005c3527  85db                 test ebx, ebx
// 005c3529  746d                 je 0x5c3598
// 005c352b  57                   push edi
// 005c352c  56                   push esi
// 005c352d  e8eea9ffff           call 0x5bdf20
// 005c3532  83c408               add esp, 8
// 005c3535  85c0                 test eax, eax
// 005c3537  7454                 je 0x5c358d
// 005c3539  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c353e  50                   push eax
// 005c353f  68f0d8ffff           push 0xffffd8f0
// 005c3544  56                   push esi
// 005c3545  e8b6a8ffff           call 0x5bde00
// 005c354a  6afe                 push -2
// 005c354c  6aff                 push -1
// 005c354e  56                   push esi
// 005c354f  e8fca2ffff           call 0x5bd850
// 005c3554  83c418               add esp, 0x18
// 005c3557  85c0                 test eax, eax
// 005c3559  743d                 je 0x5c3598
// 005c355b  6afd                 push -3
// 005c355d  56                   push esi
// 005c355e  e82da0ffff           call 0x5bd590
// 005c3563  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c3567  8bf3                 mov esi, ebx
// 005c3569  8bf8                 mov edi, eax
// 005c356b  b909000000           mov ecx, 9
// 005c3570  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005c3572  d94324               fld dword ptr [ebx + 0x24]
// 005c3575  d95824               fstp dword ptr [eax + 0x24]
// 005c3578  d94328               fld dword ptr [ebx + 0x28]
// 005c357b  d95828               fstp dword ptr [eax + 0x28]
// 005c357e  d9432c               fld dword ptr [ebx + 0x2c]
// 005c3581  d9582c               fstp dword ptr [eax + 0x2c]
// 005c3584  83c408               add esp, 8
// 005c3587  5f                   pop edi
// 005c3588  5e                   pop esi
// 005c3589  b001                 mov al, 1
// 005c358b  5b                   pop ebx
// 005c358c  c3                   ret 
// 005c358d  6afe                 push -2
// 005c358f  56                   push esi
// 005c3590  e8fb9fffff           call 0x5bd590
// 005c3595  83c408               add esp, 8
// 005c3598  5f                   pop edi
// 005c3599  5e                   pop esi
// 005c359a  32c0                 xor al, al
// 005c359c  5b                   pop ebx
// 005c359d  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
