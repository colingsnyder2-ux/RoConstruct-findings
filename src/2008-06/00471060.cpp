// roc 2008-06 00471060  unit: RBX::LDraw2Lua::LuaWriter  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00471060
//
// 00471060  8b442404             mov eax, dword ptr [esp + 4]
// 00471064  50                   push eax
// 00471065  b9b0369300           mov ecx, 0x9336b0
// 0047106a  e891f5ffff           call 0x470600
// 0047106f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000021@ns_ROCX000021@@YAXH@Z)

namespace ns_ROCX000021 {
struct LuaWriter {
    void writeString(int arg);
};

extern LuaWriter g_luaWriter;

void fn_ROCX000021(int arg)
{
    g_luaWriter.writeString(arg);
}
}
