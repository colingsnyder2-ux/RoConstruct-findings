// roc 2009-12 0047ae40  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047ae40
//
// 0047ae40  8b442404             mov eax, dword ptr [esp + 4]
// 0047ae44  50                   push eax
// 0047ae45  e886ffffff           call 0x47add0
// 0047ae4a  85c0                 test eax, eax
// 0047ae4c  7406                 je 0x47ae54
// 0047ae4e  8b4008               mov eax, dword ptr [eax + 8]
// 0047ae51  c20400               ret 4
// 0047ae54  b801000000           mov eax, 1
// 0047ae59  c20400               ret 4
// copied from an identical function in another client (function ?lookup@LDraw2RobloxColorMap@ns_ROCX00000a@@QAEHH@Z)

namespace ns_ROCX00000a {
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
