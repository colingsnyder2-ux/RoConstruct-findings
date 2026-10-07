// roc 2008-06 0061ce80  unit: RBX::Lua::LuaArguments  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ce80
//
// 0061ce80  83ec14               sub esp, 0x14
// 0061ce83  55                   push ebp
// 0061ce84  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0061ce88  55                   push ebp
// 0061ce89  e8824dffff           call 0x611c10
// 0061ce8e  83c404               add esp, 4
// 0061ce91  89442404             mov dword ptr [esp + 4], eax
// 0061ce95  83f803               cmp eax, 3
// 0061ce98  c744240803000000     mov dword ptr [esp + 8], 3
// 0061cea0  8d442404             lea eax, [esp + 4]
// 0061cea4  7c04                 jl 0x61ceaa
// 0061cea6  8d442408             lea eax, [esp + 8]
// 0061ceaa  53                   push ebx
// 0061ceab  8b18                 mov ebx, dword ptr [eax]
// 0061cead  56                   push esi
// 0061ceae  33f6                 xor esi, esi
// 0061ceb0  57                   push edi
// 0061ceb1  85db                 test ebx, ebx
// 0061ceb3  7e17                 jle 0x61cecc
// 0061ceb5  8d7e01               lea edi, [esi + 1]
// 0061ceb8  57                   push edi
// 0061ceb9  55                   push ebp
// 0061ceba  e871f9ffff           call 0x61c830
// 0061cebf  d95cb420             fstp dword ptr [esp + esi*4 + 0x20]
// 0061cec3  8bf7                 mov esi, edi
// 0061cec5  83c408               add esp, 8
// 0061cec8  3bf3                 cmp esi, ebx
// 0061ceca  7ce9                 jl 0x61ceb5
// 0061cecc  83fb03               cmp ebx, 3
// 0061cecf  7d0f                 jge 0x61cee0
// 0061ced1  b903000000           mov ecx, 3
// 0061ced6  2bcb                 sub ecx, ebx
// 0061ced8  8d7c9c18             lea edi, [esp + ebx*4 + 0x18]
// 0061cedc  33c0                 xor eax, eax
// 0061cede  f3ab                 rep stosd dword ptr es:[edi], eax
// 0061cee0  6a0c                 push 0xc
// 0061cee2  55                   push ebp
// 0061cee3  e8585dffff           call 0x612c40
// 0061cee8  83c408               add esp, 8
// 0061ceeb  5f                   pop edi
// 0061ceec  5e                   pop esi
// 0061ceed  5b                   pop ebx
// 0061ceee  85c0                 test eax, eax
// 0061cef0  7414                 je 0x61cf06
// 0061cef2  d944240c             fld dword ptr [esp + 0xc]
// 0061cef6  d918                 fstp dword ptr [eax]
// 0061cef8  d9442410             fld dword ptr [esp + 0x10]
// 0061cefc  d95804               fstp dword ptr [eax + 4]
// 0061ceff  d9442414             fld dword ptr [esp + 0x14]
// 0061cf03  d95808               fstp dword ptr [eax + 8]
// 0061cf06  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061cf0b  50                   push eax
// 0061cf0c  68f0d8ffff           push 0xffffd8f0
// 0061cf11  55                   push ebp
// 0061cf12  e87955ffff           call 0x612490
// 0061cf17  6afe                 push -2
// 0061cf19  55                   push ebp
// 0061cf1a  e8d158ffff           call 0x6127f0
// 0061cf1f  83c414               add esp, 0x14
// 0061cf22  b801000000           mov eax, 1
// 0061cf27  5d                   pop ebp
// 0061cf28  83c414               add esp, 0x14
// 0061cf2b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?newColor3@Color3Bridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
