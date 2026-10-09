// roc 2007-03 00469380  unit: seg_00460000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00469380
//
// 00469380  8b442404             mov eax, dword ptr [esp + 4]
// 00469384  50                   push eax
// 00469385  e896ffffff           call 0x469320
// 0046938a  85c0                 test eax, eax
// 0046938c  7406                 je 0x469394
// 0046938e  8b4008               mov eax, dword ptr [eax + 8]
// 00469391  c20400               ret 4
// 00469394  b801000000           mov eax, 1
// 00469399  c20400               ret 4
// copied from an identical function in another client (function ?lookup@LDraw2RobloxColorMap@ns_ROCX00000d@@QAEHH@Z)

namespace ns_ROCX00000d {
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
