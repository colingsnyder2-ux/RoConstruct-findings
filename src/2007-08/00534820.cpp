// roc 2007-08 00534820  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534820
//
// 00534820  56                   push esi
// 00534821  57                   push edi
// 00534822  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00534826  6a0c                 push 0xc
// 00534828  57                   push edi
// 00534829  e8829d0800           call 0x5be5b0
// 0053482e  8bf0                 mov esi, eax
// 00534830  83c408               add esp, 8
// 00534833  85f6                 test esi, esi
// 00534835  7414                 je 0x53484b
// 00534837  d9442410             fld dword ptr [esp + 0x10]
// 0053483b  d91e                 fstp dword ptr [esi]
// 0053483d  d9442414             fld dword ptr [esp + 0x14]
// 00534841  d95e04               fstp dword ptr [esi + 4]
// 00534844  d9442418             fld dword ptr [esp + 0x18]
// 00534848  d95e08               fstp dword ptr [esi + 8]
// 0053484b  a178be8a00           mov eax, dword ptr [0x8abe78]
// 00534850  50                   push eax
// 00534851  68f0d8ffff           push 0xffffd8f0
// 00534856  57                   push edi
// 00534857  e8a4950800           call 0x5bde00
// 0053485c  6afe                 push -2
// 0053485e  57                   push edi
// 0053485f  e8fc980800           call 0x5be160
// 00534864  83c414               add esp, 0x14
// 00534867  5f                   pop edi
// 00534868  8bc6                 mov eax, esi
// 0053486a  5e                   pop esi
// 0053486b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
