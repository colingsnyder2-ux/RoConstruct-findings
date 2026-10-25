// from server: 100% by king_originala
// roc 2008-06 005a9e00  unit: RBX::VScriptContext::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9e00
//
// 005a9e00  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005a9e05  56                   push esi
// 005a9e06  8b742408             mov esi, dword ptr [esp + 8]
// 005a9e0a  50                   push eax
// 005a9e0b  6a01                 push 1
// 005a9e0d  56                   push esi
// 005a9e0e  e89d770600           call 0x6115b0
// 005a9e13  6870438300           push 0x834370
// 005a9e18  56                   push esi
// 005a9e19  e862840600           call 0x612280
// 005a9e1e  83c414               add esp, 0x14
// 005a9e21  b801000000           mov eax, 1
// 005a9e26  5e                   pop esi
// 005a9e27  c3                   ret 

struct lua_State;

extern "C" void* __cdecl check_value(lua_State*, int, const char*);
extern "C" void __cdecl push_string(lua_State*, const char*);

int __cdecl on_tostring(lua_State* state)
{
    check_value(state, 1, *reinterpret_cast<const char**>(0x0095b1d4));
    push_string(state, reinterpret_cast<const char*>(0x00834370));
    return 1;
}
