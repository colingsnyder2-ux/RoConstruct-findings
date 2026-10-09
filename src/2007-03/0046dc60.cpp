// roc 2007-03 0046dc60  unit: seg_00460000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046dc60
//
// 0046dc60  8b442404             mov eax, dword ptr [esp + 4]
// 0046dc64  50                   push eax
// 0046dc65  b9849c8800           mov ecx, 0x889c84
// 0046dc6a  e851f5ffff           call 0x46d1c0
// 0046dc6f  c3                   ret 
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
