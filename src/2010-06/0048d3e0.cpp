// roc 2010-06 0048d3e0  unit: G3D::Win32Window  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048d3e0
//
// 0048d3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0048d3e4  50                   push eax
// 0048d3e5  b9d070b800           mov ecx, 0xb870d0
// 0048d3ea  e891f5ffff           call 0x48c980
// 0048d3ef  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000013@ns_ROCX000013@@YAXH@Z)

namespace ns_ROCX000013 {
struct LuaWriter {
    void writeString(int arg);
};

extern LuaWriter g_luaWriter;

void fn_ROCX000013(int arg)
{
    g_luaWriter.writeString(arg);
}
}
