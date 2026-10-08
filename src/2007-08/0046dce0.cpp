// from server: 100% by colin
// roc 2007-08 0046dce0  unit: RBX::LDraw2Lua::LuaWriter  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046dce0
//
// 0046dce0  8b442404             mov eax, dword ptr [esp + 4]
// 0046dce4  50                   push eax
// 0046dce5  b93cac8800           mov ecx, 0x88ac3c
// 0046dcea  e841f5ffff           call 0x46d230
// 0046dcef  c3                   ret 

struct LuaWriter {
    void writeString(int arg);
};

extern LuaWriter g_luaWriter;

void func_0046dce0(int arg)
{
    g_luaWriter.writeString(arg);
}
