// roc 2009-06 006be740  unit: RBX::Lua::LuaArguments  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be740
//
// 006be740  83ec18               sub esp, 0x18
// 006be743  53                   push ebx
// 006be744  55                   push ebp
// 006be745  56                   push esi
// 006be746  8b742428             mov esi, dword ptr [esp + 0x28]
// 006be74a  57                   push edi
// 006be74b  56                   push esi
// 006be74c  e82fa6ffff           call 0x6b8d80
// 006be751  83c404               add esp, 4
// 006be754  89442410             mov dword ptr [esp + 0x10], eax
// 006be758  83f804               cmp eax, 4
// 006be75b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 006be763  8d442410             lea eax, [esp + 0x10]
// 006be767  7c04                 jl 0x6be76d
// 006be769  8d442414             lea eax, [esp + 0x14]
// 006be76d  8b28                 mov ebp, dword ptr [eax]
// 006be76f  85ed                 test ebp, ebp
// 006be771  0f85c9000000         jne 0x6be840
// 006be777  6a04                 push 4
// 006be779  56                   push esi
// 006be77a  e851b6ffff           call 0x6b9dd0
// 006be77f  83c408               add esp, 8
// 006be782  85c0                 test eax, eax
// 006be784  7406                 je 0x6be78c
// 006be786  c700c2000000         mov dword ptr [eax], 0xc2
// 006be78c  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be791  50                   push eax
// 006be792  68f0d8ffff           push 0xffffd8f0
// 006be797  56                   push esi
// 006be798  e833aeffff           call 0x6b95d0
// 006be79d  6afe                 push -2
// 006be79f  56                   push esi
// 006be7a0  e8bbb1ffff           call 0x6b9960
// 006be7a5  83c414               add esp, 0x14
// 006be7a8  d9ee                 fldz 
// 006be7aa  33ff                 xor edi, edi
// 006be7ac  d9542418             fst dword ptr [esp + 0x18]
// 006be7b0  d954241c             fst dword ptr [esp + 0x1c]
// 006be7b4  d95c2420             fstp dword ptr [esp + 0x20]
// 006be7b8  d9e8                 fld1 
// 006be7ba  d95c2424             fstp dword ptr [esp + 0x24]
// 006be7be  85ed                 test ebp, ebp
// 006be7c0  7e17                 jle 0x6be7d9
// 006be7c2  8d5f01               lea ebx, [edi + 1]
// 006be7c5  53                   push ebx
// 006be7c6  56                   push esi
// 006be7c7  e8e4edffff           call 0x6bd5b0
// 006be7cc  d95cbc20             fstp dword ptr [esp + edi*4 + 0x20]
// 006be7d0  8bfb                 mov edi, ebx
// 006be7d2  83c408               add esp, 8
// 006be7d5  3bfd                 cmp edi, ebp
// 006be7d7  7ce9                 jl 0x6be7c2
// 006be7d9  d9442418             fld dword ptr [esp + 0x18]
// 006be7dd  83ec10               sub esp, 0x10
// 006be7e0  8bc4                 mov eax, esp
// 006be7e2  d918                 fstp dword ptr [eax]
// 006be7e4  8d4c2424             lea ecx, [esp + 0x24]
// 006be7e8  d944242c             fld dword ptr [esp + 0x2c]
// 006be7ec  51                   push ecx
// 006be7ed  d95804               fstp dword ptr [eax + 4]
// 006be7f0  d9442434             fld dword ptr [esp + 0x34]
// 006be7f4  d95808               fstp dword ptr [eax + 8]
// 006be7f7  d9442438             fld dword ptr [esp + 0x38]
// 006be7fb  d9580c               fstp dword ptr [eax + 0xc]
// 006be7fe  e8cd40f8ff           call 0x6428d0
// 006be803  8b38                 mov edi, dword ptr [eax]
// 006be805  6a04                 push 4
// 006be807  56                   push esi
// 006be808  e8c3b5ffff           call 0x6b9dd0
// 006be80d  83c41c               add esp, 0x1c
// 006be810  85c0                 test eax, eax
// 006be812  7402                 je 0x6be816
// 006be814  8938                 mov dword ptr [eax], edi
// 006be816  8b15f82aa200         mov edx, dword ptr [0xa22af8]
// 006be81c  52                   push edx
// 006be81d  68f0d8ffff           push 0xffffd8f0
// 006be822  56                   push esi
// 006be823  e8a8adffff           call 0x6b95d0
// 006be828  6afe                 push -2
// 006be82a  56                   push esi
// 006be82b  e830b1ffff           call 0x6b9960
// 006be830  83c414               add esp, 0x14
// 006be833  b801000000           mov eax, 1
// 006be838  5f                   pop edi
// 006be839  5e                   pop esi
// 006be83a  5d                   pop ebp
// 006be83b  5b                   pop ebx
// 006be83c  83c418               add esp, 0x18
// 006be83f  c3                   ret 
// 006be840  83fd01               cmp ebp, 1
// 006be843  0f855fffffff         jne 0x6be7a8
// 006be849  55                   push ebp
// 006be84a  56                   push esi
// 006be84b  e890a7ffff           call 0x6b8fe0
// 006be850  83c408               add esp, 8
// 006be853  55                   push ebp
// 006be854  56                   push esi
// 006be855  85c0                 test eax, eax
// 006be857  7428                 je 0x6be881
// 006be859  e8b2a8ffff           call 0x6b9110
// 006be85e  83c408               add esp, 8
// 006be861  50                   push eax
// 006be862  8d4c2418             lea ecx, [esp + 0x18]
// 006be866  e8c541f8ff           call 0x642a30
// 006be86b  8b08                 mov ecx, dword ptr [eax]
// 006be86d  51                   push ecx
// 006be86e  56                   push esi
// 006be86f  e8ac4ff7ff           call 0x633820
// 006be874  83c408               add esp, 8
// 006be877  8bc5                 mov eax, ebp
// 006be879  5f                   pop edi
// 006be87a  5e                   pop esi
// 006be87b  5d                   pop ebp
// 006be87c  5b                   pop ebx
// 006be87d  83c418               add esp, 0x18
// 006be880  c3                   ret 
// 006be881  e89aa7ffff           call 0x6b9020
// 006be886  83c408               add esp, 8
// 006be889  85c0                 test eax, eax
// 006be88b  742e                 je 0x6be8bb
// 006be88d  6a00                 push 0
// 006be88f  6a01                 push 1
// 006be891  56                   push esi
// 006be892  e8e9a8ffff           call 0x6b9180
// 006be897  50                   push eax
// 006be898  8d542424             lea edx, [esp + 0x24]
// 006be89c  52                   push edx
// 006be89d  e89e3df8ff           call 0x642640
// 006be8a2  8b00                 mov eax, dword ptr [eax]
// 006be8a4  50                   push eax
// 006be8a5  56                   push esi
// 006be8a6  e8754ff7ff           call 0x633820
// 006be8ab  83c41c               add esp, 0x1c
// 006be8ae  b801000000           mov eax, 1
// 006be8b3  5f                   pop edi
// 006be8b4  5e                   pop esi
// 006be8b5  5d                   pop ebp
// 006be8b6  5b                   pop ebx
// 006be8b7  83c418               add esp, 0x18
// 006be8ba  c3                   ret 
// 006be8bb  8b0dec2aa200         mov ecx, dword ptr [0xa22aec]
// 006be8c1  51                   push ecx
// 006be8c2  6a01                 push 1
// 006be8c4  56                   push esi
// 006be8c5  e8e6c2ffff           call 0x6babb0
// 006be8ca  d900                 fld dword ptr [eax]
// 006be8cc  8bcc                 mov ecx, esp
// 006be8ce  d919                 fstp dword ptr [ecx]
// 006be8d0  8d542420             lea edx, [esp + 0x20]
// 006be8d4  d94004               fld dword ptr [eax + 4]
// 006be8d7  52                   push edx
// 006be8d8  d95904               fstp dword ptr [ecx + 4]
// 006be8db  d94008               fld dword ptr [eax + 8]
// 006be8de  d95908               fstp dword ptr [ecx + 8]
// 006be8e1  e8ba43f8ff           call 0x642ca0
// 006be8e6  8b00                 mov eax, dword ptr [eax]
// 006be8e8  50                   push eax
// 006be8e9  56                   push esi
// 006be8ea  e8314ff7ff           call 0x633820
// 006be8ef  83c418               add esp, 0x18
// 006be8f2  5f                   pop edi
// 006be8f3  5e                   pop esi
// 006be8f4  5d                   pop ebp
// 006be8f5  b801000000           mov eax, 1
// 006be8fa  5b                   pop ebx
// 006be8fb  83c418               add esp, 0x18
// 006be8fe  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
