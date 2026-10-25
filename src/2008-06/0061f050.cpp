// from server: 100% by atomic.potato
// roc 2008-06 0061f050  unit: RBX::Lua::LuaArguments  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f050
//
// 0061f050  56                   push esi
// 0061f051  8b742408             mov esi, dword ptr [esp + 8]
// 0061f055  6890458400           push 0x844590
// 0061f05a  56                   push esi
// 0061f05b  e82032ffff           call 0x612280
// 0061f060  685cbf9700           push 0x97bf5c
// 0061f065  56                   push esi
// 0061f066  e825aaf8ff           call 0x5a9a90
// 0061f06b  68eed8ffff           push 0xffffd8ee
// 0061f070  56                   push esi
// 0061f071  e80a36ffff           call 0x612680
// 0061f076  83c418               add esp, 0x18
// 0061f079  5e                   pop esi
// 0061f07a  c3                   ret 

struct LuaState;

extern "C" void __cdecl sub_00612280(LuaState* state, int value);
extern "C" void __cdecl sub_005a9a90(LuaState* state, const char* name);
extern "C" void __cdecl sub_00612680(LuaState* state, int value);

void __cdecl sub_0061f050(LuaState* state)
{
    sub_00612280(state, 0x844590);
    sub_005a9a90(state, (const char*)0x97bf5c);
    sub_00612680(state, -0x2712);
}
