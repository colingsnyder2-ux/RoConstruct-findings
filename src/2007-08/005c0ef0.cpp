// from server: 100% by colin
// roc 2007-08 005c0ef0  unit: RBX::Lua::LuaArguments  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c0ef0
//
// 005c0ef0  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005c0ef3  8b442408             mov eax, dword ptr [esp + 8]
// 005c0ef7  03542404             add edx, dword ptr [esp + 4]
// 005c0efb  50                   push eax
// 005c0efc  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005c0eff  52                   push edx
// 005c0f00  50                   push eax
// 005c0f01  e86a91f7ff           call 0x53a070
// 005c0f06  83c40c               add esp, 0xc
// 005c0f09  c20800               ret 8

struct LuaArguments {
    char pad[12];
    int offset;
    void* L;
    void pushArray(int a, int b);
};

extern "C" void __cdecl sub_53a070(void* L, int index, int count);

void LuaArguments::pushArray(int a, int b)
{
    sub_53a070(L, offset + a, b);
}
