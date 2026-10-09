// roc 2009-06 004a7350  unit: G3D::TextureManager::TextureArgs  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a7350
//
// 004a7350  8b442404             mov eax, dword ptr [esp + 4]
// 004a7354  50                   push eax
// 004a7355  b944ae9e00           mov ecx, 0x9eae44
// 004a735a  e891f5ffff           call 0x4a68f0
// 004a735f  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000009@ns_ROCX000009@@YAXH@Z)

namespace ns_ROCX000009 {
struct LuaWriter {
    void writeString(int arg);
};

extern LuaWriter g_luaWriter;

void fn_ROCX000009(int arg)
{
    g_luaWriter.writeString(arg);
}
}
