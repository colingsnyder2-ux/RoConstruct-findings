// roc 2009-12 004d3f20  unit: G3D::TextureManager::TextureArgs  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3f20
//
// 004d3f20  8b442404             mov eax, dword ptr [esp + 4]
// 004d3f24  50                   push eax
// 004d3f25  b93410b100           mov ecx, 0xb11034
// 004d3f2a  e891f5ffff           call 0x4d34c0
// 004d3f2f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000017@ns_ROCX000017@@YAXH@Z)

namespace ns_ROCX000017 {
struct LuaWriter {
    void writeString(int arg);
};

extern LuaWriter g_luaWriter;

void fn_ROCX000017(int arg)
{
    g_luaWriter.writeString(arg);
}
}
