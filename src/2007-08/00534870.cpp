// roc 2007-08 00534870  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534870
//
// 00534870  56                   push esi
// 00534871  57                   push edi
// 00534872  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00534876  6a0c                 push 0xc
// 00534878  57                   push edi
// 00534879  e8329d0800           call 0x5be5b0
// 0053487e  8bf0                 mov esi, eax
// 00534880  83c408               add esp, 8
// 00534883  85f6                 test esi, esi
// 00534885  7414                 je 0x53489b
// 00534887  d9442410             fld dword ptr [esp + 0x10]
// 0053488b  d91e                 fstp dword ptr [esi]
// 0053488d  d9442414             fld dword ptr [esp + 0x14]
// 00534891  d95e04               fstp dword ptr [esi + 4]
// 00534894  d9442418             fld dword ptr [esp + 0x18]
// 00534898  d95e08               fstp dword ptr [esi + 8]
// 0053489b  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005348a0  50                   push eax
// 005348a1  68f0d8ffff           push 0xffffd8f0
// 005348a6  57                   push edi
// 005348a7  e854950800           call 0x5bde00
// 005348ac  6afe                 push -2
// 005348ae  57                   push edi
// 005348af  e8ac980800           call 0x5be160
// 005348b4  83c414               add esp, 0x14
// 005348b7  5f                   pop edi
// 005348b8  8bc6                 mov eax, esi
// 005348ba  5e                   pop esi
// 005348bb  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
