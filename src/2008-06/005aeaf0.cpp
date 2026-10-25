// from server: 100% by king_originala
// roc 2008-06 005aeaf0  unit: RBX::ScriptContext  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aeaf0
//
// 005aeaf0  56                   push esi
// 005aeaf1  8b742408             mov esi, dword ptr [esp + 8]
// 005aeaf5  6a54                 push 0x54
// 005aeaf7  56                   push esi
// 005aeaf8  e813390600           call 0x612410
// 005aeafd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005aeb01  50                   push eax
// 005aeb02  56                   push esi
// 005aeb03  e818370600           call 0x612220
// 005aeb08  68eed8ffff           push 0xffffd8ee
// 005aeb0d  56                   push esi
// 005aeb0e  e86d3b0600           call 0x612680
// 005aeb13  83c418               add esp, 0x18
// 005aeb16  e8c590e5ff           call 0x407be0
// 005aeb1b  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 005aeb22  7425                 je 0x5aeb49
// 005aeb24  6a00                 push 0
// 005aeb26  68804f6200           push 0x624f80
// 005aeb2b  56                   push esi
// 005aeb2c  e81f380600           call 0x612350
// 005aeb31  6860488300           push 0x834860
// 005aeb36  56                   push esi
// 005aeb37  e844370600           call 0x612280
// 005aeb3c  6a00                 push 0
// 005aeb3e  6a01                 push 1
// 005aeb40  56                   push esi
// 005aeb41  e8da3d0600           call 0x612920
// 005aeb46  83c420               add esp, 0x20
// 005aeb49  6854488300           push 0x834854
// 005aeb4e  56                   push esi
// 005aeb4f  e82c370600           call 0x612280
// 005aeb54  6a00                 push 0
// 005aeb56  6860dc5a00           push 0x5adc60
// 005aeb5b  56                   push esi
// 005aeb5c  e8ef370600           call 0x612350
// 005aeb61  68eed8ffff           push 0xffffd8ee
// 005aeb66  56                   push esi
// 005aeb67  e8143b0600           call 0x612680
// 005aeb6c  83c41c               add esp, 0x1c
// 005aeb6f  5e                   pop esi
// 005aeb70  c3                   ret 

struct lua_State;
typedef int (__cdecl *lua_CFunction)(lua_State *);

extern "C" {
void __cdecl lua_pushboolean(lua_State *, int);
void __cdecl lua_pushinteger(lua_State *, int);
void __cdecl lua_pushstring(lua_State *, const char *);
void __cdecl lua_pushcclosure(lua_State *, lua_CFunction, int);
void __cdecl lua_settable(lua_State *, int);
void __cdecl lua_call(lua_State *, int, int);
char * __cdecl getSettings();
int __cdecl callback_624f80(lua_State *);
int __cdecl callback_5adc60(lua_State *);
}

extern const char string_834860[];
extern const char string_834854[];

void __cdecl initialize(lua_State *state, int value)
{
    lua_pushboolean(state, 84);
    lua_pushinteger(state, value);
    lua_settable(state, -10002);

    if (getSettings()[0x131] != 0) {
        lua_pushcclosure(state, callback_624f80, 0);
        lua_pushstring(state, string_834860);
        lua_call(state, 1, 0);
    }

    lua_pushstring(state, string_834854);
    lua_pushcclosure(state, callback_5adc60, 0);
    lua_settable(state, -10002);
}
