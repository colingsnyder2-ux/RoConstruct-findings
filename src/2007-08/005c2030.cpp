// roc 2007-08 005c2030  unit: RBX::Lua::LuaArguments  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2030
//
// 005c2030  83ec18               sub esp, 0x18
// 005c2033  53                   push ebx
// 005c2034  55                   push ebp
// 005c2035  56                   push esi
// 005c2036  8b742428             mov esi, dword ptr [esp + 0x28]
// 005c203a  57                   push edi
// 005c203b  56                   push esi
// 005c203c  e83fb5ffff           call 0x5bd580
// 005c2041  83c404               add esp, 4
// 005c2044  89442410             mov dword ptr [esp + 0x10], eax
// 005c2048  83f804               cmp eax, 4
// 005c204b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 005c2053  8d442410             lea eax, [esp + 0x10]
// 005c2057  7c04                 jl 0x5c205d
// 005c2059  8d442414             lea eax, [esp + 0x14]
// 005c205d  8b28                 mov ebp, dword ptr [eax]
// 005c205f  85ed                 test ebp, ebp
// 005c2061  0f85c9000000         jne 0x5c2130
// 005c2067  6a04                 push 4
// 005c2069  56                   push esi
// 005c206a  e841c5ffff           call 0x5be5b0
// 005c206f  83c408               add esp, 8
// 005c2072  85c0                 test eax, eax
// 005c2074  7406                 je 0x5c207c
// 005c2076  c700c2000000         mov dword ptr [eax], 0xc2
// 005c207c  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c2081  50                   push eax
// 005c2082  68f0d8ffff           push 0xffffd8f0
// 005c2087  56                   push esi
// 005c2088  e873bdffff           call 0x5bde00
// 005c208d  6afe                 push -2
// 005c208f  56                   push esi
// 005c2090  e8cbc0ffff           call 0x5be160
// 005c2095  83c414               add esp, 0x14
// 005c2098  d9ee                 fldz 
// 005c209a  33ff                 xor edi, edi
// 005c209c  85ed                 test ebp, ebp
// 005c209e  d9542418             fst dword ptr [esp + 0x18]
// 005c20a2  d954241c             fst dword ptr [esp + 0x1c]
// 005c20a6  d95c2420             fstp dword ptr [esp + 0x20]
// 005c20aa  d9e8                 fld1 
// 005c20ac  d95c2424             fstp dword ptr [esp + 0x24]
// 005c20b0  7e17                 jle 0x5c20c9
// 005c20b2  8d5f01               lea ebx, [edi + 1]
// 005c20b5  53                   push ebx
// 005c20b6  56                   push esi
// 005c20b7  e814b8ffff           call 0x5bd8d0
// 005c20bc  d95cbc20             fstp dword ptr [esp + edi*4 + 0x20]
// 005c20c0  8bfb                 mov edi, ebx
// 005c20c2  83c408               add esp, 8
// 005c20c5  3bfd                 cmp edi, ebp
// 005c20c7  7ce9                 jl 0x5c20b2
// 005c20c9  d9442418             fld dword ptr [esp + 0x18]
// 005c20cd  83ec10               sub esp, 0x10
// 005c20d0  8bc4                 mov eax, esp
// 005c20d2  d918                 fstp dword ptr [eax]
// 005c20d4  8d4c2424             lea ecx, [esp + 0x24]
// 005c20d8  d944242c             fld dword ptr [esp + 0x2c]
// 005c20dc  51                   push ecx
// 005c20dd  d95804               fstp dword ptr [eax + 4]
// 005c20e0  d9442434             fld dword ptr [esp + 0x34]
// 005c20e4  d95808               fstp dword ptr [eax + 8]
// 005c20e7  d9442438             fld dword ptr [esp + 0x38]
// 005c20eb  d9580c               fstp dword ptr [eax + 0xc]
// 005c20ee  e87d47fcff           call 0x586870
// 005c20f3  8b38                 mov edi, dword ptr [eax]
// 005c20f5  6a04                 push 4
// 005c20f7  56                   push esi
// 005c20f8  e8b3c4ffff           call 0x5be5b0
// 005c20fd  83c41c               add esp, 0x1c
// 005c2100  85c0                 test eax, eax
// 005c2102  7402                 je 0x5c2106
// 005c2104  8938                 mov dword ptr [eax], edi
// 005c2106  8b157cbe8a00         mov edx, dword ptr [0x8abe7c]
// 005c210c  52                   push edx
// 005c210d  68f0d8ffff           push 0xffffd8f0
// 005c2112  56                   push esi
// 005c2113  e8e8bcffff           call 0x5bde00
// 005c2118  6afe                 push -2
// 005c211a  56                   push esi
// 005c211b  e840c0ffff           call 0x5be160
// 005c2120  83c414               add esp, 0x14
// 005c2123  b801000000           mov eax, 1
// 005c2128  5f                   pop edi
// 005c2129  5e                   pop esi
// 005c212a  5d                   pop ebp
// 005c212b  5b                   pop ebx
// 005c212c  83c418               add esp, 0x18
// 005c212f  c3                   ret 
// 005c2130  83fd01               cmp ebp, 1
// 005c2133  0f855fffffff         jne 0x5c2098
// 005c2139  55                   push ebp
// 005c213a  56                   push esi
// 005c213b  e8a0b6ffff           call 0x5bd7e0
// 005c2140  83c408               add esp, 8
// 005c2143  85c0                 test eax, eax
// 005c2145  55                   push ebp
// 005c2146  56                   push esi
// 005c2147  7428                 je 0x5c2171
// 005c2149  e8c2b7ffff           call 0x5bd910
// 005c214e  83c408               add esp, 8
// 005c2151  50                   push eax
// 005c2152  8d4c2418             lea ecx, [esp + 0x18]
// 005c2156  e83548fcff           call 0x586990
// 005c215b  8b08                 mov ecx, dword ptr [eax]
// 005c215d  51                   push ecx
// 005c215e  56                   push esi
// 005c215f  e85c27f7ff           call 0x5348c0
// 005c2164  83c408               add esp, 8
// 005c2167  8bc5                 mov eax, ebp
// 005c2169  5f                   pop edi
// 005c216a  5e                   pop esi
// 005c216b  5d                   pop ebp
// 005c216c  5b                   pop ebx
// 005c216d  83c418               add esp, 0x18
// 005c2170  c3                   ret 
// 005c2171  e8aab6ffff           call 0x5bd820
// 005c2176  83c408               add esp, 8
// 005c2179  85c0                 test eax, eax
// 005c217b  742e                 je 0x5c21ab
// 005c217d  6a00                 push 0
// 005c217f  6a01                 push 1
// 005c2181  56                   push esi
// 005c2182  e8f9b7ffff           call 0x5bd980
// 005c2187  50                   push eax
// 005c2188  8d542424             lea edx, [esp + 0x24]
// 005c218c  52                   push edx
// 005c218d  e8ae44fcff           call 0x586640
// 005c2192  8b00                 mov eax, dword ptr [eax]
// 005c2194  50                   push eax
// 005c2195  56                   push esi
// 005c2196  e82527f7ff           call 0x5348c0
// 005c219b  83c41c               add esp, 0x1c
// 005c219e  b801000000           mov eax, 1
// 005c21a3  5f                   pop edi
// 005c21a4  5e                   pop esi
// 005c21a5  5d                   pop ebp
// 005c21a6  5b                   pop ebx
// 005c21a7  83c418               add esp, 0x18
// 005c21aa  c3                   ret 
// 005c21ab  8b0d74be8a00         mov ecx, dword ptr [0x8abe74]
// 005c21b1  51                   push ecx
// 005c21b2  6a01                 push 1
// 005c21b4  56                   push esi
// 005c21b5  e886d0ffff           call 0x5bf240
// 005c21ba  d900                 fld dword ptr [eax]
// 005c21bc  8bcc                 mov ecx, esp
// 005c21be  d919                 fstp dword ptr [ecx]
// 005c21c0  8d542420             lea edx, [esp + 0x20]
// 005c21c4  d94004               fld dword ptr [eax + 4]
// 005c21c7  52                   push edx
// 005c21c8  d95904               fstp dword ptr [ecx + 4]
// 005c21cb  d94008               fld dword ptr [eax + 8]
// 005c21ce  d95908               fstp dword ptr [ecx + 8]
// 005c21d1  e81a4afcff           call 0x586bf0
// 005c21d6  8b00                 mov eax, dword ptr [eax]
// 005c21d8  50                   push eax
// 005c21d9  56                   push esi
// 005c21da  e8e126f7ff           call 0x5348c0
// 005c21df  83c418               add esp, 0x18
// 005c21e2  5f                   pop edi
// 005c21e3  5e                   pop esi
// 005c21e4  5d                   pop ebp
// 005c21e5  b801000000           mov eax, 1
// 005c21ea  5b                   pop ebx
// 005c21eb  83c418               add esp, 0x18
// 005c21ee  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
