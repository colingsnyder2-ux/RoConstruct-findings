// roc 2007-08 005c1b60  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1b60
//
// 005c1b60  83ec14               sub esp, 0x14
// 005c1b63  55                   push ebp
// 005c1b64  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c1b68  55                   push ebp
// 005c1b69  e812baffff           call 0x5bd580
// 005c1b6e  83c404               add esp, 4
// 005c1b71  89442404             mov dword ptr [esp + 4], eax
// 005c1b75  83f803               cmp eax, 3
// 005c1b78  c744240803000000     mov dword ptr [esp + 8], 3
// 005c1b80  8d442404             lea eax, [esp + 4]
// 005c1b84  7c04                 jl 0x5c1b8a
// 005c1b86  8d442408             lea eax, [esp + 8]
// 005c1b8a  53                   push ebx
// 005c1b8b  8b18                 mov ebx, dword ptr [eax]
// 005c1b8d  56                   push esi
// 005c1b8e  33f6                 xor esi, esi
// 005c1b90  85db                 test ebx, ebx
// 005c1b92  57                   push edi
// 005c1b93  7e17                 jle 0x5c1bac
// 005c1b95  8d7e01               lea edi, [esi + 1]
// 005c1b98  57                   push edi
// 005c1b99  55                   push ebp
// 005c1b9a  e831bdffff           call 0x5bd8d0
// 005c1b9f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 005c1ba3  8bf7                 mov esi, edi
// 005c1ba5  83c408               add esp, 8
// 005c1ba8  3bf3                 cmp esi, ebx
// 005c1baa  7ce9                 jl 0x5c1b95
// 005c1bac  83fb03               cmp ebx, 3
// 005c1baf  7d0f                 jge 0x5c1bc0
// 005c1bb1  b903000000           mov ecx, 3
// 005c1bb6  2bcb                 sub ecx, ebx
// 005c1bb8  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 005c1bbc  33c0                 xor eax, eax
// 005c1bbe  f3ab                 rep stosd dword ptr es:[edi], eax
// 005c1bc0  6a0c                 push 0xc
// 005c1bc2  55                   push ebp
// 005c1bc3  e8e8c9ffff           call 0x5be5b0
// 005c1bc8  83c408               add esp, 8
// 005c1bcb  85c0                 test eax, eax
// 005c1bcd  5f                   pop edi
// 005c1bce  5e                   pop esi
// 005c1bcf  5b                   pop ebx
// 005c1bd0  7414                 je 0x5c1be6
// 005c1bd2  d944240c             fld dword ptr [esp + 0xc]
// 005c1bd6  d918                 fstp dword ptr [eax]
// 005c1bd8  d9442410             fld dword ptr [esp + 0x10]
// 005c1bdc  d95804               fstp dword ptr [eax + 4]
// 005c1bdf  d9442414             fld dword ptr [esp + 0x14]
// 005c1be3  d95808               fstp dword ptr [eax + 8]
// 005c1be6  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005c1beb  50                   push eax
// 005c1bec  68f0d8ffff           push 0xffffd8f0
// 005c1bf1  55                   push ebp
// 005c1bf2  e809c2ffff           call 0x5bde00
// 005c1bf7  6afe                 push -2
// 005c1bf9  55                   push ebp
// 005c1bfa  e861c5ffff           call 0x5be160
// 005c1bff  83c414               add esp, 0x14
// 005c1c02  b801000000           mov eax, 1
// 005c1c07  5d                   pop ebp
// 005c1c08  83c414               add esp, 0x14
// 005c1c0b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
