// roc 2009-06 004707d0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004707d0
//
// 004707d0  8b442404             mov eax, dword ptr [esp + 4]
// 004707d4  50                   push eax
// 004707d5  e886ffffff           call 0x470760
// 004707da  85c0                 test eax, eax
// 004707dc  7406                 je 0x4707e4
// 004707de  8b4008               mov eax, dword ptr [eax + 8]
// 004707e1  c20400               ret 4
// 004707e4  b801000000           mov eax, 1
// 004707e9  c20400               ret 4
// copied from an identical function in another client (function ?lookup@LDraw2RobloxColorMap@ns_ROCX00000c@@QAEHH@Z)

namespace ns_ROCX00000c {
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
