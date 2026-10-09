// roc 2008-06 0046d080  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046d080
//
// 0046d080  8b442404             mov eax, dword ptr [esp + 4]
// 0046d084  50                   push eax
// 0046d085  e886ffffff           call 0x46d010
// 0046d08a  85c0                 test eax, eax
// 0046d08c  7406                 je 0x46d094
// 0046d08e  8b4008               mov eax, dword ptr [eax + 8]
// 0046d091  c20400               ret 4
// 0046d094  b801000000           mov eax, 1
// 0046d099  c20400               ret 4
// copied from an identical function in another client (function ?lookup@LDraw2RobloxColorMap@ns_ROCX000015@@QAEHH@Z)

namespace ns_ROCX000015 {
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
