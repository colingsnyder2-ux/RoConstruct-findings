// roc 2007-03 005bc6e0  unit: seg_005b0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bc6e0
//
// 005bc6e0  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bc6e3  8b442408             mov eax, dword ptr [esp + 8]
// 005bc6e7  03542404             add edx, dword ptr [esp + 4]
// 005bc6eb  50                   push eax
// 005bc6ec  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005bc6ef  52                   push edx
// 005bc6f0  50                   push eax
// 005bc6f1  e84af4f7ff           call 0x53bb40
// 005bc6f6  83c40c               add esp, 0xc
// 005bc6f9  c20800               ret 8
// copied from an identical function in another client (function ?pushArray@LuaArguments@ns_ROCX000001@@QAEXHH@Z)

namespace ns_ROCX000001 {
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
}
