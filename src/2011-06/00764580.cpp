// roc 2011-06 00764580  unit: seg_00760000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764580
//
// 00764580  56                   push esi
// 00764581  8b742408             mov esi, dword ptr [esp + 8]
// 00764585  6a00                 push 0
// 00764587  6a00                 push 0
// 00764589  56                   push esi
// 0076458a  e801e7ffff           call 0x762c90
// 0076458f  6aff                 push -1
// 00764591  56                   push esi
// 00764592  e889dfffff           call 0x762520
// 00764597  6afe                 push -2
// 00764599  56                   push esi
// 0076459a  e8a1e9ffff           call 0x762f40
// 0076459f  6a06                 push 6
// 007645a1  684466ab00           push 0xab6644
// 007645a6  56                   push esi
// 007645a7  e8b4e3ffff           call 0x762960
// 007645ac  8b442434             mov eax, dword ptr [esp + 0x34]
// 007645b0  50                   push eax
// 007645b1  56                   push esi
// 007645b2  e8e9e3ffff           call 0x7629a0
// 007645b7  6afd                 push -3
// 007645b9  56                   push esi
// 007645ba  e801e8ffff           call 0x762dc0
// 007645bf  83c438               add esp, 0x38
// 007645c2  5e                   pop esi
// 007645c3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
