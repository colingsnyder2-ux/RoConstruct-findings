// roc 2008-06 0061caf0  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061caf0
//
// 0061caf0  83ec14               sub esp, 0x14
// 0061caf3  55                   push ebp
// 0061caf4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0061caf8  55                   push ebp
// 0061caf9  e81251ffff           call 0x611c10
// 0061cafe  83c404               add esp, 4
// 0061cb01  89442404             mov dword ptr [esp + 4], eax
// 0061cb05  83f803               cmp eax, 3
// 0061cb08  c744240803000000     mov dword ptr [esp + 8], 3
// 0061cb10  8d442404             lea eax, [esp + 4]
// 0061cb14  7c04                 jl 0x61cb1a
// 0061cb16  8d442408             lea eax, [esp + 8]
// 0061cb1a  53                   push ebx
// 0061cb1b  8b18                 mov ebx, dword ptr [eax]
// 0061cb1d  56                   push esi
// 0061cb1e  33f6                 xor esi, esi
// 0061cb20  57                   push edi
// 0061cb21  85db                 test ebx, ebx
// 0061cb23  7e17                 jle 0x61cb3c
// 0061cb25  8d7e01               lea edi, [esi + 1]
// 0061cb28  57                   push edi
// 0061cb29  55                   push ebp
// 0061cb2a  e801fdffff           call 0x61c830
// 0061cb2f  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 0061cb33  8bf7                 mov esi, edi
// 0061cb35  83c408               add esp, 8
// 0061cb38  3bf3                 cmp esi, ebx
// 0061cb3a  7ce9                 jl 0x61cb25
// 0061cb3c  83fb03               cmp ebx, 3
// 0061cb3f  7d0f                 jge 0x61cb50
// 0061cb41  b903000000           mov ecx, 3
// 0061cb46  2bcb                 sub ecx, ebx
// 0061cb48  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 0061cb4c  33c0                 xor eax, eax
// 0061cb4e  f3ab                 rep stosd dword ptr es:[edi], eax
// 0061cb50  6a0c                 push 0xc
// 0061cb52  55                   push ebp
// 0061cb53  e8e860ffff           call 0x612c40
// 0061cb58  83c408               add esp, 8
// 0061cb5b  5f                   pop edi
// 0061cb5c  5e                   pop esi
// 0061cb5d  5b                   pop ebx
// 0061cb5e  85c0                 test eax, eax
// 0061cb60  7414                 je 0x61cb76
// 0061cb62  d944240c             fld dword ptr [esp + 0xc]
// 0061cb66  d918                 fstp dword ptr [eax]
// 0061cb68  d9442410             fld dword ptr [esp + 0x10]
// 0061cb6c  d95804               fstp dword ptr [eax + 4]
// 0061cb6f  d9442414             fld dword ptr [esp + 0x14]
// 0061cb73  d95808               fstp dword ptr [eax + 8]
// 0061cb76  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 0061cb7b  50                   push eax
// 0061cb7c  68f0d8ffff           push 0xffffd8f0
// 0061cb81  55                   push ebp
// 0061cb82  e80959ffff           call 0x612490
// 0061cb87  6afe                 push -2
// 0061cb89  55                   push ebp
// 0061cb8a  e8615cffff           call 0x6127f0
// 0061cb8f  83c414               add esp, 0x14
// 0061cb92  b801000000           mov eax, 1
// 0061cb97  5d                   pop ebp
// 0061cb98  83c414               add esp, 0x14
// 0061cb9b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
