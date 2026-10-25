// from server: 100% by king_originala
// roc 2008-06 005a9b30  unit: RBX::VScriptContext::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9b30
//
// 005a9b30  56                   push esi
// 005a9b31  8b742408             mov esi, dword ptr [esp + 8]
// 005a9b35  57                   push edi
// 005a9b36  56                   push esi
// 005a9b37  e8d4800600           call 0x611c10
// 005a9b3c  68309b5a00           push 0x5a9b30
// 005a9b41  56                   push esi
// 005a9b42  e8c9880600           call 0x612410
// 005a9b47  68f0d8ffff           push 0xffffd8f0
// 005a9b4c  56                   push esi
// 005a9b4d  e89e890600           call 0x6124f0
// 005a9b52  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a9b56  57                   push edi
// 005a9b57  56                   push esi
// 005a9b58  e8b3880600           call 0x612410
// 005a9b5d  6afe                 push -2
// 005a9b5f  56                   push esi
// 005a9b60  e88b890600           call 0x6124f0
// 005a9b65  6aff                 push -1
// 005a9b67  56                   push esi
// 005a9b68  e893820600           call 0x611e00
// 005a9b6d  83c42c               add esp, 0x2c
// 005a9b70  85c0                 test eax, eax
// 005a9b72  754c                 jne 0x5a9bc0
// 005a9b74  6afe                 push -2
// 005a9b76  56                   push esi
// 005a9b77  e8a4800600           call 0x611c20
// 005a9b7c  6a04                 push 4
// 005a9b7e  56                   push esi
// 005a9b7f  e8bc900600           call 0x612c40
// 005a9b84  83c410               add esp, 0x10
// 005a9b87  85c0                 test eax, eax
// 005a9b89  7402                 je 0x5a9b8d
// 005a9b8b  8938                 mov dword ptr [eax], edi
// 005a9b8d  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005a9b92  50                   push eax
// 005a9b93  68f0d8ffff           push 0xffffd8f0
// 005a9b98  56                   push esi
// 005a9b99  e8f2880600           call 0x612490
// 005a9b9e  6afe                 push -2
// 005a9ba0  56                   push esi
// 005a9ba1  e84a8c0600           call 0x6127f0
// 005a9ba6  57                   push edi
// 005a9ba7  56                   push esi
// 005a9ba8  e863880600           call 0x612410
// 005a9bad  6afe                 push -2
// 005a9baf  56                   push esi
// 005a9bb0  e81b820600           call 0x611dd0
// 005a9bb5  6afc                 push -4
// 005a9bb7  56                   push esi
// 005a9bb8  e8538b0600           call 0x612710
// 005a9bbd  83c42c               add esp, 0x2c
// 005a9bc0  6afe                 push -2
// 005a9bc2  56                   push esi
// 005a9bc3  e8a8800600           call 0x611c70
// 005a9bc8  83c408               add esp, 8
// 005a9bcb  5f                   pop edi
// 005a9bcc  5e                   pop esi
// 005a9bcd  c3                   ret 

struct lua_State;

extern "C" {
int __cdecl lua_gettop(lua_State*);
void __cdecl lua_settop(lua_State*, int);
void __cdecl lua_remove(lua_State*, int);
void __cdecl lua_pushvalue(lua_State*, int);
int __cdecl query_value(lua_State*, int);
void __cdecl lua_pushlightuserdata(lua_State*, void*);
void __cdecl lua_getfield(lua_State*, int, const char*);
void __cdecl lua_rawget(lua_State*, int);
void __cdecl lua_rawset(lua_State*, int);
void __cdecl lua_setmetatable(lua_State*, int);
void* __cdecl lua_newuserdata(lua_State*, unsigned int);
}

extern const char* metatable_name;

void __cdecl push_object(lua_State* state, void* object)
{
    lua_gettop(state);
    lua_pushlightuserdata(state, reinterpret_cast<void*>(&push_object));
    lua_rawget(state, -10000);
    lua_pushlightuserdata(state, object);
    lua_rawget(state, -2);

    if (!query_value(state, -1)) {
        lua_settop(state, -2);
        void** storage = static_cast<void**>(lua_newuserdata(state, 4));
        if (storage)
            *storage = object;

        lua_getfield(state, -10000, metatable_name);
        lua_setmetatable(state, -2);
        lua_pushlightuserdata(state, object);
        lua_pushvalue(state, -2);
        lua_rawset(state, -4);
    }

    lua_remove(state, -2);
}
