// roc 2008-06 0061d430  unit: RBX::Lua::LuaArguments  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d430
//
// 0061d430  83ec18               sub esp, 0x18
// 0061d433  53                   push ebx
// 0061d434  55                   push ebp
// 0061d435  56                   push esi
// 0061d436  8b742428             mov esi, dword ptr [esp + 0x28]
// 0061d43a  57                   push edi
// 0061d43b  56                   push esi
// 0061d43c  e8cf47ffff           call 0x611c10
// 0061d441  83c404               add esp, 4
// 0061d444  89442410             mov dword ptr [esp + 0x10], eax
// 0061d448  83f804               cmp eax, 4
// 0061d44b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 0061d453  8d442410             lea eax, [esp + 0x10]
// 0061d457  7c04                 jl 0x61d45d
// 0061d459  8d442414             lea eax, [esp + 0x14]
// 0061d45d  8b28                 mov ebp, dword ptr [eax]
// 0061d45f  85ed                 test ebp, ebp
// 0061d461  0f85c9000000         jne 0x61d530
// 0061d467  6a04                 push 4
// 0061d469  56                   push esi
// 0061d46a  e8d157ffff           call 0x612c40
// 0061d46f  83c408               add esp, 8
// 0061d472  85c0                 test eax, eax
// 0061d474  7406                 je 0x61d47c
// 0061d476  c700c2000000         mov dword ptr [eax], 0xc2
// 0061d47c  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d481  50                   push eax
// 0061d482  68f0d8ffff           push 0xffffd8f0
// 0061d487  56                   push esi
// 0061d488  e80350ffff           call 0x612490
// 0061d48d  6afe                 push -2
// 0061d48f  56                   push esi
// 0061d490  e85b53ffff           call 0x6127f0
// 0061d495  83c414               add esp, 0x14
// 0061d498  d9ee                 fldz 
// 0061d49a  33ff                 xor edi, edi
// 0061d49c  d9542418             fst dword ptr [esp + 0x18]
// 0061d4a0  d954241c             fst dword ptr [esp + 0x1c]
// 0061d4a4  d95c2420             fstp dword ptr [esp + 0x20]
// 0061d4a8  d9e8                 fld1 
// 0061d4aa  d95c2424             fstp dword ptr [esp + 0x24]
// 0061d4ae  85ed                 test ebp, ebp
// 0061d4b0  7e17                 jle 0x61d4c9
// 0061d4b2  8d5f01               lea ebx, [edi + 1]
// 0061d4b5  53                   push ebx
// 0061d4b6  56                   push esi
// 0061d4b7  e874f3ffff           call 0x61c830
// 0061d4bc  d95cbc20             fstp dword ptr [esp + edi*4 + 0x20]
// 0061d4c0  8bfb                 mov edi, ebx
// 0061d4c2  83c408               add esp, 8
// 0061d4c5  3bfd                 cmp edi, ebp
// 0061d4c7  7ce9                 jl 0x61d4b2
// 0061d4c9  d9442418             fld dword ptr [esp + 0x18]
// 0061d4cd  83ec10               sub esp, 0x10
// 0061d4d0  8bc4                 mov eax, esp
// 0061d4d2  d918                 fstp dword ptr [eax]
// 0061d4d4  8d4c2424             lea ecx, [esp + 0x24]
// 0061d4d8  d944242c             fld dword ptr [esp + 0x2c]
// 0061d4dc  51                   push ecx
// 0061d4dd  d95804               fstp dword ptr [eax + 4]
// 0061d4e0  d9442434             fld dword ptr [esp + 0x34]
// 0061d4e4  d95808               fstp dword ptr [eax + 8]
// 0061d4e7  d9442438             fld dword ptr [esp + 0x38]
// 0061d4eb  d9580c               fstp dword ptr [eax + 0xc]
// 0061d4ee  e83d8af9ff           call 0x5b5f30
// 0061d4f3  8b38                 mov edi, dword ptr [eax]
// 0061d4f5  6a04                 push 4
// 0061d4f7  56                   push esi
// 0061d4f8  e84357ffff           call 0x612c40
// 0061d4fd  83c41c               add esp, 0x1c
// 0061d500  85c0                 test eax, eax
// 0061d502  7402                 je 0x61d506
// 0061d504  8938                 mov dword ptr [eax], edi
// 0061d506  8b15c4b19500         mov edx, dword ptr [0x95b1c4]
// 0061d50c  52                   push edx
// 0061d50d  68f0d8ffff           push 0xffffd8f0
// 0061d512  56                   push esi
// 0061d513  e8784fffff           call 0x612490
// 0061d518  6afe                 push -2
// 0061d51a  56                   push esi
// 0061d51b  e8d052ffff           call 0x6127f0
// 0061d520  83c414               add esp, 0x14
// 0061d523  b801000000           mov eax, 1
// 0061d528  5f                   pop edi
// 0061d529  5e                   pop esi
// 0061d52a  5d                   pop ebp
// 0061d52b  5b                   pop ebx
// 0061d52c  83c418               add esp, 0x18
// 0061d52f  c3                   ret 
// 0061d530  83fd01               cmp ebp, 1
// 0061d533  0f855fffffff         jne 0x61d498
// 0061d539  55                   push ebp
// 0061d53a  56                   push esi
// 0061d53b  e83049ffff           call 0x611e70
// 0061d540  83c408               add esp, 8
// 0061d543  55                   push ebp
// 0061d544  56                   push esi
// 0061d545  85c0                 test eax, eax
// 0061d547  7428                 je 0x61d571
// 0061d549  e8524affff           call 0x611fa0
// 0061d54e  83c408               add esp, 8
// 0061d551  50                   push eax
// 0061d552  8d4c2418             lea ecx, [esp + 0x18]
// 0061d556  e8358bf9ff           call 0x5b6090
// 0061d55b  8b08                 mov ecx, dword ptr [eax]
// 0061d55d  51                   push ecx
// 0061d55e  56                   push esi
// 0061d55f  e82cb8f8ff           call 0x5a8d90
// 0061d564  83c408               add esp, 8
// 0061d567  8bc5                 mov eax, ebp
// 0061d569  5f                   pop edi
// 0061d56a  5e                   pop esi
// 0061d56b  5d                   pop ebp
// 0061d56c  5b                   pop ebx
// 0061d56d  83c418               add esp, 0x18
// 0061d570  c3                   ret 
// 0061d571  e83a49ffff           call 0x611eb0
// 0061d576  83c408               add esp, 8
// 0061d579  85c0                 test eax, eax
// 0061d57b  742e                 je 0x61d5ab
// 0061d57d  6a00                 push 0
// 0061d57f  6a01                 push 1
// 0061d581  56                   push esi
// 0061d582  e8894affff           call 0x612010
// 0061d587  50                   push eax
// 0061d588  8d542424             lea edx, [esp + 0x24]
// 0061d58c  52                   push edx
// 0061d58d  e81e87f9ff           call 0x5b5cb0
// 0061d592  8b00                 mov eax, dword ptr [eax]
// 0061d594  50                   push eax
// 0061d595  56                   push esi
// 0061d596  e8f5b7f8ff           call 0x5a8d90
// 0061d59b  83c41c               add esp, 0x1c
// 0061d59e  b801000000           mov eax, 1
// 0061d5a3  5f                   pop edi
// 0061d5a4  5e                   pop esi
// 0061d5a5  5d                   pop ebp
// 0061d5a6  5b                   pop ebx
// 0061d5a7  83c418               add esp, 0x18
// 0061d5aa  c3                   ret 
// 0061d5ab  8b0dbcb19500         mov ecx, dword ptr [0x95b1bc]
// 0061d5b1  51                   push ecx
// 0061d5b2  6a01                 push 1
// 0061d5b4  56                   push esi
// 0061d5b5  e8f63fffff           call 0x6115b0
// 0061d5ba  d900                 fld dword ptr [eax]
// 0061d5bc  8bcc                 mov ecx, esp
// 0061d5be  d919                 fstp dword ptr [ecx]
// 0061d5c0  8d542420             lea edx, [esp + 0x20]
// 0061d5c4  d94004               fld dword ptr [eax + 4]
// 0061d5c7  52                   push edx
// 0061d5c8  d95904               fstp dword ptr [ecx + 4]
// 0061d5cb  d94008               fld dword ptr [eax + 8]
// 0061d5ce  d95908               fstp dword ptr [ecx + 8]
// 0061d5d1  e80a8df9ff           call 0x5b62e0
// 0061d5d6  8b00                 mov eax, dword ptr [eax]
// 0061d5d8  50                   push eax
// 0061d5d9  56                   push esi
// 0061d5da  e8b1b7f8ff           call 0x5a8d90
// 0061d5df  83c418               add esp, 0x18
// 0061d5e2  5f                   pop edi
// 0061d5e3  5e                   pop esi
// 0061d5e4  5d                   pop ebp
// 0061d5e5  b801000000           mov eax, 1
// 0061d5ea  5b                   pop ebx
// 0061d5eb  83c418               add esp, 0x18
// 0061d5ee  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
