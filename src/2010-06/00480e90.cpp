// roc 2010-06 00480e90  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480e90
//
// 00480e90  8b442404             mov eax, dword ptr [esp + 4]
// 00480e94  50                   push eax
// 00480e95  e886ffffff           call 0x480e20
// 00480e9a  85c0                 test eax, eax
// 00480e9c  7406                 je 0x480ea4
// 00480e9e  8b4008               mov eax, dword ptr [eax + 8]
// 00480ea1  c20400               ret 4
// 00480ea4  b801000000           mov eax, 1
// 00480ea9  c20400               ret 4
// copied from an identical function in another client (function ?lookup@LDraw2RobloxColorMap@ns_ROCX000006@@QAEHH@Z)

namespace ns_ROCX000006 {
extern "C" int* __stdcall sub_4697c0(int index);

struct LDraw2RobloxColorMap
{
    int lookup(int index);
};

int LDraw2RobloxColorMap::lookup(int index)
{
    int* p = sub_4697c0(index);
    if (p)
        return p[2];
    return 1;
}
}
