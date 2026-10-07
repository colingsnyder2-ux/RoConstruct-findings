// roc 2012-06 0083e2d0  unit: seg_00830000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083e2d0
//
// 0083e2d0  51                   push ecx
// 0083e2d1  56                   push esi
// 0083e2d2  8d442404             lea eax, [esp + 4]
// 0083e2d6  57                   push edi
// 0083e2d7  50                   push eax
// 0083e2d8  e86349f0ff           call 0x742c40
// 0083e2dd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083e2e1  8b30                 mov esi, dword ptr [eax]
// 0083e2e3  6a04                 push 4
// 0083e2e5  57                   push edi
// 0083e2e6  e85548ffff           call 0x832b40
// 0083e2eb  83c40c               add esp, 0xc
// 0083e2ee  85c0                 test eax, eax
// 0083e2f0  7402                 je 0x83e2f4
// 0083e2f2  8930                 mov dword ptr [eax], esi
// 0083e2f4  8b0dd013de00         mov ecx, dword ptr [0xde13d0]
// 0083e2fa  51                   push ecx
// 0083e2fb  68f0d8ffff           push 0xffffd8f0
// 0083e300  57                   push edi
// 0083e301  e83a40ffff           call 0x832340
// 0083e306  6afe                 push -2
// 0083e308  57                   push edi
// 0083e309  e8c243ffff           call 0x8326d0
// 0083e30e  83c414               add esp, 0x14
// 0083e311  5f                   pop edi
// 0083e312  b801000000           mov eax, 1
// 0083e317  5e                   pop esi
// 0083e318  59                   pop ecx
// 0083e319  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
